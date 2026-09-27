#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderScaleParticles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderScaleParticles)
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurve;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderScaleParticles;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderScaleParticles*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderScaleParticles*, "GorillaTagScripts.Builder", "BuilderScaleParticles");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::MinMaxCurve, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderScaleParticles
class CORDL_TYPE BuilderScaleParticles : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field autoPlay, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoPlay, put=__cordl_internal_set_autoPlay)) bool  autoPlay;

/// @brief Field enableFrame, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_enableFrame, put=__cordl_internal_set_enableFrame)) int32_t  enableFrame;

/// @brief Field forceX, offset 0xd8, size 0x20 
 __declspec(property(get=__cordl_internal_get_forceX, put=__cordl_internal_set_forceX)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  forceX;

/// @brief Field forceY, offset 0xf8, size 0x20 
 __declspec(property(get=__cordl_internal_get_forceY, put=__cordl_internal_set_forceY)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  forceY;

/// @brief Field forceZ, offset 0x118, size 0x20 
 __declspec(property(get=__cordl_internal_get_forceZ, put=__cordl_internal_set_forceZ)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  forceZ;

/// @brief Field gravityMod, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityMod, put=__cordl_internal_set_gravityMod)) float_t  gravityMod;

/// @brief Field lifetimeVelocityX, offset 0x148, size 0x20 
 __declspec(property(get=__cordl_internal_get_lifetimeVelocityX, put=__cordl_internal_set_lifetimeVelocityX)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  lifetimeVelocityX;

/// @brief Field lifetimeVelocityY, offset 0x168, size 0x20 
 __declspec(property(get=__cordl_internal_get_lifetimeVelocityY, put=__cordl_internal_set_lifetimeVelocityY)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  lifetimeVelocityY;

/// @brief Field lifetimeVelocityZ, offset 0x188, size 0x20 
 __declspec(property(get=__cordl_internal_get_lifetimeVelocityZ, put=__cordl_internal_set_lifetimeVelocityZ)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  lifetimeVelocityZ;

/// @brief Field limitMultiplier, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_limitMultiplier, put=__cordl_internal_set_limitMultiplier)) float_t  limitMultiplier;

/// @brief Field scale, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Field scaleForceOverLife, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleForceOverLife, put=__cordl_internal_set_scaleForceOverLife)) bool  scaleForceOverLife;

/// @brief Field scaleShape, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleShape, put=__cordl_internal_set_scaleShape)) bool  scaleShape;

/// @brief Field scaleVelocityLifetime, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleVelocityLifetime, put=__cordl_internal_set_scaleVelocityLifetime)) bool  scaleVelocityLifetime;

/// @brief Field scaleVelocityLimitLifetime, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleVelocityLimitLifetime, put=__cordl_internal_set_scaleVelocityLimitLifetime)) bool  scaleVelocityLimitLifetime;

/// @brief Field setScaleNextFrame, offset 0x1ad, size 0x1 
 __declspec(property(get=__cordl_internal_get_setScaleNextFrame, put=__cordl_internal_set_setScaleNextFrame)) bool  setScaleNextFrame;

/// @brief Field shapeScale, offset 0x138, size 0xc 
 __declspec(property(get=__cordl_internal_get_shapeScale, put=__cordl_internal_set_shapeScale)) ::UnityEngine::Vector3  shapeScale;

/// @brief Field shouldRevert, offset 0x1ac, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldRevert, put=__cordl_internal_set_shouldRevert)) bool  shouldRevert;

/// @brief Field sizeCurveCache, offset 0x58, size 0x20 
 __declspec(property(get=__cordl_internal_get_sizeCurveCache, put=__cordl_internal_set_sizeCurveCache)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  sizeCurveCache;

/// @brief Field sizeCurveXCache, offset 0x78, size 0x20 
 __declspec(property(get=__cordl_internal_get_sizeCurveXCache, put=__cordl_internal_set_sizeCurveXCache)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  sizeCurveXCache;

/// @brief Field sizeCurveYCache, offset 0x98, size 0x20 
 __declspec(property(get=__cordl_internal_get_sizeCurveYCache, put=__cordl_internal_set_sizeCurveYCache)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  sizeCurveYCache;

/// @brief Field sizeCurveZCache, offset 0xb8, size 0x20 
 __declspec(property(get=__cordl_internal_get_sizeCurveZCache, put=__cordl_internal_set_sizeCurveZCache)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  sizeCurveZCache;

/// @brief Field speedCurveCache, offset 0x38, size 0x20 
 __declspec(property(get=__cordl_internal_get_speedCurveCache, put=__cordl_internal_set_speedCurveCache)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  speedCurveCache;

/// @brief Field system, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_system, put=__cordl_internal_set_system)) ::UnityW<::UnityEngine::ParticleSystem>  system;

/// @brief Field useLossyScale, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_useLossyScale, put=__cordl_internal_set_useLossyScale)) bool  useLossyScale;

/// @brief Method LateUpdate, addr 0x5c308e0, size 0x5c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTagScripts::Builder::BuilderScaleParticles* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c31098, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c308b4, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RevertScale, addr 0x5c310a8, size 0x248, virtual false, abstract: false, final false
inline void RevertScale() ;

/// @brief Method ScaleCurve, addr 0x5c312f0, size 0xc8, virtual false, abstract: false, final false
inline void ScaleCurve(::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurve>  curve, float_t  scale) ;

/// @brief Method SetScale, addr 0x5c3093c, size 0x75c, virtual false, abstract: false, final false
inline void SetScale(float_t  inScale) ;

constexpr bool const& __cordl_internal_get_autoPlay() const;

constexpr bool& __cordl_internal_get_autoPlay() ;

constexpr int32_t const& __cordl_internal_get_enableFrame() const;

constexpr int32_t& __cordl_internal_get_enableFrame() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_forceX() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_forceX() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_forceY() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_forceY() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_forceZ() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_forceZ() ;

constexpr float_t const& __cordl_internal_get_gravityMod() const;

constexpr float_t& __cordl_internal_get_gravityMod() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_lifetimeVelocityX() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_lifetimeVelocityX() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_lifetimeVelocityY() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_lifetimeVelocityY() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_lifetimeVelocityZ() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_lifetimeVelocityZ() ;

constexpr float_t const& __cordl_internal_get_limitMultiplier() const;

constexpr float_t& __cordl_internal_get_limitMultiplier() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr bool const& __cordl_internal_get_scaleForceOverLife() const;

constexpr bool& __cordl_internal_get_scaleForceOverLife() ;

constexpr bool const& __cordl_internal_get_scaleShape() const;

constexpr bool& __cordl_internal_get_scaleShape() ;

constexpr bool const& __cordl_internal_get_scaleVelocityLifetime() const;

constexpr bool& __cordl_internal_get_scaleVelocityLifetime() ;

constexpr bool const& __cordl_internal_get_scaleVelocityLimitLifetime() const;

constexpr bool& __cordl_internal_get_scaleVelocityLimitLifetime() ;

constexpr bool const& __cordl_internal_get_setScaleNextFrame() const;

constexpr bool& __cordl_internal_get_setScaleNextFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_shapeScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_shapeScale() ;

constexpr bool const& __cordl_internal_get_shouldRevert() const;

constexpr bool& __cordl_internal_get_shouldRevert() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_sizeCurveCache() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_sizeCurveCache() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_sizeCurveXCache() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_sizeCurveXCache() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_sizeCurveYCache() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_sizeCurveYCache() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_sizeCurveZCache() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_sizeCurveZCache() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_speedCurveCache() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_speedCurveCache() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_system() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_system() ;

constexpr bool const& __cordl_internal_get_useLossyScale() const;

constexpr bool& __cordl_internal_get_useLossyScale() ;

constexpr void __cordl_internal_set_autoPlay(bool  value) ;

constexpr void __cordl_internal_set_enableFrame(int32_t  value) ;

constexpr void __cordl_internal_set_forceX(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_forceY(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_forceZ(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_gravityMod(float_t  value) ;

constexpr void __cordl_internal_set_lifetimeVelocityX(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_lifetimeVelocityY(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_lifetimeVelocityZ(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_limitMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

constexpr void __cordl_internal_set_scaleForceOverLife(bool  value) ;

constexpr void __cordl_internal_set_scaleShape(bool  value) ;

constexpr void __cordl_internal_set_scaleVelocityLifetime(bool  value) ;

constexpr void __cordl_internal_set_scaleVelocityLimitLifetime(bool  value) ;

constexpr void __cordl_internal_set_setScaleNextFrame(bool  value) ;

constexpr void __cordl_internal_set_shapeScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_shouldRevert(bool  value) ;

constexpr void __cordl_internal_set_sizeCurveCache(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_sizeCurveXCache(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_sizeCurveYCache(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_sizeCurveZCache(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_speedCurveCache(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_system(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_useLossyScale(bool  value) ;

/// @brief Method .ctor, addr 0x5c313b8, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderScaleParticles() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderScaleParticles", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderScaleParticles(BuilderScaleParticles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderScaleParticles", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderScaleParticles(BuilderScaleParticles const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4173};

/// @brief Field scale, offset: 0x20, size: 0x4, def value: None
 float_t  ___scale;

/// [Tooltip("Scale particles on enable using lossy scale")]
/// [SerializeField]
/// @brief Field useLossyScale, offset: 0x24, size: 0x1, def value: None
 bool  ___useLossyScale;

/// [Tooltip("Play particles after scaling")]
/// [SerializeField]
/// @brief Field autoPlay, offset: 0x25, size: 0x1, def value: None
 bool  ___autoPlay;

/// [SerializeField]
/// @brief Field system, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___system;

/// [SerializeField]
/// @brief Field scaleShape, offset: 0x30, size: 0x1, def value: None
 bool  ___scaleShape;

/// [SerializeField]
/// @brief Field scaleVelocityLifetime, offset: 0x31, size: 0x1, def value: None
 bool  ___scaleVelocityLifetime;

/// [SerializeField]
/// @brief Field scaleVelocityLimitLifetime, offset: 0x32, size: 0x1, def value: None
 bool  ___scaleVelocityLimitLifetime;

/// [SerializeField]
/// @brief Field scaleForceOverLife, offset: 0x33, size: 0x1, def value: None
 bool  ___scaleForceOverLife;

/// @brief Field gravityMod, offset: 0x34, size: 0x4, def value: None
 float_t  ___gravityMod;

/// @brief Field speedCurveCache, offset: 0x38, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___speedCurveCache;

/// @brief Field sizeCurveCache, offset: 0x58, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___sizeCurveCache;

/// @brief Field sizeCurveXCache, offset: 0x78, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___sizeCurveXCache;

/// @brief Field sizeCurveYCache, offset: 0x98, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___sizeCurveYCache;

/// @brief Field sizeCurveZCache, offset: 0xb8, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___sizeCurveZCache;

/// @brief Field forceX, offset: 0xd8, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___forceX;

/// @brief Field forceY, offset: 0xf8, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___forceY;

/// @brief Field forceZ, offset: 0x118, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___forceZ;

/// @brief Field shapeScale, offset: 0x138, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___shapeScale;

/// @brief Field lifetimeVelocityX, offset: 0x148, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___lifetimeVelocityX;

/// @brief Field lifetimeVelocityY, offset: 0x168, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___lifetimeVelocityY;

/// @brief Field lifetimeVelocityZ, offset: 0x188, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___lifetimeVelocityZ;

/// @brief Field limitMultiplier, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___limitMultiplier;

/// @brief Field shouldRevert, offset: 0x1ac, size: 0x1, def value: None
 bool  ___shouldRevert;

/// @brief Field setScaleNextFrame, offset: 0x1ad, size: 0x1, def value: None
 bool  ___setScaleNextFrame;

/// @brief Field enableFrame, offset: 0x1b0, size: 0x4, def value: None
 int32_t  ___enableFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___useLossyScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___autoPlay) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___system) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___scaleShape) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___scaleVelocityLifetime) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___scaleVelocityLimitLifetime) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___scaleForceOverLife) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___gravityMod) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___speedCurveCache) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___sizeCurveCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___sizeCurveXCache) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___sizeCurveYCache) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___sizeCurveZCache) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___forceX) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___forceY) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___forceZ) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___shapeScale) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___lifetimeVelocityX) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___lifetimeVelocityY) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___lifetimeVelocityZ) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___limitMultiplier) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___shouldRevert) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___setScaleNextFrame) == 0x1ad, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleParticles, ___enableFrame) == 0x1b0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderScaleParticles) == 0x1b8, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
