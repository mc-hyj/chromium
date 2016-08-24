// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PaymentItem_h
#define PaymentItem_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "modules/payments/PaymentCurrencyAmount.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT PaymentItem : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    PaymentItem();
    virtual ~PaymentItem();

    bool hasAmount() const { return !m_amount.isNull(); }
    const PaymentCurrencyAmount& amount() const { return m_amount.get(); }
    void setAmount(const PaymentCurrencyAmount& value) { m_amount = value; }

    bool hasLabel() const { return !m_label.isNull(); }
    String label() const { return m_label; }
    void setLabel(String value) { m_label = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<PaymentCurrencyAmount> m_amount;
    String m_label;

    friend class V8PaymentItem;
};

} // namespace blink

#endif // PaymentItem_h