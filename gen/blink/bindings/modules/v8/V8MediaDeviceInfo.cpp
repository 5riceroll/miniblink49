// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MediaDeviceInfo.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/inspector/ConsoleMessage.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8MediaDeviceInfo::wrapperTypeInfo = { gin::kEmbedderBlink, V8MediaDeviceInfo::domTemplate, V8MediaDeviceInfo::refObject, V8MediaDeviceInfo::derefObject, V8MediaDeviceInfo::trace, 0, 0, V8MediaDeviceInfo::preparePrototypeObject, V8MediaDeviceInfo::installConditionallyEnabledProperties, "MediaDeviceInfo", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaDeviceInfo.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MediaDeviceInfo::s_wrapperTypeInfo = V8MediaDeviceInfo::wrapperTypeInfo;

namespace MediaDeviceInfoV8Internal {

static void deviceIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaDeviceInfo* impl = V8MediaDeviceInfo::toImpl(holder);
    v8SetReturnValueString(info, impl->deviceId(), info.GetIsolate());
}

static void deviceIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaDeviceInfoV8Internal::deviceIdAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void kindAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaDeviceInfo* impl = V8MediaDeviceInfo::toImpl(holder);
    v8SetReturnValueString(info, impl->kind(), info.GetIsolate());
}

static void kindAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaDeviceInfoV8Internal::kindAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void labelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaDeviceInfo* impl = V8MediaDeviceInfo::toImpl(holder);
    v8SetReturnValueString(info, impl->label(), info.GetIsolate());
}

static void labelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaDeviceInfoV8Internal::labelAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void groupIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaDeviceInfo* impl = V8MediaDeviceInfo::toImpl(holder);
    v8SetReturnValueString(info, impl->groupId(), info.GetIsolate());
}

static void groupIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaDeviceInfoV8Internal::groupIdAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace MediaDeviceInfoV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8MediaDeviceInfoAccessors[] = {
    {"deviceId", MediaDeviceInfoV8Internal::deviceIdAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"kind", MediaDeviceInfoV8Internal::kindAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"label", MediaDeviceInfoV8Internal::labelAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"groupId", MediaDeviceInfoV8Internal::groupIdAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8MediaDeviceInfoTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "MediaDeviceInfo", v8::Local<v8::FunctionTemplate>(), V8MediaDeviceInfo::internalFieldCount,
        0, 0,
        V8MediaDeviceInfoAccessors, WTF_ARRAY_LENGTH(V8MediaDeviceInfoAccessors),
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8MediaDeviceInfo::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MediaDeviceInfoTemplate);
}

bool V8MediaDeviceInfo::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MediaDeviceInfo::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MediaDeviceInfo* V8MediaDeviceInfo::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8MediaDeviceInfo::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8MediaDeviceInfo::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
