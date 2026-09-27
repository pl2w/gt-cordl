#pragma once
// IWYU pragma private; include "GlobalNamespace/GrabbyTentacleNetworking.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "GlobalNamespace/zzzz__GrabbyTentacleNetworking_def.hpp"
#include "GlobalNamespace/zzzz__GrabbyTentacleController_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleNetworking.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GrabbyTentacleNetworking> (*)()>(&::GlobalNamespace::GrabbyTentacleNetworking::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5642318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleNetworking.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GrabbyTentacleNetworking*)>(&::GlobalNamespace::GrabbyTentacleNetworking::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5642360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::GrabbyTentacleNetworking*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleNetworking.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleNetworking::*)()>(&::GlobalNamespace::GrabbyTentacleNetworking::Awake)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x56423b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleNetworking.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleNetworking::*)()>(&::GlobalNamespace::GrabbyTentacleNetworking::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56425c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleNetworking.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleNetworking::*)(::GlobalNamespace::GrabbyTentacleController*)>(&::GlobalNamespace::GrabbyTentacleNetworking::Register)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564269c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::GrabbyTentacleController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleNetworking.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleNetworking::*)(::GlobalNamespace::GrabbyTentacleController*)>(&::GlobalNamespace::GrabbyTentacleNetworking::Unregister)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5641498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::GrabbyTentacleController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleNetworking.SendGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleNetworking::*)(int32_t, ::Photon::Realtime::Player*)>(&::GlobalNamespace::GrabbyTentacleNetworking::SendGrab)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5641d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"SendGrab", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleNetworking.ApplyTargetRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleNetworking::*)(int32_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GrabbyTentacleNetworking::ApplyTargetRPC)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x56426a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"ApplyTargetRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleNetworking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleNetworking::*)()>(&::GlobalNamespace::GrabbyTentacleNetworking::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56428b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GrabbyTentacleNetworking::__cordl_internal_get_tablePhotonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tablePhotonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GrabbyTentacleNetworking::__cordl_internal_get_tablePhotonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tablePhotonView;
}
constexpr void GlobalNamespace::GrabbyTentacleNetworking::__cordl_internal_set_tablePhotonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tablePhotonView = value;
}
constexpr ::UnityW<::GlobalNamespace::GrabbyTentacleController>& GlobalNamespace::GrabbyTentacleNetworking::__cordl_internal_get_registeredController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registeredController;
}
constexpr ::UnityW<::GlobalNamespace::GrabbyTentacleController> const& GlobalNamespace::GrabbyTentacleNetworking::__cordl_internal_get_registeredController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registeredController;
}
constexpr void GlobalNamespace::GrabbyTentacleNetworking::__cordl_internal_set_registeredController(::UnityW<::GlobalNamespace::GrabbyTentacleController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registeredController = value;
}
inline void GlobalNamespace::GrabbyTentacleNetworking::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::GrabbyTentacleNetworking>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GrabbyTentacleNetworking>, "<Instance>k__BackingField", ::GlobalNamespace::GrabbyTentacleNetworking*>(std::forward<::UnityW<::GlobalNamespace::GrabbyTentacleNetworking>>(value));
}
inline ::UnityW<::GlobalNamespace::GrabbyTentacleNetworking> GlobalNamespace::GrabbyTentacleNetworking::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GrabbyTentacleNetworking>, "<Instance>k__BackingField", ::GlobalNamespace::GrabbyTentacleNetworking*>();
}
inline ::UnityW<::GlobalNamespace::GrabbyTentacleNetworking> GlobalNamespace::GrabbyTentacleNetworking::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GrabbyTentacleNetworking>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GrabbyTentacleNetworking::set_Instance(::GlobalNamespace::GrabbyTentacleNetworking*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::GrabbyTentacleNetworking*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GrabbyTentacleNetworking::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrabbyTentacleNetworking::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrabbyTentacleNetworking::Register(::GlobalNamespace::GrabbyTentacleController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::GrabbyTentacleController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void GlobalNamespace::GrabbyTentacleNetworking::Unregister(::GlobalNamespace::GrabbyTentacleController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::GrabbyTentacleController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void GlobalNamespace::GrabbyTentacleNetworking::SendGrab(int32_t  tentacleIndex, ::Photon::Realtime::Player*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"SendGrab", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tentacleIndex, targetPlayer);
}
inline void GlobalNamespace::GrabbyTentacleNetworking::ApplyTargetRPC(int32_t  tentacleIndex, ::Photon::Realtime::Player*  targetPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {"ApplyTargetRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tentacleIndex, targetPlayer, info);
}
inline void GlobalNamespace::GrabbyTentacleNetworking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleNetworking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GrabbyTentacleNetworking* GlobalNamespace::GrabbyTentacleNetworking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GrabbyTentacleNetworking*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GrabbyTentacleNetworking::GrabbyTentacleNetworking()   {
}
