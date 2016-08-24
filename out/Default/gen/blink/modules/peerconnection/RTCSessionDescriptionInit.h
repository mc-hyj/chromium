// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef RTCSessionDescriptionInit_h
#define RTCSessionDescriptionInit_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT RTCSessionDescriptionInit : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    RTCSessionDescriptionInit();
    virtual ~RTCSessionDescriptionInit();

    bool hasSdp() const { return !m_sdp.isNull(); }
    String sdp() const { return m_sdp; }
    void setSdp(String value) { m_sdp = value; }

    bool hasType() const { return !m_type.isNull(); }
    String type() const { return m_type; }
    void setType(String value) { m_type = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    String m_sdp;
    String m_type;

    friend class V8RTCSessionDescriptionInit;
};

} // namespace blink

#endif // RTCSessionDescriptionInit_h