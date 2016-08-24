// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/prerender/ExternalPrerenderHandler

#ifndef org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_JNI
#define org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kExternalPrerenderHandlerClassPath[] =
    "org/chromium/chrome/browser/prerender/ExternalPrerenderHandler";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ExternalPrerenderHandler_clazz
    __attribute__((unused)) = 0;
#define ExternalPrerenderHandler_clazz(env) base::android::LazyGetClass(env, kExternalPrerenderHandlerClassPath, &g_ExternalPrerenderHandler_clazz)

}  // namespace

namespace prerender {

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jclass>&
    jcaller);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_nativeInit(JNIEnv*
    env, jclass jcaller) {
  return Init(env, base::android::JavaParamRef<jclass>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_nativeAddPrerender(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeExternalPrerenderHandlerAndroid,
    jobject profile,
    jobject webContents,
    jstring url,
    jstring referrer,
    jint top,
    jint left,
    jint bottom,
    jint right,
    jboolean prerenderOnCellular) {
  ExternalPrerenderHandlerAndroid* native =
      reinterpret_cast<ExternalPrerenderHandlerAndroid*>(nativeExternalPrerenderHandlerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "AddPrerender", false);
  return native->AddPrerender(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, profile),
      base::android::JavaParamRef<jobject>(env, webContents),
      base::android::JavaParamRef<jstring>(env, url),
      base::android::JavaParamRef<jstring>(env, referrer), top, left, bottom,
      right, prerenderOnCellular);
}

static jboolean HasPrerenderedUrl(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& profile,
    const base::android::JavaParamRef<jstring>& url,
    const base::android::JavaParamRef<jobject>& webContents);

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_nativeHasPrerenderedUrl(JNIEnv*
    env, jclass jcaller,
    jobject profile,
    jstring url,
    jobject webContents) {
  return HasPrerenderedUrl(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, profile),
      base::android::JavaParamRef<jstring>(env, url),
      base::android::JavaParamRef<jobject>(env, webContents));
}

static jboolean HasPrerenderedAndFinishedLoadingUrl(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& profile,
    const base::android::JavaParamRef<jstring>& url,
    const base::android::JavaParamRef<jobject>& webContents);

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_nativeHasPrerenderedAndFinishedLoadingUrl(JNIEnv*
    env, jclass jcaller,
    jobject profile,
    jstring url,
    jobject webContents) {
  return HasPrerenderedAndFinishedLoadingUrl(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, profile),
      base::android::JavaParamRef<jstring>(env, url),
      base::android::JavaParamRef<jobject>(env, webContents));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_nativeCancelCurrentPrerender(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeExternalPrerenderHandlerAndroid) {
  ExternalPrerenderHandlerAndroid* native =
      reinterpret_cast<ExternalPrerenderHandlerAndroid*>(nativeExternalPrerenderHandlerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CancelCurrentPrerender");
  return native->CancelCurrentPrerender(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsExternalPrerenderHandler[] = {
    { "nativeInit",
"("
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_nativeInit)
    },
    { "nativeAddPrerender",
"("
"J"
"Lorg/chromium/chrome/browser/profiles/Profile;"
"Lorg/chromium/content_public/browser/WebContents;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"I"
"I"
"I"
"Z"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_nativeAddPrerender)
    },
    { "nativeHasPrerenderedUrl",
"("
"Lorg/chromium/chrome/browser/profiles/Profile;"
"Ljava/lang/String;"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_nativeHasPrerenderedUrl)
    },
    { "nativeHasPrerenderedAndFinishedLoadingUrl",
"("
"Lorg/chromium/chrome/browser/profiles/Profile;"
"Ljava/lang/String;"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_nativeHasPrerenderedAndFinishedLoadingUrl)
    },
    { "nativeCancelCurrentPrerender",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_nativeCancelCurrentPrerender)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsExternalPrerenderHandlerSize =
      arraysize(kMethodsExternalPrerenderHandler);

  if (env->RegisterNatives(ExternalPrerenderHandler_clazz(env),
                           kMethodsExternalPrerenderHandler,
                           kMethodsExternalPrerenderHandlerSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ExternalPrerenderHandler_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace prerender

#endif  // org_chromium_chrome_browser_prerender_ExternalPrerenderHandler_JNI