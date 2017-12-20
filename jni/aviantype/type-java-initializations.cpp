bootJavaClass(t, Gc::JobjectType, -1, "java/lang/Object", 12, bootMethod);
bootJavaClass(t, Gc::ThrowableType, Gc::JobjectType, "java/lang/Throwable", 23, bootMethod);
bootJavaClass(t, Gc::ErrorType, Gc::ThrowableType, "java/lang/Error", -1, bootMethod);
bootJavaClass(t, Gc::LinkageErrorType, Gc::ErrorType, "java/lang/LinkageError", -1, bootMethod);
bootJavaClass(t, Gc::IncompatibleClassChangeErrorType, Gc::LinkageErrorType, "java/lang/IncompatibleClassChangeError", -1, bootMethod);
bootJavaClass(t, Gc::AbstractMethodErrorType, Gc::IncompatibleClassChangeErrorType, "java/lang/AbstractMethodError", -1, bootMethod);
bootJavaClass(t, Gc::AddendumType, Gc::JobjectType, "avian/Addendum", -1, bootMethod);
bootJavaClass(t, Gc::ExceptionType, Gc::ThrowableType, "java/lang/Exception", -1, bootMethod);
bootJavaClass(t, Gc::RuntimeExceptionType, Gc::ExceptionType, "java/lang/RuntimeException", -1, bootMethod);
bootJavaClass(t, Gc::ArithmeticExceptionType, Gc::RuntimeExceptionType, "java/lang/ArithmeticException", -1, bootMethod);
bootJavaClass(t, Gc::IndexOutOfBoundsExceptionType, Gc::RuntimeExceptionType, "java/lang/IndexOutOfBoundsException", -1, bootMethod);
bootJavaClass(t, Gc::ArrayIndexOutOfBoundsExceptionType, Gc::IndexOutOfBoundsExceptionType, "java/lang/ArrayIndexOutOfBoundsException", -1, bootMethod);
bootJavaClass(t, Gc::ArrayStoreExceptionType, Gc::RuntimeExceptionType, "java/lang/ArrayStoreException", -1, bootMethod);
bootJavaClass(t, Gc::BooleanType, Gc::JobjectType, "java/lang/Boolean", 15, bootMethod);
bootJavaClass(t, Gc::BooleanArrayType, Gc::JobjectType, "[Z", -1, bootMethod);
bootJavaClass(t, Gc::NumberType, Gc::JobjectType, "java/lang/Number", 18, bootMethod);
bootJavaClass(t, Gc::ByteType, Gc::NumberType, "java/lang/Byte", 20, bootMethod);
bootJavaClass(t, Gc::ByteArrayType, Gc::JobjectType, "[B", -1, bootMethod);
bootJavaClass(t, Gc::CallSiteType, Gc::JobjectType, "java/lang/invoke/CallSite", -1, bootMethod);
bootJavaClass(t, Gc::CharType, Gc::JobjectType, "java/lang/Character", 15, bootMethod);
bootJavaClass(t, Gc::CharArrayType, Gc::JobjectType, "[C", -1, bootMethod);
bootJavaClass(t, Gc::ClassType, Gc::JobjectType, "avian/VMClass", -1, bootMethod);
bootJavaClass(t, Gc::ClassAddendumType, Gc::AddendumType, "avian/ClassAddendum", -1, bootMethod);
bootJavaClass(t, Gc::ClassCastExceptionType, Gc::RuntimeExceptionType, "java/lang/ClassCastException", -1, bootMethod);
bootJavaClass(t, Gc::ClassLoaderType, Gc::JobjectType, "java/lang/ClassLoader", 30, bootMethod);
bootJavaClass(t, Gc::ClassNotFoundExceptionType, Gc::ExceptionType, "java/lang/ClassNotFoundException", 24, bootMethod);
bootJavaClass(t, Gc::CleanerType, Gc::JobjectType, "sun/misc/Cleaner", -1, bootMethod);
bootJavaClass(t, Gc::CloneNotSupportedExceptionType, Gc::ExceptionType, "java/lang/CloneNotSupportedException", -1, bootMethod);
bootJavaClass(t, Gc::CloneableType, Gc::JobjectType, "java/lang/Cloneable", -1, bootMethod);
bootJavaClass(t, Gc::CodeType, Gc::JobjectType, "avian/Code", -1, bootMethod);
bootJavaClass(t, Gc::ConstantPoolType, Gc::JobjectType, "sun/reflect/ConstantPool", -1, bootMethod);
bootJavaClass(t, Gc::ContinuationType, Gc::JobjectType, "avian/Continuations$Continuation", 14, bootMethod);
bootJavaClass(t, Gc::DoubleType, Gc::NumberType, "java/lang/Double", 20, bootMethod);
bootJavaClass(t, Gc::DoubleArrayType, Gc::JobjectType, "[D", -1, bootMethod);
bootJavaClass(t, Gc::ExceptionInInitializerErrorType, Gc::ErrorType, "java/lang/ExceptionInInitializerError", -1, bootMethod);
bootJavaClass(t, Gc::FieldType, Gc::JobjectType, "avian/VMField", -1, bootMethod);
bootJavaClass(t, Gc::FieldAddendumType, Gc::AddendumType, "avian/FieldAddendum", -1, bootMethod);
bootJavaClass(t, Gc::IoExceptionType, Gc::ExceptionType, "java/io/IOException", -1, bootMethod);
bootJavaClass(t, Gc::FileNotFoundExceptionType, Gc::IoExceptionType, "java/io/FileNotFoundException", -1, bootMethod);
bootJavaClass(t, Gc::FloatType, Gc::NumberType, "java/lang/Float", 20, bootMethod);
bootJavaClass(t, Gc::FloatArrayType, Gc::JobjectType, "[F", -1, bootMethod);
bootJavaClass(t, Gc::IllegalArgumentExceptionType, Gc::RuntimeExceptionType, "java/lang/IllegalArgumentException", -1, bootMethod);
bootJavaClass(t, Gc::IllegalMonitorStateExceptionType, Gc::RuntimeExceptionType, "java/lang/IllegalMonitorStateException", -1, bootMethod);
bootJavaClass(t, Gc::IllegalStateExceptionType, Gc::RuntimeExceptionType, "java/lang/IllegalStateException", -1, bootMethod);
bootJavaClass(t, Gc::IncompatibleContinuationExceptionType, Gc::ExceptionType, "avian/IncompatibleContinuationException", -1, bootMethod);
bootJavaClass(t, Gc::InnerClassReferenceType, Gc::JobjectType, "avian/InnerClassReference", -1, bootMethod);
bootJavaClass(t, Gc::IntType, Gc::NumberType, "java/lang/Integer", 20, bootMethod);
bootJavaClass(t, Gc::IntArrayType, Gc::JobjectType, "[I", -1, bootMethod);
bootJavaClass(t, Gc::InterruptedExceptionType, Gc::ExceptionType, "java/lang/InterruptedException", -1, bootMethod);
bootJavaClass(t, Gc::InvocationTargetExceptionType, Gc::ExceptionType, "java/lang/reflect/InvocationTargetException", 24, bootMethod);
bootJavaClass(t, Gc::JaccessibleObjectType, Gc::JobjectType, "java/lang/reflect/AccessibleObject", 15, bootMethod);
bootJavaClass(t, Gc::JclassType, Gc::JobjectType, "java/lang/Class", 64, bootMethod);
bootJavaClass(t, Gc::JconstructorType, Gc::JaccessibleObjectType, "java/lang/reflect/Constructor", 25, bootMethod);
bootJavaClass(t, Gc::JfieldType, Gc::JaccessibleObjectType, "java/lang/reflect/Field", 42, bootMethod);
bootJavaClass(t, Gc::JmethodType, Gc::JaccessibleObjectType, "java/lang/reflect/Method", 28, bootMethod);
bootJavaClass(t, Gc::JreferenceType, Gc::JobjectType, "java/lang/ref/Reference", 16, bootMethod);
bootJavaClass(t, Gc::LongType, Gc::NumberType, "java/lang/Long", 20, bootMethod);
bootJavaClass(t, Gc::LongArrayType, Gc::JobjectType, "[J", -1, bootMethod);
bootJavaClass(t, Gc::LookupType, Gc::JobjectType, "java/lang/invoke/MethodHandles$Lookup", 12, bootMethod);
bootJavaClass(t, Gc::MethodType, Gc::JobjectType, "avian/VMMethod", 13, bootMethod);
bootJavaClass(t, Gc::MethodAddendumType, Gc::AddendumType, "avian/MethodAddendum", -1, bootMethod);
bootJavaClass(t, Gc::MethodHandleType, Gc::JobjectType, "java/lang/invoke/MethodHandle", 13, bootMethod);
bootJavaClass(t, Gc::MethodTypeType, Gc::JobjectType, "java/lang/invoke/MethodType", 18, bootMethod);
bootJavaClass(t, Gc::NegativeArraySizeExceptionType, Gc::RuntimeExceptionType, "java/lang/NegativeArraySizeException", -1, bootMethod);
bootJavaClass(t, Gc::NoClassDefFoundErrorType, Gc::LinkageErrorType, "java/lang/NoClassDefFoundError", -1, bootMethod);
bootJavaClass(t, Gc::NoSuchFieldErrorType, Gc::IncompatibleClassChangeErrorType, "java/lang/NoSuchFieldError", -1, bootMethod);
bootJavaClass(t, Gc::NoSuchMethodErrorType, Gc::IncompatibleClassChangeErrorType, "java/lang/NoSuchMethodError", -1, bootMethod);
bootJavaClass(t, Gc::NullPointerExceptionType, Gc::RuntimeExceptionType, "java/lang/NullPointerException", -1, bootMethod);
bootJavaClass(t, Gc::VirtualMachineErrorType, Gc::ErrorType, "java/lang/VirtualMachineError", -1, bootMethod);
bootJavaClass(t, Gc::OutOfMemoryErrorType, Gc::VirtualMachineErrorType, "java/lang/OutOfMemoryError", -1, bootMethod);
bootJavaClass(t, Gc::PairType, Gc::JobjectType, "avian/Pair", -1, bootMethod);
bootJavaClass(t, Gc::PhantomReferenceType, Gc::JreferenceType, "java/lang/ref/PhantomReference", 16, bootMethod);
bootJavaClass(t, Gc::ReferenceQueueType, Gc::JobjectType, "java/lang/ref/ReferenceQueue", 14, bootMethod);
bootJavaClass(t, Gc::ReflectiveOperationExceptionType, Gc::ExceptionType, "java/lang/ReflectiveOperationException", -1, bootMethod);
bootJavaClass(t, Gc::SerializableType, Gc::JobjectType, "java/io/Serializable", -1, bootMethod);
bootJavaClass(t, Gc::ShortType, Gc::NumberType, "java/lang/Short", 20, bootMethod);
bootJavaClass(t, Gc::ShortArrayType, Gc::JobjectType, "[S", -1, bootMethod);
bootJavaClass(t, Gc::SingletonType, Gc::JobjectType, "avian/Singleton", -1, bootMethod);
bootJavaClass(t, Gc::SoftReferenceType, Gc::JreferenceType, "java/lang/ref/SoftReference", -1, bootMethod);
bootJavaClass(t, Gc::StackOverflowErrorType, Gc::VirtualMachineErrorType, "java/lang/StackOverflowError", -1, bootMethod);
bootJavaClass(t, Gc::StackTraceElementType, Gc::JobjectType, "java/lang/StackTraceElement", 17, bootMethod);
bootJavaClass(t, Gc::StringType, Gc::JobjectType, "java/lang/String", 57, bootMethod);
bootJavaClass(t, Gc::SystemClassLoaderType, Gc::ClassLoaderType, "avian/SystemClassLoader", 30, bootMethod);
bootJavaClass(t, Gc::ThreadType, Gc::JobjectType, "java/lang/Thread", 35, bootMethod);
bootJavaClass(t, Gc::ThreadGroupType, Gc::JobjectType, "java/lang/ThreadGroup", 20, bootMethod);
bootJavaClass(t, Gc::UnsatisfiedLinkErrorType, Gc::LinkageErrorType, "java/lang/UnsatisfiedLinkError", -1, bootMethod);
bootJavaClass(t, Gc::UnwindResultType, Gc::JobjectType, "avian/Continuations$UnwindResult", -1, bootMethod);
bootJavaClass(t, Gc::WeakReferenceType, Gc::JreferenceType, "java/lang/ref/WeakReference", -1, bootMethod);

