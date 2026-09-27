#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonViewXSceneRef.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonViewXSceneRef_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonViewXSceneRef.get_photonView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::PhotonView> (::GlobalNamespace::PhotonViewXSceneRef::*)()>(&::GlobalNamespace::PhotonViewXSceneRef::get_photonView)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56b97d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewXSceneRef*>(),
                        {"get_photonView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonViewXSceneRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonViewXSceneRef::*)()>(&::GlobalNamespace::PhotonViewXSceneRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b983c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewXSceneRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::PhotonViewXSceneRef::__cordl_internal_get_reference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reference;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::PhotonViewXSceneRef::__cordl_internal_get_reference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reference;
}
constexpr void GlobalNamespace::PhotonViewXSceneRef::__cordl_internal_set_reference(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reference = value;
}
inline ::UnityW<::Photon::Pun::PhotonView> GlobalNamespace::PhotonViewXSceneRef::get_photonView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewXSceneRef*>(),
                        {"get_photonView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonViewXSceneRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewXSceneRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PhotonViewXSceneRef* GlobalNamespace::PhotonViewXSceneRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonViewXSceneRef*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonViewXSceneRef::PhotonViewXSceneRef()   {
}
