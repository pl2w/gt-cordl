#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeBitArray.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*, ::GlobalNamespace::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Free)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaf06cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                        {"Free", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf07ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaf07a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Free(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*  data, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                        {"Free", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, allocator);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "uint64_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::UnsafeBitArray(uint64_t*  Ptr, int32_t  Length, int32_t  Capacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator) noexcept  {
this->Ptr = Ptr;
this->Length = Length;
this->Capacity = Capacity;
this->Allocator = Allocator;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::UnsafeBitArray()   {
}
