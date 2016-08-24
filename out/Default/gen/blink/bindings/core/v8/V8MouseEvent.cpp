// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8MouseEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventTarget.h"
#include "bindings/core/v8/V8MouseEventInit.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8Window.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8MouseEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8MouseEvent::domTemplate, V8MouseEvent::trace, V8MouseEvent::traceWrappers, 0, 0, V8MouseEvent::preparePrototypeAndInterfaceObject, nullptr, "MouseEvent", &V8UIEvent::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MouseEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MouseEvent::s_wrapperTypeInfo = V8MouseEvent::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, MouseEvent>::value,
    "MouseEvent inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MouseEventV8Internal {

static void screenXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->screenX());
}

static void screenXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::screenXAttributeGetter(info);
}

static void screenYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->screenY());
}

static void screenYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::screenYAttributeGetter(info);
}

static void clientXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->clientX());
}

static void clientXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::clientXAttributeGetter(info);
}

static void clientYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->clientY());
}

static void clientYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::clientYAttributeGetter(info);
}

static void ctrlKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->ctrlKey());
}

static void ctrlKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::ctrlKeyAttributeGetter(info);
}

static void shiftKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->shiftKey());
}

static void shiftKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::shiftKeyAttributeGetter(info);
}

static void altKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->altKey());
}

static void altKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::altKeyAttributeGetter(info);
}

static void metaKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->metaKey());
}

static void metaKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::metaKeyAttributeGetter(info);
}

static void buttonAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->button());
}

static void buttonAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::buttonAttributeGetter(info);
}

static void buttonsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->buttons());
}

static void buttonsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::buttonsAttributeGetter(info);
}

static void relatedTargetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->relatedTarget()), impl);
}

static void relatedTargetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::relatedTargetAttributeGetter(info);
}

static void pageXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->pageX());
}

static void pageXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::pageXAttributeGetter(info);
}

static void pageYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->pageY());
}

static void pageYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::pageYAttributeGetter(info);
}

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->x());
}

static void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MouseEventX);
    MouseEventV8Internal::xAttributeGetter(info);
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->y());
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MouseEventY);
    MouseEventV8Internal::yAttributeGetter(info);
}

static void offsetXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->offsetX());
}

static void offsetXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MouseEventOffsetX);
    MouseEventV8Internal::offsetXAttributeGetter(info);
}

static void offsetYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->offsetY());
}

static void offsetYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MouseEventOffsetY);
    MouseEventV8Internal::offsetYAttributeGetter(info);
}

static void movementXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->movementX());
}

static void movementXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MouseEventMovementX);
    MouseEventV8Internal::movementXAttributeGetter(info);
}

static void movementYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->movementY());
}

static void movementYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MouseEventMovementY);
    MouseEventV8Internal::movementYAttributeGetter(info);
}

static void regionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->region(), info.GetIsolate());
}

static void regionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::regionAttributeGetter(info);
}

static void fromElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->fromElement()), impl);
}

static void fromElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MouseEventFromElement);
    MouseEventV8Internal::fromElementAttributeGetter(info);
}

static void toElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->toElement()), impl);
}

static void toElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MouseEventToElement);
    MouseEventV8Internal::toElementAttributeGetter(info);
}

static void whichAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->which());
}

static void whichAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::MouseEventWhich);
    MouseEventV8Internal::whichAttributeGetter(info);
}

static void layerXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->layerX());
}

static void layerXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8MouseEvent_LayerX_AttributeGetter);
    MouseEventV8Internal::layerXAttributeGetter(info);
}

static void layerYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->layerY());
}

static void layerYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8MouseEvent_LayerY_AttributeGetter);
    MouseEventV8Internal::layerYAttributeGetter(info);
}

static void isTrustedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MouseEvent* impl = V8MouseEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->isTrusted());
}

static void isTrustedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::isTrustedAttributeGetter(info);
}

static void getModifierStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getModifierState", "MouseEvent", 1, info.Length()));
        return;
    }
    MouseEvent* impl = V8MouseEvent::toImpl(info.Holder());
    V8StringResource<> keyArg;
    {
        keyArg = info[0];
        if (!keyArg.prepare())
            return;
    }
    v8SetReturnValueBool(info, impl->getModifierState(keyArg));
}

static void getModifierStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MouseEventV8Internal::getModifierStateMethod(info);
}

static void initMouseEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "initMouseEvent", "MouseEvent", info.Holder(), info.GetIsolate());
    MouseEvent* impl = V8MouseEvent::toImpl(info.Holder());
    V8StringResource<> type;
    bool bubbles;
    bool cancelable;
    DOMWindow* view;
    int detail;
    int screenX;
    int screenY;
    int clientX;
    int clientY;
    bool ctrlKey;
    bool altKey;
    bool shiftKey;
    bool metaKey;
    unsigned button;
    EventTarget* relatedTarget;
    {
        type = info[0];
        if (!type.prepare())
            return;
        bubbles = toBoolean(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        cancelable = toBoolean(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        view = toDOMWindow(info.GetIsolate(), info[3]);
        if (!view && !isUndefinedOrNull(info[3])) {
            exceptionState.throwTypeError("parameter 4 is not of type 'Window'.");
            exceptionState.throwIfNeeded();
            return;
        }
        detail = toInt32(info.GetIsolate(), info[4], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        screenX = toInt32(info.GetIsolate(), info[5], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        screenY = toInt32(info.GetIsolate(), info[6], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        clientX = toInt32(info.GetIsolate(), info[7], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        clientY = toInt32(info.GetIsolate(), info[8], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        ctrlKey = toBoolean(info.GetIsolate(), info[9], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        altKey = toBoolean(info.GetIsolate(), info[10], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        shiftKey = toBoolean(info.GetIsolate(), info[11], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        metaKey = toBoolean(info.GetIsolate(), info[12], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        button = toUInt16(info.GetIsolate(), info[13], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        relatedTarget = toEventTarget(info.GetIsolate(), info[14]);
        if (!relatedTarget && !isUndefinedOrNull(info[14])) {
            exceptionState.throwTypeError("parameter 15 is not of type 'EventTarget'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    impl->initMouseEvent(scriptState, type, bubbles, cancelable, view, detail, screenX, screenY, clientX, clientY, ctrlKey, altKey, shiftKey, metaKey, button, relatedTarget);
}

static void initMouseEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8MouseEvent_InitMouseEvent_Method);
    MouseEventV8Internal::initMouseEventMethod(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "MouseEvent", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> type;
    MouseEventInit eventInitDict;
    {
        type = info[0];
        if (!type.prepare())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('eventInitDict') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8MouseEventInit::toImpl(info.GetIsolate(), info[1], eventInitDict, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    MouseEvent* impl = MouseEvent::create(scriptState, type, eventInitDict);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8MouseEvent::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace MouseEventV8Internal

const V8DOMConfiguration::AccessorConfiguration V8MouseEventAccessors[] = {
    {"screenX", MouseEventV8Internal::screenXAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"screenY", MouseEventV8Internal::screenYAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"clientX", MouseEventV8Internal::clientXAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"clientY", MouseEventV8Internal::clientYAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ctrlKey", MouseEventV8Internal::ctrlKeyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"shiftKey", MouseEventV8Internal::shiftKeyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"altKey", MouseEventV8Internal::altKeyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"metaKey", MouseEventV8Internal::metaKeyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"button", MouseEventV8Internal::buttonAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"buttons", MouseEventV8Internal::buttonsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"relatedTarget", MouseEventV8Internal::relatedTargetAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"pageX", MouseEventV8Internal::pageXAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"pageY", MouseEventV8Internal::pageYAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"x", MouseEventV8Internal::xAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"y", MouseEventV8Internal::yAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"offsetX", MouseEventV8Internal::offsetXAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"offsetY", MouseEventV8Internal::offsetYAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"movementX", MouseEventV8Internal::movementXAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"movementY", MouseEventV8Internal::movementYAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"fromElement", MouseEventV8Internal::fromElementAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"toElement", MouseEventV8Internal::toElementAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"which", MouseEventV8Internal::whichAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"layerX", MouseEventV8Internal::layerXAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"layerY", MouseEventV8Internal::layerYAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"isTrusted", MouseEventV8Internal::isTrustedAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8MouseEventMethods[] = {
    {"getModifierState", MouseEventV8Internal::getModifierStateMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"initMouseEvent", MouseEventV8Internal::initMouseEventMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

void V8MouseEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("MouseEvent"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    MouseEventV8Internal::constructor(info);
}

static void installV8MouseEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MouseEvent::wrapperTypeInfo.interfaceName, V8UIEvent::domTemplate(isolate, world), V8MouseEvent::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8MouseEvent::constructorCallback);
    interfaceTemplate->SetLength(1);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MouseEventAccessors, WTF_ARRAY_LENGTH(V8MouseEventAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MouseEventMethods, WTF_ARRAY_LENGTH(V8MouseEventMethods));

    if (RuntimeEnabledFeatures::experimentalCanvasFeaturesEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorregionConfiguration = \
        {"region", MouseEventV8Internal::regionAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorregionConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8MouseEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MouseEventTemplate);
}

bool V8MouseEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MouseEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MouseEvent* V8MouseEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink