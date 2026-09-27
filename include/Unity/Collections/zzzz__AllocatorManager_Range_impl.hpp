#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_Range.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Range_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_Range.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AllocatorManager_Range::*)()>(&::GlobalNamespace::AllocatorManager_Range::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaf039bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Range>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AllocatorManager_Range::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Range>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AllocatorManager_Range::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AllocatorManager_Range::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Pointer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Items", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AllocatorManager_Range::AllocatorManager_Range(::System::IntPtr  Pointer, int32_t  Items, ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator) noexcept  {
this->Pointer = Pointer;
this->Items = Items;
this->Allocator = Allocator;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AllocatorManager_Range::AllocatorManager_Range()   {
}
