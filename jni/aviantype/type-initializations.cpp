{
  bootClass(t, Gc::IntArrayType, Gc::JobjectType, 0, 8, 4, 12);
}
{
  uint32_t mask[1] = {131049};
  bootClass(t, Gc::ClassType, Gc::JobjectType, mask, 72, 4, 12);
}
{
  bootClass(t, Gc::JobjectType, -1, 0, 4, 0, 12);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ThrowableType, Gc::JobjectType, mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ErrorType, Gc::ThrowableType, mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::LinkageErrorType, Gc::ErrorType, mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::IncompatibleClassChangeErrorType, Gc::LinkageErrorType, mask,
            16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::AbstractMethodErrorType,
            Gc::IncompatibleClassChangeErrorType, mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::AddendumType, Gc::JobjectType, mask, 16, 0, 12);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ExceptionType, Gc::ThrowableType, mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::RuntimeExceptionType, Gc::ExceptionType, mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ArithmeticExceptionType, Gc::RuntimeExceptionType, mask, 16,
            0, 23);
}
{
  uint32_t mask[1] = {5};
  bootClass(t, Gc::ArrayType, -1, mask, 8, 4, 0);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::IndexOutOfBoundsExceptionType, Gc::RuntimeExceptionType,
            mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ArrayIndexOutOfBoundsExceptionType,
            Gc::IndexOutOfBoundsExceptionType, mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ArrayStoreExceptionType, Gc::RuntimeExceptionType, mask, 16,
            0, 23);
}
{
  bootClass(t, Gc::BooleanType, Gc::JobjectType, 0, 5, 0, 15);
}
{
  bootClass(t, Gc::BooleanArrayType, Gc::JobjectType, 0, 8, 1, 12);
}
{
  bootClass(t, Gc::NumberType, Gc::JobjectType, 0, 4, 0, 18);
}
{
  bootClass(t, Gc::ByteType, Gc::NumberType, 0, 5, 0, 20);
}
{
  bootClass(t, Gc::ByteArrayType, Gc::JobjectType, 0, 8, 1, 12);
}
{
  uint32_t mask[1] = {21};
  bootClass(t, Gc::CallNodeType, -1, mask, 20, 0, 0);
}
{
  uint32_t mask[1] = {7};
  bootClass(t, Gc::CallSiteType, Gc::JobjectType, mask, 12, 0, 12);
}
{
  bootClass(t, Gc::CharType, Gc::JobjectType, 0, 6, 0, 15);
}
{
  bootClass(t, Gc::CharArrayType, Gc::JobjectType, 0, 8, 2, 12);
}
{
  uint32_t mask[1] = {447};
  bootClass(t, Gc::ClassAddendumType, Gc::AddendumType, mask, 36, 0, 12);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ClassCastExceptionType, Gc::RuntimeExceptionType, mask, 16,
            0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ClassLoaderType, Gc::JobjectType, mask, 16, 0, 30);
}
{
  uint32_t mask[1] = {31};
  bootClass(t, Gc::ClassNotFoundExceptionType, Gc::ExceptionType, mask, 20, 0,
            24);
}
{
  uint32_t mask[1] = {31};
  bootClass(t, Gc::ClassRuntimeDataType, -1, mask, 20, 0, 0);
}
{
  uint32_t mask[1] = {3};
  bootClass(t, Gc::CleanerType, Gc::JobjectType, mask, 8, 0, 12);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::CloneNotSupportedExceptionType, Gc::ExceptionType, mask, 16,
            0, 23);
}
{
  bootClass(t, Gc::CloneableType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  uint32_t mask[1] = {31};
  bootClass(t, Gc::CodeType, Gc::JobjectType, mask, 36, 1, 12);
}
{
  uint32_t mask[1] = {2047};
  bootClass(t, Gc::CompileRootsType, -1, mask, 44, 0, 0);
}
{
  bootClass(t, Gc::ConstantPoolType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ContinuationType, Gc::JobjectType, mask, 32, 4, 14);
}
{
  uint32_t mask[1] = {63};
  bootClass(t, Gc::ContinuationContextType, -1, mask, 24, 0, 0);
}
{
  bootClass(t, Gc::DoubleType, Gc::NumberType, 0, 16, 0, 20);
}
{
  bootClass(t, Gc::DoubleArrayType, Gc::JobjectType, 0, 8, 8, 12);
}
{
  bootClass(t, Gc::ExceptionHandlerTableType, -1, 0, 8, 8, 0);
}
{
  uint32_t mask[1] = {31};
  bootClass(t, Gc::ExceptionInInitializerErrorType, Gc::ErrorType, mask, 20, 0,
            23);
}
{
  uint32_t mask[1] = {241};
  bootClass(t, Gc::FieldType, Gc::JobjectType, mask, 32, 0, 12);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::FieldAddendumType, Gc::AddendumType, mask, 16, 0, 12);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::IoExceptionType, Gc::ExceptionType, mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::FileNotFoundExceptionType, Gc::IoExceptionType, mask, 16, 0,
            23);
}
{
  uint32_t mask[1] = {49};
  bootClass(t, Gc::FinalizerType, -1, mask, 24, 0, 0);
}
{
  uint32_t mask[1] = {13};
  bootClass(t, Gc::FinderType, -1, mask, 16, 0, 0);
}
{
  bootClass(t, Gc::FloatType, Gc::NumberType, 0, 8, 0, 20);
}
{
  bootClass(t, Gc::FloatArrayType, Gc::JobjectType, 0, 8, 4, 12);
}
{
  uint32_t mask[1] = {5};
  bootClass(t, Gc::HashMapType, -1, mask, 12, 0, 0);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::IllegalArgumentExceptionType, Gc::RuntimeExceptionType, mask,
            16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::IllegalMonitorStateExceptionType, Gc::RuntimeExceptionType,
            mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::IllegalStateExceptionType, Gc::RuntimeExceptionType, mask,
            16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::IncompatibleContinuationExceptionType, Gc::ExceptionType,
            mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::InnerClassReferenceType, Gc::JobjectType, mask, 18, 0, 12);
}
{
  bootClass(t, Gc::IntType, Gc::NumberType, 0, 8, 0, 20);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::InterruptedExceptionType, Gc::ExceptionType, mask, 16, 0,
            23);
}
{
  uint32_t mask[1] = {249};
  bootClass(t, Gc::InvocationType, -1, mask, 32, 0, 0);
}
{
  uint32_t mask[1] = {31};
  bootClass(t, Gc::InvocationTargetExceptionType, Gc::ExceptionType, mask, 20,
            0, 24);
}
{
  bootClass(t, Gc::JaccessibleObjectType, Gc::JobjectType, 0, 4, 0, 15);
}
{
  bootClass(t, Gc::JbooleanType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  bootClass(t, Gc::JbyteType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  bootClass(t, Gc::JcharType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  uint32_t mask[1] = {3};
  bootClass(t, Gc::JclassType, Gc::JobjectType, mask, 8, 0, 64);
}
{
  uint32_t mask[1] = {3};
  bootClass(t, Gc::JconstructorType, Gc::JaccessibleObjectType, mask, 8, 0, 25);
}
{
  bootClass(t, Gc::JdoubleType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  uint32_t mask[1] = {3};
  bootClass(t, Gc::JfieldType, Gc::JaccessibleObjectType, mask, 9, 0, 42);
}
{
  bootClass(t, Gc::JfloatType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  bootClass(t, Gc::JintType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  bootClass(t, Gc::JlongType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  uint32_t mask[1] = {3};
  bootClass(t, Gc::JmethodType, Gc::JaccessibleObjectType, mask, 9, 0, 28);
}
{
  uint32_t mask[1] = {17};
  bootClass(t, Gc::JreferenceType, Gc::JobjectType, mask, 20, 0, 16);
}
{
  bootClass(t, Gc::JshortType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  bootClass(t, Gc::JvoidType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  bootClass(t, Gc::LineNumberTableType, -1, 0, 8, 8, 0);
}
{
  uint32_t mask[1] = {13};
  bootClass(t, Gc::ListType, -1, mask, 16, 0, 0);
}
{
  bootClass(t, Gc::LongType, Gc::NumberType, 0, 16, 0, 20);
}
{
  bootClass(t, Gc::LongArrayType, Gc::JobjectType, 0, 8, 8, 12);
}
{
  uint32_t mask[1] = {3};
  bootClass(t, Gc::LookupType, Gc::JobjectType, mask, 12, 0, 12);
}
{
  uint32_t mask[1] = {993};
  bootClass(t, Gc::MethodType, Gc::JobjectType, mask, 40, 0, 13);
}
{
  uint32_t mask[1] = {127};
  bootClass(t, Gc::MethodAddendumType, Gc::AddendumType, mask, 28, 0, 12);
}
{
  uint32_t mask[1] = {29};
  bootClass(t, Gc::MethodHandleType, Gc::JobjectType, mask, 20, 0, 13);
}
{
  uint32_t mask[1] = {3};
  bootClass(t, Gc::MethodRuntimeDataType, -1, mask, 8, 0, 0);
}
{
  uint32_t mask[1] = {31};
  bootClass(t, Gc::MethodTypeType, Gc::JobjectType, mask, 24, 0, 18);
}
{
  uint32_t mask[1] = {49};
  bootClass(t, Gc::MonitorType, -1, mask, 28, 0, 0);
}
{
  uint32_t mask[1] = {5};
  bootClass(t, Gc::MonitorNodeType, -1, mask, 12, 0, 0);
}
{
  bootClass(t, Gc::NativeType, -1, 0, 9, 0, 0);
}
{
  uint32_t mask[1] = {9};
  bootClass(t, Gc::NativeInterceptType, Gc::NativeType, mask, 16, 0, 0);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::NegativeArraySizeExceptionType, Gc::RuntimeExceptionType,
            mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::NoClassDefFoundErrorType, Gc::LinkageErrorType, mask, 16, 0,
            23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::NoSuchFieldErrorType, Gc::IncompatibleClassChangeErrorType,
            mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::NoSuchMethodErrorType, Gc::IncompatibleClassChangeErrorType,
            mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::NullPointerExceptionType, Gc::RuntimeExceptionType, mask, 16,
            0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::VirtualMachineErrorType, Gc::ErrorType, mask, 16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::OutOfMemoryErrorType, Gc::VirtualMachineErrorType, mask, 16,
            0, 23);
}
{
  uint32_t mask[1] = {7};
  bootClass(t, Gc::PairType, Gc::JobjectType, mask, 12, 0, 12);
}
{
  uint32_t mask[1] = {17};
  bootClass(t, Gc::PhantomReferenceType, Gc::JreferenceType, mask, 20, 0, 16);
}
{
  bootClass(t, Gc::PointerType, -1, 0, 8, 0, 0);
}
{
  uint32_t mask[1] = {29};
  bootClass(t, Gc::ReferenceType, -1, mask, 20, 0, 0);
}
{
  uint32_t mask[1] = {7};
  bootClass(t, Gc::ReferenceQueueType, Gc::JobjectType, mask, 12, 0, 14);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ReflectiveOperationExceptionType, Gc::ExceptionType, mask,
            16, 0, 23);
}
{
  bootClass(t, Gc::RegionType, -1, 0, 12, 0, 0);
}
{
  uint32_t mask[1] = {536870911};
  bootClass(t, Gc::RootsType, -1, mask, 116, 0, 0);
}
{
  bootClass(t, Gc::SerializableType, Gc::JobjectType, 0, 4, 0, 12);
}
{
  bootClass(t, Gc::ShortType, Gc::NumberType, 0, 6, 0, 20);
}
{
  bootClass(t, Gc::ShortArrayType, Gc::JobjectType, 0, 8, 2, 12);
}
{
  bootClass(t, Gc::SingletonType, Gc::JobjectType, 0, 8, 4, 12);
}
{
  uint32_t mask[1] = {17};
  bootClass(t, Gc::SoftReferenceType, Gc::JreferenceType, mask, 20, 0, 16);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::StackOverflowErrorType, Gc::VirtualMachineErrorType, mask,
            16, 0, 23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::StackTraceElementType, Gc::JobjectType, mask, 20, 0, 17);
}
{
  uint32_t mask[1] = {3};
  bootClass(t, Gc::StringType, Gc::JobjectType, mask, 20, 0, 57);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::SystemClassLoaderType, Gc::ClassLoaderType, mask, 20, 0, 30);
}
{
  uint32_t mask[1] = {16323};
  bootClass(t, Gc::ThreadType, Gc::JobjectType, mask, 56, 0, 35);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::ThreadGroupType, Gc::JobjectType, mask, 16, 0, 20);
}
{
  uint32_t mask[1] = {3};
  bootClass(t, Gc::TraceElementType, -1, mask, 12, 0, 0);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::TreeNodeType, -1, mask, 16, 0, 0);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::TripleType, -1, mask, 16, 0, 0);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::UnsatisfiedLinkErrorType, Gc::LinkageErrorType, mask, 16, 0,
            23);
}
{
  uint32_t mask[1] = {15};
  bootClass(t, Gc::UnwindResultType, Gc::JobjectType, mask, 16, 0, 12);
}
{
  uint32_t mask[1] = {9};
  bootClass(t, Gc::VectorType, -1, mask, 12, 4, 0);
}
{
  uint32_t mask[1] = {5};
  bootClass(t, Gc::WeakHashMapType, Gc::HashMapType, mask, 12, 0, 0);
}
{
  uint32_t mask[1] = {17};
  bootClass(t, Gc::WeakReferenceType, Gc::JreferenceType, mask, 20, 0, 16);
}
{
  bootClass(t, Gc::WordArrayType, -1, 0, 8, 4, 0);
}
