#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderStandardSpecular.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderStandardSpecular_Prop_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextureBlenderStandardSpecular)
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
struct TextureBlenderStandardSpecular_Prop;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class TextureBlenderStandardSpecular;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular*, "DigitalOpus.MB.Core", "TextureBlenderStandardSpecular");
// Dependencies DigitalOpus.MB.Core.TextureBlenderStandardSpecular::Prop, System.Object, UnityEngine.Color
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.TextureBlenderStandardSpecular
class CORDL_TYPE TextureBlenderStandardSpecular : public ::System::Object {
public:
// Declarations
using Prop = ::GlobalNamespace::TextureBlenderStandardSpecular_Prop;

/// @brief Field NeutralNormalMap, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_NeutralNormalMap, put=setStaticF_NeutralNormalMap)) ::UnityEngine::Color  NeutralNormalMap;

/// @brief Field m_SpecGlossMapScale, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SpecGlossMapScale, put=__cordl_internal_set_m_SpecGlossMapScale)) float_t  m_SpecGlossMapScale;

/// @brief Field m_alphaCutoff, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_alphaCutoff, put=__cordl_internal_set_m_alphaCutoff)) float_t  m_alphaCutoff;

/// @brief Field m_bumpScale, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_bumpScale, put=__cordl_internal_set_m_bumpScale)) float_t  m_bumpScale;

/// @brief Field m_doScaleAlphaCutoff, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_doScaleAlphaCutoff, put=__cordl_internal_set_m_doScaleAlphaCutoff)) bool  m_doScaleAlphaCutoff;

/// @brief Field m_emissionColor, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_emissionColor, put=__cordl_internal_set_m_emissionColor)) ::UnityEngine::Color  m_emissionColor;

/// @brief Field m_generatingTintedAtlaBumpScale, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaBumpScale, put=__cordl_internal_set_m_generatingTintedAtlaBumpScale)) float_t  m_generatingTintedAtlaBumpScale;

/// @brief Field m_generatingTintedAtlaColor, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaColor, put=__cordl_internal_set_m_generatingTintedAtlaColor)) ::UnityEngine::Color  m_generatingTintedAtlaColor;

/// @brief Field m_generatingTintedAtlaEmission, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaEmission, put=__cordl_internal_set_m_generatingTintedAtlaEmission)) ::UnityEngine::Color  m_generatingTintedAtlaEmission;

/// @brief Field m_generatingTintedAtlaGlossiness, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaGlossiness, put=__cordl_internal_set_m_generatingTintedAtlaGlossiness)) float_t  m_generatingTintedAtlaGlossiness;

/// @brief Field m_generatingTintedAtlaSpecGlossMapScale, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaSpecGlossMapScale, put=__cordl_internal_set_m_generatingTintedAtlaSpecGlossMapScale)) float_t  m_generatingTintedAtlaSpecGlossMapScale;

/// @brief Field m_generatingTintedAtlaSpecular, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaSpecular, put=__cordl_internal_set_m_generatingTintedAtlaSpecular)) ::UnityEngine::Color  m_generatingTintedAtlaSpecular;

/// @brief Field m_glossiness, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_glossiness, put=__cordl_internal_set_m_glossiness)) float_t  m_glossiness;

/// @brief Field m_hasSpecGlossMap, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasSpecGlossMap, put=__cordl_internal_set_m_hasSpecGlossMap)) bool  m_hasSpecGlossMap;

/// @brief Field m_notGeneratingAtlasDefaultColor, offset 0xa4, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultColor, put=__cordl_internal_set_m_notGeneratingAtlasDefaultColor)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultColor;

/// @brief Field m_notGeneratingAtlasDefaultEmisionColor, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor, put=__cordl_internal_set_m_notGeneratingAtlasDefaultEmisionColor)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultEmisionColor;

/// @brief Field m_notGeneratingAtlasDefaultGlossiness, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness, put=__cordl_internal_set_m_notGeneratingAtlasDefaultGlossiness)) float_t  m_notGeneratingAtlasDefaultGlossiness;

/// @brief Field m_notGeneratingAtlasDefaultSpecularColor, offset 0xb4, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultSpecularColor, put=__cordl_internal_set_m_notGeneratingAtlasDefaultSpecularColor)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultSpecularColor;

/// @brief Field m_shaderDoesEmission, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_shaderDoesEmission, put=__cordl_internal_set_m_shaderDoesEmission)) bool  m_shaderDoesEmission;

/// @brief Field m_specColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_specColor, put=__cordl_internal_set_m_specColor)) ::UnityEngine::Color  m_specColor;

/// @brief Field m_tintColor, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_tintColor, put=__cordl_internal_set_m_tintColor)) ::UnityEngine::Color  m_tintColor;

/// @brief Field propertyToDo, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_propertyToDo, put=__cordl_internal_set_propertyToDo)) ::GlobalNamespace::TextureBlenderStandardSpecular_Prop  propertyToDo;

/// @brief Field sourceMaterialPropertyCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterialPropertyCache, put=__cordl_internal_set_sourceMaterialPropertyCache)) ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  sourceMaterialPropertyCache;

/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr operator  ::DigitalOpus::MB::Core::TextureBlender*() noexcept;

/// @brief Method DoesShaderNameMatch, addr 0x9df857c, size 0x54, virtual true, abstract: false, final true
inline bool DoesShaderNameMatch(::StringW  shaderName) ;

/// @brief Method GetColorIfNoTexture, addr 0x9df9460, size 0x66c, virtual true, abstract: false, final true
inline ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName) ;

static inline ::DigitalOpus::MB::Core::TextureBlenderStandardSpecular* New_ctor() ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x9df8bbc, size 0x390, virtual true, abstract: false, final true
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method OnBeforeTintTexture, addr 0x9df85d0, size 0x438, virtual true, abstract: false, final true
inline void OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName) ;

/// @brief Method OnBlendTexturePixel, addr 0x9df8a08, size 0x1b4, virtual true, abstract: false, final true
inline ::UnityEngine::Color OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor) ;

/// @brief Method SetNonTexturePropertyValuesOnResultMaterial, addr 0x9df8f4c, size 0x514, virtual true, abstract: false, final true
inline void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial) ;

constexpr float_t const& __cordl_internal_get_m_SpecGlossMapScale() const;

constexpr float_t& __cordl_internal_get_m_SpecGlossMapScale() ;

constexpr float_t const& __cordl_internal_get_m_alphaCutoff() const;

constexpr float_t& __cordl_internal_get_m_alphaCutoff() ;

constexpr float_t const& __cordl_internal_get_m_bumpScale() const;

constexpr float_t& __cordl_internal_get_m_bumpScale() ;

constexpr bool const& __cordl_internal_get_m_doScaleAlphaCutoff() const;

constexpr bool& __cordl_internal_get_m_doScaleAlphaCutoff() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_emissionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_emissionColor() ;

constexpr float_t const& __cordl_internal_get_m_generatingTintedAtlaBumpScale() const;

constexpr float_t& __cordl_internal_get_m_generatingTintedAtlaBumpScale() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_generatingTintedAtlaColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_generatingTintedAtlaColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_generatingTintedAtlaEmission() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_generatingTintedAtlaEmission() ;

constexpr float_t const& __cordl_internal_get_m_generatingTintedAtlaGlossiness() const;

constexpr float_t& __cordl_internal_get_m_generatingTintedAtlaGlossiness() ;

constexpr float_t const& __cordl_internal_get_m_generatingTintedAtlaSpecGlossMapScale() const;

constexpr float_t& __cordl_internal_get_m_generatingTintedAtlaSpecGlossMapScale() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_generatingTintedAtlaSpecular() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_generatingTintedAtlaSpecular() ;

constexpr float_t const& __cordl_internal_get_m_glossiness() const;

constexpr float_t& __cordl_internal_get_m_glossiness() ;

constexpr bool const& __cordl_internal_get_m_hasSpecGlossMap() const;

constexpr bool& __cordl_internal_get_m_hasSpecGlossMap() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_notGeneratingAtlasDefaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_notGeneratingAtlasDefaultColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor() ;

constexpr float_t const& __cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness() const;

constexpr float_t& __cordl_internal_get_m_notGeneratingAtlasDefaultGlossiness() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_notGeneratingAtlasDefaultSpecularColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_notGeneratingAtlasDefaultSpecularColor() ;

constexpr bool const& __cordl_internal_get_m_shaderDoesEmission() const;

constexpr bool& __cordl_internal_get_m_shaderDoesEmission() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_specColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_specColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_tintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_tintColor() ;

constexpr ::GlobalNamespace::TextureBlenderStandardSpecular_Prop const& __cordl_internal_get_propertyToDo() const;

constexpr ::GlobalNamespace::TextureBlenderStandardSpecular_Prop& __cordl_internal_get_propertyToDo() ;

constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* const& __cordl_internal_get_sourceMaterialPropertyCache() const;

constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& __cordl_internal_get_sourceMaterialPropertyCache() ;

constexpr void __cordl_internal_set_m_SpecGlossMapScale(float_t  value) ;

constexpr void __cordl_internal_set_m_alphaCutoff(float_t  value) ;

constexpr void __cordl_internal_set_m_bumpScale(float_t  value) ;

constexpr void __cordl_internal_set_m_doScaleAlphaCutoff(bool  value) ;

constexpr void __cordl_internal_set_m_emissionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaBumpScale(float_t  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaEmission(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaGlossiness(float_t  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaSpecGlossMapScale(float_t  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaSpecular(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_glossiness(float_t  value) ;

constexpr void __cordl_internal_set_m_hasSpecGlossMap(bool  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultEmisionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultGlossiness(float_t  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultSpecularColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_shaderDoesEmission(bool  value) ;

constexpr void __cordl_internal_set_m_specColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_tintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_propertyToDo(::GlobalNamespace::TextureBlenderStandardSpecular_Prop  value) ;

constexpr void __cordl_internal_set_sourceMaterialPropertyCache(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  value) ;

/// @brief Method .ctor, addr 0x9df9acc, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_NeutralNormalMap() ;

/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* i___DigitalOpus__MB__Core__TextureBlender() noexcept;

static inline void setStaticF_NeutralNormalMap(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderStandardSpecular() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderStandardSpecular", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureBlenderStandardSpecular(TextureBlenderStandardSpecular && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderStandardSpecular", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureBlenderStandardSpecular(TextureBlenderStandardSpecular const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22860};

/// @brief Field m_generatedAlphaCutoff offset 0xffffffff size 0x4
static constexpr float_t  m_generatedAlphaCutoff{static_cast<float_t>(0.5f)};

/// @brief Field sourceMaterialPropertyCache, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  ___sourceMaterialPropertyCache;

/// @brief Field m_tintColor, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_tintColor;

/// @brief Field m_doScaleAlphaCutoff, offset: 0x28, size: 0x1, def value: None
 bool  ___m_doScaleAlphaCutoff;

/// @brief Field m_alphaCutoff, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_alphaCutoff;

/// @brief Field m_glossiness, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_glossiness;

/// @brief Field m_SpecGlossMapScale, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_SpecGlossMapScale;

/// @brief Field m_specColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_specColor;

/// @brief Field m_hasSpecGlossMap, offset: 0x48, size: 0x1, def value: None
 bool  ___m_hasSpecGlossMap;

/// @brief Field m_bumpScale, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_bumpScale;

/// @brief Field m_shaderDoesEmission, offset: 0x50, size: 0x1, def value: None
 bool  ___m_shaderDoesEmission;

/// @brief Field m_emissionColor, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_emissionColor;

/// @brief Field propertyToDo, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::TextureBlenderStandardSpecular_Prop  ___propertyToDo;

/// @brief Field m_generatingTintedAtlaColor, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlaColor;

/// @brief Field m_generatingTintedAtlaSpecular, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlaSpecular;

/// @brief Field m_generatingTintedAtlaGlossiness, offset: 0x88, size: 0x4, def value: None
 float_t  ___m_generatingTintedAtlaGlossiness;

/// @brief Field m_generatingTintedAtlaSpecGlossMapScale, offset: 0x8c, size: 0x4, def value: None
 float_t  ___m_generatingTintedAtlaSpecGlossMapScale;

/// @brief Field m_generatingTintedAtlaBumpScale, offset: 0x90, size: 0x4, def value: None
 float_t  ___m_generatingTintedAtlaBumpScale;

/// @brief Field m_generatingTintedAtlaEmission, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlaEmission;

/// @brief Field m_notGeneratingAtlasDefaultColor, offset: 0xa4, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultColor;

/// @brief Field m_notGeneratingAtlasDefaultSpecularColor, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultSpecularColor;

/// @brief Field m_notGeneratingAtlasDefaultGlossiness, offset: 0xc4, size: 0x4, def value: None
 float_t  ___m_notGeneratingAtlasDefaultGlossiness;

/// @brief Field m_notGeneratingAtlasDefaultEmisionColor, offset: 0xc8, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultEmisionColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___sourceMaterialPropertyCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_tintColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_doScaleAlphaCutoff) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_alphaCutoff) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_glossiness) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_SpecGlossMapScale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_specColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_hasSpecGlossMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_bumpScale) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_shaderDoesEmission) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_emissionColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___propertyToDo) == 0x64, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_generatingTintedAtlaColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_generatingTintedAtlaSpecular) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_generatingTintedAtlaGlossiness) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_generatingTintedAtlaSpecGlossMapScale) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_generatingTintedAtlaBumpScale) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_generatingTintedAtlaEmission) == 0x94, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_notGeneratingAtlasDefaultColor) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_notGeneratingAtlasDefaultSpecularColor) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_notGeneratingAtlasDefaultGlossiness) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular, ___m_notGeneratingAtlasDefaultEmisionColor) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderStandardSpecular) == 0xd8, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
