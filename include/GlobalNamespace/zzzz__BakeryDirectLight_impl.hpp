#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryDirectLight.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryDirectLight_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakeryDirectLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryDirectLight::*)()>(&::GlobalNamespace::BakeryDirectLight::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f27660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryDirectLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr float_t& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr float_t const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr float_t& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_shadowSpread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowSpread;
}
constexpr float_t const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_shadowSpread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowSpread;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_shadowSpread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowSpread = value;
}
constexpr int32_t& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples;
}
constexpr int32_t const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_samples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samples = value;
}
constexpr int32_t& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_bitmask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitmask;
}
constexpr int32_t const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_bitmask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitmask;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_bitmask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitmask = value;
}
constexpr bool& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_bakeToIndirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeToIndirect;
}
constexpr bool const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_bakeToIndirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeToIndirect;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_bakeToIndirect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeToIndirect = value;
}
constexpr bool& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_shadowmask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmask;
}
constexpr bool const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_shadowmask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmask;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_shadowmask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowmask = value;
}
constexpr bool& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_shadowmaskDenoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmaskDenoise;
}
constexpr bool const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_shadowmaskDenoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmaskDenoise;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_shadowmaskDenoise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowmaskDenoise = value;
}
constexpr float_t& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_indirectIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indirectIntensity;
}
constexpr float_t const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_indirectIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indirectIntensity;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_indirectIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indirectIntensity = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_cloudShadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadow;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_cloudShadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadow;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_cloudShadow(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudShadow = value;
}
constexpr float_t& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_cloudShadowTilingX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadowTilingX;
}
constexpr float_t const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_cloudShadowTilingX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadowTilingX;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_cloudShadowTilingX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudShadowTilingX = value;
}
constexpr float_t& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_cloudShadowTilingY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadowTilingY;
}
constexpr float_t const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_cloudShadowTilingY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadowTilingY;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_cloudShadowTilingY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudShadowTilingY = value;
}
constexpr float_t& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_cloudShadowOffsetX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadowOffsetX;
}
constexpr float_t const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_cloudShadowOffsetX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadowOffsetX;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_cloudShadowOffsetX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudShadowOffsetX = value;
}
constexpr float_t& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_cloudShadowOffsetY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadowOffsetY;
}
constexpr float_t const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_cloudShadowOffsetY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadowOffsetY;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_cloudShadowOffsetY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudShadowOffsetY = value;
}
constexpr bool& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_supersample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supersample;
}
constexpr bool const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_supersample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supersample;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_supersample(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___supersample = value;
}
constexpr int32_t& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_UID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UID;
}
constexpr int32_t const& GlobalNamespace::BakeryDirectLight::__cordl_internal_get_UID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UID;
}
constexpr void GlobalNamespace::BakeryDirectLight::__cordl_internal_set_UID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UID = value;
}
inline void GlobalNamespace::BakeryDirectLight::setStaticF_lightsChanged(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lightsChanged", ::GlobalNamespace::BakeryDirectLight*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakeryDirectLight::getStaticF_lightsChanged()  {
return ::cordl_internals::getStaticField<int32_t, "lightsChanged", ::GlobalNamespace::BakeryDirectLight*>();
}
inline void GlobalNamespace::BakeryDirectLight::setStaticF_objShownError(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "objShownError", ::GlobalNamespace::BakeryDirectLight*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::BakeryDirectLight::getStaticF_objShownError()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "objShownError", ::GlobalNamespace::BakeryDirectLight*>();
}
inline void GlobalNamespace::BakeryDirectLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryDirectLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakeryDirectLight* GlobalNamespace::BakeryDirectLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakeryDirectLight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeryDirectLight::BakeryDirectLight()   {
}
