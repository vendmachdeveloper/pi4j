/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_jni_Serial.h  
 * 
 * This file is part of the Pi4J project. More information about 
 * this project can be found here:  http://www.pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2015 Pi4J
 * %%
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * #L%
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_jni_Serial */

#ifndef _Included_com_pi4j_jni_Serial
#define _Included_com_pi4j_jni_Serial
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pi4j_jni_Serial
 * Method:    open
 * Signature: (Ljava/lang/String;IIIII)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_Serial_open
  (JNIEnv *, jclass, jstring, jint, jint, jint, jint, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_close
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    discardInput
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_discardInput
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    discardOutput
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_discardOutput
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    discardAll
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_discardAll
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    flush
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_flush
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    sendBreak
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_sendBreak
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    setBreak
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_setBreak
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    setRTS
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_setRTS
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    setDTR
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_setDTR
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    getRTS
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_jni_Serial_getRTS
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    getDTR
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_jni_Serial_getDTR
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    getCTS
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_jni_Serial_getCTS
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    getDSR
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_jni_Serial_getDSR
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    getRI
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_jni_Serial_getRI
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    getCD
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_jni_Serial_getCD
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    echo
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_echo
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    available
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_Serial_available
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    read
 * Signature: (I)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_pi4j_jni_Serial_read__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    read
 * Signature: (II)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_pi4j_jni_Serial_read__II
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_jni_Serial
 * Method:    write
 * Signature: (I[BJ)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_jni_Serial_write
  (JNIEnv *, jclass, jint, jbyteArray, jlong);

#ifdef __cplusplus
}
#endif
#endif
