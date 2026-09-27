#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderStandardMetallicRoughness.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardMetallicRoughness_Prop_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardMetallicRoughness_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderMaterialPropertyCacheHelper_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardMetallicRoughness_Prop_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlender_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness.DoesShaderNameMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::*)(::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::DoesShaderNameMatch)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9df6f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness.OnBeforeTintTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::*)(::UnityEngine::Material*, ::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::OnBeforeTintTexture)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x9df6fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness.OnBlendTexturePixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::*)(::StringW, ::UnityEngine::Color)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::OnBlendTexturePixel)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9df7380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x9df74fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness.SetNonTexturePropertyValuesOnResultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::*)(::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::SetNonTexturePropertyValuesOnResultMaterial)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x9df7890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness.GetColorIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::GetColorIfNoTexture)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x9df7d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::*)()>(&::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9df8488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_sourceMaterialPropertyCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialPropertyCache;
}
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_sourceMaterialPropertyCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialPropertyCache;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_sourceMaterialPropertyCache(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterialPropertyCache = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_tintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_tintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_tintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_tintColor = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_roughness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_roughness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_roughness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_roughness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_roughness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_roughness = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_metallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_metallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_metallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_metallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_metallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_metallic = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_hasMetallicGlossMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasMetallicGlossMap;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_hasMetallicGlossMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasMetallicGlossMap;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_hasMetallicGlossMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hasMetallicGlossMap = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_hasSpecGlossMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasSpecGlossMap;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_hasSpecGlossMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasSpecGlossMap;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_hasSpecGlossMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hasSpecGlossMap = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_bumpScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bumpScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_bumpScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bumpScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_bumpScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bumpScale = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_shaderDoesEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shaderDoesEmission;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_shaderDoesEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shaderDoesEmission;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_shaderDoesEmission(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_shaderDoesEmission = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_emissionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_emissionColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_emissionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_emissionColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_emissionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_emissionColor = value;
}
constexpr ::GlobalNamespace::TextureBlenderStandardMetallicRoughness_Prop& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_propertyToDo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyToDo;
}
constexpr ::GlobalNamespace::TextureBlenderStandardMetallicRoughness_Prop const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_propertyToDo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyToDo;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_propertyToDo(::GlobalNamespace::TextureBlenderStandardMetallicRoughness_Prop  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyToDo = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_generatingTintedAtlasColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_generatingTintedAtlasColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_generatingTintedAtlasColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasColor = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_generatingTintedAtlasMetallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasMetallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_generatingTintedAtlasMetallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasMetallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_generatingTintedAtlasMetallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasMetallic = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_generatingTintedAtlasRoughness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasRoughness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_generatingTintedAtlasRoughness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasRoughness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_generatingTintedAtlasRoughness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasRoughness = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_generatingTintedAtlasBumpScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasBumpScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_generatingTintedAtlasBumpScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasBumpScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_generatingTintedAtlasBumpScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasBumpScale = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_generatingTintedAtlasEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasEmission;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_generatingTintedAtlasEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasEmission;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_generatingTintedAtlasEmission(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasEmission = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_notGeneratingAtlasDefaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_notGeneratingAtlasDefaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_notGeneratingAtlasDefaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultColor = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultMetallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultMetallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_notGeneratingAtlasDefaultMetallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultMetallic = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultGlossiness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultGlossiness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_notGeneratingAtlasDefaultGlossiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultGlossiness = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultEmisionColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultEmisionColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::__cordl_internal_set_m_notGeneratingAtlasDefaultEmisionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultEmisionColor = value;
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::setStaticF_NeutralNormalMap(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "NeutralNormalMap", ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::getStaticF_NeutralNormalMap()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "NeutralNormalMap", ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>();
}
inline bool DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::DoesShaderNameMatch(::StringW  shaderName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shaderName);
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceMat, shaderTexturePropertyName);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, propertyToDoshaderPropertyName, pixelColor);
}
inline bool DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::GetColorIfNoTexture(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, mat, texPropertyName);
}
inline void DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness* DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr  DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::operator ::DigitalOpus::MB::Core::TextureBlender*() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::i___DigitalOpus__MB__Core__TextureBlender() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness::TextureBlenderStandardMetallicRoughness()   {
}
