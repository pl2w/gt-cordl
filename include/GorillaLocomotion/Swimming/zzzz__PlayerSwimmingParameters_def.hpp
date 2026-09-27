#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/PlayerSwimmingParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerSwimmingParameters)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GorillaLocomotion::Swimming {
class PlayerSwimmingParameters;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Swimming::PlayerSwimmingParameters*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::PlayerSwimmingParameters*, "GorillaLocomotion.Swimming", "PlayerSwimmingParameters");
// [CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/PlayerSwimmingParameters", order = 1)]
// Dependencies UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace GorillaLocomotion::Swimming {
// Is value type: false
// CS Name: GorillaLocomotion.Swimming.PlayerSwimmingParameters
class CORDL_TYPE PlayerSwimmingParameters : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field allowWaterSurfaceJumps, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowWaterSurfaceJumps, put=__cordl_internal_set_allowWaterSurfaceJumps)) bool  allowWaterSurfaceJumps;

/// @brief Field applyDiveDampingMultiplier, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyDiveDampingMultiplier, put=__cordl_internal_set_applyDiveDampingMultiplier)) bool  applyDiveDampingMultiplier;

/// @brief Field applyDiveSteering, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyDiveSteering, put=__cordl_internal_set_applyDiveSteering)) bool  applyDiveSteering;

/// @brief Field applyDiveSwimVelocityConversion, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyDiveSwimVelocityConversion, put=__cordl_internal_set_applyDiveSwimVelocityConversion)) bool  applyDiveSwimVelocityConversion;

/// @brief Field baseUnderWaterDampingHalfLife, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseUnderWaterDampingHalfLife, put=__cordl_internal_set_baseUnderWaterDampingHalfLife)) float_t  baseUnderWaterDampingHalfLife;

/// @brief Field buoyancyExtensionDecayHalflife, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_buoyancyExtensionDecayHalflife, put=__cordl_internal_set_buoyancyExtensionDecayHalflife)) float_t  buoyancyExtensionDecayHalflife;

/// @brief Field buoyancyFadeDist, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_buoyancyFadeDist, put=__cordl_internal_set_buoyancyFadeDist)) float_t  buoyancyFadeDist;

/// @brief Field diveDampingMultiplier, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_diveDampingMultiplier, put=__cordl_internal_set_diveDampingMultiplier)) float_t  diveDampingMultiplier;

/// @brief Field diveMaxSwimVelocityConversion, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_diveMaxSwimVelocityConversion, put=__cordl_internal_set_diveMaxSwimVelocityConversion)) float_t  diveMaxSwimVelocityConversion;

/// @brief Field diveSwimVelocityConversionRate, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_diveSwimVelocityConversionRate, put=__cordl_internal_set_diveSwimVelocityConversionRate)) float_t  diveSwimVelocityConversionRate;

/// @brief Field diveVelocityAveragingWindow, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_diveVelocityAveragingWindow, put=__cordl_internal_set_diveVelocityAveragingWindow)) float_t  diveVelocityAveragingWindow;

/// @brief Field extendBouyancyFromSpeed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_extendBouyancyFromSpeed, put=__cordl_internal_set_extendBouyancyFromSpeed)) bool  extendBouyancyFromSpeed;

/// @brief Field floatingWaterLevelBelowHead, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_floatingWaterLevelBelowHead, put=__cordl_internal_set_floatingWaterLevelBelowHead)) float_t  floatingWaterLevelBelowHead;

/// @brief Field handAccelToRedirectAmount, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_handAccelToRedirectAmount, put=__cordl_internal_set_handAccelToRedirectAmount)) ::UnityEngine::AnimationCurve*  handAccelToRedirectAmount;

/// @brief Field handAccelToRedirectAmountMinMax, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_handAccelToRedirectAmountMinMax, put=__cordl_internal_set_handAccelToRedirectAmountMinMax)) ::UnityEngine::Vector2  handAccelToRedirectAmountMinMax;

/// @brief Field handSpeedToRedirectAmount, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_handSpeedToRedirectAmount, put=__cordl_internal_set_handSpeedToRedirectAmount)) ::UnityEngine::AnimationCurve*  handSpeedToRedirectAmount;

/// @brief Field handSpeedToRedirectAmountMinMax, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_handSpeedToRedirectAmountMinMax, put=__cordl_internal_set_handSpeedToRedirectAmountMinMax)) ::UnityEngine::Vector2  handSpeedToRedirectAmountMinMax;

/// @brief Field maxDiveSteerAnglePerStep, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDiveSteerAnglePerStep, put=__cordl_internal_set_maxDiveSteerAnglePerStep)) float_t  maxDiveSteerAnglePerStep;

/// @brief Field nonDiveDampingHapticsAmount, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonDiveDampingHapticsAmount, put=__cordl_internal_set_nonDiveDampingHapticsAmount)) ::UnityEngine::AnimationCurve*  nonDiveDampingHapticsAmount;

/// @brief Field nonDiveDampingHapticsAmountMinMax, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonDiveDampingHapticsAmountMinMax, put=__cordl_internal_set_nonDiveDampingHapticsAmountMinMax)) ::UnityEngine::Vector2  nonDiveDampingHapticsAmountMinMax;

/// @brief Field palmFacingToRedirectAmount, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_palmFacingToRedirectAmount, put=__cordl_internal_set_palmFacingToRedirectAmount)) ::UnityEngine::AnimationCurve*  palmFacingToRedirectAmount;

/// @brief Field palmFacingToRedirectAmountMinMax, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_palmFacingToRedirectAmountMinMax, put=__cordl_internal_set_palmFacingToRedirectAmountMinMax)) ::UnityEngine::Vector2  palmFacingToRedirectAmountMinMax;

/// @brief Field reduceDiveSteeringBelowPlaneFadeEndDist, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_reduceDiveSteeringBelowPlaneFadeEndDist, put=__cordl_internal_set_reduceDiveSteeringBelowPlaneFadeEndDist)) float_t  reduceDiveSteeringBelowPlaneFadeEndDist;

/// @brief Field reduceDiveSteeringBelowPlaneFadeStartDist, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_reduceDiveSteeringBelowPlaneFadeStartDist, put=__cordl_internal_set_reduceDiveSteeringBelowPlaneFadeStartDist)) float_t  reduceDiveSteeringBelowPlaneFadeStartDist;

/// @brief Field reduceDiveSteeringBelowVelocityPlane, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_reduceDiveSteeringBelowVelocityPlane, put=__cordl_internal_set_reduceDiveSteeringBelowVelocityPlane)) bool  reduceDiveSteeringBelowVelocityPlane;

/// @brief Field speedToBouyancyExtension, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedToBouyancyExtension, put=__cordl_internal_set_speedToBouyancyExtension)) ::UnityEngine::AnimationCurve*  speedToBouyancyExtension;

/// @brief Field speedToBouyancyExtensionMinMax, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedToBouyancyExtensionMinMax, put=__cordl_internal_set_speedToBouyancyExtensionMinMax)) ::UnityEngine::Vector2  speedToBouyancyExtensionMinMax;

/// @brief Field swimSpeedToMaxRedirectAngle, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_swimSpeedToMaxRedirectAngle, put=__cordl_internal_set_swimSpeedToMaxRedirectAngle)) ::UnityEngine::AnimationCurve*  swimSpeedToMaxRedirectAngle;

/// @brief Field swimSpeedToMaxRedirectAngleMinMax, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_swimSpeedToMaxRedirectAngleMinMax, put=__cordl_internal_set_swimSpeedToMaxRedirectAngleMinMax)) ::UnityEngine::Vector2  swimSpeedToMaxRedirectAngleMinMax;

/// @brief Field swimSpeedToRedirectAmount, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_swimSpeedToRedirectAmount, put=__cordl_internal_set_swimSpeedToRedirectAmount)) ::UnityEngine::AnimationCurve*  swimSpeedToRedirectAmount;

/// @brief Field swimSpeedToRedirectAmountMinMax, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_swimSpeedToRedirectAmountMinMax, put=__cordl_internal_set_swimSpeedToRedirectAmountMinMax)) ::UnityEngine::Vector2  swimSpeedToRedirectAmountMinMax;

/// @brief Field swimUnderWaterDampingHalfLife, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_swimUnderWaterDampingHalfLife, put=__cordl_internal_set_swimUnderWaterDampingHalfLife)) float_t  swimUnderWaterDampingHalfLife;

/// @brief Field swimmingHapticsStrength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_swimmingHapticsStrength, put=__cordl_internal_set_swimmingHapticsStrength)) float_t  swimmingHapticsStrength;

/// @brief Field swimmingVelocityOutOfWaterDrainRate, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_swimmingVelocityOutOfWaterDrainRate, put=__cordl_internal_set_swimmingVelocityOutOfWaterDrainRate)) float_t  swimmingVelocityOutOfWaterDrainRate;

/// @brief Field underwaterJumpsAsSwimVelocityFactor, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterJumpsAsSwimVelocityFactor, put=__cordl_internal_set_underwaterJumpsAsSwimVelocityFactor)) float_t  underwaterJumpsAsSwimVelocityFactor;

/// @brief Field waterSurfaceJumpAmount, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_waterSurfaceJumpAmount, put=__cordl_internal_set_waterSurfaceJumpAmount)) float_t  waterSurfaceJumpAmount;

/// @brief Field waterSurfaceJumpHandSpeedThreshold, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_waterSurfaceJumpHandSpeedThreshold, put=__cordl_internal_set_waterSurfaceJumpHandSpeedThreshold)) float_t  waterSurfaceJumpHandSpeedThreshold;

/// @brief Field waterSurfaceJumpHandVelocityFacingCurve, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterSurfaceJumpHandVelocityFacingCurve, put=__cordl_internal_set_waterSurfaceJumpHandVelocityFacingCurve)) ::UnityEngine::AnimationCurve*  waterSurfaceJumpHandVelocityFacingCurve;

/// @brief Field waterSurfaceJumpMaxSpeed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_waterSurfaceJumpMaxSpeed, put=__cordl_internal_set_waterSurfaceJumpMaxSpeed)) float_t  waterSurfaceJumpMaxSpeed;

/// @brief Field waterSurfaceJumpPalmFacingCurve, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterSurfaceJumpPalmFacingCurve, put=__cordl_internal_set_waterSurfaceJumpPalmFacingCurve)) ::UnityEngine::AnimationCurve*  waterSurfaceJumpPalmFacingCurve;

static inline ::GorillaLocomotion::Swimming::PlayerSwimmingParameters* New_ctor() ;

constexpr bool const& __cordl_internal_get_allowWaterSurfaceJumps() const;

constexpr bool& __cordl_internal_get_allowWaterSurfaceJumps() ;

constexpr bool const& __cordl_internal_get_applyDiveDampingMultiplier() const;

constexpr bool& __cordl_internal_get_applyDiveDampingMultiplier() ;

constexpr bool const& __cordl_internal_get_applyDiveSteering() const;

constexpr bool& __cordl_internal_get_applyDiveSteering() ;

constexpr bool const& __cordl_internal_get_applyDiveSwimVelocityConversion() const;

constexpr bool& __cordl_internal_get_applyDiveSwimVelocityConversion() ;

constexpr float_t const& __cordl_internal_get_baseUnderWaterDampingHalfLife() const;

constexpr float_t& __cordl_internal_get_baseUnderWaterDampingHalfLife() ;

constexpr float_t const& __cordl_internal_get_buoyancyExtensionDecayHalflife() const;

constexpr float_t& __cordl_internal_get_buoyancyExtensionDecayHalflife() ;

constexpr float_t const& __cordl_internal_get_buoyancyFadeDist() const;

constexpr float_t& __cordl_internal_get_buoyancyFadeDist() ;

constexpr float_t const& __cordl_internal_get_diveDampingMultiplier() const;

constexpr float_t& __cordl_internal_get_diveDampingMultiplier() ;

constexpr float_t const& __cordl_internal_get_diveMaxSwimVelocityConversion() const;

constexpr float_t& __cordl_internal_get_diveMaxSwimVelocityConversion() ;

constexpr float_t const& __cordl_internal_get_diveSwimVelocityConversionRate() const;

constexpr float_t& __cordl_internal_get_diveSwimVelocityConversionRate() ;

constexpr float_t const& __cordl_internal_get_diveVelocityAveragingWindow() const;

constexpr float_t& __cordl_internal_get_diveVelocityAveragingWindow() ;

constexpr bool const& __cordl_internal_get_extendBouyancyFromSpeed() const;

constexpr bool& __cordl_internal_get_extendBouyancyFromSpeed() ;

constexpr float_t const& __cordl_internal_get_floatingWaterLevelBelowHead() const;

constexpr float_t& __cordl_internal_get_floatingWaterLevelBelowHead() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_handAccelToRedirectAmount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_handAccelToRedirectAmount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_handAccelToRedirectAmountMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_handAccelToRedirectAmountMinMax() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_handSpeedToRedirectAmount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_handSpeedToRedirectAmount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_handSpeedToRedirectAmountMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_handSpeedToRedirectAmountMinMax() ;

constexpr float_t const& __cordl_internal_get_maxDiveSteerAnglePerStep() const;

constexpr float_t& __cordl_internal_get_maxDiveSteerAnglePerStep() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_nonDiveDampingHapticsAmount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_nonDiveDampingHapticsAmount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_nonDiveDampingHapticsAmountMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_nonDiveDampingHapticsAmountMinMax() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_palmFacingToRedirectAmount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_palmFacingToRedirectAmount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_palmFacingToRedirectAmountMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_palmFacingToRedirectAmountMinMax() ;

constexpr float_t const& __cordl_internal_get_reduceDiveSteeringBelowPlaneFadeEndDist() const;

constexpr float_t& __cordl_internal_get_reduceDiveSteeringBelowPlaneFadeEndDist() ;

constexpr float_t const& __cordl_internal_get_reduceDiveSteeringBelowPlaneFadeStartDist() const;

constexpr float_t& __cordl_internal_get_reduceDiveSteeringBelowPlaneFadeStartDist() ;

constexpr bool const& __cordl_internal_get_reduceDiveSteeringBelowVelocityPlane() const;

constexpr bool& __cordl_internal_get_reduceDiveSteeringBelowVelocityPlane() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_speedToBouyancyExtension() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_speedToBouyancyExtension() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_speedToBouyancyExtensionMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_speedToBouyancyExtensionMinMax() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_swimSpeedToMaxRedirectAngle() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_swimSpeedToMaxRedirectAngle() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_swimSpeedToMaxRedirectAngleMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_swimSpeedToMaxRedirectAngleMinMax() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_swimSpeedToRedirectAmount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_swimSpeedToRedirectAmount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_swimSpeedToRedirectAmountMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_swimSpeedToRedirectAmountMinMax() ;

constexpr float_t const& __cordl_internal_get_swimUnderWaterDampingHalfLife() const;

constexpr float_t& __cordl_internal_get_swimUnderWaterDampingHalfLife() ;

constexpr float_t const& __cordl_internal_get_swimmingHapticsStrength() const;

constexpr float_t& __cordl_internal_get_swimmingHapticsStrength() ;

constexpr float_t const& __cordl_internal_get_swimmingVelocityOutOfWaterDrainRate() const;

constexpr float_t& __cordl_internal_get_swimmingVelocityOutOfWaterDrainRate() ;

constexpr float_t const& __cordl_internal_get_underwaterJumpsAsSwimVelocityFactor() const;

constexpr float_t& __cordl_internal_get_underwaterJumpsAsSwimVelocityFactor() ;

constexpr float_t const& __cordl_internal_get_waterSurfaceJumpAmount() const;

constexpr float_t& __cordl_internal_get_waterSurfaceJumpAmount() ;

constexpr float_t const& __cordl_internal_get_waterSurfaceJumpHandSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_waterSurfaceJumpHandSpeedThreshold() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_waterSurfaceJumpHandVelocityFacingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_waterSurfaceJumpHandVelocityFacingCurve() ;

constexpr float_t const& __cordl_internal_get_waterSurfaceJumpMaxSpeed() const;

constexpr float_t& __cordl_internal_get_waterSurfaceJumpMaxSpeed() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_waterSurfaceJumpPalmFacingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_waterSurfaceJumpPalmFacingCurve() ;

constexpr void __cordl_internal_set_allowWaterSurfaceJumps(bool  value) ;

constexpr void __cordl_internal_set_applyDiveDampingMultiplier(bool  value) ;

constexpr void __cordl_internal_set_applyDiveSteering(bool  value) ;

constexpr void __cordl_internal_set_applyDiveSwimVelocityConversion(bool  value) ;

constexpr void __cordl_internal_set_baseUnderWaterDampingHalfLife(float_t  value) ;

constexpr void __cordl_internal_set_buoyancyExtensionDecayHalflife(float_t  value) ;

constexpr void __cordl_internal_set_buoyancyFadeDist(float_t  value) ;

constexpr void __cordl_internal_set_diveDampingMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_diveMaxSwimVelocityConversion(float_t  value) ;

constexpr void __cordl_internal_set_diveSwimVelocityConversionRate(float_t  value) ;

constexpr void __cordl_internal_set_diveVelocityAveragingWindow(float_t  value) ;

constexpr void __cordl_internal_set_extendBouyancyFromSpeed(bool  value) ;

constexpr void __cordl_internal_set_floatingWaterLevelBelowHead(float_t  value) ;

constexpr void __cordl_internal_set_handAccelToRedirectAmount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_handAccelToRedirectAmountMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_handSpeedToRedirectAmount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_handSpeedToRedirectAmountMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_maxDiveSteerAnglePerStep(float_t  value) ;

constexpr void __cordl_internal_set_nonDiveDampingHapticsAmount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_nonDiveDampingHapticsAmountMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_palmFacingToRedirectAmount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_palmFacingToRedirectAmountMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_reduceDiveSteeringBelowPlaneFadeEndDist(float_t  value) ;

constexpr void __cordl_internal_set_reduceDiveSteeringBelowPlaneFadeStartDist(float_t  value) ;

constexpr void __cordl_internal_set_reduceDiveSteeringBelowVelocityPlane(bool  value) ;

constexpr void __cordl_internal_set_speedToBouyancyExtension(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_speedToBouyancyExtensionMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_swimSpeedToMaxRedirectAngle(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_swimSpeedToMaxRedirectAngleMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_swimSpeedToRedirectAmount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_swimSpeedToRedirectAmountMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_swimUnderWaterDampingHalfLife(float_t  value) ;

constexpr void __cordl_internal_set_swimmingHapticsStrength(float_t  value) ;

constexpr void __cordl_internal_set_swimmingVelocityOutOfWaterDrainRate(float_t  value) ;

constexpr void __cordl_internal_set_underwaterJumpsAsSwimVelocityFactor(float_t  value) ;

constexpr void __cordl_internal_set_waterSurfaceJumpAmount(float_t  value) ;

constexpr void __cordl_internal_set_waterSurfaceJumpHandSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_waterSurfaceJumpHandVelocityFacingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_waterSurfaceJumpMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_waterSurfaceJumpPalmFacingCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x5cde230, size 0x330, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSwimmingParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSwimmingParameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSwimmingParameters(PlayerSwimmingParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSwimmingParameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSwimmingParameters(PlayerSwimmingParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4510};

/// [Header("Base Settings")]
/// @brief Field floatingWaterLevelBelowHead, offset: 0x18, size: 0x4, def value: None
 float_t  ___floatingWaterLevelBelowHead;

/// @brief Field buoyancyFadeDist, offset: 0x1c, size: 0x4, def value: None
 float_t  ___buoyancyFadeDist;

/// @brief Field extendBouyancyFromSpeed, offset: 0x20, size: 0x1, def value: None
 bool  ___extendBouyancyFromSpeed;

/// @brief Field buoyancyExtensionDecayHalflife, offset: 0x24, size: 0x4, def value: None
 float_t  ___buoyancyExtensionDecayHalflife;

/// @brief Field baseUnderWaterDampingHalfLife, offset: 0x28, size: 0x4, def value: None
 float_t  ___baseUnderWaterDampingHalfLife;

/// @brief Field swimUnderWaterDampingHalfLife, offset: 0x2c, size: 0x4, def value: None
 float_t  ___swimUnderWaterDampingHalfLife;

/// @brief Field speedToBouyancyExtension, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___speedToBouyancyExtension;

/// @brief Field speedToBouyancyExtensionMinMax, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___speedToBouyancyExtensionMinMax;

/// @brief Field swimmingVelocityOutOfWaterDrainRate, offset: 0x40, size: 0x4, def value: None
 float_t  ___swimmingVelocityOutOfWaterDrainRate;

/// [Range(0, 1)]
/// @brief Field underwaterJumpsAsSwimVelocityFactor, offset: 0x44, size: 0x4, def value: None
 float_t  ___underwaterJumpsAsSwimVelocityFactor;

/// [Range(0, 1)]
/// @brief Field swimmingHapticsStrength, offset: 0x48, size: 0x4, def value: None
 float_t  ___swimmingHapticsStrength;

/// [Header("Surface Jumping")]
/// @brief Field allowWaterSurfaceJumps, offset: 0x4c, size: 0x1, def value: None
 bool  ___allowWaterSurfaceJumps;

/// @brief Field waterSurfaceJumpHandSpeedThreshold, offset: 0x50, size: 0x4, def value: None
 float_t  ___waterSurfaceJumpHandSpeedThreshold;

/// @brief Field waterSurfaceJumpAmount, offset: 0x54, size: 0x4, def value: None
 float_t  ___waterSurfaceJumpAmount;

/// @brief Field waterSurfaceJumpMaxSpeed, offset: 0x58, size: 0x4, def value: None
 float_t  ___waterSurfaceJumpMaxSpeed;

/// @brief Field waterSurfaceJumpPalmFacingCurve, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___waterSurfaceJumpPalmFacingCurve;

/// @brief Field waterSurfaceJumpHandVelocityFacingCurve, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___waterSurfaceJumpHandVelocityFacingCurve;

/// [Header("Diving")]
/// @brief Field applyDiveSteering, offset: 0x70, size: 0x1, def value: None
 bool  ___applyDiveSteering;

/// @brief Field applyDiveDampingMultiplier, offset: 0x71, size: 0x1, def value: None
 bool  ___applyDiveDampingMultiplier;

/// @brief Field diveDampingMultiplier, offset: 0x74, size: 0x4, def value: None
 float_t  ___diveDampingMultiplier;

/// [Tooltip("In degrees")]
/// @brief Field maxDiveSteerAnglePerStep, offset: 0x78, size: 0x4, def value: None
 float_t  ___maxDiveSteerAnglePerStep;

/// @brief Field diveVelocityAveragingWindow, offset: 0x7c, size: 0x4, def value: None
 float_t  ___diveVelocityAveragingWindow;

/// @brief Field applyDiveSwimVelocityConversion, offset: 0x80, size: 0x1, def value: None
 bool  ___applyDiveSwimVelocityConversion;

/// [Tooltip("In meters per second")]
/// @brief Field diveSwimVelocityConversionRate, offset: 0x84, size: 0x4, def value: None
 float_t  ___diveSwimVelocityConversionRate;

/// @brief Field diveMaxSwimVelocityConversion, offset: 0x88, size: 0x4, def value: None
 float_t  ___diveMaxSwimVelocityConversion;

/// @brief Field reduceDiveSteeringBelowVelocityPlane, offset: 0x8c, size: 0x1, def value: None
 bool  ___reduceDiveSteeringBelowVelocityPlane;

/// @brief Field reduceDiveSteeringBelowPlaneFadeStartDist, offset: 0x90, size: 0x4, def value: None
 float_t  ___reduceDiveSteeringBelowPlaneFadeStartDist;

/// @brief Field reduceDiveSteeringBelowPlaneFadeEndDist, offset: 0x94, size: 0x4, def value: None
 float_t  ___reduceDiveSteeringBelowPlaneFadeEndDist;

/// @brief Field palmFacingToRedirectAmount, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___palmFacingToRedirectAmount;

/// @brief Field palmFacingToRedirectAmountMinMax, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___palmFacingToRedirectAmountMinMax;

/// @brief Field swimSpeedToRedirectAmount, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___swimSpeedToRedirectAmount;

/// @brief Field swimSpeedToRedirectAmountMinMax, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___swimSpeedToRedirectAmountMinMax;

/// @brief Field swimSpeedToMaxRedirectAngle, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___swimSpeedToMaxRedirectAngle;

/// @brief Field swimSpeedToMaxRedirectAngleMinMax, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___swimSpeedToMaxRedirectAngleMinMax;

/// @brief Field handSpeedToRedirectAmount, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___handSpeedToRedirectAmount;

/// @brief Field handSpeedToRedirectAmountMinMax, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___handSpeedToRedirectAmountMinMax;

/// @brief Field handAccelToRedirectAmount, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___handAccelToRedirectAmount;

/// @brief Field handAccelToRedirectAmountMinMax, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___handAccelToRedirectAmountMinMax;

/// @brief Field nonDiveDampingHapticsAmount, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___nonDiveDampingHapticsAmount;

/// @brief Field nonDiveDampingHapticsAmountMinMax, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___nonDiveDampingHapticsAmountMinMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___floatingWaterLevelBelowHead) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___buoyancyFadeDist) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___extendBouyancyFromSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___buoyancyExtensionDecayHalflife) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___baseUnderWaterDampingHalfLife) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___swimUnderWaterDampingHalfLife) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___speedToBouyancyExtension) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___speedToBouyancyExtensionMinMax) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___swimmingVelocityOutOfWaterDrainRate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___underwaterJumpsAsSwimVelocityFactor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___swimmingHapticsStrength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___allowWaterSurfaceJumps) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___waterSurfaceJumpHandSpeedThreshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___waterSurfaceJumpAmount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___waterSurfaceJumpMaxSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___waterSurfaceJumpPalmFacingCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___waterSurfaceJumpHandVelocityFacingCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___applyDiveSteering) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___applyDiveDampingMultiplier) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___diveDampingMultiplier) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___maxDiveSteerAnglePerStep) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___diveVelocityAveragingWindow) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___applyDiveSwimVelocityConversion) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___diveSwimVelocityConversionRate) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___diveMaxSwimVelocityConversion) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___reduceDiveSteeringBelowVelocityPlane) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___reduceDiveSteeringBelowPlaneFadeStartDist) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___reduceDiveSteeringBelowPlaneFadeEndDist) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___palmFacingToRedirectAmount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___palmFacingToRedirectAmountMinMax) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___swimSpeedToRedirectAmount) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___swimSpeedToRedirectAmountMinMax) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___swimSpeedToMaxRedirectAngle) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___swimSpeedToMaxRedirectAngleMinMax) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___handSpeedToRedirectAmount) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___handSpeedToRedirectAmountMinMax) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___handAccelToRedirectAmount) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___handAccelToRedirectAmountMinMax) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___nonDiveDampingHapticsAmount) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters, ___nonDiveDampingHapticsAmountMinMax) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Swimming::PlayerSwimmingParameters) == 0xf8, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
