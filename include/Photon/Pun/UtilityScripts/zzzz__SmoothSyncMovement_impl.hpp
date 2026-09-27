#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/SmoothSyncMovement.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__SmoothSyncMovement_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::SmoothSyncMovement.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::SmoothSyncMovement::*)()>(&::Photon::Pun::UtilityScripts::SmoothSyncMovement::Awake)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa7390c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::SmoothSyncMovement.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::SmoothSyncMovement::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::UtilityScripts::SmoothSyncMovement::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa7392b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::SmoothSyncMovement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::SmoothSyncMovement::*)()>(&::Photon::Pun::UtilityScripts::SmoothSyncMovement::Update)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa739420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::SmoothSyncMovement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::SmoothSyncMovement::*)()>(&::Photon::Pun::UtilityScripts::SmoothSyncMovement::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa7395b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_SmoothingDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SmoothingDelay;
}
constexpr float_t const& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_SmoothingDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SmoothingDelay;
}
constexpr void Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_set_SmoothingDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SmoothingDelay = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_correctPlayerPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___correctPlayerPos;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_correctPlayerPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___correctPlayerPos;
}
constexpr void Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_set_correctPlayerPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___correctPlayerPos = value;
}
constexpr ::UnityEngine::Quaternion& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_correctPlayerRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___correctPlayerRot;
}
constexpr ::UnityEngine::Quaternion const& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_correctPlayerRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___correctPlayerRot;
}
constexpr void Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_set_correctPlayerRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___correctPlayerRot = value;
}
inline void Photon::Pun::UtilityScripts::SmoothSyncMovement::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::SmoothSyncMovement::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::UtilityScripts::SmoothSyncMovement::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::SmoothSyncMovement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::SmoothSyncMovement* Photon::Pun::UtilityScripts::SmoothSyncMovement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  Photon::Pun::UtilityScripts::SmoothSyncMovement::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* Photon::Pun::UtilityScripts::SmoothSyncMovement::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::SmoothSyncMovement::SmoothSyncMovement()   {
}
