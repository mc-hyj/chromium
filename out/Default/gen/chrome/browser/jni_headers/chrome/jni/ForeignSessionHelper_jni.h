// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/ntp/ForeignSessionHelper

#ifndef org_chromium_chrome_browser_ntp_ForeignSessionHelper_JNI
#define org_chromium_chrome_browser_ntp_ForeignSessionHelper_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kForeignSessionHelperClassPath[] =
    "org/chromium/chrome/browser/ntp/ForeignSessionHelper";
const char kForeignSessionCallbackClassPath[] =
    "org/chromium/chrome/browser/ntp/ForeignSessionHelper$ForeignSessionCallback";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ForeignSessionHelper_clazz __attribute__((unused)) =
    0;
#define ForeignSessionHelper_clazz(env) base::android::LazyGetClass(env, kForeignSessionHelperClassPath, &g_ForeignSessionHelper_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ForeignSessionCallback_clazz __attribute__((unused))
    = 0;
#define ForeignSessionCallback_clazz(env) base::android::LazyGetClass(env, kForeignSessionCallbackClassPath, &g_ForeignSessionCallback_clazz)

}  // namespace

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jclass>&
    jcaller,
    const base::android::JavaParamRef<jobject>& profile);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeInit(JNIEnv*
    env, jclass jcaller,
    jobject profile) {
  return Init(env, base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, profile));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeForeignSessionHelper) {
  ForeignSessionHelper* native =
      reinterpret_cast<ForeignSessionHelper*>(nativeForeignSessionHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeIsTabSyncEnabled(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeForeignSessionHelper) {
  ForeignSessionHelper* native =
      reinterpret_cast<ForeignSessionHelper*>(nativeForeignSessionHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsTabSyncEnabled", false);
  return native->IsTabSyncEnabled(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeTriggerSessionSync(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeForeignSessionHelper) {
  ForeignSessionHelper* native =
      reinterpret_cast<ForeignSessionHelper*>(nativeForeignSessionHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "TriggerSessionSync");
  return native->TriggerSessionSync(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeSetOnForeignSessionCallback(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeForeignSessionHelper,
    jobject callback) {
  ForeignSessionHelper* native =
      reinterpret_cast<ForeignSessionHelper*>(nativeForeignSessionHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetOnForeignSessionCallback");
  return native->SetOnForeignSessionCallback(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, callback));
}

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeGetForeignSessions(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeForeignSessionHelper,
    jobject resultSessions) {
  ForeignSessionHelper* native =
      reinterpret_cast<ForeignSessionHelper*>(nativeForeignSessionHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetForeignSessions", false);
  return native->GetForeignSessions(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, resultSessions));
}

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeOpenForeignSessionTab(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeForeignSessionHelper,
    jobject tab,
    jstring sessionTag,
    jint tabId,
    jint disposition) {
  ForeignSessionHelper* native =
      reinterpret_cast<ForeignSessionHelper*>(nativeForeignSessionHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "OpenForeignSessionTab", false);
  return native->OpenForeignSessionTab(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, tab),
      base::android::JavaParamRef<jstring>(env, sessionTag), tabId,
      disposition);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeDeleteForeignSession(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeForeignSessionHelper,
    jstring sessionTag) {
  ForeignSessionHelper* native =
      reinterpret_cast<ForeignSessionHelper*>(nativeForeignSessionHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "DeleteForeignSession");
  return native->DeleteForeignSession(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, sessionTag));
}

static base::subtle::AtomicWord g_ForeignSessionCallback_onUpdated = 0;
static void Java_ForeignSessionCallback_onUpdated(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ForeignSessionCallback_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ForeignSessionCallback_clazz(env),
      "onUpdated",

"("
")"
"V",
      &g_ForeignSessionCallback_onUpdated);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ForeignSessionHelper_pushSession = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_ForeignSessionHelper_pushSession(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& sessions,
    const base::android::JavaRefOrBare<jstring>& tag,
    const base::android::JavaRefOrBare<jstring>& name,
    JniIntWrapper deviceType,
    jlong modifiedTime) {
  CHECK_CLAZZ(env, ForeignSessionHelper_clazz(env),
      ForeignSessionHelper_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, ForeignSessionHelper_clazz(env),
      "pushSession",

"("
"Ljava/util/List;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"J"
")"
"Lorg/chromium/chrome/browser/ntp/ForeignSessionHelper$ForeignSession;",
      &g_ForeignSessionHelper_pushSession);

  jobject ret =
      env->CallStaticObjectMethod(ForeignSessionHelper_clazz(env),
          method_id, sessions.obj(), tag.obj(), name.obj(), as_jint(deviceType),
              modifiedTime);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_ForeignSessionHelper_pushWindow = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_ForeignSessionHelper_pushWindow(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& session,
    jlong timestamp,
    JniIntWrapper sessionId) {
  CHECK_CLAZZ(env, ForeignSessionHelper_clazz(env),
      ForeignSessionHelper_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, ForeignSessionHelper_clazz(env),
      "pushWindow",

"("
"Lorg/chromium/chrome/browser/ntp/ForeignSessionHelper$ForeignSession;"
"J"
"I"
")"
"Lorg/chromium/chrome/browser/ntp/ForeignSessionHelper$ForeignSessionWindow;",
      &g_ForeignSessionHelper_pushWindow);

  jobject ret =
      env->CallStaticObjectMethod(ForeignSessionHelper_clazz(env),
          method_id, session.obj(), timestamp, as_jint(sessionId));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_ForeignSessionHelper_pushTab = 0;
static void Java_ForeignSessionHelper_pushTab(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& window,
    const base::android::JavaRefOrBare<jstring>& url,
    const base::android::JavaRefOrBare<jstring>& title,
    jlong timestamp,
    JniIntWrapper sessionId) {
  CHECK_CLAZZ(env, ForeignSessionHelper_clazz(env),
      ForeignSessionHelper_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, ForeignSessionHelper_clazz(env),
      "pushTab",

"("
"Lorg/chromium/chrome/browser/ntp/ForeignSessionHelper$ForeignSessionWindow;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"J"
"I"
")"
"V",
      &g_ForeignSessionHelper_pushTab);

     env->CallStaticVoidMethod(ForeignSessionHelper_clazz(env),
          method_id, window.obj(), url.obj(), title.obj(), timestamp,
              as_jint(sessionId));
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsForeignSessionHelper[] = {
    { "nativeInit",
"("
"Lorg/chromium/chrome/browser/profiles/Profile;"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeDestroy)
    },
    { "nativeIsTabSyncEnabled",
"("
"J"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeIsTabSyncEnabled)
    },
    { "nativeTriggerSessionSync",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeTriggerSessionSync)
    },
    { "nativeSetOnForeignSessionCallback",
"("
"J"
"Lorg/chromium/chrome/browser/ntp/ForeignSessionHelper$ForeignSessionCallback;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeSetOnForeignSessionCallback)
    },
    { "nativeGetForeignSessions",
"("
"J"
"Ljava/util/List;"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeGetForeignSessions)
    },
    { "nativeOpenForeignSessionTab",
"("
"J"
"Lorg/chromium/chrome/browser/tab/Tab;"
"Ljava/lang/String;"
"I"
"I"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeOpenForeignSessionTab)
    },
    { "nativeDeleteForeignSession",
"("
"J"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ntp_ForeignSessionHelper_nativeDeleteForeignSession)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsForeignSessionHelperSize =
      arraysize(kMethodsForeignSessionHelper);

  if (env->RegisterNatives(ForeignSessionHelper_clazz(env),
                           kMethodsForeignSessionHelper,
                           kMethodsForeignSessionHelperSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ForeignSessionHelper_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_ntp_ForeignSessionHelper_JNI