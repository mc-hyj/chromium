// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef AnimationEffectTimingProperties_h
#define AnimationEffectTimingProperties_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "bindings/core/v8/UnrestrictedDoubleOrString.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT AnimationEffectTimingProperties : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    AnimationEffectTimingProperties();
    virtual ~AnimationEffectTimingProperties();

    bool hasDelay() const { return !m_delay.isNull(); }
    double delay() const { return m_delay.get(); }
    void setDelay(double value) { m_delay = value; }

    bool hasDirection() const { return !m_direction.isNull(); }
    String direction() const { return m_direction; }
    void setDirection(String value) { m_direction = value; }

    bool hasDuration() const { return !m_duration.isNull(); }
    const UnrestrictedDoubleOrString& duration() const { return m_duration; }
    void setDuration(const UnrestrictedDoubleOrString& value) { m_duration = value; }

    bool hasEasing() const { return !m_easing.isNull(); }
    String easing() const { return m_easing; }
    void setEasing(String value) { m_easing = value; }

    bool hasEndDelay() const { return !m_endDelay.isNull(); }
    double endDelay() const { return m_endDelay.get(); }
    void setEndDelay(double value) { m_endDelay = value; }

    bool hasFill() const { return !m_fill.isNull(); }
    String fill() const { return m_fill; }
    void setFill(String value) { m_fill = value; }

    bool hasIterationStart() const { return !m_iterationStart.isNull(); }
    double iterationStart() const { return m_iterationStart.get(); }
    void setIterationStart(double value) { m_iterationStart = value; }

    bool hasIterations() const { return !m_iterations.isNull(); }
    double iterations() const { return m_iterations.get(); }
    void setIterations(double value) { m_iterations = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<double> m_delay;
    String m_direction;
    UnrestrictedDoubleOrString m_duration;
    String m_easing;
    Nullable<double> m_endDelay;
    String m_fill;
    Nullable<double> m_iterationStart;
    Nullable<double> m_iterations;

    friend class V8AnimationEffectTimingProperties;
};

} // namespace blink

#endif // AnimationEffectTimingProperties_h