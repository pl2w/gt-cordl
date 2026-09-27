#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunNatTypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunNatTypeExtensions_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__NATType_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunNatTypeExtensions.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::Stun::NATType)>(&::Fusion::Sockets::Stun::StunNatTypeExtensions::IsValid)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6035fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunNatTypeExtensions*>(),
                        {"IsValid", {}, {::i2c::type_of<::Fusion::Sockets::Stun::NATType>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::Sockets::Stun::StunNatTypeExtensions::IsValid(::Fusion::Sockets::Stun::NATType  natType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunNatTypeExtensions*>(),
                        {"IsValid", {}, {::i2c::type_of<::Fusion::Sockets::Stun::NATType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, natType);
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunNatTypeExtensions::StunNatTypeExtensions()   {
}
