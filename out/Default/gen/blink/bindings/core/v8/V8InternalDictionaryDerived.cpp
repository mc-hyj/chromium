// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8InternalDictionaryDerived.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8InternalDictionary.h"

namespace blink {

void V8InternalDictionaryDerived::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, InternalDictionaryDerived& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("Missing required member(s): requiredBooleanMember.");
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8InternalDictionary::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> derivedStringMemberValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "derivedStringMember")).ToLocal(&derivedStringMemberValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (derivedStringMemberValue.IsEmpty() || derivedStringMemberValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> derivedStringMember = derivedStringMemberValue;
        if (!derivedStringMember.prepare(exceptionState))
            return;
        impl.setDerivedStringMember(derivedStringMember);
    }

    v8::Local<v8::Value> derivedStringMemberWithDefaultValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "derivedStringMemberWithDefault")).ToLocal(&derivedStringMemberWithDefaultValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (derivedStringMemberWithDefaultValue.IsEmpty() || derivedStringMemberWithDefaultValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> derivedStringMemberWithDefault = derivedStringMemberWithDefaultValue;
        if (!derivedStringMemberWithDefault.prepare(exceptionState))
            return;
        impl.setDerivedStringMemberWithDefault(derivedStringMemberWithDefault);
    }

    v8::Local<v8::Value> requiredBooleanMemberValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "requiredBooleanMember")).ToLocal(&requiredBooleanMemberValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (requiredBooleanMemberValue.IsEmpty() || requiredBooleanMemberValue->IsUndefined()) {
        exceptionState.throwTypeError("required member requiredBooleanMember is undefined.");
        return;
    } else {
        bool requiredBooleanMember = toBoolean(isolate, requiredBooleanMemberValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setRequiredBooleanMember(requiredBooleanMember);
    }
}

v8::Local<v8::Value> InternalDictionaryDerived::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8InternalDictionaryDerived(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8InternalDictionaryDerived(const InternalDictionaryDerived& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (!toV8InternalDictionary(impl, dictionary, creationContext, isolate))
        return false;

    if (impl.hasDerivedStringMember()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "derivedStringMember"), v8String(isolate, impl.derivedStringMember()))))
            return false;
    }

    if (impl.hasDerivedStringMemberWithDefault()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "derivedStringMemberWithDefault"), v8String(isolate, impl.derivedStringMemberWithDefault()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "derivedStringMemberWithDefault"), v8String(isolate, String("derivedDefaultStringValue")))))
            return false;
    }

    if (impl.hasRequiredBooleanMember()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "requiredBooleanMember"), v8Boolean(impl.requiredBooleanMember(), isolate))))
            return false;
    } else {
        ASSERT_NOT_REACHED();
    }

    return true;
}

InternalDictionaryDerived NativeValueTraits<InternalDictionaryDerived>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    InternalDictionaryDerived impl;
    V8InternalDictionaryDerived::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink