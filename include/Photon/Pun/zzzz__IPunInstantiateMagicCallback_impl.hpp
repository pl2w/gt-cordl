#pragma once
// IWYU pragma private; include "Photon/Pun/IPunInstantiateMagicCallback.hpp"
#include "Photon/Pun/zzzz__IPunInstantiateMagicCallback_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
//  Writing Method size for method: ::Photon::Pun::IPunInstantiateMagicCallback.OnPhotonInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::IPunInstantiateMagicCallback::*)(::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::IPunInstantiateMagicCallback::OnPhotonInstantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::IPunInstantiateMagicCallback*>(),
                    {::i2c::class_of<::Photon::Pun::IPunInstantiateMagicCallback*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Photon::Pun::IPunInstantiateMagicCallback::OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::IPunInstantiateMagicCallback*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
