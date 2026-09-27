#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaterParameters)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace GorillaLocomotion::Swimming {
class WaterParameters;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Swimming::WaterParameters*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::WaterParameters*, "GorillaLocomotion.Swimming", "WaterParameters");
// [CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/WaterParameters", order = 1)]
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace GorillaLocomotion::Swimming {
// Is value type: false
// CS Name: GorillaLocomotion.Swimming.WaterParameters
class CORDL_TYPE WaterParameters : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field allowBubblesInVolume, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowBubblesInVolume, put=__cordl_internal_set_allowBubblesInVolume)) bool  allowBubblesInVolume;

/// @brief Field bigSplashSpeedRequirement, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_bigSplashSpeedRequirement, put=__cordl_internal_set_bigSplashSpeedRequirement)) float_t  bigSplashSpeedRequirement;

/// @brief Field defaultDistanceBetweenRipples, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultDistanceBetweenRipples, put=__cordl_internal_set_defaultDistanceBetweenRipples)) float_t  defaultDistanceBetweenRipples;

/// @brief Field minDistanceBetweenRipples, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceBetweenRipples, put=__cordl_internal_set_minDistanceBetweenRipples)) float_t  minDistanceBetweenRipples;

/// @brief Field minTimeBetweenRipples, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTimeBetweenRipples, put=__cordl_internal_set_minTimeBetweenRipples)) float_t  minTimeBetweenRipples;

/// @brief Field perDripDefaultRadius, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_perDripDefaultRadius, put=__cordl_internal_set_perDripDefaultRadius)) float_t  perDripDefaultRadius;

/// @brief Field perDripRadiusRandRange, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_perDripRadiusRandRange, put=__cordl_internal_set_perDripRadiusRandRange)) float_t  perDripRadiusRandRange;

/// @brief Field perDripTimeDelay, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_perDripTimeDelay, put=__cordl_internal_set_perDripTimeDelay)) float_t  perDripTimeDelay;

/// @brief Field perDripTimeRandRange, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_perDripTimeRandRange, put=__cordl_internal_set_perDripTimeRandRange)) float_t  perDripTimeRandRange;

/// @brief Field playDripEffect, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_playDripEffect, put=__cordl_internal_set_playDripEffect)) bool  playDripEffect;

/// @brief Field playRippleEffect, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_playRippleEffect, put=__cordl_internal_set_playRippleEffect)) bool  playRippleEffect;

/// @brief Field playSplashEffect, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_playSplashEffect, put=__cordl_internal_set_playSplashEffect)) bool  playSplashEffect;

/// @brief Field postExitDripDuration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_postExitDripDuration, put=__cordl_internal_set_postExitDripDuration)) float_t  postExitDripDuration;

/// @brief Field recomputeSurfaceForColliderDist, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_recomputeSurfaceForColliderDist, put=__cordl_internal_set_recomputeSurfaceForColliderDist)) float_t  recomputeSurfaceForColliderDist;

/// @brief Field rippleEffect, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rippleEffect, put=__cordl_internal_set_rippleEffect)) ::UnityW<::UnityEngine::GameObject>  rippleEffect;

/// @brief Field rippleEffectScale, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_rippleEffectScale, put=__cordl_internal_set_rippleEffectScale)) float_t  rippleEffectScale;

/// @brief Field rippleSpriteColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_rippleSpriteColor, put=__cordl_internal_set_rippleSpriteColor)) ::UnityEngine::Color  rippleSpriteColor;

/// @brief Field sendSplashEffectRPCs, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendSplashEffectRPCs, put=__cordl_internal_set_sendSplashEffectRPCs)) bool  sendSplashEffectRPCs;

/// @brief Field splashColorBySpeedGradient, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_splashColorBySpeedGradient, put=__cordl_internal_set_splashColorBySpeedGradient)) ::UnityEngine::Gradient*  splashColorBySpeedGradient;

/// @brief Field splashEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_splashEffect, put=__cordl_internal_set_splashEffect)) ::UnityW<::UnityEngine::GameObject>  splashEffect;

/// @brief Field splashEffectScale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_splashEffectScale, put=__cordl_internal_set_splashEffectScale)) float_t  splashEffectScale;

/// @brief Field splashSpeedRequirement, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_splashSpeedRequirement, put=__cordl_internal_set_splashSpeedRequirement)) float_t  splashSpeedRequirement;

static inline ::GorillaLocomotion::Swimming::WaterParameters* New_ctor() ;

constexpr bool const& __cordl_internal_get_allowBubblesInVolume() const;

constexpr bool& __cordl_internal_get_allowBubblesInVolume() ;

constexpr float_t const& __cordl_internal_get_bigSplashSpeedRequirement() const;

constexpr float_t& __cordl_internal_get_bigSplashSpeedRequirement() ;

constexpr float_t const& __cordl_internal_get_defaultDistanceBetweenRipples() const;

constexpr float_t& __cordl_internal_get_defaultDistanceBetweenRipples() ;

constexpr float_t const& __cordl_internal_get_minDistanceBetweenRipples() const;

constexpr float_t& __cordl_internal_get_minDistanceBetweenRipples() ;

constexpr float_t const& __cordl_internal_get_minTimeBetweenRipples() const;

constexpr float_t& __cordl_internal_get_minTimeBetweenRipples() ;

constexpr float_t const& __cordl_internal_get_perDripDefaultRadius() const;

constexpr float_t& __cordl_internal_get_perDripDefaultRadius() ;

constexpr float_t const& __cordl_internal_get_perDripRadiusRandRange() const;

constexpr float_t& __cordl_internal_get_perDripRadiusRandRange() ;

constexpr float_t const& __cordl_internal_get_perDripTimeDelay() const;

constexpr float_t& __cordl_internal_get_perDripTimeDelay() ;

constexpr float_t const& __cordl_internal_get_perDripTimeRandRange() const;

constexpr float_t& __cordl_internal_get_perDripTimeRandRange() ;

constexpr bool const& __cordl_internal_get_playDripEffect() const;

constexpr bool& __cordl_internal_get_playDripEffect() ;

constexpr bool const& __cordl_internal_get_playRippleEffect() const;

constexpr bool& __cordl_internal_get_playRippleEffect() ;

constexpr bool const& __cordl_internal_get_playSplashEffect() const;

constexpr bool& __cordl_internal_get_playSplashEffect() ;

constexpr float_t const& __cordl_internal_get_postExitDripDuration() const;

constexpr float_t& __cordl_internal_get_postExitDripDuration() ;

constexpr float_t const& __cordl_internal_get_recomputeSurfaceForColliderDist() const;

constexpr float_t& __cordl_internal_get_recomputeSurfaceForColliderDist() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rippleEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rippleEffect() ;

constexpr float_t const& __cordl_internal_get_rippleEffectScale() const;

constexpr float_t& __cordl_internal_get_rippleEffectScale() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_rippleSpriteColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_rippleSpriteColor() ;

constexpr bool const& __cordl_internal_get_sendSplashEffectRPCs() const;

constexpr bool& __cordl_internal_get_sendSplashEffectRPCs() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_splashColorBySpeedGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_splashColorBySpeedGradient() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_splashEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_splashEffect() ;

constexpr float_t const& __cordl_internal_get_splashEffectScale() const;

constexpr float_t& __cordl_internal_get_splashEffectScale() ;

constexpr float_t const& __cordl_internal_get_splashSpeedRequirement() const;

constexpr float_t& __cordl_internal_get_splashSpeedRequirement() ;

constexpr void __cordl_internal_set_allowBubblesInVolume(bool  value) ;

constexpr void __cordl_internal_set_bigSplashSpeedRequirement(float_t  value) ;

constexpr void __cordl_internal_set_defaultDistanceBetweenRipples(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceBetweenRipples(float_t  value) ;

constexpr void __cordl_internal_set_minTimeBetweenRipples(float_t  value) ;

constexpr void __cordl_internal_set_perDripDefaultRadius(float_t  value) ;

constexpr void __cordl_internal_set_perDripRadiusRandRange(float_t  value) ;

constexpr void __cordl_internal_set_perDripTimeDelay(float_t  value) ;

constexpr void __cordl_internal_set_perDripTimeRandRange(float_t  value) ;

constexpr void __cordl_internal_set_playDripEffect(bool  value) ;

constexpr void __cordl_internal_set_playRippleEffect(bool  value) ;

constexpr void __cordl_internal_set_playSplashEffect(bool  value) ;

constexpr void __cordl_internal_set_postExitDripDuration(float_t  value) ;

constexpr void __cordl_internal_set_recomputeSurfaceForColliderDist(float_t  value) ;

constexpr void __cordl_internal_set_rippleEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rippleEffectScale(float_t  value) ;

constexpr void __cordl_internal_set_rippleSpriteColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_sendSplashEffectRPCs(bool  value) ;

constexpr void __cordl_internal_set_splashColorBySpeedGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_splashEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_splashEffectScale(float_t  value) ;

constexpr void __cordl_internal_set_splashSpeedRequirement(float_t  value) ;

/// @brief Method .ctor, addr 0x5ce48c0, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterParameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterParameters(WaterParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterParameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterParameters(WaterParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4518};

/// [Header("Splash Effect")]
/// @brief Field playSplashEffect, offset: 0x18, size: 0x1, def value: None
 bool  ___playSplashEffect;

/// @brief Field splashEffect, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___splashEffect;

/// @brief Field splashEffectScale, offset: 0x28, size: 0x4, def value: None
 float_t  ___splashEffectScale;

/// @brief Field sendSplashEffectRPCs, offset: 0x2c, size: 0x1, def value: None
 bool  ___sendSplashEffectRPCs;

/// @brief Field splashSpeedRequirement, offset: 0x30, size: 0x4, def value: None
 float_t  ___splashSpeedRequirement;

/// @brief Field bigSplashSpeedRequirement, offset: 0x34, size: 0x4, def value: None
 float_t  ___bigSplashSpeedRequirement;

/// @brief Field splashColorBySpeedGradient, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___splashColorBySpeedGradient;

/// [Header("Ripple Effect")]
/// @brief Field playRippleEffect, offset: 0x40, size: 0x1, def value: None
 bool  ___playRippleEffect;

/// @brief Field rippleEffect, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rippleEffect;

/// @brief Field rippleEffectScale, offset: 0x50, size: 0x4, def value: None
 float_t  ___rippleEffectScale;

/// @brief Field defaultDistanceBetweenRipples, offset: 0x54, size: 0x4, def value: None
 float_t  ___defaultDistanceBetweenRipples;

/// @brief Field minDistanceBetweenRipples, offset: 0x58, size: 0x4, def value: None
 float_t  ___minDistanceBetweenRipples;

/// @brief Field minTimeBetweenRipples, offset: 0x5c, size: 0x4, def value: None
 float_t  ___minTimeBetweenRipples;

/// @brief Field rippleSpriteColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___rippleSpriteColor;

/// [Header("Drip Effect")]
/// @brief Field playDripEffect, offset: 0x70, size: 0x1, def value: None
 bool  ___playDripEffect;

/// @brief Field postExitDripDuration, offset: 0x74, size: 0x4, def value: None
 float_t  ___postExitDripDuration;

/// @brief Field perDripTimeDelay, offset: 0x78, size: 0x4, def value: None
 float_t  ___perDripTimeDelay;

/// @brief Field perDripTimeRandRange, offset: 0x7c, size: 0x4, def value: None
 float_t  ___perDripTimeRandRange;

/// @brief Field perDripDefaultRadius, offset: 0x80, size: 0x4, def value: None
 float_t  ___perDripDefaultRadius;

/// @brief Field perDripRadiusRandRange, offset: 0x84, size: 0x4, def value: None
 float_t  ___perDripRadiusRandRange;

/// [Header("Misc")]
/// @brief Field recomputeSurfaceForColliderDist, offset: 0x88, size: 0x4, def value: None
 float_t  ___recomputeSurfaceForColliderDist;

/// @brief Field allowBubblesInVolume, offset: 0x8c, size: 0x1, def value: None
 bool  ___allowBubblesInVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___playSplashEffect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___splashEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___splashEffectScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___sendSplashEffectRPCs) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___splashSpeedRequirement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___bigSplashSpeedRequirement) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___splashColorBySpeedGradient) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___playRippleEffect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___rippleEffect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___rippleEffectScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___defaultDistanceBetweenRipples) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___minDistanceBetweenRipples) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___minTimeBetweenRipples) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___rippleSpriteColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___playDripEffect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___postExitDripDuration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___perDripTimeDelay) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___perDripTimeRandRange) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___perDripDefaultRadius) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___perDripRadiusRandRange) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___recomputeSurfaceForColliderDist) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterParameters, ___allowBubblesInVolume) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Swimming::WaterParameters) == 0x90, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
