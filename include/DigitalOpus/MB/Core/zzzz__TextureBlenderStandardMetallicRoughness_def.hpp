#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderStandardMetallicRoughness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardMetallicRoughness_Prop_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextureBlenderStandardMetallicRoughness)
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
struct TextureBlenderStandardMetallicRoughness_Prop;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class TextureBlenderStandardMetallicRoughness;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*, "DigitalOpus.MB.Core", "TextureBlenderStandardMetallicRoughness");
// Dependencies DigitalOpus.MB.Core.TextureBlenderStandardMetallicRoughness::Prop, System.Object, UnityEngine.Color
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.TextureBlenderStandardMetallicRoughness
class CORDL_TYPE TextureBlenderStandardMetallicRoughness : public ::System::Object {
public:
// Declarations
using Prop = ::GlobalNamespace::TextureBlenderStandardMetallicRoughness_Prop;

/// @brief Field NeutralNormalMap, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_NeutralNormalMap, put=setStaticF_NeutralNormalMap)) ::UnityEngine::Color  NeutralNormalMap;

/// @brief Field m_bumpScale, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_bumpScale, put=__cordl_internal_set_m_bumpScale)) float_t  m_bumpScale;

/// @brief Field m_emissionColor, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_emissionColor, put=__cordl_internal_set_m_emissionColor)) ::UnityEngine::Color  m_emissionColor;

/// @brief Field m_generatingTintedAtlasBumpScale, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlasBumpScale, put=__cordl_internal_set_m_generatingTintedAtlasBumpScale)) float_t  m_generatingTintedAtlasBumpScale;

/// @brief Field m_generatingTintedAtlasColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlasColor, put=__cordl_internal_set_m_generatingTintedAtlasColor)) ::UnityEngine::Color  m_generatingTintedAtlasColor;

/// @brief Field m_generatingTintedAtlasEmission, offset 0x6c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlasEmission, put=__cordl_internal_set_m_generatingTintedAtlasEmission)) ::UnityEngine::Color  m_generatingTintedAtlasEmission;

/// @brief Field m_generatingTintedAtlasMetallic, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlasMetallic, put=__cordl_internal_set_m_generatingTintedAtlasMetallic)) float_t  m_generatingTintedAtlasMetallic;

/// @brief Field m_generatingTintedAtlasRoughness, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlasRoughness, put=__cordl_internal_set_m_generatingTintedAtlasRoughness)) float_t  m_generatingTintedAtlasRoughness;

/// @brief Field m_hasMetallicGlossMap, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasMetallicGlossMap, put=__cordl_internal_set_m_hasMetallicGlossMap)) bool  m_hasMetallicGlossMap;

/// @brief Field m_hasSpecGlossMap, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasSpecGlossMap, put=__cordl_internal_set_m_hasSpecGlossMap)) bool  m_hasSpecGlossMap;

/// @brief Field m_metallic, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_metallic, put=__cordl_internal_set_m_metallic)) float_t  m_metallic;

/// @brief Field m_notGeneratingAtlasDefaultColor, offset 0x7c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultColor, put=__cordl_internal_set_m_notGeneratingAtlasDefaultColor)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultColor;

/// @brief Field m_notGeneratingAtlasDefaultEmisionColor, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor, put=__cordl_internal_set_m_notGeneratingAtlasDefaultEmisionColor)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultEmisionColor;

/// @brief Field m_notGeneratingAtlasDefaultGlossiness, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness, put=__cordl_internal_set_m_notGeneratingAtlasDefaultGlossiness)) float_t  m_notGeneratingAtlasDefaultGlossiness;

/// @brief Field m_notGeneratingAtlasDefaultMetallic, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic, put=__cordl_internal_set_m_notGeneratingAtlasDefaultMetallic)) float_t  m_notGeneratingAtlasDefaultMetallic;

/// @brief Field m_roughness, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_roughness, put=__cordl_internal_set_m_roughness)) float_t  m_roughness;

/// @brief Field m_shaderDoesEmission, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_shaderDoesEmission, put=__cordl_internal_set_m_shaderDoesEmission)) bool  m_shaderDoesEmission;

/// @brief Field m_tintColor, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_tintColor, put=__cordl_internal_set_m_tintColor)) ::UnityEngine::Color  m_tintColor;

/// @brief Field propertyToDo, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_propertyToDo, put=__cordl_internal_set_propertyToDo)) ::GlobalNamespace::TextureBlenderStandardMetallicRoughness_Prop  propertyToDo;

/// @brief Field sourceMaterialPropertyCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterialPropertyCache, put=__cordl_internal_set_sourceMaterialPropertyCache)) ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  sourceMaterialPropertyCache;

/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr operator  ::DigitalOpus::MB::Core::TextureBlender*() noexcept;

/// @brief Method DoesShaderNameMatch, addr 0x9df6f78, size 0x54, virtual true, abstract: false, final true
inline bool DoesShaderNameMatch(::StringW  shaderName) ;

/// @brief Method GetColorIfNoTexture, addr 0x9df7d48, size 0x740, virtual true, abstract: false, final true
inline ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName) ;

static inline ::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness* New_ctor() ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x9df74fc, size 0x394, virtual true, abstract: false, final true
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method OnBeforeTintTexture, addr 0x9df6fcc, size 0x3b4, virtual true, abstract: false, final true
inline void OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName) ;

/// @brief Method OnBlendTexturePixel, addr 0x9df7380, size 0x17c, virtual true, abstract: false, final true
inline ::UnityEngine::Color OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor) ;

/// @brief Method SetNonTexturePropertyValuesOnResultMaterial, addr 0x9df7890, size 0x4b8, virtual true, abstract: false, final true
inline void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial) ;

constexpr float_t const& __cordl_internal_get_m_bumpScale() const;

constexpr float_t& __cordl_internal_get_m_bumpScale() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_emissionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_emissionColor() ;

constexpr float_t const& __cordl_internal_get_m_generatingTintedAtlasBumpScale() const;

constexpr float_t& __cordl_internal_get_m_generatingTintedAtlasBumpScale() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_generatingTintedAtlasColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_generatingTintedAtlasColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_generatingTintedAtlasEmission() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_generatingTintedAtlasEmission() ;

constexpr float_t const& __cordl_internal_get_m_generatingTintedAtlasMetallic() const;

constexpr float_t& __cordl_internal_get_m_generatingTintedAtlasMetallic() ;

constexpr float_t const& __cordl_internal_get_m_generatingTintedAtlasRoughness() const;

constexpr float_t& __cordl_internal_get_m_generatingTintedAtlasRoughness() ;

constexpr bool const& __cordl_internal_get_m_hasMetallicGlossMap() const;

constexpr bool& __cordl_internal_get_m_hasMetallicGlossMap() ;

constexpr bool const& __cordl_internal_get_m_hasSpecGlossMap() const;

constexpr bool& __cordl_internal_get_m_hasSpecGlossMap() ;

constexpr float_t const& __cordl_internal_get_m_metallic() const;

constexpr float_t& __cordl_internal_get_m_metallic() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_notGeneratingAtlasDefaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_notGeneratingAtlasDefaultColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor() ;

constexpr float_t const& __cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness() const;

constexpr float_t& __cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness() ;

constexpr float_t const& __cordl_internal_get_m_notGeneratingAtlasDefaultMetallic() const;

constexpr float_t& __cordl_internal_get_m_notGeneratingAtlasDefaultMetallic() ;

constexpr float_t const& __cordl_internal_get_m_roughness() const;

constexpr float_t& __cordl_internal_get_m_roughness() ;

constexpr bool const& __cordl_internal_get_m_shaderDoesEmission() const;

constexpr bool& __cordl_internal_get_m_shaderDoesEmission() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_tintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_tintColor() ;

constexpr ::GlobalNamespace::TextureBlenderStandardMetallicRoughness_Prop const& __cordl_internal_get_propertyToDo() const;

constexpr ::GlobalNamespace::TextureBlenderStandardMetallicRoughness_Prop& __cordl_internal_get_propertyToDo() ;

constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* const& __cordl_internal_get_sourceMaterialPropertyCache() const;

constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& __cordl_internal_get_sourceMaterialPropertyCache() ;

constexpr void __cordl_internal_set_m_bumpScale(float_t  value) ;

constexpr void __cordl_internal_set_m_emissionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlasBumpScale(float_t  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlasColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlasEmission(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlasMetallic(float_t  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlasRoughness(float_t  value) ;

constexpr void __cordl_internal_set_m_hasMetallicGlossMap(bool  value) ;

constexpr void __cordl_internal_set_m_hasSpecGlossMap(bool  value) ;

constexpr void __cordl_internal_set_m_metallic(float_t  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultEmisionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultGlossiness(float_t  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultMetallic(float_t  value) ;

constexpr void __cordl_internal_set_m_roughness(float_t  value) ;

constexpr void __cordl_internal_set_m_shaderDoesEmission(bool  value) ;

constexpr void __cordl_internal_set_m_tintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_propertyToDo(::GlobalNamespace::TextureBlenderStandardMetallicRoughness_Prop  value) ;

constexpr void __cordl_internal_set_sourceMaterialPropertyCache(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  value) ;

/// @brief Method .ctor, addr 0x9df8488, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_NeutralNormalMap() ;

/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* i___DigitalOpus__MB__Core__TextureBlender() noexcept;

static inline void setStaticF_NeutralNormalMap(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderStandardMetallicRoughness() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderStandardMetallicRoughness", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureBlenderStandardMetallicRoughness(TextureBlenderStandardMetallicRoughness && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderStandardMetallicRoughness", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureBlenderStandardMetallicRoughness(TextureBlenderStandardMetallicRoughness const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22858};

/// @brief Field sourceMaterialPropertyCache, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  ___sourceMaterialPropertyCache;

/// @brief Field m_tintColor, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_tintColor;

/// @brief Field m_roughness, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_roughness;

/// @brief Field m_metallic, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_metallic;

/// @brief Field m_hasMetallicGlossMap, offset: 0x30, size: 0x1, def value: None
 bool  ___m_hasMetallicGlossMap;

/// @brief Field m_hasSpecGlossMap, offset: 0x31, size: 0x1, def value: None
 bool  ___m_hasSpecGlossMap;

/// @brief Field m_bumpScale, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_bumpScale;

/// @brief Field m_shaderDoesEmission, offset: 0x38, size: 0x1, def value: None
 bool  ___m_shaderDoesEmission;

/// @brief Field m_emissionColor, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_emissionColor;

/// @brief Field propertyToDo, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::TextureBlenderStandardMetallicRoughness_Prop  ___propertyToDo;

/// @brief Field m_generatingTintedAtlasColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlasColor;

/// @brief Field m_generatingTintedAtlasMetallic, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_generatingTintedAtlasMetallic;

/// @brief Field m_generatingTintedAtlasRoughness, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_generatingTintedAtlasRoughness;

/// @brief Field m_generatingTintedAtlasBumpScale, offset: 0x68, size: 0x4, def value: None
 float_t  ___m_generatingTintedAtlasBumpScale;

/// @brief Field m_generatingTintedAtlasEmission, offset: 0x6c, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlasEmission;

/// @brief Field m_notGeneratingAtlasDefaultColor, offset: 0x7c, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultColor;

/// @brief Field m_notGeneratingAtlasDefaultMetallic, offset: 0x8c, size: 0x4, def value: None
 float_t  ___m_notGeneratingAtlasDefaultMetallic;

/// @brief Field m_notGeneratingAtlasDefaultGlossiness, offset: 0x90, size: 0x4, def value: None
 float_t  ___m_notGeneratingAtlasDefaultGlossiness;

/// @brief Field m_notGeneratingAtlasDefaultEmisionColor, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultEmisionColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___sourceMaterialPropertyCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_tintColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_roughness) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_metallic) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_hasMetallicGlossMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_hasSpecGlossMap) == 0x31, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_bumpScale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_shaderDoesEmission) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_emissionColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___propertyToDo) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_generatingTintedAtlasColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_generatingTintedAtlasMetallic) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_generatingTintedAtlasRoughness) == 0x64, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_generatingTintedAtlasBumpScale) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_generatingTintedAtlasEmission) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_notGeneratingAtlasDefaultColor) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_notGeneratingAtlasDefaultMetallic) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_notGeneratingAtlasDefaultGlossiness) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness, ___m_notGeneratingAtlasDefaultEmisionColor) == 0x94, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness) == 0xa8, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
