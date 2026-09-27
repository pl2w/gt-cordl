#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/UnderwaterParticleEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(UnderwaterParticleEffects)
namespace GlobalNamespace {
struct WaterVolume_SurfaceQuery;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Swimming {
class UnderwaterParticleEffects;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Swimming::UnderwaterParticleEffects*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::UnderwaterParticleEffects*, "GorillaLocomotion.Swimming", "UnderwaterParticleEffects");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3
namespace GorillaLocomotion::Swimming {
// Is value type: false
// CS Name: GorillaLocomotion.Swimming.UnderwaterParticleEffects
class CORDL_TYPE UnderwaterParticleEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field debugDraw, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDraw, put=__cordl_internal_set_debugDraw)) bool  debugDraw;

/// @brief Field floaterParticleBaseOffset, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_floaterParticleBaseOffset, put=__cordl_internal_set_floaterParticleBaseOffset)) ::UnityEngine::Vector3  floaterParticleBaseOffset;

/// @brief Field floaterParticleBoxExtents, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_floaterParticleBoxExtents, put=__cordl_internal_set_floaterParticleBoxExtents)) ::UnityEngine::Vector3  floaterParticleBoxExtents;

/// @brief Field floaterSpeedVsOffsetDist, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_floaterSpeedVsOffsetDist, put=__cordl_internal_set_floaterSpeedVsOffsetDist)) ::UnityEngine::AnimationCurve*  floaterSpeedVsOffsetDist;

/// @brief Field floaterSpeedVsOffsetDistMinMax, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_floaterSpeedVsOffsetDistMinMax, put=__cordl_internal_set_floaterSpeedVsOffsetDistMinMax)) ::UnityEngine::Vector2  floaterSpeedVsOffsetDistMinMax;

/// @brief Field playerCamera, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCamera, put=__cordl_internal_set_playerCamera)) ::UnityW<::UnityEngine::Camera>  playerCamera;

/// @brief Field underwaterBubbleParticles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_underwaterBubbleParticles, put=__cordl_internal_set_underwaterBubbleParticles)) ::UnityW<::UnityEngine::ParticleSystem>  underwaterBubbleParticles;

/// @brief Field underwaterFloaterParticles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_underwaterFloaterParticles, put=__cordl_internal_set_underwaterFloaterParticles)) ::UnityW<::UnityEngine::ParticleSystem>  underwaterFloaterParticles;

/// @brief Method IsValid, addr 0x5ce31d4, size 0x40, virtual false, abstract: false, final false
inline bool IsValid(::UnityEngine::Vector3  vector) ;

static inline ::GorillaLocomotion::Swimming::UnderwaterParticleEffects* New_ctor() ;

/// @brief Method UpdateParticleEffect, addr 0x5ce22b8, size 0xc68, virtual false, abstract: false, final false
inline void UpdateParticleEffect(bool  waterSurfaceDetected, ::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>  waterSurface) ;

constexpr bool const& __cordl_internal_get_debugDraw() const;

constexpr bool& __cordl_internal_get_debugDraw() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_floaterParticleBaseOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_floaterParticleBaseOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_floaterParticleBoxExtents() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_floaterParticleBoxExtents() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_floaterSpeedVsOffsetDist() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_floaterSpeedVsOffsetDist() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_floaterSpeedVsOffsetDistMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_floaterSpeedVsOffsetDistMinMax() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_playerCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_playerCamera() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_underwaterBubbleParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_underwaterBubbleParticles() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_underwaterFloaterParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_underwaterFloaterParticles() ;

constexpr void __cordl_internal_set_debugDraw(bool  value) ;

constexpr void __cordl_internal_set_floaterParticleBaseOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_floaterParticleBoxExtents(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_floaterSpeedVsOffsetDist(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_floaterSpeedVsOffsetDistMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_playerCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_underwaterBubbleParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_underwaterFloaterParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5ce3214, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnderwaterParticleEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterParticleEffects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnderwaterParticleEffects(UnderwaterParticleEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterParticleEffects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnderwaterParticleEffects(UnderwaterParticleEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4515};

/// @brief Field underwaterFloaterParticles, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___underwaterFloaterParticles;

/// @brief Field underwaterBubbleParticles, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___underwaterBubbleParticles;

/// @brief Field playerCamera, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___playerCamera;

/// @brief Field floaterParticleBoxExtents, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___floaterParticleBoxExtents;

/// @brief Field floaterParticleBaseOffset, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___floaterParticleBaseOffset;

/// @brief Field floaterSpeedVsOffsetDist, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___floaterSpeedVsOffsetDist;

/// @brief Field floaterSpeedVsOffsetDistMinMax, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___floaterSpeedVsOffsetDistMinMax;

/// @brief Field debugDraw, offset: 0x60, size: 0x1, def value: None
 bool  ___debugDraw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterParticleEffects, ___underwaterFloaterParticles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterParticleEffects, ___underwaterBubbleParticles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterParticleEffects, ___playerCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterParticleEffects, ___floaterParticleBoxExtents) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterParticleEffects, ___floaterParticleBaseOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterParticleEffects, ___floaterSpeedVsOffsetDist) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterParticleEffects, ___floaterSpeedVsOffsetDistMinMax) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterParticleEffects, ___debugDraw) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Swimming::UnderwaterParticleEffects) == 0x68, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
