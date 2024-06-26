// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8RTCIceCandidate.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8RTCIceCandidateInit.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8RTCIceCandidate::wrapperTypeInfo = { gin::kEmbedderBlink, V8RTCIceCandidate::domTemplate, V8RTCIceCandidate::refObject, V8RTCIceCandidate::derefObject, V8RTCIceCandidate::trace, 0, 0, V8RTCIceCandidate::preparePrototypeObject, V8RTCIceCandidate::installConditionallyEnabledProperties, "RTCIceCandidate", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RTCIceCandidate.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& RTCIceCandidate::s_wrapperTypeInfo = V8RTCIceCandidate::wrapperTypeInfo;

namespace RTCIceCandidateV8Internal {

static void candidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCIceCandidate* impl = V8RTCIceCandidate::toImpl(holder);
    v8SetReturnValueString(info, impl->candidate(), info.GetIsolate());
}

static void candidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCIceCandidateV8Internal::candidateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void candidateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCIceCandidate* impl = V8RTCIceCandidate::toImpl(holder);
    V8StringResource<TreatNullAsNullString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setCandidate(cppValue);
}

static void candidateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    RTCIceCandidateV8Internal::candidateAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void sdpMidAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCIceCandidate* impl = V8RTCIceCandidate::toImpl(holder);
    v8SetReturnValueString(info, impl->sdpMid(), info.GetIsolate());
}

static void sdpMidAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCIceCandidateV8Internal::sdpMidAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void sdpMidAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCIceCandidate* impl = V8RTCIceCandidate::toImpl(holder);
    V8StringResource<TreatNullAsNullString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setSdpMid(cppValue);
}

static void sdpMidAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    RTCIceCandidateV8Internal::sdpMidAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void sdpMLineIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCIceCandidate* impl = V8RTCIceCandidate::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->sdpMLineIndex());
}

static void sdpMLineIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCIceCandidateV8Internal::sdpMLineIndexAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void sdpMLineIndexAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "sdpMLineIndex", "RTCIceCandidate", holder, info.GetIsolate());
    RTCIceCandidate* impl = V8RTCIceCandidate::toImpl(holder);
    unsigned cppValue = toUInt16(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setSdpMLineIndex(cppValue);
}

static void sdpMLineIndexAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    RTCIceCandidateV8Internal::sdpMLineIndexAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void toJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    RTCIceCandidate* impl = V8RTCIceCandidate::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptValue result = impl->toJSONForBinding(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void toJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RTCIceCandidateV8Internal::toJSONMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "RTCIceCandidate", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    RTCIceCandidateInit candidateInitDict;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('candidateInitDict') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8RTCIceCandidateInit::toImpl(info.GetIsolate(), info[0], candidateInitDict, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RawPtr<RTCIceCandidate> impl = RTCIceCandidate::create(candidateInitDict, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8RTCIceCandidate::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace RTCIceCandidateV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8RTCIceCandidateAccessors[] = {
    {"candidate", RTCIceCandidateV8Internal::candidateAttributeGetterCallback, RTCIceCandidateV8Internal::candidateAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"sdpMid", RTCIceCandidateV8Internal::sdpMidAttributeGetterCallback, RTCIceCandidateV8Internal::sdpMidAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"sdpMLineIndex", RTCIceCandidateV8Internal::sdpMLineIndexAttributeGetterCallback, RTCIceCandidateV8Internal::sdpMLineIndexAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8RTCIceCandidateMethods[] = {
    {"toJSON", RTCIceCandidateV8Internal::toJSONMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8RTCIceCandidate::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("RTCIceCandidate"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    RTCIceCandidateV8Internal::constructor(info);
}

static void installV8RTCIceCandidateTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "RTCIceCandidate", v8::Local<v8::FunctionTemplate>(), V8RTCIceCandidate::internalFieldCount,
        0, 0,
        V8RTCIceCandidateAccessors, WTF_ARRAY_LENGTH(V8RTCIceCandidateAccessors),
        V8RTCIceCandidateMethods, WTF_ARRAY_LENGTH(V8RTCIceCandidateMethods));
    functionTemplate->SetCallHandler(V8RTCIceCandidate::constructorCallback);
    functionTemplate->SetLength(1);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8RTCIceCandidate::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8RTCIceCandidateTemplate);
}

bool V8RTCIceCandidate::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8RTCIceCandidate::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

RTCIceCandidate* V8RTCIceCandidate::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8RTCIceCandidate::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8RTCIceCandidate::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
