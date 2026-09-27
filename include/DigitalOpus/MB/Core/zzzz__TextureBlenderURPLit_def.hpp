#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderURPLit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderURPLit_Prop_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderURPLit_SmoothnessTextureChannel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderURPLit_WorkflowMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextureBlenderURPLit)
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
struct TextureBlenderURPLit_Prop;
}
namespace GlobalNamespace {
struct TextureBlenderURPLit_SmoothnessTextureChannel;
}
namespace GlobalNamespace {
struct TextureBlenderURPLit_WorkflowMode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class TextureBlenderURPLit;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::TextureBlenderURPLit*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::TextureBlenderURPLit*, "DigitalOpus.MB.Core", "TextureBlenderURPLit");
// Dependencies DigitalOpus.MB.Core.TextureBlenderURPLit::Prop, DigitalOpus.MB.Core.TextureBlenderURPLit::SmoothnessTextureChannel, DigitalOpus.MB.Core.TextureBlenderURPLit::WorkflowMode, System.Object, UnityEngine.Color
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.TextureBlenderURPLit
class CORDL_TYPE TextureBlenderURPLit : public ::System::Object {
public:
// Declarations
using Prop = ::GlobalNamespace::TextureBlenderURPLit_Prop;

using SmoothnessTextureChannel = ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel;

using WorkflowMode = ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode;

/// @brief Field NeutralNormalMap, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_NeutralNormalMap, put=setStaticF_NeutralNormalMap)) ::UnityEngine::Color  NeutralNormalMap;

/// @brief Field m_alphaCutoff, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_alphaCutoff, put=__cordl_internal_set_m_alphaCutoff)) float_t  m_alphaCutoff;

/// @brief Field m_bumpScale, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_bumpScale, put=__cordl_internal_set_m_bumpScale)) float_t  m_bumpScale;

/// @brief Field m_doScaleAlphaCutoff, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_doScaleAlphaCutoff, put=__cordl_internal_set_m_doScaleAlphaCutoff)) bool  m_doScaleAlphaCutoff;

/// @brief Field m_emissionColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_emissionColor, put=__cordl_internal_set_m_emissionColor)) ::UnityEngine::Color  m_emissionColor;

/// @brief Field m_generatingTintedAtlaBumpScale, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaBumpScale, put=__cordl_internal_set_m_generatingTintedAtlaBumpScale)) float_t  m_generatingTintedAtlaBumpScale;

/// @brief Field m_generatingTintedAtlaColor, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaColor, put=__cordl_internal_set_m_generatingTintedAtlaColor)) ::UnityEngine::Color  m_generatingTintedAtlaColor;

/// @brief Field m_generatingTintedAtlaEmission, offset 0xa4, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaEmission, put=__cordl_internal_set_m_generatingTintedAtlaEmission)) ::UnityEngine::Color  m_generatingTintedAtlaEmission;

/// @brief Field m_generatingTintedAtlaSpecular, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlaSpecular, put=__cordl_internal_set_m_generatingTintedAtlaSpecular)) ::UnityEngine::Color  m_generatingTintedAtlaSpecular;

/// @brief Field m_generatingTintedAtlasMetallic, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlasMetallic, put=__cordl_internal_set_m_generatingTintedAtlasMetallic)) float_t  m_generatingTintedAtlasMetallic;

/// @brief Field m_generatingTintedAtlasMetallic_smoothness, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlasMetallic_smoothness, put=__cordl_internal_set_m_generatingTintedAtlasMetallic_smoothness)) float_t  m_generatingTintedAtlasMetallic_smoothness;

/// @brief Field m_generatingTintedAtlasSpecular_somoothness, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_generatingTintedAtlasSpecular_somoothness, put=__cordl_internal_set_m_generatingTintedAtlasSpecular_somoothness)) float_t  m_generatingTintedAtlasSpecular_somoothness;

/// @brief Field m_hasMetallicGlossMap, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasMetallicGlossMap, put=__cordl_internal_set_m_hasMetallicGlossMap)) bool  m_hasMetallicGlossMap;

/// @brief Field m_hasSpecGlossMap, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasSpecGlossMap, put=__cordl_internal_set_m_hasSpecGlossMap)) bool  m_hasSpecGlossMap;

/// @brief Field m_metallic, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_metallic, put=__cordl_internal_set_m_metallic)) float_t  m_metallic;

/// @brief Field m_notGeneratingAtlasDefaultColor, offset 0xb4, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultColor, put=__cordl_internal_set_m_notGeneratingAtlasDefaultColor)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultColor;

/// @brief Field m_notGeneratingAtlasDefaultEmisionColor, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor, put=__cordl_internal_set_m_notGeneratingAtlasDefaultEmisionColor)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultEmisionColor;

/// @brief Field m_notGeneratingAtlasDefaultMetallic, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic, put=__cordl_internal_set_m_notGeneratingAtlasDefaultMetallic)) float_t  m_notGeneratingAtlasDefaultMetallic;

/// @brief Field m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow, put=__cordl_internal_set_m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow)) float_t  m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow;

/// @brief Field m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow, put=__cordl_internal_set_m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow)) float_t  m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow;

/// @brief Field m_notGeneratingAtlasDefaultSpecularColor, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_notGeneratingAtlasDefaultSpecularColor, put=__cordl_internal_set_m_notGeneratingAtlasDefaultSpecularColor)) ::UnityEngine::Color  m_notGeneratingAtlasDefaultSpecularColor;

/// @brief Field m_shaderDoesEmission, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_shaderDoesEmission, put=__cordl_internal_set_m_shaderDoesEmission)) bool  m_shaderDoesEmission;

/// @brief Field m_smoothness, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_smoothness, put=__cordl_internal_set_m_smoothness)) float_t  m_smoothness;

/// @brief Field m_smoothnessTextureChannel, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_smoothnessTextureChannel, put=__cordl_internal_set_m_smoothnessTextureChannel)) ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel  m_smoothnessTextureChannel;

/// @brief Field m_specColor, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_specColor, put=__cordl_internal_set_m_specColor)) ::UnityEngine::Color  m_specColor;

/// @brief Field m_tintColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_tintColor, put=__cordl_internal_set_m_tintColor)) ::UnityEngine::Color  m_tintColor;

/// @brief Field m_workflowMode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_workflowMode, put=__cordl_internal_set_m_workflowMode)) ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode  m_workflowMode;

/// @brief Field propertyToDo, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_propertyToDo, put=__cordl_internal_set_propertyToDo)) ::GlobalNamespace::TextureBlenderURPLit_Prop  propertyToDo;

/// @brief Field sourceMaterialPropertyCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterialPropertyCache, put=__cordl_internal_set_sourceMaterialPropertyCache)) ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  sourceMaterialPropertyCache;

/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr operator  ::DigitalOpus::MB::Core::TextureBlender*() noexcept;

/// @brief Method DoesShaderNameMatch, addr 0x9df9bc4, size 0x17c, virtual true, abstract: false, final true
inline bool DoesShaderNameMatch(::StringW  shaderName) ;

/// @brief Method GetColorIfNoTexture, addr 0x9dfb20c, size 0x6cc, virtual true, abstract: false, final true
inline ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName) ;

static inline ::DigitalOpus::MB::Core::TextureBlenderURPLit* New_ctor() ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x9dfa614, size 0x504, virtual true, abstract: false, final true
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method OnBeforeTintTexture, addr 0x9df9d88, size 0x6b8, virtual true, abstract: false, final true
inline void OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName) ;

/// @brief Method OnBlendTexturePixel, addr 0x9dfa440, size 0x1d4, virtual true, abstract: false, final true
inline ::UnityEngine::Color OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor) ;

/// @brief Method SetNonTexturePropertyValuesOnResultMaterial, addr 0x9dfab18, size 0x6f4, virtual true, abstract: false, final true
inline void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial) ;

/// @brief Method _MapFloatToTextureChannel, addr 0x9df9d64, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel _MapFloatToTextureChannel(float_t  texChannel) ;

/// @brief Method _MapFloatToWorkflowMode, addr 0x9df9d40, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode _MapFloatToWorkflowMode(float_t  workflowMode) ;

/// @brief Method _MapTextureChannelToFloat, addr 0x9df9d74, size 0x14, virtual false, abstract: false, final false
inline float_t _MapTextureChannelToFloat(::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel  workflowMode) ;

/// @brief Method _MapWorkflowModeToFloat, addr 0x9df9d50, size 0x14, virtual false, abstract: false, final false
inline float_t _MapWorkflowModeToFloat(::GlobalNamespace::TextureBlenderURPLit_WorkflowMode  workflowMode) ;

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

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_generatingTintedAtlaSpecular() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_generatingTintedAtlaSpecular() ;

constexpr float_t const& __cordl_internal_get_m_generatingTintedAtlasMetallic() const;

constexpr float_t& __cordl_internal_get_m_generatingTintedAtlasMetallic() ;

constexpr float_t const& __cordl_internal_get_m_generatingTintedAtlasMetallic_smoothness() const;

constexpr float_t& __cordl_internal_get_m_generatingTintedAtlasMetallic_smoothness() ;

constexpr float_t const& __cordl_internal_get_m_generatingTintedAtlasSpecular_somoothness() const;

constexpr float_t& __cordl_internal_get_m_generatingTintedAtlasSpecular_somoothness() ;

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

constexpr float_t const& __cordl_internal_get_m_notGeneratingAtlasDefaultMetallic() const;

constexpr float_t& __cordl_internal_get_m_notGeneratingAtlasDefaultMetallic() ;

constexpr float_t const& __cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow() const;

constexpr float_t& __cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow() ;

constexpr float_t const& __cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow() const;

constexpr float_t& __cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_notGeneratingAtlasDefaultSpecularColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_notGeneratingAtlasDefaultSpecularColor() ;

constexpr bool const& __cordl_internal_get_m_shaderDoesEmission() const;

constexpr bool& __cordl_internal_get_m_shaderDoesEmission() ;

constexpr float_t const& __cordl_internal_get_m_smoothness() const;

constexpr float_t& __cordl_internal_get_m_smoothness() ;

constexpr ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel const& __cordl_internal_get_m_smoothnessTextureChannel() const;

constexpr ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel& __cordl_internal_get_m_smoothnessTextureChannel() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_specColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_specColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_tintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_tintColor() ;

constexpr ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode const& __cordl_internal_get_m_workflowMode() const;

constexpr ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode& __cordl_internal_get_m_workflowMode() ;

constexpr ::GlobalNamespace::TextureBlenderURPLit_Prop const& __cordl_internal_get_propertyToDo() const;

constexpr ::GlobalNamespace::TextureBlenderURPLit_Prop& __cordl_internal_get_propertyToDo() ;

constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* const& __cordl_internal_get_sourceMaterialPropertyCache() const;

constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& __cordl_internal_get_sourceMaterialPropertyCache() ;

constexpr void __cordl_internal_set_m_alphaCutoff(float_t  value) ;

constexpr void __cordl_internal_set_m_bumpScale(float_t  value) ;

constexpr void __cordl_internal_set_m_doScaleAlphaCutoff(bool  value) ;

constexpr void __cordl_internal_set_m_emissionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaBumpScale(float_t  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaEmission(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlaSpecular(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlasMetallic(float_t  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlasMetallic_smoothness(float_t  value) ;

constexpr void __cordl_internal_set_m_generatingTintedAtlasSpecular_somoothness(float_t  value) ;

constexpr void __cordl_internal_set_m_hasMetallicGlossMap(bool  value) ;

constexpr void __cordl_internal_set_m_hasSpecGlossMap(bool  value) ;

constexpr void __cordl_internal_set_m_metallic(float_t  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultEmisionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultMetallic(float_t  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow(float_t  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow(float_t  value) ;

constexpr void __cordl_internal_set_m_notGeneratingAtlasDefaultSpecularColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_shaderDoesEmission(bool  value) ;

constexpr void __cordl_internal_set_m_smoothness(float_t  value) ;

constexpr void __cordl_internal_set_m_smoothnessTextureChannel(::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel  value) ;

constexpr void __cordl_internal_set_m_specColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_tintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_workflowMode(::GlobalNamespace::TextureBlenderURPLit_WorkflowMode  value) ;

constexpr void __cordl_internal_set_propertyToDo(::GlobalNamespace::TextureBlenderURPLit_Prop  value) ;

constexpr void __cordl_internal_set_sourceMaterialPropertyCache(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  value) ;

/// @brief Method .ctor, addr 0x9dfb8d8, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_NeutralNormalMap() ;

/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* i___DigitalOpus__MB__Core__TextureBlender() noexcept;

static inline void setStaticF_NeutralNormalMap(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderURPLit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderURPLit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureBlenderURPLit(TextureBlenderURPLit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderURPLit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureBlenderURPLit(TextureBlenderURPLit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22864};

/// @brief Field m_generatedAlphaCutoff offset 0xffffffff size 0x4
static constexpr float_t  m_generatedAlphaCutoff{static_cast<float_t>(0.5f)};

/// @brief Field sourceMaterialPropertyCache, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  ___sourceMaterialPropertyCache;

/// @brief Field m_workflowMode, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode  ___m_workflowMode;

/// @brief Field m_smoothnessTextureChannel, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel  ___m_smoothnessTextureChannel;

/// @brief Field m_tintColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_tintColor;

/// @brief Field m_doScaleAlphaCutoff, offset: 0x30, size: 0x1, def value: None
 bool  ___m_doScaleAlphaCutoff;

/// @brief Field m_alphaCutoff, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_alphaCutoff;

/// @brief Field m_smoothness, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_smoothness;

/// @brief Field m_specColor, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_specColor;

/// @brief Field m_hasSpecGlossMap, offset: 0x4c, size: 0x1, def value: None
 bool  ___m_hasSpecGlossMap;

/// @brief Field m_metallic, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_metallic;

/// @brief Field m_hasMetallicGlossMap, offset: 0x54, size: 0x1, def value: None
 bool  ___m_hasMetallicGlossMap;

/// @brief Field m_bumpScale, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_bumpScale;

/// @brief Field m_shaderDoesEmission, offset: 0x5c, size: 0x1, def value: None
 bool  ___m_shaderDoesEmission;

/// @brief Field m_emissionColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_emissionColor;

/// @brief Field propertyToDo, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::TextureBlenderURPLit_Prop  ___propertyToDo;

/// @brief Field m_generatingTintedAtlaColor, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlaColor;

/// @brief Field m_generatingTintedAtlasMetallic, offset: 0x84, size: 0x4, def value: None
 float_t  ___m_generatingTintedAtlasMetallic;

/// @brief Field m_generatingTintedAtlaSpecular, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlaSpecular;

/// @brief Field m_generatingTintedAtlasMetallic_smoothness, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_generatingTintedAtlasMetallic_smoothness;

/// @brief Field m_generatingTintedAtlasSpecular_somoothness, offset: 0x9c, size: 0x4, def value: None
 float_t  ___m_generatingTintedAtlasSpecular_somoothness;

/// @brief Field m_generatingTintedAtlaBumpScale, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_generatingTintedAtlaBumpScale;

/// @brief Field m_generatingTintedAtlaEmission, offset: 0xa4, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_generatingTintedAtlaEmission;

/// @brief Field m_notGeneratingAtlasDefaultColor, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultColor;

/// @brief Field m_notGeneratingAtlasDefaultMetallic, offset: 0xc4, size: 0x4, def value: None
 float_t  ___m_notGeneratingAtlasDefaultMetallic;

/// @brief Field m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow, offset: 0xc8, size: 0x4, def value: None
 float_t  ___m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow;

/// @brief Field m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow, offset: 0xcc, size: 0x4, def value: None
 float_t  ___m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow;

/// @brief Field m_notGeneratingAtlasDefaultSpecularColor, offset: 0xd0, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultSpecularColor;

/// @brief Field m_notGeneratingAtlasDefaultEmisionColor, offset: 0xe0, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_notGeneratingAtlasDefaultEmisionColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___sourceMaterialPropertyCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_workflowMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_smoothnessTextureChannel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_tintColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_doScaleAlphaCutoff) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_alphaCutoff) == 0x34, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_smoothness) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_specColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_hasSpecGlossMap) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_metallic) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_hasMetallicGlossMap) == 0x54, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_bumpScale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_shaderDoesEmission) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_emissionColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___propertyToDo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_generatingTintedAtlaColor) == 0x74, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_generatingTintedAtlasMetallic) == 0x84, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_generatingTintedAtlaSpecular) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_generatingTintedAtlasMetallic_smoothness) == 0x98, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_generatingTintedAtlasSpecular_somoothness) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_generatingTintedAtlaBumpScale) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_generatingTintedAtlaEmission) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_notGeneratingAtlasDefaultColor) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_notGeneratingAtlasDefaultMetallic) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_notGeneratingAtlasDefaultSpecularColor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderURPLit, ___m_notGeneratingAtlasDefaultEmisionColor) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderURPLit) == 0xf0, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
