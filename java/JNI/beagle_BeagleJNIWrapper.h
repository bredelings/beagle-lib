/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class beagle_BeagleJNIWrapper */

#ifndef _Included_beagle_BeagleJNIWrapper
#define _Included_beagle_BeagleJNIWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    initialize
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_initialize
  (JNIEnv *, jobject, jint, jint, jint, jint, jint);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_finalize
  (JNIEnv *, jobject);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    setTipPartials
 * Signature: (I[D)V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_setTipPartials
  (JNIEnv *, jobject, jint, jdoubleArray);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    setTipStates
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_setTipStates
  (JNIEnv *, jobject, jint, jintArray);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    setStateFrequencies
 * Signature: ([D)V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_setStateFrequencies
  (JNIEnv *, jobject, jdoubleArray);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    setEigenDecomposition
 * Signature: (I[[D[[D[D)V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_setEigenDecomposition
  (JNIEnv *, jobject, jint, jobjectArray, jobjectArray, jdoubleArray);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    setCategoryRates
 * Signature: ([D)V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_setCategoryRates
  (JNIEnv *, jobject, jdoubleArray);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    setCategoryProportions
 * Signature: ([D)V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_setCategoryProportions
  (JNIEnv *, jobject, jdoubleArray);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    calculateProbabilityTransitionMatrices
 * Signature: ([I[DI)V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_calculateProbabilityTransitionMatrices
  (JNIEnv *, jobject, jintArray, jdoubleArray, jint);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    calculatePartials
 * Signature: ([I[II)V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_calculatePartials
  (JNIEnv *, jobject, jintArray, jintArray, jint);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    calculateLogLikelihoods
 * Signature: (I[D)V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_calculateLogLikelihoods
  (JNIEnv *, jobject, jint, jdoubleArray);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    storeState
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_storeState
  (JNIEnv *, jobject);

/*
 * Class:     beagle_BeagleJNIWrapper
 * Method:    restoreState
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_beagle_BeagleJNIWrapper_restoreState
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif