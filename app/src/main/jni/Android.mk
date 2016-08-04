LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := JNI_ANDROID
LOCAL_SRC_FILES =: getapkinfo_example_com_getapkinfo_JNIUtils.cpp
include $(BUILD_SHARED_LIBRARY)