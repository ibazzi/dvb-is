/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_czentral_dvb_io_NativeDVBIO */

#ifndef _Included_org_czentral_dvb_io_NativeDVBIO
#define _Included_org_czentral_dvb_io_NativeDVBIO
#ifdef __cplusplus
extern "C" {
#endif
#undef org_czentral_dvb_io_NativeDVBIO_SKIP_BUFFER_SIZE
#define org_czentral_dvb_io_NativeDVBIO_SKIP_BUFFER_SIZE 2048L
/*
 * Class:     org_czentral_dvb_io_NativeDVBIO
 * Method:    open
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_czentral_dvb_io_NativeDVBIO_open
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_czentral_dvb_io_NativeDVBIO
 * Method:    available
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_czentral_dvb_io_NativeDVBIO_available
  (JNIEnv *, jobject);

/*
 * Class:     org_czentral_dvb_io_NativeDVBIO
 * Method:    isSignalPresent
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_czentral_dvb_io_NativeDVBIO_isSignalPresent
  (JNIEnv *, jobject);

/*
 * Class:     org_czentral_dvb_io_NativeDVBIO
 * Method:    isSignalLocked
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_czentral_dvb_io_NativeDVBIO_isSignalLocked
  (JNIEnv *, jobject);

/*
 * Class:     org_czentral_dvb_io_NativeDVBIO
 * Method:    getSignalStrength
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_czentral_dvb_io_NativeDVBIO_getSignalStrength
  (JNIEnv *, jobject);

/*
 * Class:     org_czentral_dvb_io_NativeDVBIO
 * Method:    getSignalQuality
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_czentral_dvb_io_NativeDVBIO_getSignalQuality
  (JNIEnv *, jobject);

/*
 * Class:     org_czentral_dvb_io_NativeDVBIO
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_czentral_dvb_io_NativeDVBIO_close
  (JNIEnv *, jobject);

/*
 * Class:     org_czentral_dvb_io_NativeDVBIO
 * Method:    read
 * Signature: ([BII)I
 */
JNIEXPORT jint JNICALL Java_org_czentral_dvb_io_NativeDVBIO_read
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     org_czentral_dvb_io_NativeDVBIO
 * Method:    listDevices
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_czentral_dvb_io_NativeDVBIO_listDevices
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
