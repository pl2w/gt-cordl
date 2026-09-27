#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectDestroyFlagsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectDestroyFlagsExtensions_def.hpp"
#include "Fusion/zzzz__NetworkObjectDestroyFlags_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectDestroyFlagsExtensions.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectDestroyFlags, ::Fusion::NetworkObjectDestroyFlags)>(&::Fusion::NetworkObjectDestroyFlagsExtensions::Get)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5faa678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectDestroyFlagsExtensions*>(),
                        {"Get", {}, {::i2c::type_of<::Fusion::NetworkObjectDestroyFlags>(), ::i2c::type_of<::Fusion::NetworkObjectDestroyFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkObjectDestroyFlagsExtensions::Get(::Fusion::NetworkObjectDestroyFlags  flags, ::Fusion::NetworkObjectDestroyFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectDestroyFlagsExtensions*>(),
                        {"Get", {}, {::i2c::type_of<::Fusion::NetworkObjectDestroyFlags>(), ::i2c::type_of<::Fusion::NetworkObjectDestroyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags, flag);
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectDestroyFlagsExtensions::NetworkObjectDestroyFlagsExtensions()   {
}
