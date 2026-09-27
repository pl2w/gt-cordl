#pragma once
// IWYU pragma private; include "Unity/Collections/NativeStream.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_impl.hpp"
#include "Unity/Collections/zzzz__NativeStream_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeStream_ConstructJobList_def.hpp"
#include "Unity/Collections/zzzz__NativeStream_ConstructJob_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeStream.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeStream::*)()>(&::Unity::Collections::NativeStream::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf06ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeStream>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream::*)()>(&::Unity::Collections::NativeStream::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf06ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeStream>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.AllocateForEach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream::*)(int32_t)>(&::Unity::Collections::NativeStream::AllocateForEach)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf06f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeStream>(),
                        {"AllocateForEach", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Collections::NativeStream::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeStream>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::NativeStream::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeStream>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::NativeStream::AllocateForEach(int32_t  forEachCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeStream>(),
                        {"AllocateForEach", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, forEachCount);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Unity::Collections::NativeStream::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::NativeStream::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Stream", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::NativeStream::NativeStream(::Unity::Collections::LowLevel::Unsafe::UnsafeStream  m_Stream) noexcept  {
this->m_Stream = m_Stream;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeStream::NativeStream()   {
}
