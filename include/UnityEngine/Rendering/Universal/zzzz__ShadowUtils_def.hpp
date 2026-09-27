#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShadowUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowUtils)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowData;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowSliceData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShadowDrawingSettings;
}
namespace UnityEngine::Rendering {
struct ShadowSplitData;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct LightShadows;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShadowUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::ShadowUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ShadowUtils*, "UnityEngine.Rendering.Universal", "ShadowUtils");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShadowUtils
class CORDL_TYPE ShadowUtils : public ::System::Object {
public:
// Declarations
/// @brief Field m_ForceShadowPointSampling, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_ForceShadowPointSampling, put=setStaticF_m_ForceShadowPointSampling)) bool  m_ForceShadowPointSampling;

/// @brief Method AllocShadowRT, addr 0xb29e5c8, size 0xec, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RTHandle* AllocShadowRT(int32_t  width, int32_t  height, int32_t  bits, int32_t  anisoLevel, float_t  mipMapBias, ::StringW  name) ;

/// @brief Method ApplySliceTransform, addr 0xb29d064, size 0x12c, virtual false, abstract: false, final false
static inline void ApplySliceTransform(::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>  shadowSliceData, int32_t  atlasWidth, int32_t  atlasHeight) ;

/// @brief Method ExtractDirectionalLightMatrix, addr 0xb29c6c0, size 0x1c4, virtual false, abstract: false, final false
static inline bool ExtractDirectionalLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults>  cullResults, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData, int32_t  shadowLightIndex, int32_t  cascadeIndex, int32_t  shadowmapWidth, int32_t  shadowmapHeight, int32_t  shadowResolution, float_t  shadowNearPlane, ::by_ref<::UnityEngine::Vector4>  cascadeSplitDistance, ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>  shadowSliceData) ;

/// @brief Method ExtractDirectionalLightMatrix, addr 0xb29ce0c, size 0xd8, virtual false, abstract: false, final false
static inline bool ExtractDirectionalLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults>  cullResults, ::by_ref<::UnityEngine::Rendering::Universal::ShadowData>  shadowData, int32_t  shadowLightIndex, int32_t  cascadeIndex, int32_t  shadowmapWidth, int32_t  shadowmapHeight, int32_t  shadowResolution, float_t  shadowNearPlane, ::by_ref<::UnityEngine::Vector4>  cascadeSplitDistance, ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>  shadowSliceData) ;

/// @brief Method ExtractDirectionalLightMatrix, addr 0xb29ccd8, size 0x134, virtual false, abstract: false, final false
static inline bool ExtractDirectionalLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults>  cullResults, ::by_ref<::UnityEngine::Rendering::Universal::ShadowData>  shadowData, int32_t  shadowLightIndex, int32_t  cascadeIndex, int32_t  shadowmapWidth, int32_t  shadowmapHeight, int32_t  shadowResolution, float_t  shadowNearPlane, ::by_ref<::UnityEngine::Vector4>  cascadeSplitDistance, ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>  shadowSliceData, ::by_ref<::UnityEngine::Matrix4x4>  viewMatrix, ::by_ref<::UnityEngine::Matrix4x4>  projMatrix) ;

/// @brief Method ExtractPointLightMatrix, addr 0xb29c8a0, size 0x138, virtual false, abstract: false, final false
static inline bool ExtractPointLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults>  cullResults, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData, int32_t  shadowLightIndex, ::UnityEngine::CubemapFace  cubemapFace, float_t  fovBias, ::by_ref<::UnityEngine::Matrix4x4>  shadowMatrix, ::by_ref<::UnityEngine::Matrix4x4>  viewMatrix, ::by_ref<::UnityEngine::Matrix4x4>  projMatrix, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>  splitData) ;

/// @brief Method ExtractPointLightMatrix, addr 0xb29d234, size 0xc4, virtual false, abstract: false, final false
static inline bool ExtractPointLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults>  cullResults, ::by_ref<::UnityEngine::Rendering::Universal::ShadowData>  shadowData, int32_t  shadowLightIndex, ::UnityEngine::CubemapFace  cubemapFace, float_t  fovBias, ::by_ref<::UnityEngine::Matrix4x4>  shadowMatrix, ::by_ref<::UnityEngine::Matrix4x4>  viewMatrix, ::by_ref<::UnityEngine::Matrix4x4>  projMatrix, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>  splitData) ;

/// @brief Method ExtractSpotLightMatrix, addr 0xb29c9d8, size 0xe8, virtual false, abstract: false, final false
static inline bool ExtractSpotLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults>  cullResults, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData, int32_t  shadowLightIndex, ::by_ref<::UnityEngine::Matrix4x4>  shadowMatrix, ::by_ref<::UnityEngine::Matrix4x4>  viewMatrix, ::by_ref<::UnityEngine::Matrix4x4>  projMatrix, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>  splitData) ;

/// @brief Method ExtractSpotLightMatrix, addr 0xb29d190, size 0xa4, virtual false, abstract: false, final false
static inline bool ExtractSpotLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults>  cullResults, ::by_ref<::UnityEngine::Rendering::Universal::ShadowData>  shadowData, int32_t  shadowLightIndex, ::by_ref<::UnityEngine::Matrix4x4>  shadowMatrix, ::by_ref<::UnityEngine::Matrix4x4>  viewMatrix, ::by_ref<::UnityEngine::Matrix4x4>  projMatrix, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>  splitData) ;

/// @brief Method FastApproximately, addr 0xb29ee54, size 0xfc, virtual false, abstract: false, final false
static inline bool FastApproximately(::UnityEngine::Vector4  a, ::UnityEngine::Vector4  b) ;

/// @brief Method FastApproximately, addr 0xb29ee3c, size 0x18, virtual false, abstract: false, final false
static inline bool FastApproximately(float_t  a, float_t  b) ;

/// @brief Method GetMaxTileResolutionInAtlas, addr 0xb29d644, size 0x2c, virtual false, abstract: false, final false
static inline int32_t GetMaxTileResolutionInAtlas(int32_t  atlasWidth, int32_t  atlasHeight, int32_t  tileCount) ;

/// @brief Method GetPunctualLightShadowSlicesCount, addr 0xb29c884, size 0x1c, virtual false, abstract: false, final false
static inline int32_t GetPunctualLightShadowSlicesCount(/* [IsReadOnly] */ ::by_ref<::UnityEngine::LightType>  lightType) ;

/// @brief Method GetScaleAndBiasForLinearDistanceFade, addr 0xb29db74, size 0x54, virtual false, abstract: false, final false
static inline void GetScaleAndBiasForLinearDistanceFade(float_t  fadeDistance, float_t  border, ::by_ref<float_t>  scale, ::by_ref<float_t>  bias) ;

/// @brief Method GetShadowBias, addr 0xb29d744, size 0x378, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetShadowBias(::by_ref<::UnityEngine::Rendering::VisibleLight>  shadowLight, int32_t  shadowLightIndex, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  bias, bool  supportsSoftShadows, ::UnityEngine::Matrix4x4  lightProjectionMatrix, float_t  shadowResolution) ;

/// @brief Method GetShadowBias, addr 0xb29dabc, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetShadowBias(::by_ref<::UnityEngine::Rendering::VisibleLight>  shadowLight, int32_t  shadowLightIndex, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData, ::UnityEngine::Matrix4x4  lightProjectionMatrix, float_t  shadowResolution) ;

/// @brief Method GetShadowBias, addr 0xb29d670, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetShadowBias(::by_ref<::UnityEngine::Rendering::VisibleLight>  shadowLight, int32_t  shadowLightIndex, ::by_ref<::UnityEngine::Rendering::Universal::ShadowData>  shadowData, ::UnityEngine::Matrix4x4  lightProjectionMatrix, float_t  shadowResolution) ;

/// @brief Method GetShadowTransform, addr 0xb29cee4, size 0x180, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetShadowTransform(::UnityEngine::Matrix4x4  proj, ::UnityEngine::Matrix4x4  view) ;

/// [Obsolete("Use AllocShadowRT or ShadowRTReAllocateIfNeeded", true)]
/// @brief Method GetTemporaryShadowTexture, addr 0xb29e2b4, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporaryShadowTexture(int32_t  width, int32_t  height, int32_t  bits) ;

/// @brief Method GetTemporaryShadowTextureDescriptor, addr 0xb29e1b0, size 0x104, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureDescriptor GetTemporaryShadowTextureDescriptor(int32_t  width, int32_t  height, int32_t  bits) ;

/// @brief Method IsValidShadowCastingLight, addr 0xb29ecd8, size 0x138, virtual false, abstract: false, final false
static inline bool IsValidShadowCastingLight(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, int32_t  i) ;

/// @brief Method IsValidShadowCastingLight, addr 0xb29ee10, size 0x2c, virtual false, abstract: false, final false
static inline bool IsValidShadowCastingLight(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, int32_t  i, ::UnityEngine::LightType  lightType, ::UnityEngine::LightShadows  lightShadows, float_t  shadowStrength) ;

/// @brief Method MinimalPunctualLightShadowResolution, addr 0xb29ef50, size 0x14, virtual false, abstract: false, final false
static inline int32_t MinimalPunctualLightShadowResolution(bool  softShadow) ;

/// @brief Method RenderShadowSlice, addr 0xb29d594, size 0xb0, virtual false, abstract: false, final false
static inline void RenderShadowSlice(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  context, ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>  shadowSliceData, ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>  settings) ;

/// @brief Method RenderShadowSlice, addr 0xb29d2f8, size 0x160, virtual false, abstract: false, final false
static inline void RenderShadowSlice(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  context, ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>  shadowSliceData, ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>  settings, ::UnityEngine::Matrix4x4  proj, ::UnityEngine::Matrix4x4  view) ;

/// @brief Method RenderShadowSlice, addr 0xb29d458, size 0x13c, virtual false, abstract: false, final false
static inline void RenderShadowSlice(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>  shadowSliceData, ::by_ref<::UnityEngine::Rendering::RendererList>  shadowRendererList, ::UnityEngine::Matrix4x4  proj, ::UnityEngine::Matrix4x4  view) ;

/// @brief Method SetCameraPosition, addr 0xb29dfcc, size 0x98, virtual false, abstract: false, final false
static inline void SetCameraPosition(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Vector3  worldSpaceCameraPos) ;

/// @brief Method SetLightDirection, addr 0xb29de9c, size 0x98, virtual false, abstract: false, final false
static inline void SetLightDirection(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Vector3  lightDirection) ;

/// @brief Method SetLightPosition, addr 0xb29df34, size 0x98, virtual false, abstract: false, final false
static inline void SetLightPosition(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Vector3  lightPosition) ;

/// @brief Method SetPerLightSoftShadowKeyword, addr 0xb29e9b4, size 0xa8, virtual false, abstract: false, final false
static inline void SetPerLightSoftShadowKeyword(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, bool  hasSoftShadows) ;

/// @brief Method SetShadowBias, addr 0xb29de00, size 0x9c, virtual false, abstract: false, final false
static inline void SetShadowBias(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Vector4  shadowBias) ;

/// @brief Method SetSoftShadowQualityShaderKeywords, addr 0xb29ea5c, size 0x27c, virtual false, abstract: false, final false
static inline void SetSoftShadowQualityShaderKeywords(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData) ;

/// @brief Method SetWorldToCameraAndCameraToWorldMatrices, addr 0xb29e064, size 0x14c, virtual false, abstract: false, final false
static inline void SetWorldToCameraAndCameraToWorldMatrices(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Matrix4x4  viewMatrix) ;

/// @brief Method SetupShadowCasterConstantBuffer, addr 0xb29dbc8, size 0x114, virtual false, abstract: false, final false
static inline void SetupShadowCasterConstantBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::VisibleLight>  shadowLight, ::UnityEngine::Vector4  shadowBias) ;

/// @brief Method SetupShadowCasterConstantBuffer, addr 0xb29dcdc, size 0x124, virtual false, abstract: false, final false
static inline void SetupShadowCasterConstantBuffer(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::VisibleLight>  shadowLight, ::UnityEngine::Vector4  shadowBias) ;

/// @brief Method ShadowRTNeedsReAlloc, addr 0xb29e374, size 0x254, virtual false, abstract: false, final false
static inline bool ShadowRTNeedsReAlloc(::UnityEngine::Rendering::RTHandle*  handle, int32_t  width, int32_t  height, int32_t  bits, int32_t  anisoLevel, float_t  mipMapBias, ::StringW  name) ;

/// @brief Method ShadowRTReAllocateIfNeeded, addr 0xb29e6b4, size 0xfc, virtual false, abstract: false, final false
static inline bool ShadowRTReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*>  handle, int32_t  width, int32_t  height, int32_t  bits, int32_t  anisoLevel, float_t  mipMapBias, ::StringW  name) ;

/// @brief Method SoftShadowQualityToShaderProperty, addr 0xb29e7b0, size 0x174, virtual false, abstract: false, final false
static inline float_t SoftShadowQualityToShaderProperty(::UnityEngine::Light*  light, bool  softShadowsEnabled) ;

/// @brief Method SupportsPerLightSoftShadowQuality, addr 0xb29e924, size 0x90, virtual false, abstract: false, final false
static inline bool SupportsPerLightSoftShadowQuality() ;

static inline bool getStaticF_m_ForceShadowPointSampling() ;

static inline void setStaticF_m_ForceShadowPointSampling(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShadowUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShadowUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShadowUtils(ShadowUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShadowUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShadowUtils(ShadowUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18617};

/// @brief Field kMinimumPunctualLightHardShadowResolution offset 0xffffffff size 0x4
static constexpr int32_t  kMinimumPunctualLightHardShadowResolution{static_cast<int32_t>(0x8)};

/// @brief Field kMinimumPunctualLightSoftShadowResolution offset 0xffffffff size 0x4
static constexpr int32_t  kMinimumPunctualLightSoftShadowResolution{static_cast<int32_t>(0x10)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ShadowUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
