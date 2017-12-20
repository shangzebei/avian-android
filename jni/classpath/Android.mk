LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := classpath
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../jni/src
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../aviantype
LOCAL_SRC_FILES += \
				java-io.cpp \
				java-lang.cpp \
				java-net.cpp \
				java-util-zip.cpp \
				java-util.cpp


include $(BUILD_STATIC_LIBRARY)