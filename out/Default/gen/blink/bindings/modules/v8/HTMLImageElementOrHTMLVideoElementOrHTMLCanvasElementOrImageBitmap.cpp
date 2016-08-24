// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap.h"

#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8HTMLCanvasElement.h"
#include "bindings/core/v8/V8HTMLImageElement.h"
#include "bindings/core/v8/V8HTMLVideoElement.h"
#include "bindings/core/v8/V8ImageBitmap.h"

namespace blink {

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap()
    : m_type(SpecificTypeNone)
{
}

HTMLImageElement* HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::getAsHTMLImageElement() const
{
    ASSERT(isHTMLImageElement());
    return m_htmlImageElement;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::setHTMLImageElement(HTMLImageElement* value)
{
    ASSERT(isNull());
    m_htmlImageElement = value;
    m_type = SpecificTypeHTMLImageElement;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::fromHTMLImageElement(HTMLImageElement* value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap container;
    container.setHTMLImageElement(value);
    return container;
}

HTMLVideoElement* HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::getAsHTMLVideoElement() const
{
    ASSERT(isHTMLVideoElement());
    return m_htmlVideoElement;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::setHTMLVideoElement(HTMLVideoElement* value)
{
    ASSERT(isNull());
    m_htmlVideoElement = value;
    m_type = SpecificTypeHTMLVideoElement;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::fromHTMLVideoElement(HTMLVideoElement* value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap container;
    container.setHTMLVideoElement(value);
    return container;
}

HTMLCanvasElement* HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::getAsHTMLCanvasElement() const
{
    ASSERT(isHTMLCanvasElement());
    return m_htmlCanvasElement;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::setHTMLCanvasElement(HTMLCanvasElement* value)
{
    ASSERT(isNull());
    m_htmlCanvasElement = value;
    m_type = SpecificTypeHTMLCanvasElement;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::fromHTMLCanvasElement(HTMLCanvasElement* value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap container;
    container.setHTMLCanvasElement(value);
    return container;
}

ImageBitmap* HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::getAsImageBitmap() const
{
    ASSERT(isImageBitmap());
    return m_imageBitmap;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::setImageBitmap(ImageBitmap* value)
{
    ASSERT(isNull());
    m_imageBitmap = value;
    m_type = SpecificTypeImageBitmap;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::fromImageBitmap(ImageBitmap* value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap container;
    container.setImageBitmap(value);
    return container;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap&) = default;
HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::~HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap() = default;
HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap& HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::operator=(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap&) = default;

DEFINE_TRACE(HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap)
{
    visitor->trace(m_htmlImageElement);
    visitor->trace(m_htmlVideoElement);
    visitor->trace(m_htmlCanvasElement);
    visitor->trace(m_imageBitmap);
}

void V8HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (V8HTMLImageElement::hasInstance(v8Value, isolate)) {
        HTMLImageElement* cppValue = V8HTMLImageElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLImageElement(cppValue);
        return;
    }

    if (V8HTMLVideoElement::hasInstance(v8Value, isolate)) {
        HTMLVideoElement* cppValue = V8HTMLVideoElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLVideoElement(cppValue);
        return;
    }

    if (V8HTMLCanvasElement::hasInstance(v8Value, isolate)) {
        HTMLCanvasElement* cppValue = V8HTMLCanvasElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLCanvasElement(cppValue);
        return;
    }

    if (V8ImageBitmap::hasInstance(v8Value, isolate)) {
        ImageBitmap* cppValue = V8ImageBitmap::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setImageBitmap(cppValue);
        return;
    }

    exceptionState.throwTypeError("The provided value is not of type '(HTMLImageElement or HTMLVideoElement or HTMLCanvasElement or ImageBitmap)'");
}

v8::Local<v8::Value> toV8(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::SpecificTypeNone:
        return v8::Null(isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::SpecificTypeHTMLImageElement:
        return toV8(impl.getAsHTMLImageElement(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::SpecificTypeHTMLVideoElement:
        return toV8(impl.getAsHTMLVideoElement(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::SpecificTypeHTMLCanvasElement:
        return toV8(impl.getAsHTMLCanvasElement(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::SpecificTypeImageBitmap:
        return toV8(impl.getAsImageBitmap(), creationContext, isolate);
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap NativeValueTraits<HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap impl;
    V8HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink