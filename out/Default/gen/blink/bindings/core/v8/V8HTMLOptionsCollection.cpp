// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8HTMLOptionsCollection.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/HTMLElementOrLong.h"
#include "bindings/core/v8/HTMLOptionElementOrHTMLOptGroupElement.h"
#include "bindings/core/v8/NodeListOrElement.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8HTMLElement.h"
#include "bindings/core/v8/V8HTMLOptGroupElement.h"
#include "bindings/core/v8/V8HTMLOptionElement.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8NodeList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
#include "core/dom/NameNodeList.h"
#include "core/dom/NodeList.h"
#include "core/dom/StaticNodeList.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/html/LabelsNodeList.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLOptionsCollection::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLOptionsCollection::domTemplate, V8HTMLOptionsCollection::trace, V8HTMLOptionsCollection::traceWrappers, 0, V8HTMLOptionsCollection::visitDOMWrapper, V8HTMLOptionsCollection::preparePrototypeAndInterfaceObject, nullptr, "HTMLOptionsCollection", &V8HTMLCollection::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLOptionsCollection.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLOptionsCollection::s_wrapperTypeInfo = V8HTMLOptionsCollection::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, HTMLOptionsCollection>::value,
    "HTMLOptionsCollection inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLOptionsCollectionV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLOptionsCollectionV8Internal::lengthAttributeGetter(info);
}

static void lengthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "length", "HTMLOptionsCollection", holder, info.GetIsolate());
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(holder);
    unsigned cppValue = toUInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setLength(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void lengthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    HTMLOptionsCollectionV8Internal::lengthAttributeSetter(v8Value, info);
}

static void selectedIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(holder);
    v8SetReturnValueInt(info, impl->selectedIndex());
}

static void selectedIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLOptionsCollectionV8Internal::selectedIndexAttributeGetter(info);
}

static void selectedIndexAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "selectedIndex", "HTMLOptionsCollection", holder, info.GetIsolate());
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(holder);
    int cppValue = toInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setSelectedIndex(cppValue);
}

static void selectedIndexAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    HTMLOptionsCollectionV8Internal::selectedIndexAttributeSetter(v8Value, info);
}

static void addMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "add", "HTMLOptionsCollection", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(info.Holder());
    HTMLOptionElementOrHTMLOptGroupElement element;
    HTMLElementOrLong before;
    {
        V8HTMLOptionElementOrHTMLOptGroupElement::toImpl(info.GetIsolate(), info[0], element, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!info[1]->IsUndefined()) {
            V8HTMLElementOrLong::toImpl(info.GetIsolate(), info[1], before, UnionTypeConversionMode::Nullable, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            /* null default value */;
        }
    }
    impl->add(element, before, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void addMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLOptionsCollectionV8Internal::addMethod(info);
}

static void removeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "remove", "HTMLOptionsCollection", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(info.Holder());
    int index;
    {
        index = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->remove(index);
}

static void removeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLOptionsCollectionV8Internal::removeMethod(info);
}

static void namedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "namedItem", "HTMLOptionsCollection", 1, info.Length()));
        return;
    }
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(info.Holder());
    V8StringResource<> name;
    {
        name = info[0];
        if (!name.prepare())
            return;
    }
    NodeListOrElement result;
    impl->namedGetter(name, result);
    v8SetReturnValue(info, result);
}

static void namedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLOptionsCollectionV8Internal::namedItemMethod(info);
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(info.Holder());
    Node* result = impl->item(index);
    if (!result)
        return;
    v8SetReturnValueFast(info, result, impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    HTMLOptionsCollectionV8Internal::indexedPropertyGetter(index, info);
}

static void indexedPropertySetter(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(info.Holder());
    HTMLOptionElement* propertyValue = V8HTMLOptionElement::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    ExceptionState exceptionState(ExceptionState::IndexedSetterContext, "HTMLOptionsCollection", info.Holder(), info.GetIsolate());
    if (!propertyValue && !isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("The provided value is not of type 'HTMLOptionElement'.");
        exceptionState.throwIfNeeded();
        return;
    }
    bool result = impl->anonymousIndexedSetter(index, propertyValue, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValue(info, v8Value);
}

static void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLOptionsCollectionV8Internal::indexedPropertySetter(index, v8Value, info);
}

static void namedPropertyGetter(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    auto nameString = name.As<v8::String>();
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(nameString);
    NodeListOrElement result;
    impl->namedGetter(propertyName, result);
    if (result.isNull())
        return;
    v8SetReturnValue(info, result);
}

static void namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    if (!name->IsString())
        return;
    HTMLOptionsCollectionV8Internal::namedPropertyGetter(name, info);
}

static void namedPropertyQuery(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name.As<v8::String>());
    v8::String::Utf8Value namedProperty(name);
    ExceptionState exceptionState(ExceptionState::GetterContext, *namedProperty, "HTMLOptionsCollection", info.Holder(), info.GetIsolate());
    bool result = impl->namedPropertyQuery(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueInt(info, v8::None);
}

static void namedPropertyQueryCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    if (!name->IsString())
        return;
    HTMLOptionsCollectionV8Internal::namedPropertyQuery(name, info);
}

static void namedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    HTMLOptionsCollection* impl = V8HTMLOptionsCollection::toImpl(info.Holder());
    Vector<String> names;
    ExceptionState exceptionState(ExceptionState::EnumerationContext, "HTMLOptionsCollection", info.Holder(), info.GetIsolate());
    impl->namedPropertyEnumerator(names, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8::Local<v8::Array> v8names = v8::Array::New(info.GetIsolate(), names.size());
    for (size_t i = 0; i < names.size(); ++i) {
        if (!v8CallBoolean(v8names->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), i, v8String(info.GetIsolate(), names[i]))))
            return;
    }
    v8SetReturnValue(info, v8names);
}

static void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    HTMLOptionsCollectionV8Internal::namedPropertyEnumerator(info);
}

} // namespace HTMLOptionsCollectionV8Internal

void V8HTMLOptionsCollection::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    HTMLOptionsCollection* impl = scriptWrappable->toImpl<HTMLOptionsCollection>();
    // The ownerNode() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->ownerNode())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

const V8DOMConfiguration::AccessorConfiguration V8HTMLOptionsCollectionAccessors[] = {
    {"length", HTMLOptionsCollectionV8Internal::lengthAttributeGetterCallback, HTMLOptionsCollectionV8Internal::lengthAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"selectedIndex", HTMLOptionsCollectionV8Internal::selectedIndexAttributeGetterCallback, HTMLOptionsCollectionV8Internal::selectedIndexAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8HTMLOptionsCollectionMethods[] = {
    {"add", HTMLOptionsCollectionV8Internal::addMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"remove", HTMLOptionsCollectionV8Internal::removeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"namedItem", HTMLOptionsCollectionV8Internal::namedItemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8HTMLOptionsCollectionTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLOptionsCollection::wrapperTypeInfo.interfaceName, V8HTMLCollection::domTemplate(isolate, world), V8HTMLOptionsCollection::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLOptionsCollectionAccessors, WTF_ARRAY_LENGTH(V8HTMLOptionsCollectionAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLOptionsCollectionMethods, WTF_ARRAY_LENGTH(V8HTMLOptionsCollectionMethods));

    // Array iterator
    prototypeTemplate->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);

    // Indexed properties
    v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(HTMLOptionsCollectionV8Internal::indexedPropertyGetterCallback, HTMLOptionsCollectionV8Internal::indexedPropertySetterCallback, 0, 0, indexedPropertyEnumerator<HTMLOptionsCollection>, v8::Local<v8::Value>(), v8::PropertyHandlerFlags::kNone);
    instanceTemplate->SetHandler(indexedPropertyHandlerConfig);
    // Named properties
    v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(HTMLOptionsCollectionV8Internal::namedPropertyGetterCallback, 0, HTMLOptionsCollectionV8Internal::namedPropertyQueryCallback, 0, HTMLOptionsCollectionV8Internal::namedPropertyEnumeratorCallback, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int(v8::PropertyHandlerFlags::kNonMasking)));
    instanceTemplate->SetHandler(namedPropertyHandlerConfig);
}

v8::Local<v8::FunctionTemplate> V8HTMLOptionsCollection::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLOptionsCollectionTemplate);
}

bool V8HTMLOptionsCollection::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLOptionsCollection::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLOptionsCollection* V8HTMLOptionsCollection::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink