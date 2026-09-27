#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/PlayerSwimmingParameters.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GorillaLocomotion/Swimming/zzzz__PlayerSwimmingParameters_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Swimming::PlayerSwimmingParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::PlayerSwimmingParameters::*)()>(&::GorillaLocomotion::Swimming::PlayerSwimmingParameters::_ctor)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5cde230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::PlayerSwimmingParameters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_floatingWaterLevelBelowHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingWaterLevelBelowHead;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_floatingWaterLevelBelowHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingWaterLevelBelowHead;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_floatingWaterLevelBelowHead(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatingWaterLevelBelowHead = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_buoyancyFadeDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buoyancyFadeDist;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_buoyancyFadeDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buoyancyFadeDist;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_buoyancyFadeDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buoyancyFadeDist = value;
}
constexpr bool& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_extendBouyancyFromSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendBouyancyFromSpeed;
}
constexpr bool const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_extendBouyancyFromSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendBouyancyFromSpeed;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_extendBouyancyFromSpeed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendBouyancyFromSpeed = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_buoyancyExtensionDecayHalflife()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buoyancyExtensionDecayHalflife;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_buoyancyExtensionDecayHalflife() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buoyancyExtensionDecayHalflife;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_buoyancyExtensionDecayHalflife(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buoyancyExtensionDecayHalflife = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_baseUnderWaterDampingHalfLife()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseUnderWaterDampingHalfLife;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_baseUnderWaterDampingHalfLife() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseUnderWaterDampingHalfLife;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_baseUnderWaterDampingHalfLife(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseUnderWaterDampingHalfLife = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimUnderWaterDampingHalfLife()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimUnderWaterDampingHalfLife;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimUnderWaterDampingHalfLife() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimUnderWaterDampingHalfLife;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_swimUnderWaterDampingHalfLife(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimUnderWaterDampingHalfLife = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_speedToBouyancyExtension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedToBouyancyExtension;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_speedToBouyancyExtension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedToBouyancyExtension;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_speedToBouyancyExtension(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedToBouyancyExtension = value;
}
constexpr ::UnityEngine::Vector2& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_speedToBouyancyExtensionMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedToBouyancyExtensionMinMax;
}
constexpr ::UnityEngine::Vector2 const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_speedToBouyancyExtensionMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedToBouyancyExtensionMinMax;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_speedToBouyancyExtensionMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedToBouyancyExtensionMinMax = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimmingVelocityOutOfWaterDrainRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimmingVelocityOutOfWaterDrainRate;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimmingVelocityOutOfWaterDrainRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimmingVelocityOutOfWaterDrainRate;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_swimmingVelocityOutOfWaterDrainRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimmingVelocityOutOfWaterDrainRate = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_underwaterJumpsAsSwimVelocityFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underwaterJumpsAsSwimVelocityFactor;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_underwaterJumpsAsSwimVelocityFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underwaterJumpsAsSwimVelocityFactor;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_underwaterJumpsAsSwimVelocityFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___underwaterJumpsAsSwimVelocityFactor = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimmingHapticsStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimmingHapticsStrength;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimmingHapticsStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimmingHapticsStrength;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_swimmingHapticsStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimmingHapticsStrength = value;
}
constexpr bool& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_allowWaterSurfaceJumps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowWaterSurfaceJumps;
}
constexpr bool const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_allowWaterSurfaceJumps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowWaterSurfaceJumps;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_allowWaterSurfaceJumps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowWaterSurfaceJumps = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_waterSurfaceJumpHandSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpHandSpeedThreshold;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_waterSurfaceJumpHandSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpHandSpeedThreshold;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_waterSurfaceJumpHandSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterSurfaceJumpHandSpeedThreshold = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_waterSurfaceJumpAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpAmount;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_waterSurfaceJumpAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpAmount;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_waterSurfaceJumpAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterSurfaceJumpAmount = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_waterSurfaceJumpMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpMaxSpeed;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_waterSurfaceJumpMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpMaxSpeed;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_waterSurfaceJumpMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterSurfaceJumpMaxSpeed = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_waterSurfaceJumpPalmFacingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpPalmFacingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_waterSurfaceJumpPalmFacingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpPalmFacingCurve;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_waterSurfaceJumpPalmFacingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterSurfaceJumpPalmFacingCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_waterSurfaceJumpHandVelocityFacingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpHandVelocityFacingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_waterSurfaceJumpHandVelocityFacingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpHandVelocityFacingCurve;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_waterSurfaceJumpHandVelocityFacingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterSurfaceJumpHandVelocityFacingCurve = value;
}
constexpr bool& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_applyDiveSteering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyDiveSteering;
}
constexpr bool const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_applyDiveSteering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyDiveSteering;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_applyDiveSteering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyDiveSteering = value;
}
constexpr bool& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_applyDiveDampingMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyDiveDampingMultiplier;
}
constexpr bool const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_applyDiveDampingMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyDiveDampingMultiplier;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_applyDiveDampingMultiplier(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyDiveDampingMultiplier = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_diveDampingMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diveDampingMultiplier;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_diveDampingMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diveDampingMultiplier;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_diveDampingMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diveDampingMultiplier = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_maxDiveSteerAnglePerStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDiveSteerAnglePerStep;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_maxDiveSteerAnglePerStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDiveSteerAnglePerStep;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_maxDiveSteerAnglePerStep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDiveSteerAnglePerStep = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_diveVelocityAveragingWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diveVelocityAveragingWindow;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_diveVelocityAveragingWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diveVelocityAveragingWindow;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_diveVelocityAveragingWindow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diveVelocityAveragingWindow = value;
}
constexpr bool& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_applyDiveSwimVelocityConversion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyDiveSwimVelocityConversion;
}
constexpr bool const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_applyDiveSwimVelocityConversion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyDiveSwimVelocityConversion;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_applyDiveSwimVelocityConversion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyDiveSwimVelocityConversion = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_diveSwimVelocityConversionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diveSwimVelocityConversionRate;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_diveSwimVelocityConversionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diveSwimVelocityConversionRate;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_diveSwimVelocityConversionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diveSwimVelocityConversionRate = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_diveMaxSwimVelocityConversion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diveMaxSwimVelocityConversion;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_diveMaxSwimVelocityConversion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diveMaxSwimVelocityConversion;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_diveMaxSwimVelocityConversion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diveMaxSwimVelocityConversion = value;
}
constexpr bool& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_reduceDiveSteeringBelowVelocityPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reduceDiveSteeringBelowVelocityPlane;
}
constexpr bool const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_reduceDiveSteeringBelowVelocityPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reduceDiveSteeringBelowVelocityPlane;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_reduceDiveSteeringBelowVelocityPlane(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reduceDiveSteeringBelowVelocityPlane = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_reduceDiveSteeringBelowPlaneFadeStartDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reduceDiveSteeringBelowPlaneFadeStartDist;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_reduceDiveSteeringBelowPlaneFadeStartDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reduceDiveSteeringBelowPlaneFadeStartDist;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_reduceDiveSteeringBelowPlaneFadeStartDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reduceDiveSteeringBelowPlaneFadeStartDist = value;
}
constexpr float_t& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_reduceDiveSteeringBelowPlaneFadeEndDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reduceDiveSteeringBelowPlaneFadeEndDist;
}
constexpr float_t const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_reduceDiveSteeringBelowPlaneFadeEndDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reduceDiveSteeringBelowPlaneFadeEndDist;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_reduceDiveSteeringBelowPlaneFadeEndDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reduceDiveSteeringBelowPlaneFadeEndDist = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_palmFacingToRedirectAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___palmFacingToRedirectAmount;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_palmFacingToRedirectAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___palmFacingToRedirectAmount;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_palmFacingToRedirectAmount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___palmFacingToRedirectAmount = value;
}
constexpr ::UnityEngine::Vector2& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_palmFacingToRedirectAmountMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___palmFacingToRedirectAmountMinMax;
}
constexpr ::UnityEngine::Vector2 const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_palmFacingToRedirectAmountMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___palmFacingToRedirectAmountMinMax;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_palmFacingToRedirectAmountMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___palmFacingToRedirectAmountMinMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimSpeedToRedirectAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimSpeedToRedirectAmount;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimSpeedToRedirectAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimSpeedToRedirectAmount;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_swimSpeedToRedirectAmount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimSpeedToRedirectAmount = value;
}
constexpr ::UnityEngine::Vector2& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimSpeedToRedirectAmountMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimSpeedToRedirectAmountMinMax;
}
constexpr ::UnityEngine::Vector2 const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimSpeedToRedirectAmountMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimSpeedToRedirectAmountMinMax;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_swimSpeedToRedirectAmountMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimSpeedToRedirectAmountMinMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimSpeedToMaxRedirectAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimSpeedToMaxRedirectAngle;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimSpeedToMaxRedirectAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimSpeedToMaxRedirectAngle;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_swimSpeedToMaxRedirectAngle(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimSpeedToMaxRedirectAngle = value;
}
constexpr ::UnityEngine::Vector2& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimSpeedToMaxRedirectAngleMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimSpeedToMaxRedirectAngleMinMax;
}
constexpr ::UnityEngine::Vector2 const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_swimSpeedToMaxRedirectAngleMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimSpeedToMaxRedirectAngleMinMax;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_swimSpeedToMaxRedirectAngleMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimSpeedToMaxRedirectAngleMinMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_handSpeedToRedirectAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSpeedToRedirectAmount;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_handSpeedToRedirectAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSpeedToRedirectAmount;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_handSpeedToRedirectAmount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handSpeedToRedirectAmount = value;
}
constexpr ::UnityEngine::Vector2& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_handSpeedToRedirectAmountMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSpeedToRedirectAmountMinMax;
}
constexpr ::UnityEngine::Vector2 const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_handSpeedToRedirectAmountMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSpeedToRedirectAmountMinMax;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_handSpeedToRedirectAmountMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handSpeedToRedirectAmountMinMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_handAccelToRedirectAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handAccelToRedirectAmount;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_handAccelToRedirectAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handAccelToRedirectAmount;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_handAccelToRedirectAmount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handAccelToRedirectAmount = value;
}
constexpr ::UnityEngine::Vector2& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_handAccelToRedirectAmountMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handAccelToRedirectAmountMinMax;
}
constexpr ::UnityEngine::Vector2 const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_handAccelToRedirectAmountMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handAccelToRedirectAmountMinMax;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_handAccelToRedirectAmountMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handAccelToRedirectAmountMinMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_nonDiveDampingHapticsAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonDiveDampingHapticsAmount;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_nonDiveDampingHapticsAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonDiveDampingHapticsAmount;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_nonDiveDampingHapticsAmount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonDiveDampingHapticsAmount = value;
}
constexpr ::UnityEngine::Vector2& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_nonDiveDampingHapticsAmountMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonDiveDampingHapticsAmountMinMax;
}
constexpr ::UnityEngine::Vector2 const& GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_get_nonDiveDampingHapticsAmountMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonDiveDampingHapticsAmountMinMax;
}
constexpr void GorillaLocomotion::Swimming::PlayerSwimmingParameters::__cordl_internal_set_nonDiveDampingHapticsAmountMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonDiveDampingHapticsAmountMinMax = value;
}
inline void GorillaLocomotion::Swimming::PlayerSwimmingParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::PlayerSwimmingParameters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Swimming::PlayerSwimmingParameters* GorillaLocomotion::Swimming::PlayerSwimmingParameters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Swimming::PlayerSwimmingParameters*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Swimming::PlayerSwimmingParameters::PlayerSwimmingParameters()   {
}
