// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PaymentCurrencyAmount_h
#define PaymentCurrencyAmount_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT PaymentCurrencyAmount : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    PaymentCurrencyAmount();
    virtual ~PaymentCurrencyAmount();

    bool hasCurrency() const { return !m_currency.isNull(); }
    String currency() const { return m_currency; }
    void setCurrency(String value) { m_currency = value; }

    bool hasValue() const { return !m_value.isNull(); }
    String value() const { return m_value; }
    void setValue(String value) { m_value = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    String m_currency;
    String m_value;

    friend class V8PaymentCurrencyAmount;
};

} // namespace blink

#endif // PaymentCurrencyAmount_h