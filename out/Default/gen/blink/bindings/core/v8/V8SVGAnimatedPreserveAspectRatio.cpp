// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SVGAnimatedPreserveAspectRatio.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGElement.h"
#include "bindings/core/v8/V8SVGPreserveAspectRatio.h"
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
const WrapperTypeInfo V8SVGAnimatedPreserveAspectRatio::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGAnimatedPreserveAspectRatio::domTemplate, V8SVGAnimatedPreserveAspectRatio::trace, V8SVGAnimatedPreserveAspectRatio::traceWrappers, 0, V8SVGAnimatedPreserveAspectRatio::visitDOMWrapper, V8SVGAnimatedPreserveAspectRatio::preparePrototypeAndInterfaceObject, nullptr, "SVGAnimatedPreserveAspectRatio", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGAnimatedPreserveAspectRatio.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGAnimatedPreserveAspectRatio::s_wrapperTypeInfo = V8SVGAnimatedPreserveAspectRatio::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SVGAnimatedPreserveAspectRatio>::value,
    "SVGAnimatedPreserveAspectRatio inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGAnimatedPreserveAspectRatioV8Internal {

static void baseValAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimatedPreserveAspectRatio* impl = V8SVGAnimatedPreserveAspectRatio::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->baseVal()), impl);
}

static void baseValAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAnimatedPreserveAspectRatioV8Internal::baseValAttributeGetter(info);
}

static void animValAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimatedPreserveAspectRatio* impl = V8SVGAnimatedPreserveAspectRatio::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->animVal()), impl);
}

static void animValAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAnimatedPreserveAspectRatioV8Internal::animValAttributeGetter(info);
}

} // namespace SVGAnimatedPreserveAspectRatioV8Internal

void V8SVGAnimatedPreserveAspectRatio::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    SVGAnimatedPreserveAspectRatio* impl = scriptWrappable->toImpl<SVGAnimatedPreserveAspectRatio>();
    SVGElement* contextElement = impl->contextElement();
    if (contextElement) {
        DOMWrapperWorld::setWrapperReferencesInAllWorlds(wrapper, contextElement, isolate);
    }
}

const V8DOMConfiguration::AccessorConfiguration V8SVGAnimatedPreserveAspectRatioAccessors[] = {
    {"baseVal", SVGAnimatedPreserveAspectRatioV8Internal::baseValAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"animVal", SVGAnimatedPreserveAspectRatioV8Internal::animValAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGAnimatedPreserveAspectRatioTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGAnimatedPreserveAspectRatio::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8SVGAnimatedPreserveAspectRatio::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGAnimatedPreserveAspectRatioAccessors, WTF_ARRAY_LENGTH(V8SVGAnimatedPreserveAspectRatioAccessors));
}

v8::Local<v8::FunctionTemplate> V8SVGAnimatedPreserveAspectRatio::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGAnimatedPreserveAspectRatioTemplate);
}

bool V8SVGAnimatedPreserveAspectRatio::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGAnimatedPreserveAspectRatio::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGAnimatedPreserveAspectRatio* V8SVGAnimatedPreserveAspectRatio::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink