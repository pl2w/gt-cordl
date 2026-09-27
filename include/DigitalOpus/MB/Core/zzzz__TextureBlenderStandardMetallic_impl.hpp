#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderStandardMetallic.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardMetallic_Prop_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardMetallic_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderMaterialPropertyCacheHelper_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardMetallic_Prop_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlender_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic.DoesShaderNameMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::DoesShaderNameMatch)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9df5970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic.OnBeforeTintTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::UnityEngine::Material*, ::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::OnBeforeTintTexture)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x9df59fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic.OnBlendTexturePixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::StringW, ::UnityEngine::Color)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::OnBlendTexturePixel)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x9df5e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x9df5fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic.SetNonTexturePropertyValuesOnResultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::SetNonTexturePropertyValuesOnResultMaterial)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x9df6328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic.GetColorIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::GetColorIfNoTexture)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x9df6828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)()>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9df6e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_sourceMaterialPropertyCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialPropertyCache;
}
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_sourceMaterialPropertyCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialPropertyCache;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_sourceMaterialPropertyCache(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterialPropertyCache = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_tintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_tintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_tintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_tintColor = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_doScaleAlphaCutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_doScaleAlphaCutoff;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_doScaleAlphaCutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_doScaleAlphaCutoff;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_doScaleAlphaCutoff(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_doScaleAlphaCutoff = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_alphaCutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alphaCutoff;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_alphaCutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alphaCutoff;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_alphaCutoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_alphaCutoff = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_glossiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_glossiness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_glossiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_glossiness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_glossiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_glossiness = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_glossMapScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_glossMapScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_glossMapScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_glossMapScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_glossMapScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_glossMapScale = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_metallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_metallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_metallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_metallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_metallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_metallic = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_hasMetallicGlossMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasMetallicGlossMap;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_hasMetallicGlossMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasMetallicGlossMap;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_hasMetallicGlossMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hasMetallicGlossMap = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_bumpScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bumpScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_bumpScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bumpScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_bumpScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bumpScale = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_shaderDoesEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shaderDoesEmission;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_shaderDoesEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shaderDoesEmission;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_shaderDoesEmission(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_shaderDoesEmission = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_emissionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_emissionColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_emissionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_emissionColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_emissionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_emissionColor = value;
}
constexpr ::GlobalNamespace::TextureBlenderStandardMetallic_Prop& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_propertyToDo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyToDo;
}
constexpr ::GlobalNamespace::TextureBlenderStandardMetallic_Prop const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_propertyToDo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyToDo;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_propertyToDo(::GlobalNamespace::TextureBlenderStandardMetallic_Prop  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyToDo = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_generatingTintedAtlasColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasColor = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasMetallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasMetallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasMetallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasMetallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_generatingTintedAtlasMetallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasMetallic = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasGlossiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasGlossiness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasGlossiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasGlossiness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_generatingTintedAtlasGlossiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasGlossiness = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasGlossMapScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasGlossMapScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasGlossMapScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasGlossMapScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_generatingTintedAtlasGlossMapScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasGlossMapScale = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasBumpScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasBumpScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasBumpScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasBumpScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_generatingTintedAtlasBumpScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasBumpScale = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasEmission;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_generatingTintedAtlasEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasEmission;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_generatingTintedAtlasEmission(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasEmission = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_notGeneratingAtlasDefaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_notGeneratingAtlasDefaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_notGeneratingAtlasDefaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultColor = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultMetallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultMetallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_notGeneratingAtlasDefaultMetallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultMetallic = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultGlossiness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultGlossiness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_notGeneratingAtlasDefaultGlossiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultGlossiness = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultEmisionColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultEmisionColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::__cordl_internal_set_m_notGeneratingAtlasDefaultEmisionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultEmisionColor = value;
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::setStaticF_NeutralNormalMap(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "NeutralNormalMap", ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderStandardMetallic::getStaticF_NeutralNormalMap()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "NeutralNormalMap", ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>();
}
inline bool DigitalOpus::MB::Core::TextureBlenderStandardMetallic::DoesShaderNameMatch(::StringW  shaderName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shaderName);
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceMat, shaderTexturePropertyName);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderStandardMetallic::OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, propertyToDoshaderPropertyName, pixelColor);
}
inline bool DigitalOpus::MB::Core::TextureBlenderStandardMetallic::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderStandardMetallic::GetColorIfNoTexture(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, mat, texPropertyName);
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardMetallic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic* DigitalOpus::MB::Core::TextureBlenderStandardMetallic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr  DigitalOpus::MB::Core::TextureBlenderStandardMetallic::operator ::DigitalOpus::MB::Core::TextureBlender*() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* DigitalOpus::MB::Core::TextureBlenderStandardMetallic::i___DigitalOpus__MB__Core__TextureBlender() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::TextureBlenderStandardMetallic()   {
}
