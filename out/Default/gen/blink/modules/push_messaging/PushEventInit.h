// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PushEventInit_h
#define PushEventInit_h

#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/modules/v8/ArrayBufferOrArrayBufferViewOrUSVString.h"
#include "core/dom/DOMArrayBuffer.h"
#include "core/dom/DOMArrayBufferView.h"
#include "core/dom/FlexibleArrayBufferView.h"
#include "modules/ModulesExport.h"
#include "modules/serviceworkers/ExtendableEventInit.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT PushEventInit : public ExtendableEventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    PushEventInit();
    virtual ~PushEventInit();

    bool hasData() const { return !m_data.isNull(); }
    const ArrayBufferOrArrayBufferViewOrUSVString& data() const { return m_data; }
    void setData(const ArrayBufferOrArrayBufferViewOrUSVString& value) { m_data = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    ArrayBufferOrArrayBufferViewOrUSVString m_data;

    friend class V8PushEventInit;
};

} // namespace blink

#endif // PushEventInit_h