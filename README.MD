### use 
before you build ,you must set the NDK in path
```
git clone git clone --recursive https://github.com/shangzebei/avian-android.git
cd avian-android
ndk-build
```
#### Application.mk
notice the DAVIAN_CLASSPATH
```
NDK_TOOLCHAIN_VERSION = clang
APP_ABI := armeabi-v7a
LOCAL_CPPFLAGS := -std=c++11 -pthread -frtti -fexceptions
APP_STL := gnustl_static
APP_CPPFLAGS := -frtti -std=c++11 -Wno-shift-count-overflow
APP_LDFLAGS := -latomic
cflags += -DAVIAN_TARGET_ARCH=AVIAN_ARCH_ARM -D_FILE_OFFSET_BITS=64 
cflags += -D__DARWIN_UNIX03=1 -D__PROVIDE_FIXMES -D__STDC_FORMAT_MACROS=1 -DTARGET_BYTES_PER_WORD=4 
cflags += -DAVIAN_CLASSPATH=\"/sdcard/classpath.jar\" #bootClasspath
cflags += -DAVIAN_JAVA_HOME=\"\"
cflags += -DAVIAN_EMBED_PREFIX=\"\" #binary
cflags += -DAVIAN_VERSION=\"1.3.0-SNAPSHOT\" #jar version
cflags += -DAVIAN_TARGET_FORMAT=AVIAN_FORMAT_ELF
cflags += -DBOOT_LIBRARY=\"libjvm.so\"
cflags += -marm -ftree-vectorize -ffast-math -mfloat-abi=softfp
APP_CFLAGS := $(cflags)
APP_OPTIM := debug
```
### use
```
adb push classpath.jar /sdcard/classpath.jar
adb push .\libs\armeabi-v7a\libjvm.so /data/tmp/libjvm.so
adb push .\libs\armeabi-v7a\java /data/tmp/java
adb shell
cd /data/tmp
export LD_LIBRARY_PATH=/data/tmp
./java
```