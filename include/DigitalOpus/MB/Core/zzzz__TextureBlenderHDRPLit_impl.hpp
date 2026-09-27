#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderHDRPLit.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderHDRPLit_MaterialType_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderHDRPLit_Prop_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderHDRPLit_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderHDRPLit_MaterialType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderHDRPLit_Prop_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderMaterialPropertyCacheHelper_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlender_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderHDRPLit.DoesShaderNameMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderHDRPLit::*)(::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderHDRPLit::DoesShaderNameMatch)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9df3740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderHDRPLit._MapFloatToMaterialType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextureBlenderHDRPLit_MaterialType (::DigitalOpus::MB::Core::TextureBlenderHDRPLit::*)(float_t)>(&::DigitalOpus::MB::Core::TextureBlenderHDRPLit::_MapFloatToMaterialType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9df3794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"_MapFloatToMaterialType", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderHDRPLit._MapMaterialTypeToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::TextureBlenderHDRPLit::*)(::GlobalNamespace::TextureBlenderHDRPLit_MaterialType)>(&::DigitalOpus::MB::Core::TextureBlenderHDRPLit::_MapMaterialTypeToFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9df3810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"_MapMaterialTypeToFloat", {}, {::i2c::type_of<::GlobalNamespace::TextureBlenderHDRPLit_MaterialType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderHDRPLit.OnBeforeTintTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderHDRPLit::*)(::UnityEngine::Material*, ::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderHDRPLit::OnBeforeTintTexture)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x9df3830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderHDRPLit.OnBlendTexturePixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderHDRPLit::*)(::StringW, ::UnityEngine::Color)>(&::DigitalOpus::MB::Core::TextureBlenderHDRPLit::OnBlendTexturePixel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9df3d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderHDRPLit.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderHDRPLit::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderHDRPLit::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9df3e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderHDRPLit.SetNonTexturePropertyValuesOnResultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderHDRPLit::*)(::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderHDRPLit::SetNonTexturePropertyValuesOnResultMaterial)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x9df4040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderHDRPLit.GetColorIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderHDRPLit::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::TextureBlenderHDRPLit::GetColorIfNoTexture)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x9df4568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderHDRPLit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderHDRPLit::*)()>(&::DigitalOpus::MB::Core::TextureBlenderHDRPLit::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9df4c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_sourceMaterialPropertyCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialPropertyCache;
}
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_sourceMaterialPropertyCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialPropertyCache;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_sourceMaterialPropertyCache(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterialPropertyCache = value;
}
constexpr ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_materialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_materialType;
}
constexpr ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_materialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_materialType;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_materialType(::GlobalNamespace::TextureBlenderHDRPLit_MaterialType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_materialType = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_tintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_tintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_tintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_tintColor = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_hasMaskMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasMaskMap;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_hasMaskMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasMaskMap;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_hasMaskMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hasMaskMap = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_smoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smoothness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_smoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smoothness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_smoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_smoothness = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_metallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_metallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_metallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_metallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_metallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_metallic = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_hasSpecMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasSpecMap;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_hasSpecMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasSpecMap;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_hasSpecMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hasSpecMap = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_specularColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_specularColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_specularColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_specularColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_specularColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_specularColor = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_emissiveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_emissiveColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_emissiveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_emissiveColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_emissiveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_emissiveColor = value;
}
constexpr ::GlobalNamespace::TextureBlenderHDRPLit_Prop& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_propertyToDo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyToDo;
}
constexpr ::GlobalNamespace::TextureBlenderHDRPLit_Prop const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_propertyToDo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyToDo;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_propertyToDo(::GlobalNamespace::TextureBlenderHDRPLit_Prop  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyToDo = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_generatingTintedAtlaColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_generatingTintedAtlaColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_generatingTintedAtlaColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaColor = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_generatingTintedAtlaSpecular()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaSpecular;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_generatingTintedAtlaSpecular() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaSpecular;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_generatingTintedAtlaSpecular(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaSpecular = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_generatingTintedAtlaEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaEmission;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_generatingTintedAtlaEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaEmission;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_generatingTintedAtlaEmission(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaEmission = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultColor = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultMetallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultMetallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultMetallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultMetallic = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSmoothness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSmoothness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultSmoothness = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultSpecular()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSpecular;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultSpecular() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSpecular;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultSpecular(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultSpecular = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultEmissiveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultEmissiveColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultEmissiveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultEmissiveColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderHDRPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultEmissiveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultEmissiveColor = value;
}
inline bool DigitalOpus::MB::Core::TextureBlenderHDRPLit::DoesShaderNameMatch(::StringW  shaderName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shaderName);
}
inline ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType DigitalOpus::MB::Core::TextureBlenderHDRPLit::_MapFloatToMaterialType(float_t  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"_MapFloatToMaterialType", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureBlenderHDRPLit_MaterialType>(this, ___internal_method, materialType);
}
inline float_t DigitalOpus::MB::Core::TextureBlenderHDRPLit::_MapMaterialTypeToFloat(::GlobalNamespace::TextureBlenderHDRPLit_MaterialType  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"_MapMaterialTypeToFloat", {}, {::i2c::type_of<::GlobalNamespace::TextureBlenderHDRPLit_MaterialType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, materialType);
}
inline void DigitalOpus::MB::Core::TextureBlenderHDRPLit::OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceMat, shaderTexturePropertyName);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderHDRPLit::OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, propertyToDoshaderPropertyName, pixelColor);
}
inline bool DigitalOpus::MB::Core::TextureBlenderHDRPLit::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void DigitalOpus::MB::Core::TextureBlenderHDRPLit::SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderHDRPLit::GetColorIfNoTexture(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, mat, texPropertyName);
}
inline void DigitalOpus::MB::Core::TextureBlenderHDRPLit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::TextureBlenderHDRPLit* DigitalOpus::MB::Core::TextureBlenderHDRPLit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::TextureBlenderHDRPLit*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr  DigitalOpus::MB::Core::TextureBlenderHDRPLit::operator ::DigitalOpus::MB::Core::TextureBlender*() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* DigitalOpus::MB::Core::TextureBlenderHDRPLit::i___DigitalOpus__MB__Core__TextureBlender() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::TextureBlenderHDRPLit::TextureBlenderHDRPLit()   {
}
