// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8MediaTrackConstraintSet.h"

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/BooleanOrConstrainBooleanParameters.h"
#include "bindings/modules/v8/DoubleOrConstrainDoubleRange.h"
#include "bindings/modules/v8/LongOrConstrainLongRange.h"
#include "bindings/modules/v8/StringOrStringSequenceOrConstrainDOMStringParameters.h"
#include "bindings/modules/v8/V8ConstrainBooleanParameters.h"
#include "bindings/modules/v8/V8ConstrainDOMStringParameters.h"
#include "bindings/modules/v8/V8ConstrainDoubleRange.h"
#include "bindings/modules/v8/V8ConstrainLongRange.h"
#include "platform/RuntimeEnabledFeatures.h"

namespace blink {

void V8MediaTrackConstraintSet::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaTrackConstraintSet& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> aspectRatioValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "aspectRatio")).ToLocal(&aspectRatioValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (aspectRatioValue.IsEmpty() || aspectRatioValue->IsUndefined()) {
            // Do nothing.
        } else {
            DoubleOrConstrainDoubleRange aspectRatio;
            V8DoubleOrConstrainDoubleRange::toImpl(isolate, aspectRatioValue, aspectRatio, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setAspectRatio(aspectRatio);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> channelCountValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "channelCount")).ToLocal(&channelCountValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (channelCountValue.IsEmpty() || channelCountValue->IsUndefined()) {
            // Do nothing.
        } else {
            LongOrConstrainLongRange channelCount;
            V8LongOrConstrainLongRange::toImpl(isolate, channelCountValue, channelCount, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setChannelCount(channelCount);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> deviceIdValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "deviceId")).ToLocal(&deviceIdValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (deviceIdValue.IsEmpty() || deviceIdValue->IsUndefined()) {
            // Do nothing.
        } else {
            StringOrStringSequenceOrConstrainDOMStringParameters deviceId;
            V8StringOrStringSequenceOrConstrainDOMStringParameters::toImpl(isolate, deviceIdValue, deviceId, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setDeviceId(deviceId);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> echoCancellationValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "echoCancellation")).ToLocal(&echoCancellationValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (echoCancellationValue.IsEmpty() || echoCancellationValue->IsUndefined()) {
            // Do nothing.
        } else {
            BooleanOrConstrainBooleanParameters echoCancellation;
            V8BooleanOrConstrainBooleanParameters::toImpl(isolate, echoCancellationValue, echoCancellation, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setEchoCancellation(echoCancellation);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> facingModeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "facingMode")).ToLocal(&facingModeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (facingModeValue.IsEmpty() || facingModeValue->IsUndefined()) {
            // Do nothing.
        } else {
            StringOrStringSequenceOrConstrainDOMStringParameters facingMode;
            V8StringOrStringSequenceOrConstrainDOMStringParameters::toImpl(isolate, facingModeValue, facingMode, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setFacingMode(facingMode);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> frameRateValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "frameRate")).ToLocal(&frameRateValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (frameRateValue.IsEmpty() || frameRateValue->IsUndefined()) {
            // Do nothing.
        } else {
            DoubleOrConstrainDoubleRange frameRate;
            V8DoubleOrConstrainDoubleRange::toImpl(isolate, frameRateValue, frameRate, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setFrameRate(frameRate);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> groupIdValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "groupId")).ToLocal(&groupIdValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (groupIdValue.IsEmpty() || groupIdValue->IsUndefined()) {
            // Do nothing.
        } else {
            StringOrStringSequenceOrConstrainDOMStringParameters groupId;
            V8StringOrStringSequenceOrConstrainDOMStringParameters::toImpl(isolate, groupIdValue, groupId, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setGroupId(groupId);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> heightValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "height")).ToLocal(&heightValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (heightValue.IsEmpty() || heightValue->IsUndefined()) {
            // Do nothing.
        } else {
            LongOrConstrainLongRange height;
            V8LongOrConstrainLongRange::toImpl(isolate, heightValue, height, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setHeight(height);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> latencyValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "latency")).ToLocal(&latencyValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (latencyValue.IsEmpty() || latencyValue->IsUndefined()) {
            // Do nothing.
        } else {
            DoubleOrConstrainDoubleRange latency;
            V8DoubleOrConstrainDoubleRange::toImpl(isolate, latencyValue, latency, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setLatency(latency);
        }
    }

    v8::Local<v8::Value> mandatoryValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "mandatory")).ToLocal(&mandatoryValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (mandatoryValue.IsEmpty() || mandatoryValue->IsUndefined()) {
        // Do nothing.
    } else {
        Dictionary mandatory = Dictionary(mandatoryValue, isolate, exceptionState);
        if (exceptionState.hadException())
            return;
        if (!mandatory.isObject()) {
            exceptionState.throwTypeError("member mandatory is not an object.");
            return;
        }
        impl.setMandatory(mandatory);
    }

    v8::Local<v8::Value> optionalValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "optional")).ToLocal(&optionalValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (optionalValue.IsEmpty() || optionalValue->IsUndefined()) {
        // Do nothing.
    } else {
        Vector<Dictionary> optional = toImplArray<Vector<Dictionary>>(optionalValue, 0, isolate, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setOptional(optional);
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> sampleRateValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "sampleRate")).ToLocal(&sampleRateValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (sampleRateValue.IsEmpty() || sampleRateValue->IsUndefined()) {
            // Do nothing.
        } else {
            LongOrConstrainLongRange sampleRate;
            V8LongOrConstrainLongRange::toImpl(isolate, sampleRateValue, sampleRate, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setSampleRate(sampleRate);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> sampleSizeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "sampleSize")).ToLocal(&sampleSizeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (sampleSizeValue.IsEmpty() || sampleSizeValue->IsUndefined()) {
            // Do nothing.
        } else {
            LongOrConstrainLongRange sampleSize;
            V8LongOrConstrainLongRange::toImpl(isolate, sampleSizeValue, sampleSize, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setSampleSize(sampleSize);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> volumeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "volume")).ToLocal(&volumeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (volumeValue.IsEmpty() || volumeValue->IsUndefined()) {
            // Do nothing.
        } else {
            DoubleOrConstrainDoubleRange volume;
            V8DoubleOrConstrainDoubleRange::toImpl(isolate, volumeValue, volume, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setVolume(volume);
        }
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        v8::Local<v8::Value> widthValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "width")).ToLocal(&widthValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (widthValue.IsEmpty() || widthValue->IsUndefined()) {
            // Do nothing.
        } else {
            LongOrConstrainLongRange width;
            V8LongOrConstrainLongRange::toImpl(isolate, widthValue, width, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setWidth(width);
        }
    }
}

v8::Local<v8::Value> MediaTrackConstraintSet::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8MediaTrackConstraintSet(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8MediaTrackConstraintSet(const MediaTrackConstraintSet& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasAspectRatio()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "aspectRatio"), toV8(impl.aspectRatio(), creationContext, isolate))))
            return false;
    }

    if (impl.hasChannelCount()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "channelCount"), toV8(impl.channelCount(), creationContext, isolate))))
            return false;
    }

    if (impl.hasDeviceId()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deviceId"), toV8(impl.deviceId(), creationContext, isolate))))
            return false;
    }

    if (impl.hasEchoCancellation()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "echoCancellation"), toV8(impl.echoCancellation(), creationContext, isolate))))
            return false;
    }

    if (impl.hasFacingMode()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "facingMode"), toV8(impl.facingMode(), creationContext, isolate))))
            return false;
    }

    if (impl.hasFrameRate()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "frameRate"), toV8(impl.frameRate(), creationContext, isolate))))
            return false;
    }

    if (impl.hasGroupId()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "groupId"), toV8(impl.groupId(), creationContext, isolate))))
            return false;
    }

    if (impl.hasHeight()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "height"), toV8(impl.height(), creationContext, isolate))))
            return false;
    }

    if (impl.hasLatency()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "latency"), toV8(impl.latency(), creationContext, isolate))))
            return false;
    }

    if (impl.hasMandatory()) {
        ASSERT(impl.mandatory().isObject());
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "mandatory"), impl.mandatory().v8Value())))
            return false;
    }

    if (impl.hasOptional()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "optional"), toV8(impl.optional(), creationContext, isolate))))
            return false;
    }

    if (impl.hasSampleRate()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "sampleRate"), toV8(impl.sampleRate(), creationContext, isolate))))
            return false;
    }

    if (impl.hasSampleSize()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "sampleSize"), toV8(impl.sampleSize(), creationContext, isolate))))
            return false;
    }

    if (impl.hasVolume()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "volume"), toV8(impl.volume(), creationContext, isolate))))
            return false;
    }

    if (impl.hasWidth()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "width"), toV8(impl.width(), creationContext, isolate))))
            return false;
    }

    return true;
}

MediaTrackConstraintSet NativeValueTraits<MediaTrackConstraintSet>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    MediaTrackConstraintSet impl;
    V8MediaTrackConstraintSet::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink