/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class file_engine_dllInterface_ResultPipe */

#ifndef _Included_file_engine_dllInterface_ResultPipe
#define _Included_file_engine_dllInterface_ResultPipe
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     file_engine_dllInterface_ResultPipe
 * Method:    getResult
 * Signature: (CLjava/lang/String;II)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_file_engine_dllInterface_ResultPipe_getResult
  (JNIEnv *, jobject, jchar, jstring, jint, jint);

/*
 * Class:     file_engine_dllInterface_ResultPipe
 * Method:    closeAllSharedMemory
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_ResultPipe_closeAllSharedMemory
  (JNIEnv *, jobject);

/*
 * Class:     file_engine_dllInterface_ResultPipe
 * Method:    isComplete
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_file_engine_dllInterface_ResultPipe_isComplete
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif