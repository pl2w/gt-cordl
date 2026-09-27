#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipeline)
namespace GlobalNamespace {
struct HDROutputUtils_HDRDisplayInformation;
}
namespace GlobalNamespace {
struct TemporalAA_Settings;
}
namespace GlobalNamespace {
struct UniversalRenderPipeline_CameraRenderingScope;
}
namespace GlobalNamespace {
struct UniversalRenderPipeline_ContextRenderingScope;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightDataGI;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class Lightmapping_RequestLightsDelegate;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::Universal {
struct AdditionalLightsShadowAtlasLayout;
}
namespace UnityEngine::Rendering::Universal {
class CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry;
}
namespace UnityEngine::Rendering::Universal {
class CullContextData;
}
namespace UnityEngine::Rendering::Universal {
struct HDRColorBufferPrecision;
}
namespace UnityEngine::Rendering::Universal {
struct ImageUpscalingFilter;
}
namespace UnityEngine::Rendering::Universal {
class Pipeline_Profiling_UniversalRenderPipeline_Context;
}
namespace UnityEngine::Rendering::Universal {
class Pipeline_Profiling_UniversalRenderPipeline_Renderer;
}
namespace UnityEngine::Rendering::Universal {
class Profiling_UniversalRenderPipeline_Pipeline;
}
namespace UnityEngine::Rendering::Universal {
class RTHandleResourcePool;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class Tonemapping;
}
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalPostProcessingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineGlobalSettings;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineRuntimeTextures;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_CameraMetadataCache;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_Profiling;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_SingleCameraRequest;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine::Rendering::Universal {
struct UpscalingFilterSelection;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsUI;
}
namespace UnityEngine::Rendering {
struct PerObjectData;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct ColorGamut;
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
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry;
}
namespace UnityEngine::Rendering::Universal {
class Pipeline_Profiling_UniversalRenderPipeline_Context;
}
namespace UnityEngine::Rendering::Universal {
class Pipeline_Profiling_UniversalRenderPipeline_Renderer;
}
namespace UnityEngine::Rendering::Universal {
class Profiling_UniversalRenderPipeline_Pipeline;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_CameraMetadataCache;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_Profiling;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_SingleCameraRequest;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/CameraMetadataCache/CameraMetadataCacheEntry");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling/Pipeline/Context");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling/Pipeline/Renderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling/Pipeline");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/CameraMetadataCache");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/SingleCameraRequest");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/<>c");
// Dependencies UnityEngine.Rendering.RenderPipeline, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline
class CORDL_TYPE UniversalRenderPipeline : public ::UnityEngine::Rendering::RenderPipeline {
public:
// Declarations
using CameraRenderingScope = ::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope;

using ContextRenderingScope = ::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope;

using CameraMetadataCache = ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache;

using Profiling = ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling;

using SingleCameraRequest = ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest;

using __c = ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c;

/// @brief Field <canOptimizeScreenMSAASamples>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__canOptimizeScreenMSAASamples_k__BackingField, put=setStaticF__canOptimizeScreenMSAASamples_k__BackingField)) bool  _canOptimizeScreenMSAASamples_k__BackingField;

/// @brief Field <runtimeTextures>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__runtimeTextures_k__BackingField, put=__cordl_internal_set__runtimeTextures_k__BackingField)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*  _runtimeTextures_k__BackingField;

/// @brief Field <startFrameScreenMSAASamples>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__startFrameScreenMSAASamples_k__BackingField, put=setStaticF__startFrameScreenMSAASamples_k__BackingField)) int32_t  _startFrameScreenMSAASamples_k__BackingField;

/// @brief Field apvIsEnabled, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_apvIsEnabled, put=__cordl_internal_set_apvIsEnabled)) bool  apvIsEnabled;

/// @brief Field cameraComparison, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraComparison, put=__cordl_internal_set_cameraComparison)) ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*  cameraComparison;

 __declspec(property(get=get_defaultSettings)) ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>  defaultSettings;

/// @brief Field enableHDROnce, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableHDROnce, put=__cordl_internal_set_enableHDROnce)) bool  enableHDROnce;

/// @brief Field k_DefaultLightAttenuation, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_k_DefaultLightAttenuation, put=setStaticF_k_DefaultLightAttenuation)) ::UnityEngine::Vector4  k_DefaultLightAttenuation;

/// @brief Field k_DefaultLightColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_k_DefaultLightColor, put=setStaticF_k_DefaultLightColor)) ::UnityEngine::Vector4  k_DefaultLightColor;

/// @brief Field k_DefaultLightPosition, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_k_DefaultLightPosition, put=setStaticF_k_DefaultLightPosition)) ::UnityEngine::Vector4  k_DefaultLightPosition;

/// @brief Field k_DefaultLightSpotDirection, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_k_DefaultLightSpotDirection, put=setStaticF_k_DefaultLightSpotDirection)) ::UnityEngine::Vector4  k_DefaultLightSpotDirection;

/// @brief Field k_DefaultLightsProbeChannel, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_k_DefaultLightsProbeChannel, put=setStaticF_k_DefaultLightsProbeChannel)) ::UnityEngine::Vector4  k_DefaultLightsProbeChannel;

/// @brief Field lightsDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lightsDelegate, put=setStaticF_lightsDelegate)) ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*  lightsDelegate;

/// @brief Field m_DebugDisplaySettingsUI, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugDisplaySettingsUI, put=__cordl_internal_set_m_DebugDisplaySettingsUI)) ::UnityEngine::Rendering::DebugDisplaySettingsUI*  m_DebugDisplaySettingsUI;

/// @brief Field m_GlobalSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GlobalSettings, put=__cordl_internal_set_m_GlobalSettings)) ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings>  m_GlobalSettings;

/// @brief Field m_ShadowBiasData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_ShadowBiasData, put=setStaticF_m_ShadowBiasData)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  m_ShadowBiasData;

/// @brief Field m_ShadowResolutionData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_ShadowResolutionData, put=setStaticF_m_ShadowResolutionData)) ::System::Collections::Generic::List_1<int32_t>*  m_ShadowResolutionData;

/// @brief Field pipelineAsset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_pipelineAsset, put=__cordl_internal_set_pipelineAsset)) ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>  pipelineAsset;

 __declspec(property(get=get_runtimeTextures, put=set_runtimeTextures)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*  runtimeTextures;

/// @brief Field s_RTHandlePool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RTHandlePool, put=setStaticF_s_RTHandlePool)) ::UnityEngine::Rendering::Universal::RTHandleResourcePool*  s_RTHandlePool;

/// @brief Field s_RenderGraph, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RenderGraph, put=setStaticF_s_RenderGraph)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  s_RenderGraph;

/// @brief Field stackedOverlayCamerasRequireDepthForPostProcessing, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_stackedOverlayCamerasRequireDepthForPostProcessing, put=setStaticF_stackedOverlayCamerasRequireDepthForPostProcessing)) bool  stackedOverlayCamerasRequireDepthForPostProcessing;

/// @brief Field useRenderGraph, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_useRenderGraph, put=setStaticF_useRenderGraph)) bool  useRenderGraph;

/// @brief Method AdjustUIOverlayOwnership, addr 0xb2bcb04, size 0xc0, virtual false, abstract: false, final false
static inline void AdjustUIOverlayOwnership(int32_t  cameraCount) ;

/// @brief Method ApplyTaaRenderingDebugOverrides, addr 0xb2c4f1c, size 0xc8, virtual false, abstract: false, final false
static inline void ApplyTaaRenderingDebugOverrides(::by_ref<::GlobalNamespace::TemporalAA_Settings>  taaSettings) ;

/// @brief Method BuildAdditionalLightsShadowAtlasLayout, addr 0xb2c3810, size 0x15c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout BuildAdditionalLightsShadowAtlasLayout(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method CheckAndApplyDebugSettings, addr 0xb2c32d4, size 0x1fc, virtual false, abstract: false, final false
static inline void CheckAndApplyDebugSettings(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method CheckPostProcessForDepth, addr 0xb2c3a4c, size 0xcc, virtual false, abstract: false, final false
static inline bool CheckPostProcessForDepth() ;

/// @brief Method CheckPostProcessForDepth, addr 0xb2c41c0, size 0x90, virtual false, abstract: false, final false
static inline bool CheckPostProcessForDepth(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method CreateCameraData, addr 0xb2bf3d4, size 0x56c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::UniversalCameraData* CreateCameraData(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*  additionalCameraData) ;

/// @brief Method CreateCullContextData, addr 0xb2c31a8, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::CullContextData* CreateCullContextData(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::ScriptableRenderContext  context) ;

/// @brief Method CreateLightData, addr 0xb2c1db4, size 0x370, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::UniversalLightData* CreateLightData(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  settings, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>  visibleLights, ::System::Nullable_1<::UnityEngine::Rendering::Universal::RenderingMode>  renderingMode) ;

/// @brief Method CreatePostProcessingData, addr 0xb2c2f60, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* CreatePostProcessingData(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  settings) ;

/// @brief Method CreateRenderTextureDescriptor, addr 0xb2c4980, size 0x2d0, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureDescriptor CreateRenderTextureDescriptor(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  isHdrEnabled, ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision  requestHDRColorBufferPrecision, int32_t  msaaSamples, bool  needsAlpha, bool  requiresOpaqueTexture) ;

/// @brief Method CreateRenderingData, addr 0xb2c3034, size 0x174, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::UniversalRenderingData* CreateRenderingData(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  settings, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::System::Nullable_1<::UnityEngine::Rendering::Universal::RenderingMode>  renderingMode, ::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer) ;

/// @brief Method CreateShadowAtlasAndCullShadowCasters, addr 0xb2c34d0, size 0x128, virtual false, abstract: false, final false
static inline void CreateShadowAtlasAndCullShadowCasters(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::by_ref<::UnityEngine::Rendering::CullingResults>  cullResults, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  context) ;

/// @brief Method CreateShadowData, addr 0xb2c2124, size 0xe3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::UniversalShadowData* CreateShadowData(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  urpAsset, ::System::Nullable_1<::UnityEngine::Rendering::Universal::RenderingMode>  renderingMode) ;

/// @brief Method CreateUniversalResourceData, addr 0xb2c1d64, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::UniversalResourceData* CreateUniversalResourceData(::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method Dispose, addr 0xb2bc0d4, size 0x324, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DisposeAdditionalCameraData, addr 0xb2bc3f8, size 0xbc, virtual false, abstract: false, final false
inline void DisposeAdditionalCameraData() ;

/// @brief Method GetBrightestDirectionalLightIndex, addr 0xb2c5360, size 0x16c, virtual false, abstract: false, final false
static inline int32_t GetBrightestDirectionalLightIndex(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  settings, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>  visibleLights) ;

/// @brief Method GetHDROutputGradingParameters, addr 0xb2c5898, size 0xc8, virtual false, abstract: false, final false
static inline void GetHDROutputGradingParameters(::UnityEngine::Rendering::Universal::Tonemapping*  tonemapping, ::by_ref<::UnityEngine::Vector4>  hdrOutputParameters) ;

/// @brief Method GetHDROutputLuminanceParameters, addr 0xb2c57a8, size 0xf0, virtual false, abstract: false, final false
static inline void GetHDROutputLuminanceParameters(::GlobalNamespace::HDROutputUtils_HDRDisplayInformation  hdrDisplayInformation, ::UnityEngine::ColorGamut  hdrDisplayColorGamut, ::UnityEngine::Rendering::Universal::Tonemapping*  tonemapping, ::by_ref<::UnityEngine::Vector4>  hdrOutputParameters) ;

/// @brief Method GetLastBaseCameraIndex, addr 0xb2bd1e4, size 0xe0, virtual false, abstract: false, final false
inline int32_t GetLastBaseCameraIndex(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method GetLightAttenuationAndSpotDirection, addr 0xb2c598c, size 0x150, virtual false, abstract: false, final false
static inline void GetLightAttenuationAndSpotDirection(::UnityEngine::LightType  lightType, float_t  lightRange, ::UnityEngine::Matrix4x4  lightLocalToWorldMatrix, float_t  spotAngle, ::System::Nullable_1<float_t>  innerSpotAngle, ::by_ref<::UnityEngine::Vector4>  lightAttenuation, ::by_ref<::UnityEngine::Vector4>  lightSpotDir) ;

/// @brief Method GetMainLightCascadeSplit, addr 0xb2c51b8, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetMainLightCascadeSplit(int32_t  mainLightShadowCascadesCount, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  urpAsset) ;

/// @brief Method GetMainLightIndex, addr 0xb2c5218, size 0x148, virtual false, abstract: false, final false
static inline int32_t GetMainLightIndex(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  settings, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>  visibleLights) ;

/// @brief Method GetPerObjectLightFlags, addr 0xb2c4fe4, size 0x1d4, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::PerObjectData GetPerObjectLightFlags(::UnityEngine::Rendering::Universal::UniversalLightData*  universalLightData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  settings, ::System::Nullable_1<::UnityEngine::Rendering::Universal::RenderingMode>  renderingMode) ;

/// @brief Method GetPunctualLightDistanceAttenuation, addr 0xb2c5adc, size 0x3c, virtual false, abstract: false, final false
static inline void GetPunctualLightDistanceAttenuation(float_t  lightRange, ::by_ref<::UnityEngine::Vector4>  lightAttenuation) ;

/// @brief Method GetRenderer, addr 0xb2bf2ec, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* GetRenderer(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*  additionalCameraData) ;

/// @brief Method GetSpotAngleAttenuation, addr 0xb2c5b4c, size 0x10c, virtual false, abstract: false, final false
static inline void GetSpotAngleAttenuation(float_t  spotAngle, ::System::Nullable_1<float_t>  innerSpotAngle, ::by_ref<::UnityEngine::Vector4>  lightAttenuation) ;

/// @brief Method GetSpotDirection, addr 0xb2c5b18, size 0x34, virtual false, abstract: false, final false
static inline void GetSpotDirection(::by_ref<::UnityEngine::Matrix4x4>  lightLocalToWorldMatrix, ::by_ref<::UnityEngine::Vector4>  lightSpotDir) ;

/// @brief Method HDROutputForAnyDisplayIsActive, addr 0xb2c5700, size 0xa8, virtual false, abstract: false, final false
static inline bool HDROutputForAnyDisplayIsActive() ;

/// @brief Method HDROutputForMainDisplayIsActive, addr 0xb2c396c, size 0xe0, virtual false, abstract: false, final false
static inline bool HDROutputForMainDisplayIsActive() ;

/// @brief Method InitializeAdditionalCameraData, addr 0xb2bf940, size 0x80c, virtual false, abstract: false, final false
static inline void InitializeAdditionalCameraData(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*  additionalCameraData, bool  resolveFinalTarget, bool  isLastBaseCamera, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method InitializeLightConstants_Common, addr 0xb2c5c58, size 0x350, virtual false, abstract: false, final false
static inline void InitializeLightConstants_Common(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>  lights, int32_t  lightIndex, ::by_ref<::UnityEngine::Vector4>  lightPos, ::by_ref<::UnityEngine::Vector4>  lightColor, ::by_ref<::UnityEngine::Vector4>  lightAttenuation, ::by_ref<::UnityEngine::Vector4>  lightSpotDir, ::by_ref<::UnityEngine::Vector4>  lightOcclusionProbeChannel) ;

/// @brief Method InitializeMainLightShadowResolution, addr 0xb2c3778, size 0x98, virtual false, abstract: false, final false
static inline void InitializeMainLightShadowResolution(::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData) ;

/// @brief Method InitializeStackedCameraData, addr 0xb2c4250, size 0x730, virtual false, abstract: false, final false
static inline void InitializeStackedCameraData(::UnityEngine::Camera*  baseCamera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*  baseAdditionalCameraData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method IsGameCamera, addr 0xb2bd2c4, size 0xdc, virtual false, abstract: false, final false
static inline bool IsGameCamera(::UnityEngine::Camera*  camera) ;

/// @brief Method IsRenderRequestSupported, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename RequestData>
inline bool IsRenderRequestSupported(::UnityEngine::Camera*  camera, RequestData  data) ;

/// @brief Method MakeRenderTextureGraphicsFormat, addr 0xb2c5698, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat MakeRenderTextureGraphicsFormat(bool  isHdrEnabled, ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision  requestHDRColorBufferPrecision, bool  needsAlpha) ;

/// @brief Method MakeUnormRenderTextureGraphicsFormat, addr 0xb2c5960, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat MakeUnormRenderTextureGraphicsFormat() ;

static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline* New_ctor(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  asset) ;

/// @brief Method ProcessRenderRequests, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename RequestData>
inline void ProcessRenderRequests(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, RequestData  renderRequest) ;

/// @brief Method RecordAndExecuteRenderGraph, addr 0xb2c35f8, size 0x180, virtual false, abstract: false, final false
static inline void RecordAndExecuteRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  camera, ::StringW  cameraName) ;

/// @brief Method Render, addr 0xb2bc4b4, size 0x510, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::ScriptableRenderContext  renderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method RenderCameraStack, addr 0xb2bd3a0, size 0x15e0, virtual false, abstract: false, final false
static inline void RenderCameraStack(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  baseCamera, bool  isLastBaseCamera) ;

/// [Obsolete("RenderSingleCamera is obsolete, please use RenderPipeline.SubmitRenderRequest with UniversalRenderer.SingleCameraRequest as RequestData type")]
/// @brief Method RenderSingleCamera, addr 0xb2bee5c, size 0x68, virtual false, abstract: false, final false
static inline void RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method RenderSingleCamera, addr 0xb2c014c, size 0x13e0, virtual false, abstract: false, final false
static inline void RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method RenderSingleCameraInternal, addr 0xb2beec4, size 0x428, virtual false, abstract: false, final false
static inline void RenderSingleCameraInternal(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, ::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>  additionalCameraData, bool  isLastBaseCamera) ;

/// @brief Method RenderSingleCameraInternal, addr 0xb2bed88, size 0xd4, virtual false, abstract: false, final false
static inline void RenderSingleCameraInternal(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, bool  isLastBaseCamera) ;

/// @brief Method ResolveUpscalingFilterSelection, addr 0xb2c4c50, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::ImageUpscalingFilter ResolveUpscalingFilterSelection(::UnityEngine::Vector2  imageSize, float_t  renderScale, ::UnityEngine::Rendering::Universal::UpscalingFilterSelection  selection, bool  enableRenderGraph) ;

/// @brief Method SetHDRState, addr 0xb2bc9c4, size 0x140, virtual false, abstract: false, final false
inline void SetHDRState(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method SetSupportedRenderingFeatures, addr 0xb2bb104, size 0x80, virtual false, abstract: false, final false
static inline void SetSupportedRenderingFeatures(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  pipelineAsset) ;

/// @brief Method SetupPerCameraShaderConstants, addr 0xb2c186c, size 0x3e8, virtual false, abstract: false, final false
static inline void SetupPerCameraShaderConstants(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method SetupPerFrameShaderConstants, addr 0xb2bcda8, size 0x320, virtual false, abstract: false, final false
inline void SetupPerFrameShaderConstants() ;

/// @brief Method SetupScreenMSAASamplesState, addr 0xb2bcbc4, size 0xdc, virtual false, abstract: false, final false
static inline void SetupScreenMSAASamplesState(int32_t  cameraCount) ;

/// @brief Method SortCameras, addr 0xb2bd168, size 0x7c, virtual false, abstract: false, final false
inline void SortCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method ToString, addr 0xb2ba820, size 0x18, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetCullingParameters, addr 0xb2c152c, size 0x180, virtual false, abstract: false, final false
static inline bool TryGetCullingParameters(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParams) ;

/// @brief Method UpdateCameraData, addr 0xb2c3c9c, size 0x398, virtual false, abstract: false, final false
static inline void UpdateCameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  baseCameraData, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Experimental::Rendering::XRPass*>  xr) ;

/// @brief Method UpdateCameraStereoMatrices, addr 0xb2c3b18, size 0x184, virtual false, abstract: false, final false
static inline void UpdateCameraStereoMatrices(::UnityEngine::Camera*  camera, ::UnityEngine::Experimental::Rendering::XRPass*  xr) ;

/// @brief Method UpdateTemporalAAData, addr 0xb2c4df0, size 0x12c, virtual false, abstract: false, final false
static inline void UpdateTemporalAAData(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*  additionalCameraData) ;

/// @brief Method UpdateTemporalAATargets, addr 0xb2c1c54, size 0x110, virtual false, abstract: false, final false
static inline void UpdateTemporalAATargets(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method UpdateVolumeFramework, addr 0xb2bea90, size 0x2f8, virtual false, abstract: false, final false
static inline void UpdateVolumeFramework(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*  additionalCameraData) ;

constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* const& __cordl_internal_get__runtimeTextures_k__BackingField() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*& __cordl_internal_get__runtimeTextures_k__BackingField() ;

constexpr bool const& __cordl_internal_get_apvIsEnabled() const;

constexpr bool& __cordl_internal_get_apvIsEnabled() ;

constexpr ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* const& __cordl_internal_get_cameraComparison() const;

constexpr ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*& __cordl_internal_get_cameraComparison() ;

constexpr bool const& __cordl_internal_get_enableHDROnce() const;

constexpr bool& __cordl_internal_get_enableHDROnce() ;

constexpr ::UnityEngine::Rendering::DebugDisplaySettingsUI* const& __cordl_internal_get_m_DebugDisplaySettingsUI() const;

constexpr ::UnityEngine::Rendering::DebugDisplaySettingsUI*& __cordl_internal_get_m_DebugDisplaySettingsUI() ;

constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> const& __cordl_internal_get_m_GlobalSettings() const;

constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings>& __cordl_internal_get_m_GlobalSettings() ;

constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> const& __cordl_internal_get_pipelineAsset() const;

constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>& __cordl_internal_get_pipelineAsset() ;

constexpr void __cordl_internal_set__runtimeTextures_k__BackingField(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*  value) ;

constexpr void __cordl_internal_set_apvIsEnabled(bool  value) ;

constexpr void __cordl_internal_set_cameraComparison(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*  value) ;

constexpr void __cordl_internal_set_enableHDROnce(bool  value) ;

constexpr void __cordl_internal_set_m_DebugDisplaySettingsUI(::UnityEngine::Rendering::DebugDisplaySettingsUI*  value) ;

constexpr void __cordl_internal_set_m_GlobalSettings(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings>  value) ;

constexpr void __cordl_internal_set_pipelineAsset(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>  value) ;

/// @brief Method .ctor, addr 0xb2ba838, size 0x8cc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  asset) ;

static inline bool getStaticF__canOptimizeScreenMSAASamples_k__BackingField() ;

static inline int32_t getStaticF__startFrameScreenMSAASamples_k__BackingField() ;

static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightAttenuation() ;

static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightColor() ;

static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightPosition() ;

static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightSpotDirection() ;

static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightsProbeChannel() ;

static inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* getStaticF_lightsDelegate() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* getStaticF_m_ShadowBiasData() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_m_ShadowResolutionData() ;

static inline ::UnityEngine::Rendering::Universal::RTHandleResourcePool* getStaticF_s_RTHandlePool() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* getStaticF_s_RenderGraph() ;

static inline bool getStaticF_stackedOverlayCamerasRequireDepthForPostProcessing() ;

static inline bool getStaticF_useRenderGraph() ;

/// @brief Method get_asset, addr 0xb2bd0c8, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> get_asset() ;

/// [CompilerGenerated]
/// @brief Method get_canOptimizeScreenMSAASamples, addr 0xb2ba6b4, size 0x58, virtual false, abstract: false, final false
static inline bool get_canOptimizeScreenMSAASamples() ;

/// @brief Method get_defaultSettings, addr 0xb2ba6ac, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> get_defaultSettings() ;

/// @brief Method get_lightsPerTile, addr 0xb2ba548, size 0x64, virtual false, abstract: false, final false
static inline int32_t get_lightsPerTile() ;

/// @brief Method get_maxNumIterationsEnclosingSphere, addr 0xb2ba42c, size 0x8, virtual false, abstract: false, final false
static inline int32_t get_maxNumIterationsEnclosingSphere() ;

/// @brief Method get_maxPerObjectLights, addr 0xb2ba434, size 0x8, virtual false, abstract: false, final false
static inline int32_t get_maxPerObjectLights() ;

/// @brief Method get_maxRenderScale, addr 0xb2ba424, size 0x8, virtual false, abstract: false, final false
static inline float_t get_maxRenderScale() ;

/// @brief Method get_maxShadowBias, addr 0xb2ba410, size 0x8, virtual false, abstract: false, final false
static inline float_t get_maxShadowBias() ;

/// @brief Method get_maxTileWords, addr 0xb2ba5b4, size 0x60, virtual false, abstract: false, final false
static inline int32_t get_maxTileWords() ;

/// @brief Method get_maxVisibleAdditionalLights, addr 0xb2ba43c, size 0x10c, virtual false, abstract: false, final false
static inline int32_t get_maxVisibleAdditionalLights() ;

/// @brief Method get_maxVisibleReflectionProbes, addr 0xb2ba614, size 0x88, virtual false, abstract: false, final false
static inline int32_t get_maxVisibleReflectionProbes() ;

/// @brief Method get_maxZBinWords, addr 0xb2ba5ac, size 0x8, virtual false, abstract: false, final false
static inline int32_t get_maxZBinWords() ;

/// @brief Method get_minRenderScale, addr 0xb2ba418, size 0xc, virtual false, abstract: false, final false
static inline float_t get_minRenderScale() ;

/// [CompilerGenerated]
/// @brief Method get_runtimeTextures, addr 0xb2ba69c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* get_runtimeTextures() ;

/// [CompilerGenerated]
/// @brief Method get_startFrameScreenMSAASamples, addr 0xb2ba76c, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_startFrameScreenMSAASamples() ;

static inline void setStaticF__canOptimizeScreenMSAASamples_k__BackingField(bool  value) ;

static inline void setStaticF__startFrameScreenMSAASamples_k__BackingField(int32_t  value) ;

static inline void setStaticF_k_DefaultLightAttenuation(::UnityEngine::Vector4  value) ;

static inline void setStaticF_k_DefaultLightColor(::UnityEngine::Vector4  value) ;

static inline void setStaticF_k_DefaultLightPosition(::UnityEngine::Vector4  value) ;

static inline void setStaticF_k_DefaultLightSpotDirection(::UnityEngine::Vector4  value) ;

static inline void setStaticF_k_DefaultLightsProbeChannel(::UnityEngine::Vector4  value) ;

static inline void setStaticF_lightsDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*  value) ;

static inline void setStaticF_m_ShadowBiasData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

static inline void setStaticF_m_ShadowResolutionData(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_s_RTHandlePool(::UnityEngine::Rendering::Universal::RTHandleResourcePool*  value) ;

static inline void setStaticF_s_RenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  value) ;

static inline void setStaticF_stackedOverlayCamerasRequireDepthForPostProcessing(bool  value) ;

static inline void setStaticF_useRenderGraph(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_canOptimizeScreenMSAASamples, addr 0xb2ba70c, size 0x60, virtual false, abstract: false, final false
static inline void set_canOptimizeScreenMSAASamples(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_runtimeTextures, addr 0xb2ba6a4, size 0x8, virtual false, abstract: false, final false
inline void set_runtimeTextures(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*  value) ;

/// [CompilerGenerated]
/// @brief Method set_startFrameScreenMSAASamples, addr 0xb2ba7c4, size 0x5c, virtual false, abstract: false, final false
static inline void set_startFrameScreenMSAASamples(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalRenderPipeline(UniversalRenderPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalRenderPipeline(UniversalRenderPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18690};

/// @brief Field k_DefaultRenderingLayerMask offset 0xffffffff size 0x4
static constexpr int32_t  k_DefaultRenderingLayerMask{static_cast<int32_t>(0x1)};

/// @brief Field k_ShaderTagName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ShaderTagName{u"UniversalPipeline"};

/// @brief Field m_DebugDisplaySettingsUI, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::DebugDisplaySettingsUI*  ___m_DebugDisplaySettingsUI;

/// @brief Field m_GlobalSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings>  ___m_GlobalSettings;

/// [CompilerGenerated]
/// @brief Field <runtimeTextures>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*  ____runtimeTextures_k__BackingField;

/// @brief Field apvIsEnabled, offset: 0x30, size: 0x1, def value: None
 bool  ___apvIsEnabled;

/// @brief Field pipelineAsset, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>  ___pipelineAsset;

/// @brief Field enableHDROnce, offset: 0x40, size: 0x1, def value: None
 bool  ___enableHDROnce;

/// @brief Field cameraComparison, offset: 0x48, size: 0x8, def value: None
 ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*  ___cameraComparison;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___m_DebugDisplaySettingsUI) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___m_GlobalSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ____runtimeTextures_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___apvIsEnabled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___pipelineAsset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___enableHDROnce) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___cameraComparison) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c
class CORDL_TYPE UniversalRenderPipeline___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*  __9;

/// @brief Field <>9__47_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__47_0, put=setStaticF___9__47_0)) ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*  __9__47_0;

static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c* New_ctor() ;

/// @brief Method <.cctor>b__123_0, addr 0xb2c6bc0, size 0x2c8, virtual false, abstract: false, final false
inline void __cctor_b__123_0(::ArrayW<::UnityEngine::Light*>  requests, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  lightsOutput) ;

/// @brief Method <.ctor>b__47_0, addr 0xb2c6b58, size 0x68, virtual false, abstract: false, final false
inline int32_t __ctor_b__47_0(::UnityEngine::Camera*  camera1, ::UnityEngine::Camera*  camera2) ;

/// @brief Method .ctor, addr 0xb2c6b50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* getStaticF___9__47_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*  value) ;

static inline void setStaticF___9__47_0(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderPipeline___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalRenderPipeline___c(UniversalRenderPipeline___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalRenderPipeline___c(UniversalRenderPipeline___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18689};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.CubemapFace
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/SingleCameraRequest
class CORDL_TYPE UniversalRenderPipeline_SingleCameraRequest : public ::System::Object {
public:
// Declarations
/// @brief Field destination, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_destination, put=__cordl_internal_set_destination)) ::UnityW<::UnityEngine::RenderTexture>  destination;

/// @brief Field face, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_face, put=__cordl_internal_set_face)) ::UnityEngine::CubemapFace  face;

/// @brief Field mipLevel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_mipLevel, put=__cordl_internal_set_mipLevel)) int32_t  mipLevel;

/// @brief Field slice, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_slice, put=__cordl_internal_set_slice)) int32_t  slice;

static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest* New_ctor() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_destination() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_destination() ;

constexpr ::UnityEngine::CubemapFace const& __cordl_internal_get_face() const;

constexpr ::UnityEngine::CubemapFace& __cordl_internal_get_face() ;

constexpr int32_t const& __cordl_internal_get_mipLevel() const;

constexpr int32_t& __cordl_internal_get_mipLevel() ;

constexpr int32_t const& __cordl_internal_get_slice() const;

constexpr int32_t& __cordl_internal_get_slice() ;

constexpr void __cordl_internal_set_destination(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_face(::UnityEngine::CubemapFace  value) ;

constexpr void __cordl_internal_set_mipLevel(int32_t  value) ;

constexpr void __cordl_internal_set_slice(int32_t  value) ;

/// @brief Method .ctor, addr 0xb2c6ad8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderPipeline_SingleCameraRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_SingleCameraRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalRenderPipeline_SingleCameraRequest(UniversalRenderPipeline_SingleCameraRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_SingleCameraRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalRenderPipeline_SingleCameraRequest(UniversalRenderPipeline_SingleCameraRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18688};

/// @brief Field destination, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___destination;

/// @brief Field mipLevel, offset: 0x18, size: 0x4, def value: None
 int32_t  ___mipLevel;

/// @brief Field face, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::CubemapFace  ___face;

/// @brief Field slice, offset: 0x20, size: 0x4, def value: None
 int32_t  ___slice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest, ___destination) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest, ___mipLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest, ___face) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest, ___slice) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling
class CORDL_TYPE UniversalRenderPipeline_Profiling : public ::System::Object {
public:
// Declarations
using Pipeline = ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderPipeline_Profiling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_Profiling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalRenderPipeline_Profiling(UniversalRenderPipeline_Profiling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_Profiling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalRenderPipeline_Profiling(UniversalRenderPipeline_Profiling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline
class CORDL_TYPE Profiling_UniversalRenderPipeline_Pipeline : public ::System::Object {
public:
// Declarations
using Context = ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context;

using Renderer = ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer;

/// @brief Field buildAdditionalLightsShadowAtlasLayout, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_buildAdditionalLightsShadowAtlasLayout, put=setStaticF_buildAdditionalLightsShadowAtlasLayout)) ::UnityEngine::Rendering::ProfilingSampler*  buildAdditionalLightsShadowAtlasLayout;

/// @brief Field getMainLightIndex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getMainLightIndex, put=setStaticF_getMainLightIndex)) ::UnityEngine::Rendering::ProfilingSampler*  getMainLightIndex;

/// @brief Field getPerObjectLightFlags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getPerObjectLightFlags, put=setStaticF_getPerObjectLightFlags)) ::UnityEngine::Rendering::ProfilingSampler*  getPerObjectLightFlags;

/// @brief Field initializeAdditionalCameraData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initializeAdditionalCameraData, put=setStaticF_initializeAdditionalCameraData)) ::UnityEngine::Rendering::ProfilingSampler*  initializeAdditionalCameraData;

/// @brief Field initializeCameraData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initializeCameraData, put=setStaticF_initializeCameraData)) ::UnityEngine::Rendering::ProfilingSampler*  initializeCameraData;

/// @brief Field initializeLightData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initializeLightData, put=setStaticF_initializeLightData)) ::UnityEngine::Rendering::ProfilingSampler*  initializeLightData;

/// @brief Field initializeRenderingData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initializeRenderingData, put=setStaticF_initializeRenderingData)) ::UnityEngine::Rendering::ProfilingSampler*  initializeRenderingData;

/// @brief Field initializeShadowData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initializeShadowData, put=setStaticF_initializeShadowData)) ::UnityEngine::Rendering::ProfilingSampler*  initializeShadowData;

/// @brief Field initializeStackedCameraData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initializeStackedCameraData, put=setStaticF_initializeStackedCameraData)) ::UnityEngine::Rendering::ProfilingSampler*  initializeStackedCameraData;

/// @brief Field setupPerCameraShaderConstants, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setupPerCameraShaderConstants, put=setStaticF_setupPerCameraShaderConstants)) ::UnityEngine::Rendering::ProfilingSampler*  setupPerCameraShaderConstants;

/// @brief Field setupPerFrameShaderConstants, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setupPerFrameShaderConstants, put=setStaticF_setupPerFrameShaderConstants)) ::UnityEngine::Rendering::ProfilingSampler*  setupPerFrameShaderConstants;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_buildAdditionalLightsShadowAtlasLayout() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_getMainLightIndex() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_getPerObjectLightFlags() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeAdditionalCameraData() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeCameraData() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeLightData() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeRenderingData() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeShadowData() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeStackedCameraData() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupPerCameraShaderConstants() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupPerFrameShaderConstants() ;

static inline void setStaticF_buildAdditionalLightsShadowAtlasLayout(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_getMainLightIndex(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_getPerObjectLightFlags(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_initializeAdditionalCameraData(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_initializeCameraData(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_initializeLightData(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_initializeRenderingData(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_initializeShadowData(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_initializeStackedCameraData(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setupPerCameraShaderConstants(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setupPerFrameShaderConstants(::UnityEngine::Rendering::ProfilingSampler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Profiling_UniversalRenderPipeline_Pipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Profiling_UniversalRenderPipeline_Pipeline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Profiling_UniversalRenderPipeline_Pipeline(Profiling_UniversalRenderPipeline_Pipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Profiling_UniversalRenderPipeline_Pipeline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Profiling_UniversalRenderPipeline_Pipeline(Profiling_UniversalRenderPipeline_Pipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18684};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"UniversalRenderPipeline"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Context
class CORDL_TYPE Pipeline_Profiling_UniversalRenderPipeline_Context : public ::System::Object {
public:
// Declarations
/// @brief Field submit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_submit, put=setStaticF_submit)) ::UnityEngine::Rendering::ProfilingSampler*  submit;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_submit() ;

static inline void setStaticF_submit(::UnityEngine::Rendering::ProfilingSampler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pipeline_Profiling_UniversalRenderPipeline_Context() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pipeline_Profiling_UniversalRenderPipeline_Context", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Pipeline_Profiling_UniversalRenderPipeline_Context(Pipeline_Profiling_UniversalRenderPipeline_Context && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pipeline_Profiling_UniversalRenderPipeline_Context", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pipeline_Profiling_UniversalRenderPipeline_Context(Pipeline_Profiling_UniversalRenderPipeline_Context const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18683};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"ScriptableRenderContext"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Renderer
class CORDL_TYPE Pipeline_Profiling_UniversalRenderPipeline_Renderer : public ::System::Object {
public:
// Declarations
/// @brief Field setup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setup, put=setStaticF_setup)) ::UnityEngine::Rendering::ProfilingSampler*  setup;

/// @brief Field setupCullingParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setupCullingParameters, put=setStaticF_setupCullingParameters)) ::UnityEngine::Rendering::ProfilingSampler*  setupCullingParameters;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setup() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupCullingParameters() ;

static inline void setStaticF_setup(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setupCullingParameters(::UnityEngine::Rendering::ProfilingSampler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pipeline_Profiling_UniversalRenderPipeline_Renderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pipeline_Profiling_UniversalRenderPipeline_Renderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Pipeline_Profiling_UniversalRenderPipeline_Renderer(Pipeline_Profiling_UniversalRenderPipeline_Renderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pipeline_Profiling_UniversalRenderPipeline_Renderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pipeline_Profiling_UniversalRenderPipeline_Renderer(Pipeline_Profiling_UniversalRenderPipeline_Renderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18682};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"ScriptableRenderer"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/CameraMetadataCache
class CORDL_TYPE UniversalRenderPipeline_CameraMetadataCache : public ::System::Object {
public:
// Declarations
using CameraMetadataCacheEntry = ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry;

/// @brief Field k_NoAllocEntry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_NoAllocEntry, put=setStaticF_k_NoAllocEntry)) ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*  k_NoAllocEntry;

/// @brief Field s_MetadataCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MetadataCache, put=setStaticF_s_MetadataCache)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>*  s_MetadataCache;

/// @brief Method GetCached, addr 0xb2c16ac, size 0x1c0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry* GetCached(::UnityEngine::Camera*  camera) ;

static inline ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry* getStaticF_k_NoAllocEntry() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>* getStaticF_s_MetadataCache() ;

static inline void setStaticF_k_NoAllocEntry(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*  value) ;

static inline void setStaticF_s_MetadataCache(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderPipeline_CameraMetadataCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_CameraMetadataCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalRenderPipeline_CameraMetadataCache(UniversalRenderPipeline_CameraMetadataCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_CameraMetadataCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalRenderPipeline_CameraMetadataCache(UniversalRenderPipeline_CameraMetadataCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18681};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/CameraMetadataCache/CameraMetadataCacheEntry
class CORDL_TYPE CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field sampler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sampler, put=__cordl_internal_set_sampler)) ::UnityEngine::Rendering::ProfilingSampler*  sampler;

static inline ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_sampler() const;

constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_sampler() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler*  value) ;

/// @brief Method .ctor, addr 0xb2c6168, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry(CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry(CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18680};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field sampler, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::ProfilingSampler*  ___sampler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry, ___sampler) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
