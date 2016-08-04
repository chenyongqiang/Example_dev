//
// Created by acer on 2016/8/3.
//

#include <stdio.h>
#include <jni.h>
#include <stdlib.h>
#include "getapkinfo_example_com_getapkinfo_JNIUtils.h"
/* Header for class getapkinfo_example_com_getapkinfo_JNIUtils */

JNIEXPORT jstring JNICALL Java_getapkinfo_example_com_getapkinfo_JNIUtils_getPackname(JNIEnv *env, jclass clazz, jobject obj)
{
    jclass native_class = env->GetObjectClass(obj);
    jmethodID mId = env->GetMethodID(native_class, "getPackageName", "()Ljava/lang/String;");
    jstring packName = static_cast<jstring>(env->CallObjectMethod(obj, mId));
    return packName;
}

JNIEXPORT jstring JNICALL Java_getapkinfo_example_com_getapkinfo_JNIUtils_getSignature(JNIEnv *env, jclass clazz, jobject obj)
{
    jclass native_class = env->GetObjectClass(obj);
    jmethodID pm_id = env->GetMethodID(native_class, "getPackageManager", "()Landroid/content/pm/PackageManager;");
    jobject pm_obj = env->CallObjectMethod(obj, pm_id);
    jclass pm_clazz = env->GetObjectClass(pm_obj);
//
    jmethodID package_info_id = env->GetMethodID(pm_clazz, "getPackageInfo","(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;");
    jstring pkg_str = Java_getapkinfo_example_com_getapkinfo_JNIUtils_getPackname(env, clazz, obj);
//
    jobject pi_obj = env->CallObjectMethod(pm_obj, package_info_id, pkg_str, 64);
//
    jclass pi_clazz = env->GetObjectClass(pi_obj);
//
    jfieldID signatures_fieldId = env->GetFieldID(pi_clazz, "signatures", "[Landroid/content/pm/Signature;");
    jobject signatures_obj = env->GetObjectField(pi_obj, signatures_fieldId);
    jobjectArray signaturesArray = (jobjectArray)signatures_obj;
    jsize size = env->GetArrayLength(signaturesArray);
    jobject signature_obj = env->GetObjectArrayElement(signaturesArray, 0);
    jclass signature_clazz = env->GetObjectClass(signature_obj);
    jmethodID string_id = env->GetMethodID(signature_clazz, "toCharsString", "()Ljava/lang/String;");
    jstring str = static_cast<jstring>(env->CallObjectMethod(signature_obj, string_id));
    char *c_msg = (char*)env->GetStringUTFChars(str,0);

    return str;
}