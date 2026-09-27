#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightMesh.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryLightMesh_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakeryLightMesh.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryLightMesh::*)()>(&::GlobalNamespace::BakeryLightMesh::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f278a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightMesh*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryLightMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryLightMesh::*)()>(&::GlobalNamespace::BakeryLightMesh::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f2798c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightMesh*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_UID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UID;
}
constexpr int32_t const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_UID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UID;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_UID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UID = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr float_t& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr float_t const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
constexpr float_t& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_cutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutoff;
}
constexpr float_t const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_cutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutoff;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_cutoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cutoff = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples;
}
constexpr int32_t const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_samples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samples = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_samples2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples2;
}
constexpr int32_t const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_samples2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples2;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_samples2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samples2 = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_samples2_previous()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples2_previous;
}
constexpr int32_t const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_samples2_previous() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples2_previous;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_samples2_previous(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samples2_previous = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_bitmask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitmask;
}
constexpr int32_t const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_bitmask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitmask;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_bitmask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitmask = value;
}
constexpr bool& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_selfShadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selfShadow;
}
constexpr bool const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_selfShadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selfShadow;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_selfShadow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selfShadow = value;
}
constexpr bool& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_bakeToIndirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeToIndirect;
}
constexpr bool const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_bakeToIndirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeToIndirect;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_bakeToIndirect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeToIndirect = value;
}
constexpr bool& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_shadowmask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmask;
}
constexpr bool const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_shadowmask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmask;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_shadowmask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowmask = value;
}
constexpr float_t& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_indirectIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indirectIntensity;
}
constexpr float_t const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_indirectIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indirectIntensity;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_indirectIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indirectIntensity = value;
}
constexpr bool& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_shadowmaskFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmaskFalloff;
}
constexpr bool const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_shadowmaskFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmaskFalloff;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_shadowmaskFalloff(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowmaskFalloff = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_maskChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskChannel;
}
constexpr int32_t const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_maskChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskChannel;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_maskChannel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maskChannel = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_lmid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lmid;
}
constexpr int32_t const& GlobalNamespace::BakeryLightMesh::__cordl_internal_get_lmid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lmid;
}
constexpr void GlobalNamespace::BakeryLightMesh::__cordl_internal_set_lmid(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lmid = value;
}
inline void GlobalNamespace::BakeryLightMesh::setStaticF_lightsChanged(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lightsChanged", ::GlobalNamespace::BakeryLightMesh*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakeryLightMesh::getStaticF_lightsChanged()  {
return ::cordl_internals::getStaticField<int32_t, "lightsChanged", ::GlobalNamespace::BakeryLightMesh*>();
}
inline void GlobalNamespace::BakeryLightMesh::setStaticF_objShownError(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "objShownError", ::GlobalNamespace::BakeryLightMesh*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::BakeryLightMesh::getStaticF_objShownError()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "objShownError", ::GlobalNamespace::BakeryLightMesh*>();
}
inline void GlobalNamespace::BakeryLightMesh::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightMesh*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakeryLightMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightMesh*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakeryLightMesh* GlobalNamespace::BakeryLightMesh::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakeryLightMesh*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeryLightMesh::BakeryLightMesh()   {
}
