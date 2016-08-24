// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SVGPreserveAspectRatio.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGElement.h"
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
const WrapperTypeInfo V8SVGPreserveAspectRatio::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGPreserveAspectRatio::domTemplate, V8SVGPreserveAspectRatio::trace, V8SVGPreserveAspectRatio::traceWrappers, 0, V8SVGPreserveAspectRatio::visitDOMWrapper, V8SVGPreserveAspectRatio::preparePrototypeAndInterfaceObject, nullptr, "SVGPreserveAspectRatio", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGPreserveAspectRatioTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGPreserveAspectRatioTearOff::s_wrapperTypeInfo = V8SVGPreserveAspectRatio::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SVGPreserveAspectRatioTearOff>::value,
    "SVGPreserveAspectRatioTearOff inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGPreserveAspectRatioTearOffV8Internal {

static void alignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->align());
}

static void alignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGPreserveAspectRatioTearOffV8Internal::alignAttributeGetter(info);
}

static void alignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "align", "SVGPreserveAspectRatio", holder, info.GetIsolate());
    SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::toImpl(holder);
    unsigned cppValue = toUInt16(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setAlign(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void alignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SVGPreserveAspectRatioTearOffV8Internal::alignAttributeSetter(v8Value, info);
}

static void meetOrSliceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->meetOrSlice());
}

static void meetOrSliceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGPreserveAspectRatioTearOffV8Internal::meetOrSliceAttributeGetter(info);
}

static void meetOrSliceAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "meetOrSlice", "SVGPreserveAspectRatio", holder, info.GetIsolate());
    SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::toImpl(holder);
    unsigned cppValue = toUInt16(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setMeetOrSlice(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void meetOrSliceAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SVGPreserveAspectRatioTearOffV8Internal::meetOrSliceAttributeSetter(v8Value, info);
}

} // namespace SVGPreserveAspectRatioTearOffV8Internal

void V8SVGPreserveAspectRatio::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    SVGPreserveAspectRatioTearOff* impl = scriptWrappable->toImpl<SVGPreserveAspectRatioTearOff>();
    SVGElement* contextElement = impl->contextElement();
    if (contextElement) {
        DOMWrapperWorld::setWrapperReferencesInAllWorlds(wrapper, contextElement, isolate);
    }
}

const V8DOMConfiguration::AccessorConfiguration V8SVGPreserveAspectRatioAccessors[] = {
    {"align", SVGPreserveAspectRatioTearOffV8Internal::alignAttributeGetterCallback, SVGPreserveAspectRatioTearOffV8Internal::alignAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"meetOrSlice", SVGPreserveAspectRatioTearOffV8Internal::meetOrSliceAttributeGetterCallback, SVGPreserveAspectRatioTearOffV8Internal::meetOrSliceAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGPreserveAspectRatioTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGPreserveAspectRatio::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8SVGPreserveAspectRatio::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    const V8DOMConfiguration::ConstantConfiguration V8SVGPreserveAspectRatioConstants[] = {
        {"SVG_PRESERVEASPECTRATIO_UNKNOWN", 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_NONE", 1, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMINYMIN", 2, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMIDYMIN", 3, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMAXYMIN", 4, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMINYMID", 5, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMIDYMID", 6, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMAXYMID", 7, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMINYMAX", 8, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMIDYMAX", 9, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_PRESERVEASPECTRATIO_XMAXYMAX", 10, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_MEETORSLICE_UNKNOWN", 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_MEETORSLICE_MEET", 1, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_MEETORSLICE_SLICE", 2, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, interfaceTemplate, prototypeTemplate, V8SVGPreserveAspectRatioConstants, WTF_ARRAY_LENGTH(V8SVGPreserveAspectRatioConstants));
    static_assert(0 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioUnknown, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioUnknown does not match with implementation");
    static_assert(1 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioNone, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioNone does not match with implementation");
    static_assert(2 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXminymin, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXminymin does not match with implementation");
    static_assert(3 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmidymin, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmidymin does not match with implementation");
    static_assert(4 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmaxymin, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmaxymin does not match with implementation");
    static_assert(5 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXminymid, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXminymid does not match with implementation");
    static_assert(6 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmidymid, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmidymid does not match with implementation");
    static_assert(7 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmaxymid, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmaxymid does not match with implementation");
    static_assert(8 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXminymax, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXminymax does not match with implementation");
    static_assert(9 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmidymax, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmidymax does not match with implementation");
    static_assert(10 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmaxymax, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmaxymax does not match with implementation");
    static_assert(0 == SVGPreserveAspectRatioTearOff::kSvgMeetorsliceUnknown, "the value of SVGPreserveAspectRatioTearOff_kSvgMeetorsliceUnknown does not match with implementation");
    static_assert(1 == SVGPreserveAspectRatioTearOff::kSvgMeetorsliceMeet, "the value of SVGPreserveAspectRatioTearOff_kSvgMeetorsliceMeet does not match with implementation");
    static_assert(2 == SVGPreserveAspectRatioTearOff::kSvgMeetorsliceSlice, "the value of SVGPreserveAspectRatioTearOff_kSvgMeetorsliceSlice does not match with implementation");
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGPreserveAspectRatioAccessors, WTF_ARRAY_LENGTH(V8SVGPreserveAspectRatioAccessors));
}

v8::Local<v8::FunctionTemplate> V8SVGPreserveAspectRatio::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGPreserveAspectRatioTemplate);
}

bool V8SVGPreserveAspectRatio::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGPreserveAspectRatio::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGPreserveAspectRatioTearOff* V8SVGPreserveAspectRatio::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink