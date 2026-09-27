#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderStandardSpecular.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardSpecular_Prop_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardSpecular_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderMaterialPropertyCacheHelper_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardSpecular_Prop_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlender_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular.DoesShaderNameMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::*)(::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::DoesShaderNameMatch)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9df857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular.OnBeforeTintTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::*)(::UnityEngine::Material*, ::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::OnBeforeTintTexture)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x9df85d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular.OnBlendTexturePixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::*)(::StringW, ::UnityEngine::Color)>(&::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::OnBlendTexturePixel)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9df8a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x9df8bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular.SetNonTexturePropertyValuesOnResultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::*)(::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::SetNonTexturePropertyValuesOnResultMaterial)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x9df8f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular.GetColorIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::GetColorIfNoTexture)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x9df9460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::*)()>(&::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9df9acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_sourceMaterialPropertyCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialPropertyCache;
}
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_sourceMaterialPropertyCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialPropertyCache;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_sourceMaterialPropertyCache(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterialPropertyCache = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_tintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_tintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_tintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_tintColor = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_doScaleAlphaCutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_doScaleAlphaCutoff;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_doScaleAlphaCutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_doScaleAlphaCutoff;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_doScaleAlphaCutoff(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_doScaleAlphaCutoff = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_alphaCutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alphaCutoff;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_alphaCutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alphaCutoff;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_alphaCutoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_alphaCutoff = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_glossiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_glossiness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_glossiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_glossiness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_glossiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_glossiness = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_SpecGlossMapScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SpecGlossMapScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_SpecGlossMapScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SpecGlossMapScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_SpecGlossMapScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SpecGlossMapScale = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_specColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_specColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_specColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_specColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_specColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_specColor = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_hasSpecGlossMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasSpecGlossMap;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_hasSpecGlossMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasSpecGlossMap;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_hasSpecGlossMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hasSpecGlossMap = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_bumpScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bumpScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_bumpScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bumpScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_bumpScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bumpScale = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_shaderDoesEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shaderDoesEmission;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_shaderDoesEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shaderDoesEmission;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_shaderDoesEmission(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_shaderDoesEmission = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_emissionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_emissionColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_emissionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_emissionColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_emissionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_emissionColor = value;
}
constexpr ::GlobalNamespace::TextureBlenderStandardSpecular_Prop& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_propertyToDo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyToDo;
}
constexpr ::GlobalNamespace::TextureBlenderStandardSpecular_Prop const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_propertyToDo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyToDo;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_propertyToDo(::GlobalNamespace::TextureBlenderStandardSpecular_Prop  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyToDo = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_generatingTintedAtlaColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaColor = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaSpecular()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaSpecular;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaSpecular() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaSpecular;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_generatingTintedAtlaSpecular(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaSpecular = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaGlossiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaGlossiness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaGlossiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaGlossiness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_generatingTintedAtlaGlossiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaGlossiness = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaSpecGlossMapScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaSpecGlossMapScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaSpecGlossMapScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaSpecGlossMapScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_generatingTintedAtlaSpecGlossMapScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaSpecGlossMapScale = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaBumpScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaBumpScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaBumpScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaBumpScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_generatingTintedAtlaBumpScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaBumpScale = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaEmission;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_generatingTintedAtlaEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaEmission;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_generatingTintedAtlaEmission(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaEmission = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_notGeneratingAtlasDefaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_notGeneratingAtlasDefaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_notGeneratingAtlasDefaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultColor = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_notGeneratingAtlasDefaultSpecularColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSpecularColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_notGeneratingAtlasDefaultSpecularColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSpecularColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_notGeneratingAtlasDefaultSpecularColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultSpecularColor = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultGlossiness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultGlossiness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_notGeneratingAtlasDefaultGlossiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultGlossiness = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultEmisionColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultEmisionColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::__cordl_internal_set_m_notGeneratingAtlasDefaultEmisionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultEmisionColor = value;
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::setStaticF_NeutralNormalMap(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "NeutralNormalMap", ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderStandardSpecular::getStaticF_NeutralNormalMap()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "NeutralNormalMap", ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>();
}
inline bool DigitalOpus::MB::Core::TextureBlenderStandardSpecular::DoesShaderNameMatch(::StringW  shaderName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shaderName);
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceMat, shaderTexturePropertyName);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderStandardSpecular::OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, propertyToDoshaderPropertyName, pixelColor);
}
inline bool DigitalOpus::MB::Core::TextureBlenderStandardSpecular::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderStandardSpecular::GetColorIfNoTexture(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, mat, texPropertyName);
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardSpecular::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular* DigitalOpus::MB::Core::TextureBlenderStandardSpecular::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr  DigitalOpus::MB::Core::TextureBlenderStandardSpecular::operator ::DigitalOpus::MB::Core::TextureBlender*() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* DigitalOpus::MB::Core::TextureBlenderStandardSpecular::i___DigitalOpus__MB__Core__TextureBlender() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular::TextureBlenderStandardSpecular()   {
}
