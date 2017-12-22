NDK_TOOLCHAIN_VERSION = clang
APP_ABI := armeabi-v7a
LOCAL_CPPFLAGS := -std=c++11 -pthread -frtti -fexceptions
APP_STL := gnustl_static
APP_CPPFLAGS := -frtti -std=c++11 -Wno-shift-count-overflow
APP_LDFLAGS := -latomic
cflags += -DAVIAN_TARGET_ARCH=AVIAN_ARCH_ARM -D_FILE_OFFSET_BITS=64 
cflags += -D__DARWIN_UNIX03=1 -D__PROVIDE_FIXMES -D__STDC_FORMAT_MACROS=1 -DTARGET_BYTES_PER_WORD=4 
cflags += -DAVIAN_CLASSPATH=\"/sdcard/classpath.jar\" #bootClasspath 启动时加载
cflags += -DAVIAN_JAVA_HOME=\"\"
cflags += -DAVIAN_EMBED_PREFIX=\"\" #binary 位置
cflags += -DAVIAN_VERSION=\"1.3.0-SNAPSHOT\" #jar version
cflags += -DAVIAN_TARGET_FORMAT=AVIAN_FORMAT_ELF
cflags += -DBOOT_LIBRARY=\"libjvm.so\"
APP_CFLAGS := $(cflags)
APP_OPTIM := debug
