/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7 */

#ifndef _Included_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
#define _Included_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
 * Method:    getVersionInfo
 * Signature: ([I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_00024NativeAPI_1r7_getVersionInfo
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
 * Method:    getBuildInfo
 * Signature: (Ljava/util/Map;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_00024NativeAPI_1r7_getBuildInfo
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
 * Method:    setLoggingHandler
 * Signature: (Lcom/muldersoft/dynaudnorm/JDynamicAudioNormalizer/Logger;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_00024NativeAPI_1r7_setLoggingHandler
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
 * Method:    createInstance
 * Signature: (IIIIDDDDZZZ)I
 */
JNIEXPORT jint JNICALL Java_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_00024NativeAPI_1r7_createInstance
  (JNIEnv *, jobject, jint, jint, jint, jint, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean, jboolean);

/*
 * Class:     com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
 * Method:    destroyInstance
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_00024NativeAPI_1r7_destroyInstance
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
 * Method:    processInplace
 * Signature: (I[[DJ)J
 */
JNIEXPORT jlong JNICALL Java_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_00024NativeAPI_1r7_processInplace
  (JNIEnv *, jobject, jint, jobjectArray, jlong);

/*
 * Class:     com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
 * Method:    flushBuffer
 * Signature: (I[[D)J
 */
JNIEXPORT jlong JNICALL Java_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_00024NativeAPI_1r7_flushBuffer
  (JNIEnv *, jobject, jint, jobjectArray);

/*
 * Class:     com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
 * Method:    reset
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_00024NativeAPI_1r7_reset
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
 * Method:    getConfiguration
 * Signature: (ILjava/util/Map;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_00024NativeAPI_1r7_getConfiguration
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_NativeAPI_r7
 * Method:    getInternalDelay
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_muldersoft_dynaudnorm_JDynamicAudioNormalizer_00024NativeAPI_1r7_getInternalDelay
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
