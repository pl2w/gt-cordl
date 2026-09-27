#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterSplashOverride.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterSplashOverride_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterSplashOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterSplashOverride::*)()>(&::GorillaLocomotion::Swimming::WaterSplashOverride::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ce4914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterSplashOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_suppressWaterEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressWaterEffects;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_suppressWaterEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressWaterEffects;
}
constexpr void GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_set_suppressWaterEffects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___suppressWaterEffects = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_playBigSplash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playBigSplash;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_playBigSplash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playBigSplash;
}
constexpr void GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_set_playBigSplash(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playBigSplash = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_playDrippingEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDrippingEffect;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_playDrippingEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDrippingEffect;
}
constexpr void GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_set_playDrippingEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playDrippingEffect = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_scaleByPlayersScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleByPlayersScale;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_scaleByPlayersScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleByPlayersScale;
}
constexpr void GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_set_scaleByPlayersScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleByPlayersScale = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_overrideBoundingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideBoundingRadius;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_overrideBoundingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideBoundingRadius;
}
constexpr void GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_set_overrideBoundingRadius(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideBoundingRadius = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_boundingRadiusOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundingRadiusOverride;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_get_boundingRadiusOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundingRadiusOverride;
}
constexpr void GorillaLocomotion::Swimming::WaterSplashOverride::__cordl_internal_set_boundingRadiusOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundingRadiusOverride = value;
}
inline void GorillaLocomotion::Swimming::WaterSplashOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterSplashOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Swimming::WaterSplashOverride* GorillaLocomotion::Swimming::WaterSplashOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Swimming::WaterSplashOverride*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Swimming::WaterSplashOverride::WaterSplashOverride()   {
}
