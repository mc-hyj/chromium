// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8MediaStreamTrack.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8MediaStreamTrack.h"
#include "bindings/modules/v8/V8MediaStreamTrackSourcesCallback.h"
#include "bindings/modules/v8/V8MediaTrackConstraints.h"
#include "bindings/modules/v8/V8MediaTrackSettings.h"
#include "core/dom/Document.h"
#include "core/frame/Deprecation.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8MediaStreamTrack::wrapperTypeInfo = { gin::kEmbedderBlink, V8MediaStreamTrack::domTemplate, V8MediaStreamTrack::trace, V8MediaStreamTrack::traceWrappers, V8MediaStreamTrack::toActiveScriptWrappable, 0, V8MediaStreamTrack::preparePrototypeAndInterfaceObject, nullptr, "MediaStreamTrack", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaStreamTrack.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MediaStreamTrack::s_wrapperTypeInfo = V8MediaStreamTrack::wrapperTypeInfo;

namespace MediaStreamTrackV8Internal {

static void kindAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    v8SetReturnValueString(info, impl->kind(), info.GetIsolate());
}

static void kindAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::kindAttributeGetter(info);
}

static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    v8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::idAttributeGetter(info);
}

static void labelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    v8SetReturnValueString(info, impl->label(), info.GetIsolate());
}

static void labelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::labelAttributeGetter(info);
}

static void enabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    v8SetReturnValueBool(info, impl->enabled());
}

static void enabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::enabledAttributeGetter(info);
}

static void enabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "enabled", "MediaStreamTrack", holder, info.GetIsolate());
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setEnabled(cppValue);
}

static void enabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaStreamTrackV8Internal::enabledAttributeSetter(v8Value, info);
}

static void mutedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    v8SetReturnValueBool(info, impl->muted());
}

static void mutedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::mutedAttributeGetter(info);
}

static void remoteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    v8SetReturnValueBool(info, impl->remote());
}

static void remoteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MediaStreamTrackRemote);
    MediaStreamTrackV8Internal::remoteAttributeGetter(info);
}

static void readyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    v8SetReturnValueString(info, impl->readyState(), info.GetIsolate());
}

static void readyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::readyStateAttributeGetter(info);
}

static void onmuteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onmute()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmuteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::onmuteAttributeGetter(info);
}

static void onmuteAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onmute(), v8Value, V8MediaStreamTrack::eventListenerCacheIndex);
    impl->setOnmute(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onmuteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaStreamTrackV8Internal::onmuteAttributeSetter(v8Value, info);
}

static void onunmuteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onunmute()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onunmuteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::onunmuteAttributeGetter(info);
}

static void onunmuteAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onunmute(), v8Value, V8MediaStreamTrack::eventListenerCacheIndex);
    impl->setOnunmute(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onunmuteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaStreamTrackV8Internal::onunmuteAttributeSetter(v8Value, info);
}

static void onendedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onended()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onendedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::onendedAttributeGetter(info);
}

static void onendedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onended(), v8Value, V8MediaStreamTrack::eventListenerCacheIndex);
    impl->setOnended(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onendedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaStreamTrackV8Internal::onendedAttributeSetter(v8Value, info);
}

static void getSourcesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getSources", "MediaStreamTrack", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    MediaStreamTrackSourcesCallback* callback;
    {
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            exceptionState.throwTypeError("The callback provided as parameter 1 is not a function.");
            exceptionState.throwIfNeeded();
            return;
        }
        callback = V8MediaStreamTrackSourcesCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    MediaStreamTrack::getSources(executionContext, callback, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void getSourcesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MediaStreamTrackGetSources);
    MediaStreamTrackV8Internal::getSourcesMethod(info);
}

static void stopMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "stop", "MediaStreamTrack", info.Holder(), info.GetIsolate());
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(info.Holder());
    impl->stopTrack(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void stopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::stopMethod(info);
}

static void cloneMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(info.Holder());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    v8SetReturnValue(info, impl->clone(executionContext));
}

static void cloneMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::cloneMethod(info);
}

static void getConstraintsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(info.Holder());
    MediaTrackConstraints result;
    impl->getConstraints(result);
    v8SetReturnValue(info, result);
}

static void getConstraintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::getConstraintsMethod(info);
}

static void getSettingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrack* impl = V8MediaStreamTrack::toImpl(info.Holder());
    MediaTrackSettings result;
    impl->getSettings(result);
    v8SetReturnValue(info, result);
}

static void getSettingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStreamTrackV8Internal::getSettingsMethod(info);
}

} // namespace MediaStreamTrackV8Internal

const V8DOMConfiguration::AccessorConfiguration V8MediaStreamTrackAccessors[] = {
    {"kind", MediaStreamTrackV8Internal::kindAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"id", MediaStreamTrackV8Internal::idAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"label", MediaStreamTrackV8Internal::labelAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"enabled", MediaStreamTrackV8Internal::enabledAttributeGetterCallback, MediaStreamTrackV8Internal::enabledAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"muted", MediaStreamTrackV8Internal::mutedAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"remote", MediaStreamTrackV8Internal::remoteAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"readyState", MediaStreamTrackV8Internal::readyStateAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onmute", MediaStreamTrackV8Internal::onmuteAttributeGetterCallback, MediaStreamTrackV8Internal::onmuteAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onunmute", MediaStreamTrackV8Internal::onunmuteAttributeGetterCallback, MediaStreamTrackV8Internal::onunmuteAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onended", MediaStreamTrackV8Internal::onendedAttributeGetterCallback, MediaStreamTrackV8Internal::onendedAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8MediaStreamTrackMethods[] = {
    {"getSources", MediaStreamTrackV8Internal::getSourcesMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInterface},
    {"stop", MediaStreamTrackV8Internal::stopMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"clone", MediaStreamTrackV8Internal::cloneMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8MediaStreamTrackTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MediaStreamTrack::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8MediaStreamTrack::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MediaStreamTrackAccessors, WTF_ARRAY_LENGTH(V8MediaStreamTrackAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MediaStreamTrackMethods, WTF_ARRAY_LENGTH(V8MediaStreamTrackMethods));

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getConstraintsMethodConfiguration = {"getConstraints", MediaStreamTrackV8Internal::getConstraintsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, getConstraintsMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::mediaGetSettingsEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getSettingsMethodConfiguration = {"getSettings", MediaStreamTrackV8Internal::getSettingsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, getSettingsMethodConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8MediaStreamTrack::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MediaStreamTrackTemplate);
}

bool V8MediaStreamTrack::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MediaStreamTrack::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MediaStreamTrack* V8MediaStreamTrack::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ActiveScriptWrappable* V8MediaStreamTrack::toActiveScriptWrappable(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

} // namespace blink