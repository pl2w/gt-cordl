#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterSplashOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaterSplashOverride)
// Forward declare root types
namespace GorillaLocomotion::Swimming {
class WaterSplashOverride;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Swimming::WaterSplashOverride*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::WaterSplashOverride*, "GorillaLocomotion.Swimming", "WaterSplashOverride");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaLocomotion::Swimming {
// Is value type: false
// CS Name: GorillaLocomotion.Swimming.WaterSplashOverride
class CORDL_TYPE WaterSplashOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field boundingRadiusOverride, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_boundingRadiusOverride, put=__cordl_internal_set_boundingRadiusOverride)) float_t  boundingRadiusOverride;

/// @brief Field overrideBoundingRadius, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideBoundingRadius, put=__cordl_internal_set_overrideBoundingRadius)) bool  overrideBoundingRadius;

/// @brief Field playBigSplash, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_playBigSplash, put=__cordl_internal_set_playBigSplash)) bool  playBigSplash;

/// @brief Field playDrippingEffect, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_playDrippingEffect, put=__cordl_internal_set_playDrippingEffect)) bool  playDrippingEffect;

/// @brief Field scaleByPlayersScale, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleByPlayersScale, put=__cordl_internal_set_scaleByPlayersScale)) bool  scaleByPlayersScale;

/// @brief Field suppressWaterEffects, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_suppressWaterEffects, put=__cordl_internal_set_suppressWaterEffects)) bool  suppressWaterEffects;

static inline ::GorillaLocomotion::Swimming::WaterSplashOverride* New_ctor() ;

constexpr float_t const& __cordl_internal_get_boundingRadiusOverride() const;

constexpr float_t& __cordl_internal_get_boundingRadiusOverride() ;

constexpr bool const& __cordl_internal_get_overrideBoundingRadius() const;

constexpr bool& __cordl_internal_get_overrideBoundingRadius() ;

constexpr bool const& __cordl_internal_get_playBigSplash() const;

constexpr bool& __cordl_internal_get_playBigSplash() ;

constexpr bool const& __cordl_internal_get_playDrippingEffect() const;

constexpr bool& __cordl_internal_get_playDrippingEffect() ;

constexpr bool const& __cordl_internal_get_scaleByPlayersScale() const;

constexpr bool& __cordl_internal_get_scaleByPlayersScale() ;

constexpr bool const& __cordl_internal_get_suppressWaterEffects() const;

constexpr bool& __cordl_internal_get_suppressWaterEffects() ;

constexpr void __cordl_internal_set_boundingRadiusOverride(float_t  value) ;

constexpr void __cordl_internal_set_overrideBoundingRadius(bool  value) ;

constexpr void __cordl_internal_set_playBigSplash(bool  value) ;

constexpr void __cordl_internal_set_playDrippingEffect(bool  value) ;

constexpr void __cordl_internal_set_scaleByPlayersScale(bool  value) ;

constexpr void __cordl_internal_set_suppressWaterEffects(bool  value) ;

/// @brief Method .ctor, addr 0x5ce4914, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterSplashOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterSplashOverride", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterSplashOverride(WaterSplashOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterSplashOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterSplashOverride(WaterSplashOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4519};

/// @brief Field suppressWaterEffects, offset: 0x20, size: 0x1, def value: None
 bool  ___suppressWaterEffects;

/// @brief Field playBigSplash, offset: 0x21, size: 0x1, def value: None
 bool  ___playBigSplash;

/// @brief Field playDrippingEffect, offset: 0x22, size: 0x1, def value: None
 bool  ___playDrippingEffect;

/// @brief Field scaleByPlayersScale, offset: 0x23, size: 0x1, def value: None
 bool  ___scaleByPlayersScale;

/// @brief Field overrideBoundingRadius, offset: 0x24, size: 0x1, def value: None
 bool  ___overrideBoundingRadius;

/// @brief Field boundingRadiusOverride, offset: 0x28, size: 0x4, def value: None
 float_t  ___boundingRadiusOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Swimming::WaterSplashOverride, ___suppressWaterEffects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterSplashOverride, ___playBigSplash) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterSplashOverride, ___playDrippingEffect) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterSplashOverride, ___scaleByPlayersScale) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterSplashOverride, ___overrideBoundingRadius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterSplashOverride, ___boundingRadiusOverride) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Swimming::WaterSplashOverride) == 0x30, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
