// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8OffscreenCanvasPartial.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8CanvasContextCreationAttributes.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8OffscreenCanvas.h"
#include "bindings/modules/v8/OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext.h"
#include "bindings/modules/v8/V8OffscreenCanvasRenderingContext2D.h"
#include "bindings/modules/v8/V8WebGL2RenderingContext.h"
#include "bindings/modules/v8/V8WebGLRenderingContext.h"
#include "core/dom/Document.h"
#include "modules/offscreencanvas/OffscreenCanvasModules.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

namespace OffscreenCanvasPartialV8Internal {

static void getContextMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getContext", "OffscreenCanvas", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    OffscreenCanvas* impl = V8OffscreenCanvas::toImpl(info.Holder());
    V8StringResource<> contextId;
    CanvasContextCreationAttributes attributes;
    {
        contextId = info[0];
        if (!contextId.prepare())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('attributes') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8CanvasContextCreationAttributes::toImpl(info.GetIsolate(), info[1], attributes, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext result;
    OffscreenCanvasModules::getContext(scriptState, *impl, contextId, attributes, exceptionState, result);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void getContextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    OffscreenCanvasPartialV8Internal::getContextMethod(info);
}

} // namespace OffscreenCanvasPartialV8Internal

void V8OffscreenCanvasPartial::installV8OffscreenCanvasTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8OffscreenCanvas::installV8OffscreenCanvasTemplate(isolate, world, interfaceTemplate);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
if (RuntimeEnabledFeatures::experimentalCanvasFeaturesEnabled()) {
    
}

    if (RuntimeEnabledFeatures::experimentalCanvasFeaturesEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getContextMethodConfiguration = {"getContext", OffscreenCanvasPartialV8Internal::getContextMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, getContextMethodConfiguration);
    }
}

void V8OffscreenCanvasPartial::preparePrototypeAndInterfaceObject(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    V8OffscreenCanvas::preparePrototypeAndInterfaceObject(context, world, prototypeObject, interfaceObject, interfaceTemplate);
}

void V8OffscreenCanvasPartial::initialize()
{
    // Should be invoked from ModulesInitializer.
    V8OffscreenCanvas::updateWrapperTypeInfo(
        &V8OffscreenCanvasPartial::installV8OffscreenCanvasTemplate,
        &V8OffscreenCanvasPartial::preparePrototypeAndInterfaceObject);
}

} // namespace blink
