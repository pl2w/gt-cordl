#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryPointLight.hpp"
#include "GlobalNamespace/zzzz__BakeryPointLight_Direction_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryPointLight_ftLightProjectionMode_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryPointLight_def.hpp"
#include "GlobalNamespace/zzzz__BakeryPointLight_Direction_def.hpp"
#include "GlobalNamespace/zzzz__BakeryPointLight_ftLightProjectionMode_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakeryPointLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryPointLight::*)()>(&::GlobalNamespace::BakeryPointLight::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f279d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryPointLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_UID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UID;
}
constexpr int32_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_UID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UID;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_UID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UID = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BakeryPointLight::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr float_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr float_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr float_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_shadowSpread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowSpread;
}
constexpr float_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_shadowSpread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowSpread;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_shadowSpread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowSpread = value;
}
constexpr float_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_cutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutoff;
}
constexpr float_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_cutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutoff;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_cutoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cutoff = value;
}
constexpr bool& GlobalNamespace::BakeryPointLight::__cordl_internal_get_realisticFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___realisticFalloff;
}
constexpr bool const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_realisticFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___realisticFalloff;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_realisticFalloff(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___realisticFalloff = value;
}
constexpr bool& GlobalNamespace::BakeryPointLight::__cordl_internal_get_legacySampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legacySampling;
}
constexpr bool const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_legacySampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legacySampling;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_legacySampling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legacySampling = value;
}
constexpr int32_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples;
}
constexpr int32_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_samples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samples = value;
}
constexpr ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode& GlobalNamespace::BakeryPointLight::__cordl_internal_get_projMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projMode;
}
constexpr ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_projMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projMode;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_projMode(::GlobalNamespace::BakeryPointLight_ftLightProjectionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projMode = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BakeryPointLight::__cordl_internal_get_cookie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookie;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_cookie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookie;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_cookie(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cookie = value;
}
constexpr float_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr float_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle = value;
}
constexpr float_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_innerAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerAngle;
}
constexpr float_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_innerAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerAngle;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_innerAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___innerAngle = value;
}
constexpr ::UnityW<::UnityEngine::Cubemap>& GlobalNamespace::BakeryPointLight::__cordl_internal_get_cubemap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cubemap;
}
constexpr ::UnityW<::UnityEngine::Cubemap> const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_cubemap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cubemap;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_cubemap(::UnityW<::UnityEngine::Cubemap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cubemap = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::BakeryPointLight::__cordl_internal_get_iesFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iesFile;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_iesFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iesFile;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_iesFile(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iesFile = value;
}
constexpr int32_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_bitmask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitmask;
}
constexpr int32_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_bitmask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitmask;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_bitmask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitmask = value;
}
constexpr bool& GlobalNamespace::BakeryPointLight::__cordl_internal_get_bakeToIndirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeToIndirect;
}
constexpr bool const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_bakeToIndirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeToIndirect;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_bakeToIndirect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeToIndirect = value;
}
constexpr bool& GlobalNamespace::BakeryPointLight::__cordl_internal_get_shadowmask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmask;
}
constexpr bool const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_shadowmask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmask;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_shadowmask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowmask = value;
}
constexpr bool& GlobalNamespace::BakeryPointLight::__cordl_internal_get_shadowmaskFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmaskFalloff;
}
constexpr bool const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_shadowmaskFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmaskFalloff;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_shadowmaskFalloff(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowmaskFalloff = value;
}
constexpr float_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_indirectIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indirectIntensity;
}
constexpr float_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_indirectIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indirectIntensity;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_indirectIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indirectIntensity = value;
}
constexpr float_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_falloffMinRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffMinRadius;
}
constexpr float_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_falloffMinRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffMinRadius;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_falloffMinRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falloffMinRadius = value;
}
constexpr int32_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_shadowmaskGroupID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmaskGroupID;
}
constexpr int32_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_shadowmaskGroupID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmaskGroupID;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_shadowmaskGroupID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowmaskGroupID = value;
}
constexpr bool& GlobalNamespace::BakeryPointLight::__cordl_internal_get_correctCookieDistortion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___correctCookieDistortion;
}
constexpr bool const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_correctCookieDistortion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___correctCookieDistortion;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_correctCookieDistortion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___correctCookieDistortion = value;
}
constexpr ::GlobalNamespace::BakeryPointLight_Direction& GlobalNamespace::BakeryPointLight::__cordl_internal_get_directionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionMode;
}
constexpr ::GlobalNamespace::BakeryPointLight_Direction const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_directionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionMode;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_directionMode(::GlobalNamespace::BakeryPointLight_Direction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directionMode = value;
}
constexpr int32_t& GlobalNamespace::BakeryPointLight::__cordl_internal_get_maskChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskChannel;
}
constexpr int32_t const& GlobalNamespace::BakeryPointLight::__cordl_internal_get_maskChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskChannel;
}
constexpr void GlobalNamespace::BakeryPointLight::__cordl_internal_set_maskChannel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maskChannel = value;
}
inline void GlobalNamespace::BakeryPointLight::setStaticF_lightsChanged(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lightsChanged", ::GlobalNamespace::BakeryPointLight*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakeryPointLight::getStaticF_lightsChanged()  {
return ::cordl_internals::getStaticField<int32_t, "lightsChanged", ::GlobalNamespace::BakeryPointLight*>();
}
inline void GlobalNamespace::BakeryPointLight::setStaticF_objShownError(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "objShownError", ::GlobalNamespace::BakeryPointLight*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::BakeryPointLight::getStaticF_objShownError()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "objShownError", ::GlobalNamespace::BakeryPointLight*>();
}
inline void GlobalNamespace::BakeryPointLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryPointLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakeryPointLight* GlobalNamespace::BakeryPointLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakeryPointLight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeryPointLight::BakeryPointLight()   {
}
