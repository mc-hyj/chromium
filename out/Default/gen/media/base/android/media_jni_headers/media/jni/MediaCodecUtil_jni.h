// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/MediaCodecUtil

#ifndef org_chromium_media_MediaCodecUtil_JNI
#define org_chromium_media_MediaCodecUtil_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kMediaCodecUtilClassPath[] = "org/chromium/media/MediaCodecUtil";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_MediaCodecUtil_clazz __attribute__((unused)) = 0;
#define MediaCodecUtil_clazz(env) base::android::LazyGetClass(env, kMediaCodecUtilClassPath, &g_MediaCodecUtil_clazz)

}  // namespace

namespace media {

// Step 2: method stubs.

static base::subtle::AtomicWord g_MediaCodecUtil_getDefaultCodecName = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_MediaCodecUtil_getDefaultCodecName(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& mime,
    JniIntWrapper direction,
    jboolean requireSoftwareCodec) {
  CHECK_CLAZZ(env, MediaCodecUtil_clazz(env),
      MediaCodecUtil_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaCodecUtil_clazz(env),
      "getDefaultCodecName",

"("
"Ljava/lang/String;"
"I"
"Z"
")"
"Ljava/lang/String;",
      &g_MediaCodecUtil_getDefaultCodecName);

  jstring ret =
static_cast<jstring>(env->CallStaticObjectMethod(MediaCodecUtil_clazz(env),
          method_id, mime.obj(), as_jint(direction), requireSoftwareCodec));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecUtil_getEncoderColorFormatsForMime =
    0;
static base::android::ScopedJavaLocalRef<jintArray>
    Java_MediaCodecUtil_getEncoderColorFormatsForMime(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& mime) {
  CHECK_CLAZZ(env, MediaCodecUtil_clazz(env),
      MediaCodecUtil_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaCodecUtil_clazz(env),
      "getEncoderColorFormatsForMime",

"("
"Ljava/lang/String;"
")"
"[I",
      &g_MediaCodecUtil_getEncoderColorFormatsForMime);

  jintArray ret =
static_cast<jintArray>(env->CallStaticObjectMethod(MediaCodecUtil_clazz(env),
          method_id, mime.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jintArray>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecUtil_canDecode = 0;
static jboolean Java_MediaCodecUtil_canDecode(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& mime,
    jboolean isSecure) {
  CHECK_CLAZZ(env, MediaCodecUtil_clazz(env),
      MediaCodecUtil_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaCodecUtil_clazz(env),
      "canDecode",

"("
"Ljava/lang/String;"
"Z"
")"
"Z",
      &g_MediaCodecUtil_canDecode);

  jboolean ret =
      env->CallStaticBooleanMethod(MediaCodecUtil_clazz(env),
          method_id, mime.obj(), isSecure);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecUtil_isDecoderSupportedForDevice =
    0;
static jboolean Java_MediaCodecUtil_isDecoderSupportedForDevice(JNIEnv* env,
    const base::android::JavaRefOrBare<jstring>& mime) {
  CHECK_CLAZZ(env, MediaCodecUtil_clazz(env),
      MediaCodecUtil_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaCodecUtil_clazz(env),
      "isDecoderSupportedForDevice",

"("
"Ljava/lang/String;"
")"
"Z",
      &g_MediaCodecUtil_isDecoderSupportedForDevice);

  jboolean ret =
      env->CallStaticBooleanMethod(MediaCodecUtil_clazz(env),
          method_id, mime.obj());
  jni_generator::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

}  // namespace media

#endif  // org_chromium_media_MediaCodecUtil_JNI