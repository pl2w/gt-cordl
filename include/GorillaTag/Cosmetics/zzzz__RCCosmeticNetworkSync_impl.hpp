#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCCosmeticNetworkSync.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCCosmeticNetworkSync_SyncedState_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCCosmeticNetworkSync_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCCosmeticNetworkSync_SyncedState_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_def.hpp"
#include "Photon/Pun/zzzz__IPunInstantiateMagicCallback_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCCosmeticNetworkSync.OnPhotonInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCCosmeticNetworkSync::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::Cosmetics::RCCosmeticNetworkSync::OnPhotonInstantiate)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5d66e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>(),
                        {"OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCCosmeticNetworkSync.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCCosmeticNetworkSync::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::Cosmetics::RCCosmeticNetworkSync::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x5d6739c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCCosmeticNetworkSync.HitRCVehicleRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCCosmeticNetworkSync::*)(::UnityEngine::Vector3, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::Cosmetics::RCCosmeticNetworkSync::HitRCVehicleRPC)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5d678e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>(),
                        {"HitRCVehicleRPC", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCCosmeticNetworkSync.DestroyThis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCCosmeticNetworkSync::*)()>(&::GorillaTag::Cosmetics::RCCosmeticNetworkSync::DestroyThis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d67228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>(),
                        {"DestroyThis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCCosmeticNetworkSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCCosmeticNetworkSync::*)()>(&::GorillaTag::Cosmetics::RCCosmeticNetworkSync::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d67ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RCCosmeticNetworkSync_SyncedState& GorillaTag::Cosmetics::RCCosmeticNetworkSync::__cordl_internal_get_syncedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedState;
}
constexpr ::GlobalNamespace::RCCosmeticNetworkSync_SyncedState const& GorillaTag::Cosmetics::RCCosmeticNetworkSync::__cordl_internal_get_syncedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedState;
}
constexpr void GorillaTag::Cosmetics::RCCosmeticNetworkSync::__cordl_internal_set_syncedState(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedState = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>& GorillaTag::Cosmetics::RCCosmeticNetworkSync::__cordl_internal_get_rcRemote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcRemote;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable> const& GorillaTag::Cosmetics::RCCosmeticNetworkSync::__cordl_internal_get_rcRemote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcRemote;
}
constexpr void GorillaTag::Cosmetics::RCCosmeticNetworkSync::__cordl_internal_set_rcRemote(::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rcRemote = value;
}
inline void GorillaTag::Cosmetics::RCCosmeticNetworkSync::OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>(),
                        {"OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTag::Cosmetics::RCCosmeticNetworkSync::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTag::Cosmetics::RCCosmeticNetworkSync::HitRCVehicleRPC(::UnityEngine::Vector3  hitVelocity, bool  isProjectile, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>(),
                        {"HitRCVehicleRPC", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitVelocity, isProjectile, info);
}
inline void GorillaTag::Cosmetics::RCCosmeticNetworkSync::DestroyThis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>(),
                        {"DestroyThis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCCosmeticNetworkSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::RCCosmeticNetworkSync* GorillaTag::Cosmetics::RCCosmeticNetworkSync::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::RCCosmeticNetworkSync*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GorillaTag::Cosmetics::RCCosmeticNetworkSync::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GorillaTag::Cosmetics::RCCosmeticNetworkSync::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr  GorillaTag::Cosmetics::RCCosmeticNetworkSync::operator ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* GorillaTag::Cosmetics::RCCosmeticNetworkSync::i___Photon__Pun__IPunInstantiateMagicCallback() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::RCCosmeticNetworkSync::RCCosmeticNetworkSync()   {
}
