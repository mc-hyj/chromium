// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8InspectorOverlayHost.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8InspectorOverlayHost::wrapperTypeInfo = { gin::kEmbedderBlink, V8InspectorOverlayHost::domTemplate, V8InspectorOverlayHost::trace, V8InspectorOverlayHost::traceWrappers, 0, 0, V8InspectorOverlayHost::preparePrototypeAndInterfaceObject, nullptr, "InspectorOverlayHost", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in InspectorOverlayHost.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& InspectorOverlayHost::s_wrapperTypeInfo = V8InspectorOverlayHost::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, InspectorOverlayHost>::value,
    "InspectorOverlayHost inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace InspectorOverlayHostV8Internal {

static void resumeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHost* impl = V8InspectorOverlayHost::toImpl(info.Holder());
    impl->resume();
}

static void resumeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHostV8Internal::resumeMethod(info);
}

static void stepOverMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHost* impl = V8InspectorOverlayHost::toImpl(info.Holder());
    impl->stepOver();
}

static void stepOverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHostV8Internal::stepOverMethod(info);
}

static void startPropertyChangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "startPropertyChange", "InspectorOverlayHost", 1, info.Length()));
        return;
    }
    InspectorOverlayHost* impl = V8InspectorOverlayHost::toImpl(info.Holder());
    V8StringResource<> propertyName;
    {
        propertyName = info[0];
        if (!propertyName.prepare())
            return;
    }
    impl->startPropertyChange(propertyName);
}

static void startPropertyChangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHostV8Internal::startPropertyChangeMethod(info);
}

static void changePropertyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "changeProperty", "InspectorOverlayHost", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    InspectorOverlayHost* impl = V8InspectorOverlayHost::toImpl(info.Holder());
    float cssDelta;
    {
        cssDelta = toRestrictedFloat(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->changeProperty(cssDelta);
}

static void changePropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHostV8Internal::changePropertyMethod(info);
}

static void endPropertyChangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHost* impl = V8InspectorOverlayHost::toImpl(info.Holder());
    impl->endPropertyChange();
}

static void endPropertyChangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHostV8Internal::endPropertyChangeMethod(info);
}

static void clearSelectionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clearSelection", "InspectorOverlayHost", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    InspectorOverlayHost* impl = V8InspectorOverlayHost::toImpl(info.Holder());
    bool commitChanges;
    {
        commitChanges = toBoolean(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->clearSelection(commitChanges);
}

static void clearSelectionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHostV8Internal::clearSelectionMethod(info);
}

static void nextSelectorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHost* impl = V8InspectorOverlayHost::toImpl(info.Holder());
    impl->nextSelector();
}

static void nextSelectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHostV8Internal::nextSelectorMethod(info);
}

static void previousSelectorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHost* impl = V8InspectorOverlayHost::toImpl(info.Holder());
    impl->previousSelector();
}

static void previousSelectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    InspectorOverlayHostV8Internal::previousSelectorMethod(info);
}

} // namespace InspectorOverlayHostV8Internal

const V8DOMConfiguration::MethodConfiguration V8InspectorOverlayHostMethods[] = {
    {"resume", InspectorOverlayHostV8Internal::resumeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"stepOver", InspectorOverlayHostV8Internal::stepOverMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"startPropertyChange", InspectorOverlayHostV8Internal::startPropertyChangeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"changeProperty", InspectorOverlayHostV8Internal::changePropertyMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"endPropertyChange", InspectorOverlayHostV8Internal::endPropertyChangeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"clearSelection", InspectorOverlayHostV8Internal::clearSelectionMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"nextSelector", InspectorOverlayHostV8Internal::nextSelectorMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"previousSelector", InspectorOverlayHostV8Internal::previousSelectorMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8InspectorOverlayHostTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8InspectorOverlayHost::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8InspectorOverlayHost::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8InspectorOverlayHostMethods, WTF_ARRAY_LENGTH(V8InspectorOverlayHostMethods));
}

v8::Local<v8::FunctionTemplate> V8InspectorOverlayHost::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8InspectorOverlayHostTemplate);
}

bool V8InspectorOverlayHost::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8InspectorOverlayHost::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

InspectorOverlayHost* V8InspectorOverlayHost::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink