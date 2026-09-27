#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderHDRPLit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderHDRPLit_MaterialType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderHDRPLit_Prop_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextureBlenderHDRPLit)
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace DigitalOpus::MB::Core {
class TextureBlenderMaterialPropertyCacheHelper;
}
namespace DigitalOpus::MB::Core {
class TextureBlender;
}
namespace GlobalNamespace {
struct TextureBlenderHDRPLit_MaterialType;
}
namespace GlobalNamespace {
struct TextureBlenderHDRPLit_Prop;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class TextureBlenderHDRPLit;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::TextureBlenderHDRPLit*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::TextureBlenderHDRPLit*, "DigitalOpus.MB.Core", "TextureBlenderHDRPLit");
// Dependencies DigitalOpus.MB.Core.TextureBlenderHDRPLit::MaterialType, DigitalOpus.MB.Core.TextureBlenderHDRPLit::Prop, System.Object, UnityEngine.Color
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.TextureBlenderHDRPLit
class CORDL_TYPE TextureBlenderHDRPLit : public ::System::Object {
public:
// Declarations
using MaterialType = ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType;

using Prop = ::GlobalNamespace::TextureBlenderHDRPLit_Prop;

/// @brief Field m_emissiveColor, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_emissiveColor, put=__cordl_internal_set_m_emissiveColor)) ::UnityEngine::Color  m_emissiveColor;

/// @brief Field m_generatingTintedAtlaColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaColor, put=__cordl_internal_set_m_generatingTintedAtlaColor)) ::UnityEngine::Color  m_generatingTintedAtlaColor;

/// @brief Field m_generatingTintedAtlaEmission, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaEmission, put=__cordl_internal_set_m_generatingTintedAtlaEmission)) ::UnityEngine::Color  m_generatingTintedAtlaEmission;

/// @brief Field m_generatingTintedAtlaSpecular, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaSpecular, put=__cordl_internal_set_m_generatingTintedAtlaSpecular)) ::UnityEngine::Color  m_generatingTintedAtlaSpecular;

/// @brief Field m_hasMaskMap, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasMaskMap, put=__cordl_internal_set_m_hasMaskMap)) bool  m_hasMaskMap;

/// @brief Field m_hasSpecMap, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasSpecMap, put=__cordl_internal_set_m_hasSpecMap)) bool  m_hasSpecMap;

/// @brief Field m_materialType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_materialType, put=__cordl_internal_set_m_materialType)) ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType  m_materialType;

/// @brief Field m_metallic, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_metallic, put=__cordl_internal_set_m_metallic)) float_t  m_metallic;

/// @brief Field m_notGeneratingAtlasDefaultColor, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultColor, put=__cordl_internal_set_m_notGeneratingAtlasDefaultColor)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultColor;

/// @brief Field m_notGeneratingAtlasDefaultEmissiveColor, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultEmissiveColor, put=__cordl_internal_set_m_notGeneratingAtlasDefaultEmissiveColor)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultEmissiveColor;

/// @brief Field m_notGeneratingAtlasDefaultMetallic, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic, put=__cordl_internal_set_m_notGeneratingAtlasDefaultMetallic)) float_t  m_notGeneratingAtlasDefaultMetallic;

/// @brief Field m_notGeneratingAtlasDefaultSmoothness, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness, put=__cordl_internal_set_m_notGeneratingAtlasDefaultSmoothness)) float_t  m_notGeneratingAtlasDefaultSmoothness;

/// @brief Field m_notGeneratingAtlasDefaultSpecular, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultSpecular, put=__cordl_internal_set_m_notGeneratingAtlasDefaultSpecular)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultSpecular;

/// @brief Field m_smoothness, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_smoothness, put=__cordl_internal_set_m_smoothness)) float_t  m_smoothness;

/// @brief Field m_specularColor, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_specularColor, put=__cordl_internal_set_m_specularColor)) ::UnityEngine::Color  m_specularColor;

/// @brief Field m_tintColor, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_tintColor, put=__cordl_internal_set_m_tintColor)) ::UnityEngine::Color  m_tintColor;

/// @brief Field propertyToDo, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_propertyToDo, put=__cordl_internal_set_propertyToDo)) ::GlobalNamespace::TextureBlenderHDRPLit_Prop  propertyToDo;

/// @brief Field sourceMaterialPropertyCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterialPropertyCache, put=__cordl_internal_set_sourceMaterialPropertyCache)) ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  sourceMaterialPropertyCache;

/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr operator  ::DigitalOpus::MB::Core::TextureBlender*() noexcept;

/// @brief Method DoesShaderNameMatch, addr 0x9df3740, size 0x54, virtual true, abstract: false, final true
inline bool DoesShaderNameMatch(::StringW  shaderName) ;

/// @brief Method GetColorIfNoTexture, addr 0x9df4568, size 0x6e4, virtual true, abstract: false, final true
inline ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName) ;

static inline ::DigitalOpus::MB::Core::TextureBlenderHDRPLit* New_ctor() ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x9df3e14, size 0x22c, virtual true, abstract: false, final true
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method OnBeforeTintTexture, addr 0x9df3830, size 0x520, virtual true, abstract: false, final true
inline void OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName) ;

/// @brief Method OnBlendTexturePixel, addr 0x9df3d50, size 0xc4, virtual true, abstract: false, final true
inline ::UnityEngine::Color OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor) ;

/// @brief Method SetNonTexturePropertyValuesOnResultMaterial, addr 0x9df4040, size 0x528, virtual true, abstract: false, final true
inline void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial) ;

/// @brief Method _MapFloatToMaterialType, addr 0x9df3794, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType _MapFloatToMaterialType(float_t  materialType) ;

/// @brief Method _MapMaterialTypeToFloat, addr 0x9df3810, size 0x20, virtual false, abstract: false, final false
inline float_t _MapMaterialTypeToFloat(::GlobalNamespace::TextureBlenderHDRPLit_MaterialType  materialType) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_emissiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_emissiveColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_generatingTintedAtlaColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_generatingTintedAtlaColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_generatingTintedAtlaEmission() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_generatingTintedAtlaEmission() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_generatingTintedAtlaSpecular() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_generatingTintedAtlaSpecular() ;

constexpr bool const& __cordl_internal_get_m_hasMaskMap() const;

constexpr bool& __cordl_internal_get_m_hasMaskMap() ;

constexpr bool const& __cordl_internal_get_m_hasSpecMap() const;

constexpr bool& __cordl_internal_get_m_hasSpecMap() ;

constexpr ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType const& __cordl_internal_get_m_materialType() const;

constexpr ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType& __cordl_internal_get_m_materialType() ;

constexpr float_t const& __cordl_internal_get_m_metallic() const;

constexpr float_t& __cordl_internal_get_m_metallic() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_notGeneratingAtlasDefaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_notGeneratingAtlasDefaultColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_notGeneratingAtlasDefaultEmissiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_notGeneratingAtlasDefaultEmissiveColor() ;

constexpr float_t const& __cordl_internal_get_m_notGeneratingAtlasDefaultMetallic() const;

constexpr float_t& __cordl_internal_get_m_notGeneratingAtlasDefaultMetallic() ;

constexpr float_t const& __cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness() const;

constexpr float_t& __cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_notGeneratingAtlasDefaultSpecular() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_notGeneratingAtlasDefaultSpecular() ;

constexpr float_t const& __cordl_internal_get_m_smoothness() const;

constexpr float_t& __cordl_internal_get_m_smoothness() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_specularColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_specularColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_tintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_tintColor() ;

constexpr ::GlobalNamespace::TextureBlenderHDRPLit_Prop const& __cordl_internal_get_propertyToDo() const;

constexpr ::GlobalNamespace::TextureBlenderHDRPLit_Prop& __cordl_internal_get_propertyToDo() ;

constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* const& __cordl_internal_get_sourceMaterialPropertyCache() const;

constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& __cordl_internal_get_sourceMaterialPropertyCache() ;

constexpr void __cordl_internal_set_m_emissiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaEmission(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaSpecular(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_hasMaskMap(bool  value) ;

constexpr void __cordl_internal_set_m_hasSpecMap(bool  value) ;

constexpr void __cordl_internal_set_m_materialType(::GlobalNamespace::TextureBlenderHDRPLit_MaterialType  value) ;

constexpr void __cordl_internal_set_m_metallic(float_t  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultEmissiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultMetallic(float_t  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultSmoothness(float_t  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultSpecular(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_smoothness(float_t  value) ;

constexpr void __cordl_internal_set_m_specularColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_tintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_propertyToDo(::GlobalNamespace::TextureBlenderHDRPLit_Prop  value) ;

constexpr void __cordl_internal_set_sourceMaterialPropertyCache(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  value) ;

/// @brief Method .ctor, addr 0x9df4c4c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* i___DigitalOpus__MB__Core__TextureBlender() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderHDRPLit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderHDRPLit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureBlenderHDRPLit(TextureBlenderHDRPLit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderHDRPLit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureBlenderHDRPLit(TextureBlenderHDRPLit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22850};

/// @brief Field sourceMaterialPropertyCache, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  ___sourceMaterialPropertyCache;

/// @brief Field m_materialType, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType  ___m_materialType;

/// @brief Field m_tintColor, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_tintColor;

/// @brief Field m_hasMaskMap, offset: 0x2c, size: 0x1, def value: None
 bool  ___m_hasMaskMap;

/// @brief Field m_smoothness, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_smoothness;

/// @brief Field m_metallic, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_metallic;

/// @brief Field m_hasSpecMap, offset: 0x38, size: 0x1, def value: None
 bool  ___m_hasSpecMap;

/// @brief Field m_specularColor, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_specularColor;

/// @brief Field m_emissiveColor, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_emissiveColor;

/// @brief Field propertyToDo, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::TextureBlenderHDRPLit_Prop  ___propertyToDo;

/// @brief Field m_generatingTintedAtlaColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlaColor;

/// @brief Field m_generatingTintedAtlaSpecular, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlaSpecular;

/// @brief Field m_generatingTintedAtlaEmission, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlaEmission;

/// @brief Field m_notGeneratingAtlasDefaultColor, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultColor;

/// @brief Field m_notGeneratingAtlasDefaultMetallic, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_notGeneratingAtlasDefaultMetallic;

/// @brief Field m_notGeneratingAtlasDefaultSmoothness, offset: 0xa4, size: 0x4, def value: None
 float_t  ___m_notGeneratingAtlasDefaultSmoothness;

/// @brief Field m_notGeneratingAtlasDefaultSpecular, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultSpecular;

/// @brief Field m_notGeneratingAtlasDefaultEmissiveColor, offset: 0xb8, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultEmissiveColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___sourceMaterialPropertyCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_materialType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_tintColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_hasMaskMap) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_smoothness) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_metallic) == 0x34, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_hasSpecMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_specularColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_emissiveColor) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___propertyToDo) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_generatingTintedAtlaColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_generatingTintedAtlaSpecular) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_generatingTintedAtlaEmission) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_notGeneratingAtlasDefaultColor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_notGeneratingAtlasDefaultMetallic) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_notGeneratingAtlasDefaultSmoothness) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_notGeneratingAtlasDefaultSpecular) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit, ___m_notGeneratingAtlasDefaultEmissiveColor) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderHDRPLit) == 0xc8, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
