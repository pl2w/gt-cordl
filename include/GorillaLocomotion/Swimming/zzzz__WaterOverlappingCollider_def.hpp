#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterOverlappingCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_SurfaceQuery_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(WaterOverlappingCollider)
namespace GlobalNamespace {
class NetworkView;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker;
}
namespace GorillaLocomotion::Swimming {
class WaterVolume;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Swimming {
struct WaterOverlappingCollider;
}
// Write type traits
MARK_VAL_T(::GorillaLocomotion::Swimming::WaterOverlappingCollider);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::WaterOverlappingCollider, "GorillaLocomotion.Swimming", "WaterOverlappingCollider");
// Dependencies GorillaLocomotion.Swimming.WaterVolume::SurfaceQuery, UnityEngine.Vector3
namespace GorillaLocomotion::Swimming {
// Is value type: true
// CS Name: GorillaLocomotion.Swimming.WaterOverlappingCollider
struct CORDL_TYPE WaterOverlappingCollider {
public:
// Declarations
/// @brief Method GetBoundingRadiusOnSurface, addr 0x5ce3c3c, size 0x3b0, virtual false, abstract: false, final false
inline float_t GetBoundingRadiusOnSurface(::UnityEngine::Vector3  surfaceNormal) ;

/// @brief Method GetClosestPositionOnSurface, addr 0x5ce3b18, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetClosestPositionOnSurface(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal) ;

/// @brief Method PlayDripEffect, addr 0x5ce45e8, size 0x2d8, virtual false, abstract: false, final false
inline void PlayDripEffect(::UnityEngine::GameObject*  rippleEffectPrefab, ::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal, float_t  dripScale) ;

/// @brief Method PlayRippleEffect, addr 0x5ce38a8, size 0x270, virtual false, abstract: false, final false
inline void PlayRippleEffect(::UnityEngine::GameObject*  rippleEffectPrefab, ::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal, float_t  defaultRippleScale, float_t  currentTime, ::GorillaLocomotion::Swimming::WaterVolume*  volume) ;

/// @brief Method PlaySplashEffect, addr 0x5ce3fec, size 0x5fc, virtual false, abstract: false, final false
inline void PlaySplashEffect(::UnityEngine::GameObject*  splashEffectPrefab, ::UnityEngine::Vector3  splashPosition, float_t  splashScale, bool  bigSplash, bool  enteringWater, ::GorillaLocomotion::Swimming::WaterVolume*  volume) ;

// Ctor Parameters []
// @brief default ctor
constexpr WaterOverlappingCollider() ;

// Ctor Parameters [CppParam { name: "playBigSplash", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "playDripEffect", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "overrideBoundingRadius", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "boundingRadiusOverride", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "scaleMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocityTracker", ty: "::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastSurfaceQuery", ty: "::GlobalNamespace::WaterVolume_SurfaceQuery", modifiers: "", def_value: None, comment: None }, CppParam { name: "photonViewForRPC", ty: "::UnityW<::GlobalNamespace::NetworkView>", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfaceDetected", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "inWater", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "inVolume", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastBoundingRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastRipplePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastRippleScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastRippleTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastInWaterTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nextDripTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr WaterOverlappingCollider(bool  playBigSplash, bool  playDripEffect, bool  overrideBoundingRadius, float_t  boundingRadiusOverride, float_t  scaleMultiplier, ::UnityW<::UnityEngine::Collider>  collider, ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker, ::GlobalNamespace::WaterVolume_SurfaceQuery  lastSurfaceQuery, ::UnityW<::GlobalNamespace::NetworkView>  photonViewForRPC, bool  surfaceDetected, bool  inWater, bool  inVolume, float_t  lastBoundingRadius, ::UnityEngine::Vector3  lastRipplePosition, float_t  lastRippleScale, float_t  lastRippleTime, float_t  lastInWaterTime, float_t  nextDripTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4517};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field playBigSplash, offset: 0x0, size: 0x1, def value: None
 bool  playBigSplash;

/// @brief Field playDripEffect, offset: 0x1, size: 0x1, def value: None
 bool  playDripEffect;

/// @brief Field overrideBoundingRadius, offset: 0x2, size: 0x1, def value: None
 bool  overrideBoundingRadius;

/// @brief Field boundingRadiusOverride, offset: 0x4, size: 0x4, def value: None
 float_t  boundingRadiusOverride;

/// @brief Field scaleMultiplier, offset: 0x8, size: 0x4, def value: None
 float_t  scaleMultiplier;

/// @brief Field collider, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field velocityTracker, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker;

/// @brief Field lastSurfaceQuery, offset: 0x20, size: 0x1c, def value: None
 ::GlobalNamespace::WaterVolume_SurfaceQuery  lastSurfaceQuery;

/// @brief Field photonViewForRPC, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkView>  photonViewForRPC;

/// @brief Field surfaceDetected, offset: 0x48, size: 0x1, def value: None
 bool  surfaceDetected;

/// @brief Field inWater, offset: 0x49, size: 0x1, def value: None
 bool  inWater;

/// @brief Field inVolume, offset: 0x4a, size: 0x1, def value: None
 bool  inVolume;

/// @brief Field lastBoundingRadius, offset: 0x4c, size: 0x4, def value: None
 float_t  lastBoundingRadius;

/// @brief Field lastRipplePosition, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  lastRipplePosition;

/// @brief Field lastRippleScale, offset: 0x5c, size: 0x4, def value: None
 float_t  lastRippleScale;

/// @brief Field lastRippleTime, offset: 0x60, size: 0x4, def value: None
 float_t  lastRippleTime;

/// @brief Field lastInWaterTime, offset: 0x64, size: 0x4, def value: None
 float_t  lastInWaterTime;

/// @brief Field nextDripTime, offset: 0x68, size: 0x4, def value: None
 float_t  nextDripTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, playBigSplash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, playDripEffect) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, overrideBoundingRadius) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, boundingRadiusOverride) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, scaleMultiplier) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, collider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, velocityTracker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, lastSurfaceQuery) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, photonViewForRPC) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, surfaceDetected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, inWater) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, inVolume) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, lastBoundingRadius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, lastRipplePosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, lastRippleScale) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, lastRippleTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, lastInWaterTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterOverlappingCollider, nextDripTime) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Swimming::WaterOverlappingCollider) == 0x70, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
