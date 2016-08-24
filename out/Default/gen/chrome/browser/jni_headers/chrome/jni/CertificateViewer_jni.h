// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/pageinfo/CertificateViewer

#ifndef org_chromium_chrome_browser_pageinfo_CertificateViewer_JNI
#define org_chromium_chrome_browser_pageinfo_CertificateViewer_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kCertificateViewerClassPath[] =
    "org/chromium/chrome/browser/pageinfo/CertificateViewer";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_CertificateViewer_clazz __attribute__((unused)) = 0;
#define CertificateViewer_clazz(env) base::android::LazyGetClass(env, kCertificateViewerClassPath, &g_CertificateViewer_clazz)

}  // namespace

// Step 2: method stubs.

static base::android::ScopedJavaLocalRef<jstring> GetCertIssuedToText(JNIEnv*
    env, const base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertIssuedToText(JNIEnv*
    env, jclass jcaller) {
  return GetCertIssuedToText(env, base::android::JavaParamRef<jclass>(env,
      jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    GetCertInfoCommonNameText(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertInfoCommonNameText(JNIEnv*
    env, jclass jcaller) {
  return GetCertInfoCommonNameText(env, base::android::JavaParamRef<jclass>(env,
      jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    GetCertInfoOrganizationText(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertInfoOrganizationText(JNIEnv*
    env, jclass jcaller) {
  return GetCertInfoOrganizationText(env,
      base::android::JavaParamRef<jclass>(env, jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    GetCertInfoSerialNumberText(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertInfoSerialNumberText(JNIEnv*
    env, jclass jcaller) {
  return GetCertInfoSerialNumberText(env,
      base::android::JavaParamRef<jclass>(env, jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    GetCertInfoOrganizationUnitText(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertInfoOrganizationUnitText(JNIEnv*
    env, jclass jcaller) {
  return GetCertInfoOrganizationUnitText(env,
      base::android::JavaParamRef<jclass>(env, jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring> GetCertIssuedByText(JNIEnv*
    env, const base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertIssuedByText(JNIEnv*
    env, jclass jcaller) {
  return GetCertIssuedByText(env, base::android::JavaParamRef<jclass>(env,
      jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring> GetCertValidityText(JNIEnv*
    env, const base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertValidityText(JNIEnv*
    env, jclass jcaller) {
  return GetCertValidityText(env, base::android::JavaParamRef<jclass>(env,
      jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring> GetCertIssuedOnText(JNIEnv*
    env, const base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertIssuedOnText(JNIEnv*
    env, jclass jcaller) {
  return GetCertIssuedOnText(env, base::android::JavaParamRef<jclass>(env,
      jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring> GetCertExpiresOnText(JNIEnv*
    env, const base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertExpiresOnText(JNIEnv*
    env, jclass jcaller) {
  return GetCertExpiresOnText(env, base::android::JavaParamRef<jclass>(env,
      jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    GetCertFingerprintsText(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertFingerprintsText(JNIEnv*
    env, jclass jcaller) {
  return GetCertFingerprintsText(env, base::android::JavaParamRef<jclass>(env,
      jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    GetCertSHA256FingerprintText(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertSHA256FingerprintText(JNIEnv*
    env, jclass jcaller) {
  return GetCertSHA256FingerprintText(env,
      base::android::JavaParamRef<jclass>(env, jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    GetCertSHA1FingerprintText(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertSHA1FingerprintText(JNIEnv*
    env, jclass jcaller) {
  return GetCertSHA1FingerprintText(env,
      base::android::JavaParamRef<jclass>(env, jcaller)).Release();
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsCertificateViewer[] = {
    { "nativeGetCertIssuedToText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertIssuedToText)
    },
    { "nativeGetCertInfoCommonNameText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertInfoCommonNameText)
    },
    { "nativeGetCertInfoOrganizationText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertInfoOrganizationText)
    },
    { "nativeGetCertInfoSerialNumberText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertInfoSerialNumberText)
    },
    { "nativeGetCertInfoOrganizationUnitText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertInfoOrganizationUnitText)
    },
    { "nativeGetCertIssuedByText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertIssuedByText)
    },
    { "nativeGetCertValidityText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertValidityText)
    },
    { "nativeGetCertIssuedOnText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertIssuedOnText)
    },
    { "nativeGetCertExpiresOnText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertExpiresOnText)
    },
    { "nativeGetCertFingerprintsText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertFingerprintsText)
    },
    { "nativeGetCertSHA256FingerprintText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertSHA256FingerprintText)
    },
    { "nativeGetCertSHA1FingerprintText",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_CertificateViewer_nativeGetCertSHA1FingerprintText)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsCertificateViewerSize =
      arraysize(kMethodsCertificateViewer);

  if (env->RegisterNatives(CertificateViewer_clazz(env),
                           kMethodsCertificateViewer,
                           kMethodsCertificateViewerSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, CertificateViewer_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_pageinfo_CertificateViewer_JNI