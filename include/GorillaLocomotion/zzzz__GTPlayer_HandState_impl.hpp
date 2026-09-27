#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_HandState.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HandState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSurfaceOverride_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaVelocityTracker_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayer_HandState::*)(::GorillaLocomotion::GTPlayer*, bool, float_t)>(&::GlobalNamespace::GTPlayer_HandState::Init)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5cd947c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"Init", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.OnTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayer_HandState::*)()>(&::GlobalNamespace::GTPlayer_HandState::OnTeleport)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5cd95a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"OnTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.GetLastPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GTPlayer_HandState::*)()>(&::GlobalNamespace::GTPlayer_HandState::GetLastPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cd968c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"GetLastPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.SlipOverriddenToMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTPlayer_HandState::*)()>(&::GlobalNamespace::GTPlayer_HandState::SlipOverriddenToMax)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cd96d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"SlipOverriddenToMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.FirstIteration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayer_HandState::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<int32_t>, float_t)>(&::GlobalNamespace::GTPlayer_HandState::FirstIteration)> {
  constexpr static std::size_t size = 0xbb4;
  constexpr static std::size_t addrs = 0x5cd96f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"FirstIteration", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.FinalizeHandPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayer_HandState::*)()>(&::GlobalNamespace::GTPlayer_HandState::FinalizeHandPosition)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5cda518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"FinalizeHandPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.IsSlipOverriddenToMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTPlayer_HandState::*)()>(&::GlobalNamespace::GTPlayer_HandState::IsSlipOverriddenToMax)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cda844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"IsSlipOverriddenToMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.GetCurrentHandPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GTPlayer_HandState::*)()>(&::GlobalNamespace::GTPlayer_HandState::GetCurrentHandPosition)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5cda2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"GetCurrentHandPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.PositionHandFollower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayer_HandState::*)()>(&::GlobalNamespace::GTPlayer_HandState::PositionHandFollower)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5cda864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"PositionHandFollower", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.OnEndOfFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayer_HandState::*)()>(&::GlobalNamespace::GTPlayer_HandState::OnEndOfFrame)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5cda8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"OnEndOfFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.TempFreezeHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayer_HandState::*)(float_t)>(&::GlobalNamespace::GTPlayer_HandState::TempFreezeHand)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cda974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"TempFreezeHand", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayer_HandState.GetHandTapData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayer_HandState::*)(::by_ref<bool>, ::by_ref<bool>, ::by_ref<int32_t>, ::by_ref<::GlobalNamespace::GorillaSurfaceOverride*>, ::by_ref<::UnityEngine::RaycastHit>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>)>(&::GlobalNamespace::GTPlayer_HandState::GetHandTapData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cda9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"GetHandTapData", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaSurfaceOverride*>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTPlayer_HandState::Init(::GorillaLocomotion::GTPlayer*  gtPlayer, bool  isLeftHand, float_t  maxArmLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"Init", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gtPlayer, isLeftHand, maxArmLength);
}
inline void GlobalNamespace::GTPlayer_HandState::OnTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"OnTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GTPlayer_HandState::GetLastPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"GetLastPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline bool GlobalNamespace::GTPlayer_HandState::SlipOverriddenToMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"SlipOverriddenToMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::GTPlayer_HandState::FirstIteration(::by_ref<::UnityEngine::Vector3>  totalMove, ::by_ref<int32_t>  divisor, float_t  paddleBoostFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"FirstIteration", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, totalMove, divisor, paddleBoostFactor);
}
inline void GlobalNamespace::GTPlayer_HandState::FinalizeHandPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"FinalizeHandPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::GTPlayer_HandState::IsSlipOverriddenToMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"IsSlipOverriddenToMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GTPlayer_HandState::GetCurrentHandPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"GetCurrentHandPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::GTPlayer_HandState::PositionHandFollower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"PositionHandFollower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GTPlayer_HandState::OnEndOfFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"OnEndOfFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GTPlayer_HandState::TempFreezeHand(float_t  freezeDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"TempFreezeHand", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, freezeDuration);
}
inline void GlobalNamespace::GTPlayer_HandState::GetHandTapData(::by_ref<bool>  wasHandTouching, ::by_ref<bool>  wasSliding, ::by_ref<int32_t>  handMatIndex, ::by_ref<::GlobalNamespace::GorillaSurfaceOverride*>  surfaceOverride, ::by_ref<::UnityEngine::RaycastHit>  handHitInfo, ::by_ref<::UnityEngine::Vector3>  handPosition, ::by_ref<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>  handVelocityTracker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayer_HandState>(),
                        {"GetHandTapData", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaSurfaceOverride*>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, wasHandTouching, wasSliding, handMatIndex, surfaceOverride, handHitInfo, handPosition, handVelocityTracker);
}
// Ctor Parameters [CppParam { name: "lastPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wasColliding", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isColliding", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wasSliding", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isSliding", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isHolding", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "slideNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "slipPercentage", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boostVectorThisFrame", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "finalPositionThisFrame", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "slipSetToMaxFrameIdx", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialTouchIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfaceOverride", ty: "::UnityW<::GlobalNamespace::GorillaSurfaceOverride>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitInfo", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastHitInfo", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gtPlayer", ty: "::UnityW<::GorillaLocomotion::GTPlayer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "handFollower", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controllerTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocityTracker", ty: "::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactPointVelocityTracker", ty: "::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "handOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "handRotOffset", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tempFreezeUntilTimestamp", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "canTag", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "canStun", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxArmLength", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "customBoostFactor", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasCustomBoost", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTPlayer_HandState::GTPlayer_HandState(::UnityEngine::Vector3  lastPosition, ::UnityEngine::Quaternion  lastRotation, bool  isLeftHand, bool  wasColliding, bool  isColliding, bool  wasSliding, bool  isSliding, bool  isHolding, ::UnityEngine::Vector3  slideNormal, float_t  slipPercentage, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  boostVectorThisFrame, ::UnityEngine::Vector3  finalPositionThisFrame, int32_t  slipSetToMaxFrameIdx, int32_t  materialTouchIndex, ::UnityW<::GlobalNamespace::GorillaSurfaceOverride>  surfaceOverride, ::UnityEngine::RaycastHit  hitInfo, ::UnityEngine::RaycastHit  lastHitInfo, ::UnityW<::GorillaLocomotion::GTPlayer>  gtPlayer, ::UnityW<::UnityEngine::Transform>  handFollower, ::UnityW<::UnityEngine::Transform>  controllerTransform, ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker, ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  interactPointVelocityTracker, ::UnityEngine::Vector3  handOffset, ::UnityEngine::Quaternion  handRotOffset, float_t  tempFreezeUntilTimestamp, bool  canTag, bool  canStun, float_t  maxArmLength, bool  isActive, float_t  customBoostFactor, bool  hasCustomBoost) noexcept  {
this->lastPosition = lastPosition;
this->lastRotation = lastRotation;
this->isLeftHand = isLeftHand;
this->wasColliding = wasColliding;
this->isColliding = isColliding;
this->wasSliding = wasSliding;
this->isSliding = isSliding;
this->isHolding = isHolding;
this->slideNormal = slideNormal;
this->slipPercentage = slipPercentage;
this->hitPoint = hitPoint;
this->boostVectorThisFrame = boostVectorThisFrame;
this->finalPositionThisFrame = finalPositionThisFrame;
this->slipSetToMaxFrameIdx = slipSetToMaxFrameIdx;
this->materialTouchIndex = materialTouchIndex;
this->surfaceOverride = surfaceOverride;
this->hitInfo = hitInfo;
this->lastHitInfo = lastHitInfo;
this->gtPlayer = gtPlayer;
this->handFollower = handFollower;
this->controllerTransform = controllerTransform;
this->velocityTracker = velocityTracker;
this->interactPointVelocityTracker = interactPointVelocityTracker;
this->handOffset = handOffset;
this->handRotOffset = handRotOffset;
this->tempFreezeUntilTimestamp = tempFreezeUntilTimestamp;
this->canTag = canTag;
this->canStun = canStun;
this->maxArmLength = maxArmLength;
this->isActive = isActive;
this->customBoostFactor = customBoostFactor;
this->hasCustomBoost = hasCustomBoost;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTPlayer_HandState::GTPlayer_HandState()   {
}
