#pragma once
// IWYU pragma private; include "GlobalNamespace/BakerySkyLight.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakerySkyLight_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakerySkyLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakerySkyLight::*)()>(&::GlobalNamespace::BakerySkyLight::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f27c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakerySkyLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BakerySkyLight::__cordl_internal_get_texName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texName;
}
constexpr ::StringW const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_texName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texName;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_texName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texName = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BakerySkyLight::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr float_t& GlobalNamespace::BakerySkyLight::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr float_t const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr int32_t& GlobalNamespace::BakerySkyLight::__cordl_internal_get_samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples;
}
constexpr int32_t const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_samples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samples = value;
}
constexpr bool& GlobalNamespace::BakerySkyLight::__cordl_internal_get_hemispherical()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hemispherical;
}
constexpr bool const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_hemispherical() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hemispherical;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_hemispherical(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hemispherical = value;
}
constexpr int32_t& GlobalNamespace::BakerySkyLight::__cordl_internal_get_bitmask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitmask;
}
constexpr int32_t const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_bitmask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitmask;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_bitmask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitmask = value;
}
constexpr bool& GlobalNamespace::BakerySkyLight::__cordl_internal_get_bakeToIndirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeToIndirect;
}
constexpr bool const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_bakeToIndirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeToIndirect;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_bakeToIndirect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeToIndirect = value;
}
constexpr float_t& GlobalNamespace::BakerySkyLight::__cordl_internal_get_indirectIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indirectIntensity;
}
constexpr float_t const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_indirectIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indirectIntensity;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_indirectIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indirectIntensity = value;
}
constexpr bool& GlobalNamespace::BakerySkyLight::__cordl_internal_get_tangentSH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangentSH;
}
constexpr bool const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_tangentSH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangentSH;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_tangentSH(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tangentSH = value;
}
constexpr bool& GlobalNamespace::BakerySkyLight::__cordl_internal_get_correctRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___correctRotation;
}
constexpr bool const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_correctRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___correctRotation;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_correctRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___correctRotation = value;
}
constexpr ::UnityW<::UnityEngine::Cubemap>& GlobalNamespace::BakerySkyLight::__cordl_internal_get_cubemap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cubemap;
}
constexpr ::UnityW<::UnityEngine::Cubemap> const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_cubemap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cubemap;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_cubemap(::UnityW<::UnityEngine::Cubemap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cubemap = value;
}
constexpr int32_t& GlobalNamespace::BakerySkyLight::__cordl_internal_get_UID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UID;
}
constexpr int32_t const& GlobalNamespace::BakerySkyLight::__cordl_internal_get_UID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UID;
}
constexpr void GlobalNamespace::BakerySkyLight::__cordl_internal_set_UID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UID = value;
}
inline void GlobalNamespace::BakerySkyLight::setStaticF_lightsChanged(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lightsChanged", ::GlobalNamespace::BakerySkyLight*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakerySkyLight::getStaticF_lightsChanged()  {
return ::cordl_internals::getStaticField<int32_t, "lightsChanged", ::GlobalNamespace::BakerySkyLight*>();
}
inline void GlobalNamespace::BakerySkyLight::setStaticF_objShownError(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "objShownError", ::GlobalNamespace::BakerySkyLight*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::BakerySkyLight::getStaticF_objShownError()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "objShownError", ::GlobalNamespace::BakerySkyLight*>();
}
inline void GlobalNamespace::BakerySkyLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakerySkyLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakerySkyLight* GlobalNamespace::BakerySkyLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakerySkyLight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakerySkyLight::BakerySkyLight()   {
}
