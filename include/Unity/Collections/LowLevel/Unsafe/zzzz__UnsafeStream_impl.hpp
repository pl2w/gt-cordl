#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStream.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Block_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_ConstructJobList_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_ConstructJob_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_DisposeJob_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.AllocateForEach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)(int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::AllocateForEach)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaf06f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                        {"AllocateForEach", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf07df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.Deallocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::Deallocate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaf07e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                        {"Deallocate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf06f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::AllocateForEach(int32_t  forEachCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                        {"AllocateForEach", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, forEachCount);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeStream::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::Deallocate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                        {"Deallocate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeStream::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeStream::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BlockData", ty: "::GlobalNamespace::AllocatorManager_Block", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream::UnsafeStream(::GlobalNamespace::AllocatorManager_Block  m_BlockData) noexcept  {
this->m_BlockData = m_BlockData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream::UnsafeStream()   {
}
