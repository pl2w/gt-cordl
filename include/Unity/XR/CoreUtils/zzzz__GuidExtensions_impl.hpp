#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GuidExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__GuidExtensions_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GuidExtensions.Decompose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Guid, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::Unity::XR::CoreUtils::GuidExtensions::Decompose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb3efd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GuidExtensions*>(),
                        {"Decompose", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::GuidExtensions::Decompose(::System::Guid  guid, ::by_ref<uint64_t>  low, ::by_ref<uint64_t>  high)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GuidExtensions*>(),
                        {"Decompose", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, guid, low, high);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GuidExtensions::GuidExtensions()   {
}
