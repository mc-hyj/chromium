// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8WorkerNavigatorPartial_h
#define V8WorkerNavigatorPartial_h

#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/workers/WorkerNavigator.h"
#include "platform/heap/Handle.h"

namespace blink {
class ScriptState;

class V8WorkerNavigatorPartial {
    STATIC_ONLY(V8WorkerNavigatorPartial);
public:
    static void initialize();
    static void preparePrototypeAndInterfaceObject(v8::Local<v8::Context>, const DOMWrapperWorld&, v8::Local<v8::Object>, v8::Local<v8::Function>, v8::Local<v8::FunctionTemplate>);

    static void installDurableStorage(ScriptState*, v8::Local<v8::Object> instance);
    static void installDurableStorage(ScriptState*);
private:
    static void installV8WorkerNavigatorTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interfaceTemplate);
};
}
#endif // V8WorkerNavigatorPartial_h