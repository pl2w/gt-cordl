#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectRuntimeFlagsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectRuntimeFlagsExtensions_def.hpp"
#include "Fusion/zzzz__NetworkObjectRuntimeFlags_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectRuntimeFlagsExtensions.CheckFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectRuntimeFlags, ::Fusion::NetworkObjectRuntimeFlags)>(&::Fusion::NetworkObjectRuntimeFlagsExtensions::CheckFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc9614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectRuntimeFlagsExtensions*>(),
                        {"CheckFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectRuntimeFlags>(), ::i2c::type_of<::Fusion::NetworkObjectRuntimeFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkObjectRuntimeFlagsExtensions::CheckFlag(::Fusion::NetworkObjectRuntimeFlags  flags, ::Fusion::NetworkObjectRuntimeFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectRuntimeFlagsExtensions*>(),
                        {"CheckFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectRuntimeFlags>(), ::i2c::type_of<::Fusion::NetworkObjectRuntimeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags, flag);
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectRuntimeFlagsExtensions::NetworkObjectRuntimeFlagsExtensions()   {
}
