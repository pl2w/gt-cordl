#pragma once
// IWYU pragma private; include "Drawing/StreamSplitter.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Drawing/zzzz__StreamSplitter_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::Drawing::StreamSplitter.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::StreamSplitter::*)()>(&::Drawing::StreamSplitter::Execute)> {
  constexpr static std::size_t size = 0x12fc;
  constexpr static std::size_t addrs = 0x55db0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::StreamSplitter>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::StreamSplitter::setStaticF_PushCommands(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "PushCommands", ::Drawing::StreamSplitter>(std::forward<int32_t>(value));
}
inline int32_t Drawing::StreamSplitter::getStaticF_PushCommands()  {
return ::cordl_internals::getStaticField<int32_t, "PushCommands", ::Drawing::StreamSplitter>();
}
inline void Drawing::StreamSplitter::setStaticF_PopCommands(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "PopCommands", ::Drawing::StreamSplitter>(std::forward<int32_t>(value));
}
inline int32_t Drawing::StreamSplitter::getStaticF_PopCommands()  {
return ::cordl_internals::getStaticField<int32_t, "PopCommands", ::Drawing::StreamSplitter>();
}
inline void Drawing::StreamSplitter::setStaticF_MetaCommands(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MetaCommands", ::Drawing::StreamSplitter>(std::forward<int32_t>(value));
}
inline int32_t Drawing::StreamSplitter::getStaticF_MetaCommands()  {
return ::cordl_internals::getStaticField<int32_t, "MetaCommands", ::Drawing::StreamSplitter>();
}
inline void Drawing::StreamSplitter::setStaticF_DynamicCommands(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DynamicCommands", ::Drawing::StreamSplitter>(std::forward<int32_t>(value));
}
inline int32_t Drawing::StreamSplitter::getStaticF_DynamicCommands()  {
return ::cordl_internals::getStaticField<int32_t, "DynamicCommands", ::Drawing::StreamSplitter>();
}
inline void Drawing::StreamSplitter::setStaticF_StaticCommands(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "StaticCommands", ::Drawing::StreamSplitter>(std::forward<int32_t>(value));
}
inline int32_t Drawing::StreamSplitter::getStaticF_StaticCommands()  {
return ::cordl_internals::getStaticField<int32_t, "StaticCommands", ::Drawing::StreamSplitter>();
}
inline void Drawing::StreamSplitter::setStaticF_CommandSizes(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "CommandSizes", ::Drawing::StreamSplitter>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Drawing::StreamSplitter::getStaticF_CommandSizes()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "CommandSizes", ::Drawing::StreamSplitter>();
}
inline void Drawing::StreamSplitter::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::StreamSplitter>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  Drawing::StreamSplitter::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Drawing::StreamSplitter::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "inputBuffers", ty: "::Unity::Collections::NativeArray_1<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "staticBuffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dynamicBuffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "persistentBuffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::StreamSplitter::StreamSplitter(::Unity::Collections::NativeArray_1<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>  inputBuffers, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  staticBuffer, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  dynamicBuffer, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  persistentBuffer) noexcept  {
this->inputBuffers = inputBuffers;
this->staticBuffer = staticBuffer;
this->dynamicBuffer = dynamicBuffer;
this->persistentBuffer = persistentBuffer;
}
// Ctor Parameters []
constexpr ::Drawing::StreamSplitter::StreamSplitter()   {
}
