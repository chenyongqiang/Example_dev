//
// Created by acer on 2016/8/3.
//

#include "getapkinfo_example_com_getapkinfo_JNIUtils.h"
/* Header for class getapkinfo_example_com_getapkinfo_JNIUtils */

JNIEXPORT jstring JNICALL Java_getapkinfo_example_com_getapkinfo_JNIUtils_getPackname(JNIEnv *env, jobject obj)
{
    //return (*env)->NewStringUTF(env,"NDK ok");
    return env->NewStringUTF((char *)"Hello from JNI !");
}
