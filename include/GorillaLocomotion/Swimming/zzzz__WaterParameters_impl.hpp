#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterParameters.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterParameters_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterParameters::*)()>(&::GorillaLocomotion::Swimming::WaterParameters::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ce48c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterParameters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_playSplashEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playSplashEffect;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_playSplashEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playSplashEffect;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_playSplashEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playSplashEffect = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_splashEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_splashEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashEffect;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_splashEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splashEffect = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_splashEffectScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashEffectScale;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_splashEffectScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashEffectScale;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_splashEffectScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splashEffectScale = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_sendSplashEffectRPCs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendSplashEffectRPCs;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_sendSplashEffectRPCs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendSplashEffectRPCs;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_sendSplashEffectRPCs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendSplashEffectRPCs = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_splashSpeedRequirement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashSpeedRequirement;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_splashSpeedRequirement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashSpeedRequirement;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_splashSpeedRequirement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splashSpeedRequirement = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_bigSplashSpeedRequirement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashSpeedRequirement;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_bigSplashSpeedRequirement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashSpeedRequirement;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_bigSplashSpeedRequirement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigSplashSpeedRequirement = value;
}
constexpr ::UnityEngine::Gradient*& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_splashColorBySpeedGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashColorBySpeedGradient;
}
constexpr ::UnityEngine::Gradient* const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_splashColorBySpeedGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashColorBySpeedGradient;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_splashColorBySpeedGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splashColorBySpeedGradient = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_playRippleEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playRippleEffect;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_playRippleEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playRippleEffect;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_playRippleEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playRippleEffect = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_rippleEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rippleEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_rippleEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rippleEffect;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_rippleEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rippleEffect = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_rippleEffectScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rippleEffectScale;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_rippleEffectScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rippleEffectScale;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_rippleEffectScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rippleEffectScale = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_defaultDistanceBetweenRipples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultDistanceBetweenRipples;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_defaultDistanceBetweenRipples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultDistanceBetweenRipples;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_defaultDistanceBetweenRipples(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultDistanceBetweenRipples = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_minDistanceBetweenRipples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceBetweenRipples;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_minDistanceBetweenRipples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceBetweenRipples;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_minDistanceBetweenRipples(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceBetweenRipples = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_minTimeBetweenRipples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenRipples;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_minTimeBetweenRipples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenRipples;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_minTimeBetweenRipples(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTimeBetweenRipples = value;
}
constexpr ::UnityEngine::Color& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_rippleSpriteColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rippleSpriteColor;
}
constexpr ::UnityEngine::Color const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_rippleSpriteColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rippleSpriteColor;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_rippleSpriteColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rippleSpriteColor = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_playDripEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDripEffect;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_playDripEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDripEffect;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_playDripEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playDripEffect = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_postExitDripDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postExitDripDuration;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_postExitDripDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postExitDripDuration;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_postExitDripDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postExitDripDuration = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_perDripTimeDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perDripTimeDelay;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_perDripTimeDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perDripTimeDelay;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_perDripTimeDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perDripTimeDelay = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_perDripTimeRandRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perDripTimeRandRange;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_perDripTimeRandRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perDripTimeRandRange;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_perDripTimeRandRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perDripTimeRandRange = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_perDripDefaultRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perDripDefaultRadius;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_perDripDefaultRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perDripDefaultRadius;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_perDripDefaultRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perDripDefaultRadius = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_perDripRadiusRandRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perDripRadiusRandRange;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_perDripRadiusRandRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perDripRadiusRandRange;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_perDripRadiusRandRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perDripRadiusRandRange = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_recomputeSurfaceForColliderDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recomputeSurfaceForColliderDist;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_recomputeSurfaceForColliderDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recomputeSurfaceForColliderDist;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_recomputeSurfaceForColliderDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recomputeSurfaceForColliderDist = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_allowBubblesInVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowBubblesInVolume;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_get_allowBubblesInVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowBubblesInVolume;
}
constexpr void GorillaLocomotion::Swimming::WaterParameters::__cordl_internal_set_allowBubblesInVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowBubblesInVolume = value;
}
inline void GorillaLocomotion::Swimming::WaterParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterParameters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Swimming::WaterParameters* GorillaLocomotion::Swimming::WaterParameters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Swimming::WaterParameters*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Swimming::WaterParameters::WaterParameters()   {
}
