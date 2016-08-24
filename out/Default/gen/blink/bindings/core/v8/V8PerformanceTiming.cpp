// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8PerformanceTiming.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
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
const WrapperTypeInfo V8PerformanceTiming::wrapperTypeInfo = { gin::kEmbedderBlink, V8PerformanceTiming::domTemplate, V8PerformanceTiming::trace, V8PerformanceTiming::traceWrappers, 0, 0, V8PerformanceTiming::preparePrototypeAndInterfaceObject, nullptr, "PerformanceTiming", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PerformanceTiming.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PerformanceTiming::s_wrapperTypeInfo = V8PerformanceTiming::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, PerformanceTiming>::value,
    "PerformanceTiming inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PerformanceTimingV8Internal {

static void navigationStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->navigationStart()));
}

static void navigationStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::navigationStartAttributeGetter(info);
}

static void unloadEventStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->unloadEventStart()));
}

static void unloadEventStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::unloadEventStartAttributeGetter(info);
}

static void unloadEventEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->unloadEventEnd()));
}

static void unloadEventEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::unloadEventEndAttributeGetter(info);
}

static void redirectStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->redirectStart()));
}

static void redirectStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::redirectStartAttributeGetter(info);
}

static void redirectEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->redirectEnd()));
}

static void redirectEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::redirectEndAttributeGetter(info);
}

static void fetchStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->fetchStart()));
}

static void fetchStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::fetchStartAttributeGetter(info);
}

static void domainLookupStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->domainLookupStart()));
}

static void domainLookupStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::domainLookupStartAttributeGetter(info);
}

static void domainLookupEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->domainLookupEnd()));
}

static void domainLookupEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::domainLookupEndAttributeGetter(info);
}

static void connectStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->connectStart()));
}

static void connectStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::connectStartAttributeGetter(info);
}

static void connectEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->connectEnd()));
}

static void connectEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::connectEndAttributeGetter(info);
}

static void secureConnectionStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->secureConnectionStart()));
}

static void secureConnectionStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::secureConnectionStartAttributeGetter(info);
}

static void requestStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->requestStart()));
}

static void requestStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::requestStartAttributeGetter(info);
}

static void responseStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->responseStart()));
}

static void responseStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::responseStartAttributeGetter(info);
}

static void responseEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->responseEnd()));
}

static void responseEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::responseEndAttributeGetter(info);
}

static void domLoadingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->domLoading()));
}

static void domLoadingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::domLoadingAttributeGetter(info);
}

static void domInteractiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->domInteractive()));
}

static void domInteractiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::domInteractiveAttributeGetter(info);
}

static void domContentLoadedEventStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->domContentLoadedEventStart()));
}

static void domContentLoadedEventStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::domContentLoadedEventStartAttributeGetter(info);
}

static void domContentLoadedEventEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->domContentLoadedEventEnd()));
}

static void domContentLoadedEventEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::domContentLoadedEventEndAttributeGetter(info);
}

static void domCompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->domComplete()));
}

static void domCompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::domCompleteAttributeGetter(info);
}

static void loadEventStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->loadEventStart()));
}

static void loadEventStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::loadEventStartAttributeGetter(info);
}

static void loadEventEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->loadEventEnd()));
}

static void loadEventEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::loadEventEndAttributeGetter(info);
}

static void toJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTiming* impl = V8PerformanceTiming::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptValue result = impl->toJSONForBinding(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void toJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceTimingV8Internal::toJSONMethod(info);
}

} // namespace PerformanceTimingV8Internal

const V8DOMConfiguration::AccessorConfiguration V8PerformanceTimingAccessors[] = {
    {"navigationStart", PerformanceTimingV8Internal::navigationStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"unloadEventStart", PerformanceTimingV8Internal::unloadEventStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"unloadEventEnd", PerformanceTimingV8Internal::unloadEventEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"redirectStart", PerformanceTimingV8Internal::redirectStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"redirectEnd", PerformanceTimingV8Internal::redirectEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"fetchStart", PerformanceTimingV8Internal::fetchStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"domainLookupStart", PerformanceTimingV8Internal::domainLookupStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"domainLookupEnd", PerformanceTimingV8Internal::domainLookupEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"connectStart", PerformanceTimingV8Internal::connectStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"connectEnd", PerformanceTimingV8Internal::connectEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"secureConnectionStart", PerformanceTimingV8Internal::secureConnectionStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"requestStart", PerformanceTimingV8Internal::requestStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"responseStart", PerformanceTimingV8Internal::responseStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"responseEnd", PerformanceTimingV8Internal::responseEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"domLoading", PerformanceTimingV8Internal::domLoadingAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"domInteractive", PerformanceTimingV8Internal::domInteractiveAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"domContentLoadedEventStart", PerformanceTimingV8Internal::domContentLoadedEventStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"domContentLoadedEventEnd", PerformanceTimingV8Internal::domContentLoadedEventEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"domComplete", PerformanceTimingV8Internal::domCompleteAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"loadEventStart", PerformanceTimingV8Internal::loadEventStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"loadEventEnd", PerformanceTimingV8Internal::loadEventEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8PerformanceTimingMethods[] = {
    {"toJSON", PerformanceTimingV8Internal::toJSONMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8PerformanceTimingTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8PerformanceTiming::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8PerformanceTiming::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PerformanceTimingAccessors, WTF_ARRAY_LENGTH(V8PerformanceTimingAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PerformanceTimingMethods, WTF_ARRAY_LENGTH(V8PerformanceTimingMethods));
}

v8::Local<v8::FunctionTemplate> V8PerformanceTiming::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PerformanceTimingTemplate);
}

bool V8PerformanceTiming::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PerformanceTiming::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PerformanceTiming* V8PerformanceTiming::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink