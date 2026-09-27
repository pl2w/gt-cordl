#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportStation.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TeleportStation_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TeleportStation.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStation::*)()>(&::GlobalNamespace::TeleportStation::Start)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5adc7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStation.Attempt1PTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStation::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TeleportStation::Attempt1PTeleport)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5adc9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {"Attempt1PTeleport", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStation.Attempt3PTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStation::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TeleportStation::Attempt3PTeleport)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5adcb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {"Attempt3PTeleport", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStation.LowestActorNumberInFriendCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TeleportStation::*)()>(&::GlobalNamespace::TeleportStation::LowestActorNumberInFriendCollider)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5adcf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {"LowestActorNumberInFriendCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStation.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStation::*)()>(&::GlobalNamespace::TeleportStation::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5add154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStation::*)()>(&::GlobalNamespace::TeleportStation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5add18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TeleportStation::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TeleportStation::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TeleportStation::__cordl_internal_get_targetPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TeleportStation::__cordl_internal_get_targetPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_targetPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPos = value;
}
constexpr float_t& GlobalNamespace::TeleportStation::__cordl_internal_get_targetRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRot;
}
constexpr float_t const& GlobalNamespace::TeleportStation::__cordl_internal_get_targetRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRot;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_targetRot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRot = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TeleportStation::__cordl_internal_get_targetSlop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSlop;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TeleportStation::__cordl_internal_get_targetSlop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSlop;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_targetSlop(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSlop = value;
}
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::TeleportStation::__cordl_internal_get_teleportToZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToZone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::TeleportStation::__cordl_internal_get_teleportToZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToZone;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_teleportToZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportToZone = value;
}
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::TeleportStation::__cordl_internal_get_sourceFriendColliderRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceFriendColliderRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::TeleportStation::__cordl_internal_get_sourceFriendColliderRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceFriendColliderRef;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_sourceFriendColliderRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceFriendColliderRef = value;
}
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::TeleportStation::__cordl_internal_get_destinationFriendColliderRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationFriendColliderRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::TeleportStation::__cordl_internal_get_destinationFriendColliderRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationFriendColliderRef;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_destinationFriendColliderRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationFriendColliderRef = value;
}
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::TeleportStation::__cordl_internal_get_destinationJoinTriggerRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationJoinTriggerRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::TeleportStation::__cordl_internal_get_destinationJoinTriggerRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationJoinTriggerRef;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_destinationJoinTriggerRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationJoinTriggerRef = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GlobalNamespace::TeleportStation::__cordl_internal_get_sourceFriendCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceFriendCollider;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GlobalNamespace::TeleportStation::__cordl_internal_get_sourceFriendCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceFriendCollider;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_sourceFriendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceFriendCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GlobalNamespace::TeleportStation::__cordl_internal_get_destinationFriendCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationFriendCollider;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GlobalNamespace::TeleportStation::__cordl_internal_get_destinationFriendCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationFriendCollider;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_destinationFriendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationFriendCollider = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& GlobalNamespace::TeleportStation::__cordl_internal_get_destinationJoinTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationJoinTrigger;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& GlobalNamespace::TeleportStation::__cordl_internal_get_destinationJoinTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationJoinTrigger;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_destinationJoinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationJoinTrigger = value;
}
constexpr int32_t& GlobalNamespace::TeleportStation::__cordl_internal_get_effectTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectTime;
}
constexpr int32_t const& GlobalNamespace::TeleportStation::__cordl_internal_get_effectTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectTime;
}
constexpr void GlobalNamespace::TeleportStation::__cordl_internal_set_effectTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectTime = value;
}
inline void GlobalNamespace::TeleportStation::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportStation::Attempt1PTeleport(::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {"Attempt1PTeleport", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::TeleportStation::Attempt3PTeleport(::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {"Attempt3PTeleport", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline int32_t GlobalNamespace::TeleportStation::LowestActorNumberInFriendCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {"LowestActorNumberInFriendCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportStation::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TeleportStation* GlobalNamespace::TeleportStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportStation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportStation::TeleportStation()   {
}
