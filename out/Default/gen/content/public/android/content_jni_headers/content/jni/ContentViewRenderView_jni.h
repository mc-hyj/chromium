// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/ContentViewRenderView

#ifndef org_chromium_content_browser_ContentViewRenderView_JNI
#define org_chromium_content_browser_ContentViewRenderView_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kContentViewRenderViewClassPath[] =
    "org/chromium/content/browser/ContentViewRenderView";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ContentViewRenderView_clazz __attribute__((unused)) =
    0;
#define ContentViewRenderView_clazz(env) base::android::LazyGetClass(env, kContentViewRenderViewClassPath, &g_ContentViewRenderView_clazz)

}  // namespace

namespace content {

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    jlong rootWindowNativePointer);

extern "C" __attribute__((visibility("default")))
jlong Java_org_chromium_content_browser_ContentViewRenderView_nativeInit(JNIEnv*
    env, jobject jcaller,
    jlong rootWindowNativePointer) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller),
      rootWindowNativePointer);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_content_browser_ContentViewRenderView_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContentViewRenderView) {
  ContentViewRenderView* native =
      reinterpret_cast<ContentViewRenderView*>(nativeContentViewRenderView);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_content_browser_ContentViewRenderView_nativeSetCurrentWebContents(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContentViewRenderView,
    jobject webContents) {
  ContentViewRenderView* native =
      reinterpret_cast<ContentViewRenderView*>(nativeContentViewRenderView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetCurrentWebContents");
  return native->SetCurrentWebContents(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_content_browser_ContentViewRenderView_nativeSurfaceCreated(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContentViewRenderView) {
  ContentViewRenderView* native =
      reinterpret_cast<ContentViewRenderView*>(nativeContentViewRenderView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SurfaceCreated");
  return native->SurfaceCreated(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_content_browser_ContentViewRenderView_nativeSurfaceDestroyed(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContentViewRenderView) {
  ContentViewRenderView* native =
      reinterpret_cast<ContentViewRenderView*>(nativeContentViewRenderView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SurfaceDestroyed");
  return native->SurfaceDestroyed(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_content_browser_ContentViewRenderView_nativeSurfaceChanged(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContentViewRenderView,
    jint format,
    jint width,
    jint height,
    jobject surface) {
  ContentViewRenderView* native =
      reinterpret_cast<ContentViewRenderView*>(nativeContentViewRenderView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SurfaceChanged");
  return native->SurfaceChanged(env, base::android::JavaParamRef<jobject>(env,
      jcaller), format, width, height, base::android::JavaParamRef<jobject>(env,
      surface));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_content_browser_ContentViewRenderView_nativeSetOverlayVideoMode(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContentViewRenderView,
    jboolean enabled) {
  ContentViewRenderView* native =
      reinterpret_cast<ContentViewRenderView*>(nativeContentViewRenderView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetOverlayVideoMode");
  return native->SetOverlayVideoMode(env,
      base::android::JavaParamRef<jobject>(env, jcaller), enabled);
}

static base::subtle::AtomicWord g_ContentViewRenderView_onSwapBuffersCompleted =
    0;
static void Java_ContentViewRenderView_onSwapBuffersCompleted(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ContentViewRenderView_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ContentViewRenderView_clazz(env),
      "onSwapBuffersCompleted",

"("
")"
"V",
      &g_ContentViewRenderView_onSwapBuffersCompleted);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsContentViewRenderView[] = {
    { "nativeInit",
"("
"J"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_ContentViewRenderView_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_ContentViewRenderView_nativeDestroy)
    },
    { "nativeSetCurrentWebContents",
"("
"J"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_ContentViewRenderView_nativeSetCurrentWebContents)
    },
    { "nativeSurfaceCreated",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_ContentViewRenderView_nativeSurfaceCreated)
    },
    { "nativeSurfaceDestroyed",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_ContentViewRenderView_nativeSurfaceDestroyed)
    },
    { "nativeSurfaceChanged",
"("
"J"
"I"
"I"
"I"
"Landroid/view/Surface;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_ContentViewRenderView_nativeSurfaceChanged)
    },
    { "nativeSetOverlayVideoMode",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_ContentViewRenderView_nativeSetOverlayVideoMode)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsContentViewRenderViewSize =
      arraysize(kMethodsContentViewRenderView);

  if (env->RegisterNatives(ContentViewRenderView_clazz(env),
                           kMethodsContentViewRenderView,
                           kMethodsContentViewRenderViewSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ContentViewRenderView_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace content

#endif  // org_chromium_content_browser_ContentViewRenderView_JNI