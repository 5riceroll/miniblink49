/*
 * Copyright (c) 2008, 2009, Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "platform/FileMetadata.h"

#include "public/platform/Platform.h"
#include "public/platform/WebFileInfo.h"
#include "public/platform/WebFileUtilities.h"
#include "third_party/WebKit/Source/wtf/text/WTFStringUtil.h"

namespace blink {

bool getFileSize(const String& path, long long& result)
{
//     FileMetadata metadata;
//     if (!getFileMetadata(path, metadata))
//         return false;
//     result = metadata.length;
//     return true;

    if (path.isEmpty())
        return false;

    Vector<UChar> buffer = WTF::ensureUTF16UChar(path, true);
    OutputDebugStringA("getFileSize entry\n");

    HANDLE hFile = ::CreateFile(buffer.data(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (INVALID_HANDLE_VALUE == hFile) {
        OutputDebugStringA("getFileSize fail 1\n");
        hFile = ::CreateFile(buffer.data(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
            NULL, OPEN_EXISTING, FILE_FLAG_SEQUENTIAL_SCAN, NULL);
        if (INVALID_HANDLE_VALUE == hFile) {
            result = 0;
            return false;
        }
    }

    LARGE_INTEGER size;
    ::GetFileSizeEx(hFile, &size);
    result = size.QuadPart;
    ::CloseHandle(hFile);

    return true;
}

bool getFileModificationTime(const String& path, double& result)
{
    FileMetadata metadata;
    if (!getFileMetadata(path, metadata))
        return false;
    result = metadata.modificationTime;
    return true;
}

bool getFileMetadata(const String& path, FileMetadata& metadata)
{
    WebFileInfo webFileInfo;
    if (!Platform::current()->fileUtilities()->getFileInfo(path, webFileInfo))
        return false;
    metadata.modificationTime = webFileInfo.modificationTime;
    metadata.length = webFileInfo.length;
    metadata.type = static_cast<FileMetadata::Type>(webFileInfo.type);
    return true;
}

String directoryName(const String& path)
{
    return Platform::current()->fileUtilities()->directoryName(path);
}

KURL filePathToURL(const String& path)
{
    return Platform::current()->fileUtilities()->filePathToURL(path);
}

} // namespace blink
