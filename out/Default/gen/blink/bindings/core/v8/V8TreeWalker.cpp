// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8TreeWalker.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8NodeFilter.h"
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
const WrapperTypeInfo V8TreeWalker::wrapperTypeInfo = { gin::kEmbedderBlink, V8TreeWalker::domTemplate, V8TreeWalker::trace, V8TreeWalker::traceWrappers, 0, V8TreeWalker::visitDOMWrapper, V8TreeWalker::preparePrototypeAndInterfaceObject, nullptr, "TreeWalker", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TreeWalker.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TreeWalker::s_wrapperTypeInfo = V8TreeWalker::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, TreeWalker>::value,
    "TreeWalker inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace TreeWalkerV8Internal {

static void rootAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TreeWalker* impl = V8TreeWalker::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->root()), impl);
}

static void rootAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::rootAttributeGetter(info);
}

static void whatToShowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TreeWalker* impl = V8TreeWalker::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->whatToShow());
}

static void whatToShowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::whatToShowAttributeGetter(info);
}

static void filterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TreeWalker* impl = V8TreeWalker::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->filter()), impl);
}

static void filterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::filterAttributeGetter(info);
}

static void currentNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TreeWalker* impl = V8TreeWalker::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->currentNode()), impl);
}

static void currentNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::currentNodeAttributeGetter(info);
}

static void currentNodeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "currentNode", "TreeWalker", holder, info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toImpl(holder);
    Node* cppValue = V8Node::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    if (!cppValue) {
        exceptionState.throwTypeError("The provided value is not of type 'Node'.");
        exceptionState.throwIfNeeded();
        return;
    }
    impl->setCurrentNode(cppValue);
}

static void currentNodeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TreeWalkerV8Internal::currentNodeAttributeSetter(v8Value, info);
}

static void parentNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "parentNode", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toImpl(info.Holder());
    Node* result = impl->parentNode(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void parentNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::parentNodeMethod(info);
}

static void firstChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "firstChild", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toImpl(info.Holder());
    Node* result = impl->firstChild(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void firstChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::firstChildMethod(info);
}

static void lastChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "lastChild", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toImpl(info.Holder());
    Node* result = impl->lastChild(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void lastChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::lastChildMethod(info);
}

static void previousSiblingMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "previousSibling", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toImpl(info.Holder());
    Node* result = impl->previousSibling(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void previousSiblingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::previousSiblingMethod(info);
}

static void nextSiblingMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "nextSibling", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toImpl(info.Holder());
    Node* result = impl->nextSibling(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void nextSiblingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::nextSiblingMethod(info);
}

static void previousNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "previousNode", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toImpl(info.Holder());
    Node* result = impl->previousNode(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void previousNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::previousNodeMethod(info);
}

static void nextNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "nextNode", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toImpl(info.Holder());
    Node* result = impl->nextNode(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void nextNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TreeWalkerV8Internal::nextNodeMethod(info);
}

} // namespace TreeWalkerV8Internal

void V8TreeWalker::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    TreeWalker* impl = scriptWrappable->toImpl<TreeWalker>();
    NodeFilter* filter = impl->filter();
    if (filter) {
        DOMWrapperWorld::setWrapperReferencesInAllWorlds(wrapper, filter, isolate);
    }
}

const V8DOMConfiguration::AccessorConfiguration V8TreeWalkerAccessors[] = {
    {"root", TreeWalkerV8Internal::rootAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"whatToShow", TreeWalkerV8Internal::whatToShowAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"filter", TreeWalkerV8Internal::filterAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"currentNode", TreeWalkerV8Internal::currentNodeAttributeGetterCallback, TreeWalkerV8Internal::currentNodeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8TreeWalkerMethods[] = {
    {"parentNode", TreeWalkerV8Internal::parentNodeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"firstChild", TreeWalkerV8Internal::firstChildMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"lastChild", TreeWalkerV8Internal::lastChildMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"previousSibling", TreeWalkerV8Internal::previousSiblingMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"nextSibling", TreeWalkerV8Internal::nextSiblingMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"previousNode", TreeWalkerV8Internal::previousNodeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"nextNode", TreeWalkerV8Internal::nextNodeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8TreeWalkerTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8TreeWalker::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8TreeWalker::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8TreeWalkerAccessors, WTF_ARRAY_LENGTH(V8TreeWalkerAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8TreeWalkerMethods, WTF_ARRAY_LENGTH(V8TreeWalkerMethods));
}

v8::Local<v8::FunctionTemplate> V8TreeWalker::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TreeWalkerTemplate);
}

bool V8TreeWalker::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TreeWalker::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TreeWalker* V8TreeWalker::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink