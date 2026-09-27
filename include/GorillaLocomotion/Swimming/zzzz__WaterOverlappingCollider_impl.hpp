#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterOverlappingCollider.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_SurfaceQuery_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterOverlappingCollider_def.hpp"
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaVelocityTracker_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterOverlappingCollider.PlayRippleEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterOverlappingCollider::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::GorillaLocomotion::Swimming::WaterVolume*)>(&::GorillaLocomotion::Swimming::WaterOverlappingCollider::PlayRippleEffect)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5ce38a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterOverlappingCollider>(),
                        {"PlayRippleEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterOverlappingCollider.PlaySplashEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterOverlappingCollider::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, float_t, bool, bool, ::GorillaLocomotion::Swimming::WaterVolume*)>(&::GorillaLocomotion::Swimming::WaterOverlappingCollider::PlaySplashEffect)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5ce3fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterOverlappingCollider>(),
                        {"PlaySplashEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterOverlappingCollider.PlayDripEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterOverlappingCollider::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GorillaLocomotion::Swimming::WaterOverlappingCollider::PlayDripEffect)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5ce45e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterOverlappingCollider>(),
                        {"PlayDripEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterOverlappingCollider.GetClosestPositionOnSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::Swimming::WaterOverlappingCollider::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaLocomotion::Swimming::WaterOverlappingCollider::GetClosestPositionOnSurface)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ce3b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterOverlappingCollider>(),
                        {"GetClosestPositionOnSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterOverlappingCollider.GetBoundingRadiusOnSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Swimming::WaterOverlappingCollider::*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::Swimming::WaterOverlappingCollider::GetBoundingRadiusOnSurface)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5ce3c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterOverlappingCollider>(),
                        {"GetBoundingRadiusOnSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaLocomotion::Swimming::WaterOverlappingCollider::PlayRippleEffect(::UnityEngine::GameObject*  rippleEffectPrefab, ::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal, float_t  defaultRippleScale, float_t  currentTime, ::GorillaLocomotion::Swimming::WaterVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterOverlappingCollider>(),
                        {"PlayRippleEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rippleEffectPrefab, surfacePoint, surfaceNormal, defaultRippleScale, currentTime, volume);
}
inline void GorillaLocomotion::Swimming::WaterOverlappingCollider::PlaySplashEffect(::UnityEngine::GameObject*  splashEffectPrefab, ::UnityEngine::Vector3  splashPosition, float_t  splashScale, bool  bigSplash, bool  enteringWater, ::GorillaLocomotion::Swimming::WaterVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterOverlappingCollider>(),
                        {"PlaySplashEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, splashEffectPrefab, splashPosition, splashScale, bigSplash, enteringWater, volume);
}
inline void GorillaLocomotion::Swimming::WaterOverlappingCollider::PlayDripEffect(::UnityEngine::GameObject*  rippleEffectPrefab, ::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal, float_t  dripScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterOverlappingCollider>(),
                        {"PlayDripEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rippleEffectPrefab, surfacePoint, surfaceNormal, dripScale);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::Swimming::WaterOverlappingCollider::GetClosestPositionOnSurface(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterOverlappingCollider>(),
                        {"GetClosestPositionOnSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, surfacePoint, surfaceNormal);
}
inline float_t GorillaLocomotion::Swimming::WaterOverlappingCollider::GetBoundingRadiusOnSurface(::UnityEngine::Vector3  surfaceNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterOverlappingCollider>(),
                        {"GetBoundingRadiusOnSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, surfaceNormal);
}
// Ctor Parameters [CppParam { name: "playBigSplash", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playDripEffect", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overrideBoundingRadius", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boundingRadiusOverride", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scaleMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocityTracker", ty: "::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastSurfaceQuery", ty: "::GlobalNamespace::WaterVolume_SurfaceQuery", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "photonViewForRPC", ty: "::UnityW<::GlobalNamespace::NetworkView>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfaceDetected", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inWater", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inVolume", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastBoundingRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastRipplePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastRippleScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastRippleTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastInWaterTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nextDripTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaLocomotion::Swimming::WaterOverlappingCollider::WaterOverlappingCollider(bool  playBigSplash, bool  playDripEffect, bool  overrideBoundingRadius, float_t  boundingRadiusOverride, float_t  scaleMultiplier, ::UnityW<::UnityEngine::Collider>  collider, ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker, ::GlobalNamespace::WaterVolume_SurfaceQuery  lastSurfaceQuery, ::UnityW<::GlobalNamespace::NetworkView>  photonViewForRPC, bool  surfaceDetected, bool  inWater, bool  inVolume, float_t  lastBoundingRadius, ::UnityEngine::Vector3  lastRipplePosition, float_t  lastRippleScale, float_t  lastRippleTime, float_t  lastInWaterTime, float_t  nextDripTime) noexcept  {
this->playBigSplash = playBigSplash;
this->playDripEffect = playDripEffect;
this->overrideBoundingRadius = overrideBoundingRadius;
this->boundingRadiusOverride = boundingRadiusOverride;
this->scaleMultiplier = scaleMultiplier;
this->collider = collider;
this->velocityTracker = velocityTracker;
this->lastSurfaceQuery = lastSurfaceQuery;
this->photonViewForRPC = photonViewForRPC;
this->surfaceDetected = surfaceDetected;
this->inWater = inWater;
this->inVolume = inVolume;
this->lastBoundingRadius = lastBoundingRadius;
this->lastRipplePosition = lastRipplePosition;
this->lastRippleScale = lastRippleScale;
this->lastRippleTime = lastRippleTime;
this->lastInWaterTime = lastInWaterTime;
this->nextDripTime = nextDripTime;
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Swimming::WaterOverlappingCollider::WaterOverlappingCollider()   {
}
