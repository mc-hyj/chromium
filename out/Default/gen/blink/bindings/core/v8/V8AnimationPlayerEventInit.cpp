// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8AnimationPlayerEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"

namespace blink {

void V8AnimationPlayerEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AnimationPlayerEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8EventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> currentTimeValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "currentTime")).ToLocal(&currentTimeValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (currentTimeValue.IsEmpty() || currentTimeValue->IsUndefined()) {
        // Do nothing.
    } else if (currentTimeValue->IsNull()) {
        impl.setCurrentTimeToNull();
    } else {
        double currentTime = toRestrictedDouble(isolate, currentTimeValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setCurrentTime(currentTime);
    }

    v8::Local<v8::Value> timelineTimeValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "timelineTime")).ToLocal(&timelineTimeValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (timelineTimeValue.IsEmpty() || timelineTimeValue->IsUndefined()) {
        // Do nothing.
    } else if (timelineTimeValue->IsNull()) {
        impl.setTimelineTimeToNull();
    } else {
        double timelineTime = toRestrictedDouble(isolate, timelineTimeValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setTimelineTime(timelineTime);
    }
}

v8::Local<v8::Value> AnimationPlayerEventInit::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8AnimationPlayerEventInit(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8AnimationPlayerEventInit(const AnimationPlayerEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (!toV8EventInit(impl, dictionary, creationContext, isolate))
        return false;

    if (impl.hasCurrentTime()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "currentTime"), v8::Number::New(isolate, impl.currentTime()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "currentTime"), v8::Null(isolate))))
            return false;
    }

    if (impl.hasTimelineTime()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "timelineTime"), v8::Number::New(isolate, impl.timelineTime()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "timelineTime"), v8::Null(isolate))))
            return false;
    }

    return true;
}

AnimationPlayerEventInit NativeValueTraits<AnimationPlayerEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    AnimationPlayerEventInit impl;
    V8AnimationPlayerEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink