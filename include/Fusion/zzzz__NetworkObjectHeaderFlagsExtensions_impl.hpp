#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderFlagsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlagsExtensions_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlags_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderFlagsExtensions.CheckFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectHeaderFlags, ::Fusion::NetworkObjectHeaderFlags)>(&::Fusion::NetworkObjectHeaderFlagsExtensions::CheckFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fab29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderFlagsExtensions*>(),
                        {"CheckFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderFlags>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkObjectHeaderFlagsExtensions::CheckFlag(::Fusion::NetworkObjectHeaderFlags  flag, ::Fusion::NetworkObjectHeaderFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderFlagsExtensions*>(),
                        {"CheckFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderFlags>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flag, value);
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectHeaderFlagsExtensions::NetworkObjectHeaderFlagsExtensions()   {
}
