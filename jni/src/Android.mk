LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := jvm
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../aviantype
LOCAL_EXPORT_C_INCLUDES:= $(LOCAL_PATH)/../include
LOCAL_LDLIBS := -lz
LOCAL_LDFLAGS := -fPIC
LOCAL_STATIC_LIBRARIES += expat_static fdlibm_static classpath
LOCAL_SRC_FILES :=  \
					system/posix.cpp \
					system/posix/crash.cpp \
					system/posix/memory.cpp \
					system/posix/signal.cpp \
					finder.cpp \
					machine.cpp \
					util.cpp \
					heap/heap.cpp \
					compile.cpp  \
					classpath-avian.cpp \
					builtin.cpp \
					jnienv.cpp \
					process.cpp \
					heapdump.cpp \
					arm.S \
					codegen/compiler.cpp \
					codegen/compiler/context.cpp \
					codegen/compiler/event.cpp \
					codegen/compiler/frame.cpp \
					codegen/compiler/ir.cpp \
					codegen/compiler/promise.cpp \
					codegen/compiler/read.cpp \
					codegen/compiler/regalloc.cpp \
					codegen/compiler/resource.cpp \
					codegen/compiler/site.cpp \
					codegen/compiler/value.cpp \
					debug-util.cpp \
					codegen/runtime.cpp \
					codegen/targets.cpp \
					util/fixed-allocator.cpp \
					codegen/target/arm/assembler.cpp \
					codegen/target/arm/block.cpp \
					codegen/target/arm/context.cpp \
					codegen/target/arm/fixup.cpp \
					codegen/target/arm/multimethod.cpp \
					codegen/target/arm/operations64.cpp \
					codegen/target/arm/operations32.cpp \
					compile-arm.S \
					heapwalk.cpp 
				

					
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE    := java
LOCAL_LDLIBS := -ldl
LOCAL_LDFLAGS := -fPIC -pie
LOCAL_SRC_FILES := main.cpp
LOCAL_STATIC_LIBRARIES:=jvm
include $(BUILD_EXECUTABLE)
