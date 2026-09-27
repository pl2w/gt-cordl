#pragma once
// IWYU pragma private; include "Photon/Pun/MonoBehaviourPun.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPun.get_photonView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::PhotonView> (::Photon::Pun::MonoBehaviourPun::*)()>(&::Photon::Pun::MonoBehaviourPun::get_photonView)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa72b6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::MonoBehaviourPun*>(),
                        {"get_photonView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPun._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPun::*)()>(&::Photon::Pun::MonoBehaviourPun::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72b73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::MonoBehaviourPun*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Pun::PhotonView>& Photon::Pun::MonoBehaviourPun::__cordl_internal_get_pvCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pvCache;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& Photon::Pun::MonoBehaviourPun::__cordl_internal_get_pvCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pvCache;
}
constexpr void Photon::Pun::MonoBehaviourPun::__cordl_internal_set_pvCache(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pvCache = value;
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::MonoBehaviourPun::get_photonView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::MonoBehaviourPun*>(),
                        {"get_photonView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPun::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::MonoBehaviourPun*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::MonoBehaviourPun* Photon::Pun::MonoBehaviourPun::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::MonoBehaviourPun*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::MonoBehaviourPun::MonoBehaviourPun()   {
}
