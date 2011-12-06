LOCAL_PATH:= $(call my-dir)

#
# legacy-wifi
#

include $(CLEAR_VARS)

LOCAL_SRC_FILES += \
	legacy-wifi.c

LOCAL_MODULE = legacy-wifi
LOCAL_MODULE_TAGS := optional

#LOCAL_LDLIBS += -ldl
LOCAL_SHARED_LIBRARIES := libhardware_legacy

LOCAL_C_INCLUDES:= \
	$(LOCAL_PATH)/ \
	hardware/libhardware_legacy/include

include $(BUILD_EXECUTABLE)
