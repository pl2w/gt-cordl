#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPasses_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_Event_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_MaskSize_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderer)
namespace GlobalNamespace {
struct UniversalRenderer_ClearCameraParams;
}
namespace GlobalNamespace {
struct UniversalRenderer_ColorCopySchedule;
}
namespace GlobalNamespace {
struct UniversalRenderer_DepthCopySchedule;
}
namespace GlobalNamespace {
struct UniversalRenderer_OccluderPass;
}
namespace GlobalNamespace {
struct UniversalRenderer_RenderPassInputSummary;
}
namespace GlobalNamespace {
struct UniversalRenderer_TextureCopySchedules;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template<typename PassData,typename ContextType>
class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyColorPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthNormalOnlyPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthOnlyPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsWithRenderingLayersPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class GBufferPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class MainLightShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class RenderTargetBufferSystem;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class CapturePass;
}
namespace UnityEngine::Rendering::Universal {
struct DepthPrimingMode;
}
namespace UnityEngine::Rendering::Universal {
class DrawScreenSpaceUIPass;
}
namespace UnityEngine::Rendering::Universal {
class DrawSkyboxPass;
}
namespace UnityEngine::Rendering::Universal {
class InvokeOnRenderObjectCallbackPass;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine::Rendering::Universal {
class MotionVectorRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class StencilCrossFadeRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class TransparentSettingsPass;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRendererData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer_CopyToDebugTexturePassData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer_Profiling;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering::Universal {
class XRDepthMotionPass;
}
namespace UnityEngine::Rendering::Universal {
class XROcclusionMeshPass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct OcclusionTest;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct TextureWrapMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer_CopyToDebugTexturePassData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer_Profiling;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderer*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderer___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer*, "UnityEngine.Rendering.Universal", "UniversalRenderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*, "UnityEngine.Rendering.Universal", "UniversalRenderer/CopyToDebugTexturePassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling*, "UnityEngine.Rendering.Universal", "UniversalRenderer/Profiling");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer___c*, "UnityEngine.Rendering.Universal", "UniversalRenderer/<>c");
// Dependencies UnityEngine.LayerMask, UnityEngine.Rendering.RTHandle, UnityEngine.Rendering.StencilState, UnityEngine.Rendering.Universal.CopyDepthMode, UnityEngine.Rendering.Universal.DepthFormat, UnityEngine.Rendering.Universal.DepthPrimingMode, UnityEngine.Rendering.Universal.IntermediateTextureMode, UnityEngine.Rendering.Universal.PostProcessPasses, UnityEngine.Rendering.Universal.RenderingLayerUtils::Event, UnityEngine.Rendering.Universal.RenderingLayerUtils::MaskSize, UnityEngine.Rendering.Universal.RenderingMode, UnityEngine.Rendering.Universal.ScriptableRenderer
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer
class CORDL_TYPE UniversalRenderer : public ::UnityEngine::Rendering::Universal::ScriptableRenderer {
public:
// Declarations
using ClearCameraParams = ::GlobalNamespace::UniversalRenderer_ClearCameraParams;

using ColorCopySchedule = ::GlobalNamespace::UniversalRenderer_ColorCopySchedule;

using DepthCopySchedule = ::GlobalNamespace::UniversalRenderer_DepthCopySchedule;

using OccluderPass = ::GlobalNamespace::UniversalRenderer_OccluderPass;

using RenderPassInputSummary = ::GlobalNamespace::UniversalRenderer_RenderPassInputSummary;

using TextureCopySchedules = ::GlobalNamespace::UniversalRenderer_TextureCopySchedules;

using CopyToDebugTexturePassData = ::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData;

using Profiling = ::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling;

using __c = ::UnityEngine::Rendering::Universal::UniversalRenderer___c;

/// @brief Field <opaqueLayerMask>k__BackingField, offset 0x354, size 0x4 
 __declspec(property(get=__cordl_internal_get__opaqueLayerMask_k__BackingField, put=__cordl_internal_set__opaqueLayerMask_k__BackingField)) ::UnityEngine::LayerMask  _opaqueLayerMask_k__BackingField;

/// @brief Field <prepassLayerMask>k__BackingField, offset 0x350, size 0x4 
 __declspec(property(get=__cordl_internal_get__prepassLayerMask_k__BackingField, put=__cordl_internal_set__prepassLayerMask_k__BackingField)) ::UnityEngine::LayerMask  _prepassLayerMask_k__BackingField;

/// @brief Field <shadowTransparentReceive>k__BackingField, offset 0x35c, size 0x1 
 __declspec(property(get=__cordl_internal_get__shadowTransparentReceive_k__BackingField, put=__cordl_internal_set__shadowTransparentReceive_k__BackingField)) bool  _shadowTransparentReceive_k__BackingField;

/// @brief Field <transparentLayerMask>k__BackingField, offset 0x358, size 0x4 
 __declspec(property(get=__cordl_internal_get__transparentLayerMask_k__BackingField, put=__cordl_internal_set__transparentLayerMask_k__BackingField)) ::UnityEngine::LayerMask  _transparentLayerMask_k__BackingField;

 __declspec(property(get=get_accurateGbufferNormals)) bool  accurateGbufferNormals;

 __declspec(property(get=get_cameraDepthAttachmentFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  cameraDepthAttachmentFormat;

 __declspec(property(get=get_cameraDepthTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  cameraDepthTextureFormat;

 __declspec(property(get=get_colorGradingLut)) ::UnityEngine::Rendering::RTHandle*  colorGradingLut;

 __declspec(property(get=get_colorGradingLutPass)) ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*  colorGradingLutPass;

 __declspec(property(get=get_currentRenderGraphCameraColorHandle)) ::UnityEngine::Rendering::RTHandle*  currentRenderGraphCameraColorHandle;

 __declspec(property(get=get_deferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights*  deferredLights;

 __declspec(property(get=get_deferredModeUnsupported)) bool  deferredModeUnsupported;

 __declspec(property(get=get_depthPrimingMode, put=set_depthPrimingMode)) ::UnityEngine::Rendering::Universal::DepthPrimingMode  depthPrimingMode;

 __declspec(property(get=get_finalPostProcessPass)) ::UnityEngine::Rendering::Universal::PostProcessPass*  finalPostProcessPass;

/// @brief Field k_DepthNormalsOnly, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_DepthNormalsOnly, put=setStaticF_k_DepthNormalsOnly)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*  k_DepthNormalsOnly;

/// @brief Field m_ActiveCameraColorAttachment, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveCameraColorAttachment, put=__cordl_internal_set_m_ActiveCameraColorAttachment)) ::UnityEngine::Rendering::RTHandle*  m_ActiveCameraColorAttachment;

/// @brief Field m_ActiveCameraDepthAttachment, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveCameraDepthAttachment, put=__cordl_internal_set_m_ActiveCameraDepthAttachment)) ::UnityEngine::Rendering::RTHandle*  m_ActiveCameraDepthAttachment;

/// @brief Field m_AdditionalLightsShadowCasterPass, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdditionalLightsShadowCasterPass, put=__cordl_internal_set_m_AdditionalLightsShadowCasterPass)) ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*  m_AdditionalLightsShadowCasterPass;

/// @brief Field m_BlitHDRMaterial, offset 0x2e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlitHDRMaterial, put=__cordl_internal_set_m_BlitHDRMaterial)) ::UnityW<::UnityEngine::Material>  m_BlitHDRMaterial;

/// @brief Field m_BlitMaterial, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlitMaterial, put=__cordl_internal_set_m_BlitMaterial)) ::UnityW<::UnityEngine::Material>  m_BlitMaterial;

/// @brief Field m_CameraDepthAttachment, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraDepthAttachment, put=__cordl_internal_set_m_CameraDepthAttachment)) ::UnityEngine::Rendering::RTHandle*  m_CameraDepthAttachment;

/// @brief Field m_CameraDepthAttachmentFormat, offset 0x2b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CameraDepthAttachmentFormat, put=__cordl_internal_set_m_CameraDepthAttachmentFormat)) ::UnityEngine::Rendering::Universal::DepthFormat  m_CameraDepthAttachmentFormat;

/// @brief Field m_CameraDepthAttachment_D3d_11, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraDepthAttachment_D3d_11, put=__cordl_internal_set_m_CameraDepthAttachment_D3d_11)) ::UnityEngine::Rendering::RTHandle*  m_CameraDepthAttachment_D3d_11;

/// @brief Field m_CameraDepthTextureFormat, offset 0x2b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CameraDepthTextureFormat, put=__cordl_internal_set_m_CameraDepthTextureFormat)) ::UnityEngine::Rendering::Universal::DepthFormat  m_CameraDepthTextureFormat;

/// @brief Field m_CameraMotionVecMaterial, offset 0x308, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraMotionVecMaterial, put=__cordl_internal_set_m_CameraMotionVecMaterial)) ::UnityW<::UnityEngine::Material>  m_CameraMotionVecMaterial;

/// @brief Field m_CapturePass, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CapturePass, put=__cordl_internal_set_m_CapturePass)) ::UnityEngine::Rendering::Universal::CapturePass*  m_CapturePass;

/// @brief Field m_ClusterDeferredMaterial, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClusterDeferredMaterial, put=__cordl_internal_set_m_ClusterDeferredMaterial)) ::UnityW<::UnityEngine::Material>  m_ClusterDeferredMaterial;

/// @brief Field m_ColorBufferSystem, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ColorBufferSystem, put=__cordl_internal_set_m_ColorBufferSystem)) ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*  m_ColorBufferSystem;

/// @brief Field m_ColorFrontBuffer, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ColorFrontBuffer, put=__cordl_internal_set_m_ColorFrontBuffer)) ::UnityEngine::Rendering::RTHandle*  m_ColorFrontBuffer;

/// @brief Field m_CopyColorPass, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CopyColorPass, put=__cordl_internal_set_m_CopyColorPass)) ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*  m_CopyColorPass;

/// @brief Field m_CopyDepthMode, offset 0x2b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CopyDepthMode, put=__cordl_internal_set_m_CopyDepthMode)) ::UnityEngine::Rendering::Universal::CopyDepthMode  m_CopyDepthMode;

/// @brief Field m_CopyDepthPass, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CopyDepthPass, put=__cordl_internal_set_m_CopyDepthPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  m_CopyDepthPass;

/// @brief Field m_CurrentColorHandle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_CurrentColorHandle, put=setStaticF_m_CurrentColorHandle)) int32_t  m_CurrentColorHandle;

/// @brief Field m_DebugBlitMaterial, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugBlitMaterial, put=__cordl_internal_set_m_DebugBlitMaterial)) ::UnityW<::UnityEngine::Material>  m_DebugBlitMaterial;

/// @brief Field m_DecalLayersTexture, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DecalLayersTexture, put=__cordl_internal_set_m_DecalLayersTexture)) ::UnityEngine::Rendering::RTHandle*  m_DecalLayersTexture;

/// @brief Field m_DefaultStencilState, offset 0x2bd, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_DefaultStencilState, put=__cordl_internal_set_m_DefaultStencilState)) ::UnityEngine::Rendering::StencilState  m_DefaultStencilState;

/// @brief Field m_DeferredLights, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeferredLights, put=__cordl_internal_set_m_DeferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights*  m_DeferredLights;

/// @brief Field m_DeferredPass, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeferredPass, put=__cordl_internal_set_m_DeferredPass)) ::UnityEngine::Rendering::Universal::Internal::DeferredPass*  m_DeferredPass;

/// @brief Field m_DepthNormalPrepass, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DepthNormalPrepass, put=__cordl_internal_set_m_DepthNormalPrepass)) ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*  m_DepthNormalPrepass;

/// @brief Field m_DepthPrepass, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DepthPrepass, put=__cordl_internal_set_m_DepthPrepass)) ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*  m_DepthPrepass;

/// @brief Field m_DepthPrimingMode, offset 0x2ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DepthPrimingMode, put=__cordl_internal_set_m_DepthPrimingMode)) ::UnityEngine::Rendering::Universal::DepthPrimingMode  m_DepthPrimingMode;

/// @brief Field m_DepthPrimingRecommended, offset 0x2bc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DepthPrimingRecommended, put=__cordl_internal_set_m_DepthPrimingRecommended)) bool  m_DepthPrimingRecommended;

/// @brief Field m_DepthTexture, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DepthTexture, put=__cordl_internal_set_m_DepthTexture)) ::UnityEngine::Rendering::RTHandle*  m_DepthTexture;

/// @brief Field m_DrawOffscreenUIPass, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DrawOffscreenUIPass, put=__cordl_internal_set_m_DrawOffscreenUIPass)) ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*  m_DrawOffscreenUIPass;

/// @brief Field m_DrawOverlayUIPass, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DrawOverlayUIPass, put=__cordl_internal_set_m_DrawOverlayUIPass)) ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*  m_DrawOverlayUIPass;

/// @brief Field m_DrawSkyboxPass, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DrawSkyboxPass, put=__cordl_internal_set_m_DrawSkyboxPass)) ::UnityEngine::Rendering::Universal::DrawSkyboxPass*  m_DrawSkyboxPass;

/// @brief Field m_FinalBlitPass, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FinalBlitPass, put=__cordl_internal_set_m_FinalBlitPass)) ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*  m_FinalBlitPass;

/// @brief Field m_ForwardLights, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ForwardLights, put=__cordl_internal_set_m_ForwardLights)) ::UnityEngine::Rendering::Universal::Internal::ForwardLights*  m_ForwardLights;

/// @brief Field m_GBufferCopyDepthPass, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GBufferCopyDepthPass, put=__cordl_internal_set_m_GBufferCopyDepthPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  m_GBufferCopyDepthPass;

/// @brief Field m_GBufferPass, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GBufferPass, put=__cordl_internal_set_m_GBufferPass)) ::UnityEngine::Rendering::Universal::Internal::GBufferPass*  m_GBufferPass;

/// @brief Field m_HistoryRawColorCopyPass, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HistoryRawColorCopyPass, put=__cordl_internal_set_m_HistoryRawColorCopyPass)) ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*  m_HistoryRawColorCopyPass;

/// @brief Field m_HistoryRawDepthCopyPass, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HistoryRawDepthCopyPass, put=__cordl_internal_set_m_HistoryRawDepthCopyPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  m_HistoryRawDepthCopyPass;

/// @brief Field m_IntermediateTextureMode, offset 0x2d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_IntermediateTextureMode, put=__cordl_internal_set_m_IntermediateTextureMode)) ::UnityEngine::Rendering::Universal::IntermediateTextureMode  m_IntermediateTextureMode;

/// @brief Field m_IssuedGPUOcclusionUnsupportedMsg, offset 0x380, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IssuedGPUOcclusionUnsupportedMsg, put=__cordl_internal_set_m_IssuedGPUOcclusionUnsupportedMsg)) bool  m_IssuedGPUOcclusionUnsupportedMsg;

/// @brief Field m_LightCookieManager, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LightCookieManager, put=__cordl_internal_set_m_LightCookieManager)) ::UnityEngine::Rendering::Universal::LightCookieManager*  m_LightCookieManager;

/// @brief Field m_MainLightShadowCasterPass, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MainLightShadowCasterPass, put=__cordl_internal_set_m_MainLightShadowCasterPass)) ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*  m_MainLightShadowCasterPass;

/// @brief Field m_MotionVectorColor, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MotionVectorColor, put=__cordl_internal_set_m_MotionVectorColor)) ::UnityEngine::Rendering::RTHandle*  m_MotionVectorColor;

/// @brief Field m_MotionVectorDepth, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MotionVectorDepth, put=__cordl_internal_set_m_MotionVectorDepth)) ::UnityEngine::Rendering::RTHandle*  m_MotionVectorDepth;

/// @brief Field m_MotionVectorPass, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MotionVectorPass, put=__cordl_internal_set_m_MotionVectorPass)) ::UnityEngine::Rendering::Universal::MotionVectorRenderPass*  m_MotionVectorPass;

/// @brief Field m_NormalsTexture, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NormalsTexture, put=__cordl_internal_set_m_NormalsTexture)) ::UnityEngine::Rendering::RTHandle*  m_NormalsTexture;

/// @brief Field m_OnRenderObjectCallbackPass, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnRenderObjectCallbackPass, put=__cordl_internal_set_m_OnRenderObjectCallbackPass)) ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*  m_OnRenderObjectCallbackPass;

/// @brief Field m_OpaqueColor, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OpaqueColor, put=__cordl_internal_set_m_OpaqueColor)) ::UnityEngine::Rendering::RTHandle*  m_OpaqueColor;

/// @brief Field m_PostProcessPasses, offset 0x310, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_PostProcessPasses, put=__cordl_internal_set_m_PostProcessPasses)) ::UnityEngine::Rendering::Universal::PostProcessPasses  m_PostProcessPasses;

/// @brief Field m_PrimedDepthCopyPass, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrimedDepthCopyPass, put=__cordl_internal_set_m_PrimedDepthCopyPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  m_PrimedDepthCopyPass;

/// @brief Field m_RenderGraphCameraColorHandles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_RenderGraphCameraColorHandles, put=setStaticF_m_RenderGraphCameraColorHandles)) ::ArrayW<::UnityEngine::Rendering::RTHandle*>  m_RenderGraphCameraColorHandles;

/// @brief Field m_RenderGraphCameraDepthHandle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_RenderGraphCameraDepthHandle, put=setStaticF_m_RenderGraphCameraDepthHandle)) ::UnityEngine::Rendering::RTHandle*  m_RenderGraphCameraDepthHandle;

/// @brief Field m_RenderGraphDebugTextureHandle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_RenderGraphDebugTextureHandle, put=setStaticF_m_RenderGraphDebugTextureHandle)) ::UnityEngine::Rendering::RTHandle*  m_RenderGraphDebugTextureHandle;

/// @brief Field m_RenderOpaqueForwardOnlyPass, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderOpaqueForwardOnlyPass, put=__cordl_internal_set_m_RenderOpaqueForwardOnlyPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*  m_RenderOpaqueForwardOnlyPass;

/// @brief Field m_RenderOpaqueForwardPass, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderOpaqueForwardPass, put=__cordl_internal_set_m_RenderOpaqueForwardPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*  m_RenderOpaqueForwardPass;

/// @brief Field m_RenderOpaqueForwardWithRenderingLayersPass, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderOpaqueForwardWithRenderingLayersPass, put=__cordl_internal_set_m_RenderOpaqueForwardWithRenderingLayersPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*  m_RenderOpaqueForwardWithRenderingLayersPass;

/// @brief Field m_RenderTransparentForwardPass, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderTransparentForwardPass, put=__cordl_internal_set_m_RenderTransparentForwardPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*  m_RenderTransparentForwardPass;

/// @brief Field m_RenderingLayerProvidesByDepthNormalPass, offset 0x375, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RenderingLayerProvidesByDepthNormalPass, put=__cordl_internal_set_m_RenderingLayerProvidesByDepthNormalPass)) bool  m_RenderingLayerProvidesByDepthNormalPass;

/// @brief Field m_RenderingLayerProvidesRenderObjectPass, offset 0x374, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RenderingLayerProvidesRenderObjectPass, put=__cordl_internal_set_m_RenderingLayerProvidesRenderObjectPass)) bool  m_RenderingLayerProvidesRenderObjectPass;

/// @brief Field m_RenderingLayersEvent, offset 0x36c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RenderingLayersEvent, put=__cordl_internal_set_m_RenderingLayersEvent)) ::GlobalNamespace::RenderingLayerUtils_Event  m_RenderingLayersEvent;

/// @brief Field m_RenderingLayersMaskSize, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RenderingLayersMaskSize, put=__cordl_internal_set_m_RenderingLayersMaskSize)) ::GlobalNamespace::RenderingLayerUtils_MaskSize  m_RenderingLayersMaskSize;

/// @brief Field m_RenderingLayersTextureName, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderingLayersTextureName, put=__cordl_internal_set_m_RenderingLayersTextureName)) ::StringW  m_RenderingLayersTextureName;

/// @brief Field m_RenderingMode, offset 0x2a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RenderingMode, put=__cordl_internal_set_m_RenderingMode)) ::UnityEngine::Rendering::Universal::RenderingMode  m_RenderingMode;

/// @brief Field m_RequiresIntermediateAttachments, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_RequiresIntermediateAttachments, put=setStaticF_m_RequiresIntermediateAttachments)) bool  m_RequiresIntermediateAttachments;

/// @brief Field m_RequiresRenderingLayer, offset 0x368, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RequiresRenderingLayer, put=__cordl_internal_set_m_RequiresRenderingLayer)) bool  m_RequiresRenderingLayer;

/// @brief Field m_SamplingMaterial, offset 0x2f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SamplingMaterial, put=__cordl_internal_set_m_SamplingMaterial)) ::UnityW<::UnityEngine::Material>  m_SamplingMaterial;

/// @brief Field m_StencilCrossFadeRenderPass, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StencilCrossFadeRenderPass, put=__cordl_internal_set_m_StencilCrossFadeRenderPass)) ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*  m_StencilCrossFadeRenderPass;

/// @brief Field m_StencilDeferredMaterial, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StencilDeferredMaterial, put=__cordl_internal_set_m_StencilDeferredMaterial)) ::UnityW<::UnityEngine::Material>  m_StencilDeferredMaterial;

/// @brief Field m_TargetColorHandle, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetColorHandle, put=__cordl_internal_set_m_TargetColorHandle)) ::UnityEngine::Rendering::RTHandle*  m_TargetColorHandle;

/// @brief Field m_TargetDepthHandle, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetDepthHandle, put=__cordl_internal_set_m_TargetDepthHandle)) ::UnityEngine::Rendering::RTHandle*  m_TargetDepthHandle;

/// @brief Field m_TransparentSettingsPass, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransparentSettingsPass, put=__cordl_internal_set_m_TransparentSettingsPass)) ::UnityEngine::Rendering::Universal::TransparentSettingsPass*  m_TransparentSettingsPass;

/// @brief Field m_VulkanEnablePreTransform, offset 0x2dc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_VulkanEnablePreTransform, put=__cordl_internal_set_m_VulkanEnablePreTransform)) bool  m_VulkanEnablePreTransform;

/// @brief Field m_XRCopyDepthPass, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XRCopyDepthPass, put=__cordl_internal_set_m_XRCopyDepthPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  m_XRCopyDepthPass;

/// @brief Field m_XRDepthMotionPass, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XRDepthMotionPass, put=__cordl_internal_set_m_XRDepthMotionPass)) ::UnityEngine::Rendering::Universal::XRDepthMotionPass*  m_XRDepthMotionPass;

/// @brief Field m_XROcclusionMeshPass, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XROcclusionMeshPass, put=__cordl_internal_set_m_XROcclusionMeshPass)) ::UnityEngine::Rendering::Universal::XROcclusionMeshPass*  m_XROcclusionMeshPass;

 __declspec(property(get=get_nextRenderGraphCameraColorHandle)) ::UnityEngine::Rendering::RTHandle*  nextRenderGraphCameraColorHandle;

 __declspec(property(get=get_opaqueLayerMask, put=set_opaqueLayerMask)) ::UnityEngine::LayerMask  opaqueLayerMask;

 __declspec(property(get=get_postProcessPass)) ::UnityEngine::Rendering::Universal::PostProcessPass*  postProcessPass;

 __declspec(property(get=get_prepassLayerMask, put=set_prepassLayerMask)) ::UnityEngine::LayerMask  prepassLayerMask;

 __declspec(property(get=get_renderingModeActual)) ::UnityEngine::Rendering::Universal::RenderingMode  renderingModeActual;

 __declspec(property(get=get_renderingModeRequested)) ::UnityEngine::Rendering::Universal::RenderingMode  renderingModeRequested;

 __declspec(property(get=get_shadowTransparentReceive, put=set_shadowTransparentReceive)) bool  shadowTransparentReceive;

 __declspec(property(get=get_supportsGPUOcclusion)) bool  supportsGPUOcclusion;

 __declspec(property(get=get_supportsNativeRenderPassRendergraphCompiler)) bool  supportsNativeRenderPassRendergraphCompiler;

 __declspec(property(get=get_transparentLayerMask, put=set_transparentLayerMask)) ::UnityEngine::LayerMask  transparentLayerMask;

 __declspec(property(get=get_usesClusterLightLoop)) bool  usesClusterLightLoop;

 __declspec(property(get=get_usesDeferredLighting)) bool  usesDeferredLighting;

/// @brief Method AllowPartialDepthNormalsPrepass, addr 0xb2b87f8, size 0x18, virtual false, abstract: false, final false
static inline bool AllowPartialDepthNormalsPrepass(bool  isDeferred, ::UnityEngine::Rendering::Universal::RenderPassEvent  requiresDepthNormalEvent, bool  useDepthPriming) ;

/// @brief Method BlitEmptyTexture, addr 0xb2b2918, size 0x3ec, virtual false, abstract: false, final false
inline void BlitEmptyTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::StringW  passName) ;

/// @brief Method BlitToDebugTexture, addr 0xb2b2440, size 0x2c8, virtual false, abstract: false, final false
inline void BlitToDebugTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, bool  isSourceTextureColor) ;

/// @brief Method CalculateDepthCopySchedule, addr 0xb2b8810, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::UniversalRenderer_DepthCopySchedule CalculateDepthCopySchedule(::UnityEngine::Rendering::Universal::RenderPassEvent  earliestDepthReadEvent, bool  hasFullPrepass) ;

/// @brief Method CalculateTextureCopySchedules, addr 0xb2b8868, size 0xb4, virtual false, abstract: false, final false
inline ::GlobalNamespace::UniversalRenderer_TextureCopySchedules CalculateTextureCopySchedules(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniversalRenderer_RenderPassInputSummary>  renderPassInputs, bool  requiresDepthPrepass, bool  hasFullPrepass, bool  requireDepthTexture) ;

/// @brief Method CalculateUVRect, addr 0xb2b1ce8, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Rect CalculateUVRect(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, int32_t  textureHeightPercent) ;

/// @brief Method CalculateUVRect, addr 0xb2b1cb4, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Rect CalculateUVRect(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, float_t  width, float_t  height) ;

/// @brief Method CanCopyDepth, addr 0xb2ad294, size 0xfc, virtual false, abstract: false, final false
static inline bool CanCopyDepth(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method CleanupRenderGraphResources, addr 0xb2aca90, size 0x11c, virtual false, abstract: false, final false
inline void CleanupRenderGraphResources() ;

/// @brief Method CopyDepthToDepthTexture, addr 0xb2b891c, size 0xc0, virtual false, abstract: false, final false
inline void CopyDepthToDepthTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData) ;

/// @brief Method CorrectForTextureAspectRatio, addr 0xb2ad060, size 0x40, virtual false, abstract: false, final false
inline void CorrectForTextureAspectRatio(::by_ref<float_t>  width, ::by_ref<float_t>  height, float_t  sourceWidth, float_t  sourceHeight) ;

/// @brief Method CreateAfterPostProcessTexture, addr 0xb2b4ef0, size 0x1b4, virtual false, abstract: false, final false
inline void CreateAfterPostProcessTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::RenderTextureDescriptor  descriptor) ;

/// @brief Method CreateCameraDepthCopyTexture, addr 0xb2b46c8, size 0x184, virtual false, abstract: false, final false
inline void CreateCameraDepthCopyTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::RenderTextureDescriptor  descriptor, bool  isDepthTexture) ;

/// @brief Method CreateCameraNormalsTexture, addr 0xb2b484c, size 0x23c, virtual false, abstract: false, final false
inline void CreateCameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::RenderTextureDescriptor  descriptor) ;

/// @brief Method CreateCameraRenderTarget, addr 0xb2b05c0, size 0x634, virtual false, abstract: false, final false
inline void CreateCameraRenderTarget(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::RenderTextureDescriptor>  descriptor, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method CreateDebugTexture, addr 0xb2b1bac, size 0x108, virtual false, abstract: false, final false
inline void CreateDebugTexture(::UnityEngine::RenderTextureDescriptor  descriptor) ;

/// @brief Method CreateIntermediateCameraColorAttachment, addr 0xb2b40c4, size 0x338, virtual false, abstract: false, final false
inline void CreateIntermediateCameraColorAttachment(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  clearColor, ::UnityEngine::Color  clearBackgroundColor) ;

/// @brief Method CreateIntermediateCameraDepthAttachment, addr 0xb2b43fc, size 0x2cc, virtual false, abstract: false, final false
inline void CreateIntermediateCameraDepthAttachment(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  clearDepth, ::UnityEngine::Color  clearBackgroundDepth, bool  depthTextureIsDepthFormat) ;

/// @brief Method CreateMotionVectorTextures, addr 0xb2b4a88, size 0x20c, virtual false, abstract: false, final false
inline void CreateMotionVectorTextures(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::RenderTextureDescriptor  descriptor) ;

/// @brief Method CreateRenderGraphCameraRenderTargets, addr 0xb2b3208, size 0x34c, virtual false, abstract: false, final false
inline void CreateRenderGraphCameraRenderTargets(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, bool  isCameraTargetOffscreenDepth, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniversalRenderer_RenderPassInputSummary>  renderPassInputs, bool  requireDepthTexture, bool  requireDepthPrepass) ;

/// @brief Method CreateRenderGraphTexture, addr 0xb2b2fa4, size 0x17c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateRenderGraphTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::RenderTextureDescriptor  desc, ::StringW  name, bool  clear, ::UnityEngine::Color  color, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::TextureWrapMode  wrapMode, bool  discardOnLastUse) ;

/// @brief Method CreateRenderGraphTexture, addr 0xb2b2e3c, size 0x168, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateRenderGraphTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::RenderTextureDescriptor  desc, ::StringW  name, bool  clear, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::TextureWrapMode  wrapMode) ;

/// @brief Method CreateRenderingLayersTexture, addr 0xb2b4c94, size 0x25c, virtual false, abstract: false, final false
inline void CreateRenderingLayersTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::RenderTextureDescriptor  descriptor) ;

/// @brief Method DebugHandlerRequireDepthPass, addr 0xb2b1b3c, size 0x70, virtual false, abstract: false, final false
inline bool DebugHandlerRequireDepthPass(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method DepthNormalPrepassRender, addr 0xb2b8a8c, size 0x204, virtual false, abstract: false, final false
inline void DepthNormalPrepassRender(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::GlobalNamespace::UniversalRenderer_RenderPassInputSummary  renderPassInputs, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  depthTarget, uint32_t  batchLayerMask, bool  setGlobalDepth, bool  setGlobalTextures) ;

/// @brief Method Dispose, addr 0xb2ac880, size 0x210, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EnableSwapBufferMSAA, addr 0xb2b1b18, size 0x1c, virtual true, abstract: false, final false
inline void EnableSwapBufferMSAA(bool  enable) ;

/// @brief Method EnqueueDeferred, addr 0xb2b0bf4, size 0x158, virtual false, abstract: false, final false
inline void EnqueueDeferred(::UnityEngine::RenderTextureDescriptor  cameraTargetDescriptor, bool  hasDepthPrepass, bool  hasNormalPrepass, bool  hasRenderingLayerPrepass, bool  applyMainShadow, bool  applyAdditionalShadow) ;

/// @brief Method ExecuteScheduledDepthCopyWithMotion, addr 0xb2b87a8, size 0x50, virtual false, abstract: false, final false
inline void ExecuteScheduledDepthCopyWithMotion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData, bool  renderMotionVectors) ;

/// @brief Method FinishRendering, addr 0xb2b17dc, size 0x40, virtual true, abstract: false, final false
inline void FinishRendering(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method GetCameraColorBackBuffer, addr 0xb2b1b00, size 0x18, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* GetCameraColorBackBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method GetCameraColorFrontBuffer, addr 0xb2b1ae8, size 0x18, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method GetClearCameraParams, addr 0xb2b3554, size 0x1ec, virtual false, abstract: false, final false
inline ::GlobalNamespace::UniversalRenderer_ClearCameraParams GetClearCameraParams(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method GetRenderPassInputs, addr 0xb2b0138, size 0x280, virtual false, abstract: false, final false
inline ::GlobalNamespace::UniversalRenderer_RenderPassInputSummary GetRenderPassInputs(bool  isTemporalAAEnabled, bool  postProcessingEnabled, bool  isSceneViewCamera, bool  renderingLayerProvidesByDepthNormalPass) ;

/// @brief Method HasActiveRenderFeatures, addr 0xb2ad428, size 0x14c, virtual false, abstract: false, final false
inline bool HasActiveRenderFeatures() ;

/// @brief Method HasPassesRequiringIntermediateTexture, addr 0xb2ad574, size 0x14c, virtual false, abstract: false, final false
inline bool HasPassesRequiringIntermediateTexture() ;

/// @brief Method ImportBackBuffers, addr 0xb2b3af4, size 0x5d0, virtual false, abstract: false, final false
inline void ImportBackBuffers(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Color  clearBackgroundColor, bool  isCameraTargetOffscreenDepth) ;

/// @brief Method InstanceOcclusionTest, addr 0xb2b8534, size 0x1d8, virtual false, abstract: false, final false
inline void InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::OcclusionTest  occlusionTest) ;

/// @brief Method IsDepthPrimingEnabledCompatibilityMode, addr 0xb2ad198, size 0xfc, virtual false, abstract: false, final false
inline bool IsDepthPrimingEnabledCompatibilityMode(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method IsDepthPrimingEnabledRenderGraph, addr 0xb2b5b64, size 0x130, virtual false, abstract: false, final false
static inline bool IsDepthPrimingEnabledRenderGraph(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniversalRenderer_RenderPassInputSummary>  renderPassInputs, ::UnityEngine::Rendering::Universal::DepthPrimingMode  depthPrimingMode, bool  requireDepthTexture, bool  requirePrepassForTextures, bool  usesDeferredLighting) ;

/// @brief Method IsGLDevice, addr 0xb2ad3b4, size 0x74, virtual false, abstract: false, final false
inline bool IsGLDevice() ;

/// @brief Method IsGLESDevice, addr 0xb2ad398, size 0x1c, virtual false, abstract: false, final false
static inline bool IsGLESDevice() ;

/// @brief Method IsOffscreenDepthTexture, addr 0xb2ad108, size 0x90, virtual false, abstract: false, final false
static inline bool IsOffscreenDepthTexture(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method IsOffscreenDepthTexture, addr 0xb2ad0a0, size 0x68, virtual false, abstract: false, final false
static inline bool IsOffscreenDepthTexture(::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData) ;

/// @brief Method IsScalableBufferManagerUsed, addr 0xb2b1890, size 0x78, virtual false, abstract: false, final false
inline bool IsScalableBufferManagerUsed(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method IsWebGL, addr 0xb2ad390, size 0x8, virtual false, abstract: false, final false
static inline bool IsWebGL() ;

static inline ::UnityEngine::Rendering::Universal::UniversalRenderer* New_ctor(::UnityEngine::Rendering::Universal::UniversalRendererData*  data) ;

/// @brief Method OnAfterRendering, addr 0xb2b7340, size 0xccc, virtual false, abstract: false, final false
inline void OnAfterRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, bool  applyPostProcessing) ;

/// @brief Method OnBeforeRendering, addr 0xb2b6064, size 0x2b0, virtual false, abstract: false, final false
inline void OnBeforeRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// @brief Method OnBeginRenderGraphFrame, addr 0xb2b55d0, size 0x5c, virtual true, abstract: false, final false
inline void OnBeginRenderGraphFrame() ;

/// @brief Method OnEndRenderGraphFrame, addr 0xb2b800c, size 0x5c, virtual true, abstract: false, final false
inline void OnEndRenderGraphFrame() ;

/// @brief Method OnFinishRenderGraphRendering, addr 0xb2b8068, size 0x6c, virtual true, abstract: false, final false
inline void OnFinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method OnMainRendering, addr 0xb2b6314, size 0x102c, virtual false, abstract: false, final false
inline void OnMainRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext  context, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniversalRenderer_RenderPassInputSummary>  renderPassInputs, bool  requiresPrepass, bool  requireDepthTexture) ;

/// @brief Method OnOffscreenDepthTextureRendering, addr 0xb2b5c94, size 0x3d0, virtual false, abstract: false, final false
inline void OnOffscreenDepthTextureRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method OnRecordRenderGraph, addr 0xb2b562c, size 0x424, virtual true, abstract: false, final false
inline void OnRecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext  context) ;

/// @brief Method PlatformRequiresExplicitMsaaResolve, addr 0xb2b181c, size 0x74, virtual false, abstract: false, final false
static inline bool PlatformRequiresExplicitMsaaResolve() ;

/// @brief Method RecordCustomPassesWithDepthCopyAndMotion, addr 0xb2b870c, size 0x9c, virtual false, abstract: false, final false
inline void RecordCustomPassesWithDepthCopyAndMotion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData, ::UnityEngine::Rendering::Universal::RenderPassEvent  earliestDepthReadEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent  currentEvent, bool  renderMotionVectors) ;

/// @brief Method ReleaseRenderTargets, addr 0xb2acbac, size 0xf8, virtual true, abstract: false, final false
inline void ReleaseRenderTargets() ;

/// @brief Method RenderMotionVectors, addr 0xb2b89dc, size 0xb0, virtual false, abstract: false, final false
inline void RenderMotionVectors(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData) ;

/// @brief Method RenderRawColorDepthHistory, addr 0xb2b51a4, size 0x42c, virtual false, abstract: false, final false
inline void RenderRawColorDepthHistory(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData) ;

/// @brief Method RequireDepthTexture, addr 0xb2b5a50, size 0x40, virtual false, abstract: false, final false
static inline bool RequireDepthTexture(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniversalRenderer_RenderPassInputSummary>  renderPassInputs, bool  applyPostProcessing) ;

/// @brief Method RequirePrepassForTextures, addr 0xb2b5a90, size 0xd4, virtual false, abstract: false, final false
inline bool RequirePrepassForTextures(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniversalRenderer_RenderPassInputSummary>  renderPassInputs, bool  requireDepthTexture) ;

/// @brief Method RequiresIntermediateAttachments, addr 0xb2b3120, size 0xe8, virtual false, abstract: false, final false
inline bool RequiresIntermediateAttachments(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniversalRenderer_RenderPassInputSummary>  renderPassInputs, bool  requireCopyFromDepth) ;

/// @brief Method RequiresIntermediateColorTexture, addr 0xb2b03b8, size 0x208, virtual false, abstract: false, final false
inline bool RequiresIntermediateColorTexture(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniversalRenderer_RenderPassInputSummary>  renderPassInputs) ;

/// @brief Method SetRenderingLayersGlobalTextures, addr 0xb2b8c90, size 0x1f8, virtual false, abstract: false, final false
inline void SetRenderingLayersGlobalTextures(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method Setup, addr 0xb2ad6c0, size 0x29bc, virtual true, abstract: false, final false
inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method SetupAfterPostRenderGraphFinalPassDebug, addr 0xb2b2708, size 0x210, virtual false, abstract: false, final false
inline void SetupAfterPostRenderGraphFinalPassDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method SetupCullingParameters, addr 0xb2b14ac, size 0x330, virtual true, abstract: false, final false
inline void SetupCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData) ;

/// @brief Method SetupFinalPassDebug, addr 0xb2acca4, size 0x3bc, virtual false, abstract: false, final false
inline void SetupFinalPassDebug(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method SetupLights, addr 0xb2b12d8, size 0x1d4, virtual true, abstract: false, final false
inline void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method SetupRawColorDepthHistory, addr 0xb2b0fa4, size 0x334, virtual false, abstract: false, final false
inline void SetupRawColorDepthHistory(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::by_ref<::UnityEngine::RenderTextureDescriptor>  cameraTargetDescriptor) ;

/// @brief Method SetupRenderGraphFinalPassDebug, addr 0xb2b1d40, size 0x700, virtual false, abstract: false, final false
inline void SetupRenderGraphFinalPassDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method SetupRenderGraphLights, addr 0xb2b5124, size 0x80, virtual false, abstract: false, final false
inline void SetupRenderGraphLights(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalRenderingData*  renderingData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData) ;

/// @brief Method SetupRenderingLayers, addr 0xb2b50a4, size 0x80, virtual false, abstract: false, final false
inline void SetupRenderingLayers(int32_t  msaaSamples) ;

/// @brief Method SetupTargetHandles, addr 0xb2b3740, size 0x3b4, virtual false, abstract: false, final false
inline void SetupTargetHandles(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method SetupVFXCameraBuffer, addr 0xb2b0d4c, size 0x258, virtual false, abstract: false, final false
inline void SetupVFXCameraBuffer(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method SupportedCameraStackingTypes, addr 0xb2ab0f8, size 0x24, virtual true, abstract: false, final false
inline int32_t SupportedCameraStackingTypes() ;

/// @brief Method SupportsCameraNormals, addr 0xb2ab12c, size 0x8, virtual true, abstract: false, final false
inline bool SupportsCameraNormals() ;

/// @brief Method SupportsCameraOpaque, addr 0xb2ab124, size 0x8, virtual true, abstract: false, final false
inline bool SupportsCameraOpaque() ;

/// @brief Method SupportsMotionVectors, addr 0xb2ab11c, size 0x8, virtual true, abstract: false, final false
inline bool SupportsMotionVectors() ;

/// @brief Method SwapColorBuffer, addr 0xb2b1908, size 0x1e0, virtual true, abstract: false, final false
inline void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method UpdateCameraHistory, addr 0xb2b007c, size 0xbc, virtual false, abstract: false, final false
inline void UpdateCameraHistory(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method UpdateInstanceOccluders, addr 0xb2b8174, size 0x3c0, virtual false, abstract: false, final false
inline void UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  depthTexture) ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__opaqueLayerMask_k__BackingField() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__opaqueLayerMask_k__BackingField() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__prepassLayerMask_k__BackingField() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__prepassLayerMask_k__BackingField() ;

constexpr bool const& __cordl_internal_get__shadowTransparentReceive_k__BackingField() const;

constexpr bool& __cordl_internal_get__shadowTransparentReceive_k__BackingField() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__transparentLayerMask_k__BackingField() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__transparentLayerMask_k__BackingField() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_ActiveCameraColorAttachment() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_ActiveCameraColorAttachment() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_ActiveCameraDepthAttachment() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_ActiveCameraDepthAttachment() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* const& __cordl_internal_get_m_AdditionalLightsShadowCasterPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*& __cordl_internal_get_m_AdditionalLightsShadowCasterPass() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitHDRMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitHDRMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraDepthAttachment() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraDepthAttachment() ;

constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& __cordl_internal_get_m_CameraDepthAttachmentFormat() const;

constexpr ::UnityEngine::Rendering::Universal::DepthFormat& __cordl_internal_get_m_CameraDepthAttachmentFormat() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraDepthAttachment_D3d_11() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraDepthAttachment_D3d_11() ;

constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& __cordl_internal_get_m_CameraDepthTextureFormat() const;

constexpr ::UnityEngine::Rendering::Universal::DepthFormat& __cordl_internal_get_m_CameraDepthTextureFormat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CameraMotionVecMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CameraMotionVecMaterial() ;

constexpr ::UnityEngine::Rendering::Universal::CapturePass* const& __cordl_internal_get_m_CapturePass() const;

constexpr ::UnityEngine::Rendering::Universal::CapturePass*& __cordl_internal_get_m_CapturePass() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ClusterDeferredMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ClusterDeferredMaterial() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* const& __cordl_internal_get_m_ColorBufferSystem() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*& __cordl_internal_get_m_ColorBufferSystem() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_ColorFrontBuffer() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_ColorFrontBuffer() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* const& __cordl_internal_get_m_CopyColorPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& __cordl_internal_get_m_CopyColorPass() ;

constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode const& __cordl_internal_get_m_CopyDepthMode() const;

constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode& __cordl_internal_get_m_CopyDepthMode() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_CopyDepthPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_CopyDepthPass() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DebugBlitMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DebugBlitMaterial() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DecalLayersTexture() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DecalLayersTexture() ;

constexpr ::UnityEngine::Rendering::StencilState const& __cordl_internal_get_m_DefaultStencilState() const;

constexpr ::UnityEngine::Rendering::StencilState& __cordl_internal_get_m_DefaultStencilState() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& __cordl_internal_get_m_DeferredLights() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_m_DeferredLights() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredPass* const& __cordl_internal_get_m_DeferredPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredPass*& __cordl_internal_get_m_DeferredPass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* const& __cordl_internal_get_m_DepthNormalPrepass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*& __cordl_internal_get_m_DepthNormalPrepass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* const& __cordl_internal_get_m_DepthPrepass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*& __cordl_internal_get_m_DepthPrepass() ;

constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& __cordl_internal_get_m_DepthPrimingMode() const;

constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& __cordl_internal_get_m_DepthPrimingMode() ;

constexpr bool const& __cordl_internal_get_m_DepthPrimingRecommended() const;

constexpr bool& __cordl_internal_get_m_DepthPrimingRecommended() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DepthTexture() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DepthTexture() ;

constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* const& __cordl_internal_get_m_DrawOffscreenUIPass() const;

constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*& __cordl_internal_get_m_DrawOffscreenUIPass() ;

constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* const& __cordl_internal_get_m_DrawOverlayUIPass() const;

constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*& __cordl_internal_get_m_DrawOverlayUIPass() ;

constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass* const& __cordl_internal_get_m_DrawSkyboxPass() const;

constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass*& __cordl_internal_get_m_DrawSkyboxPass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* const& __cordl_internal_get_m_FinalBlitPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*& __cordl_internal_get_m_FinalBlitPass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights* const& __cordl_internal_get_m_ForwardLights() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights*& __cordl_internal_get_m_ForwardLights() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_GBufferCopyDepthPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_GBufferCopyDepthPass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass* const& __cordl_internal_get_m_GBufferPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass*& __cordl_internal_get_m_GBufferPass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* const& __cordl_internal_get_m_HistoryRawColorCopyPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& __cordl_internal_get_m_HistoryRawColorCopyPass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_HistoryRawDepthCopyPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_HistoryRawDepthCopyPass() ;

constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode const& __cordl_internal_get_m_IntermediateTextureMode() const;

constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode& __cordl_internal_get_m_IntermediateTextureMode() ;

constexpr bool const& __cordl_internal_get_m_IssuedGPUOcclusionUnsupportedMsg() const;

constexpr bool& __cordl_internal_get_m_IssuedGPUOcclusionUnsupportedMsg() ;

constexpr ::UnityEngine::Rendering::Universal::LightCookieManager* const& __cordl_internal_get_m_LightCookieManager() const;

constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& __cordl_internal_get_m_LightCookieManager() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* const& __cordl_internal_get_m_MainLightShadowCasterPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*& __cordl_internal_get_m_MainLightShadowCasterPass() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_MotionVectorColor() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_MotionVectorColor() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_MotionVectorDepth() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_MotionVectorDepth() ;

constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* const& __cordl_internal_get_m_MotionVectorPass() const;

constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass*& __cordl_internal_get_m_MotionVectorPass() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_NormalsTexture() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_NormalsTexture() ;

constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* const& __cordl_internal_get_m_OnRenderObjectCallbackPass() const;

constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*& __cordl_internal_get_m_OnRenderObjectCallbackPass() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_OpaqueColor() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_OpaqueColor() ;

constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses const& __cordl_internal_get_m_PostProcessPasses() const;

constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses& __cordl_internal_get_m_PostProcessPasses() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_PrimedDepthCopyPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_PrimedDepthCopyPass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* const& __cordl_internal_get_m_RenderOpaqueForwardOnlyPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& __cordl_internal_get_m_RenderOpaqueForwardOnlyPass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* const& __cordl_internal_get_m_RenderOpaqueForwardPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& __cordl_internal_get_m_RenderOpaqueForwardPass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass* const& __cordl_internal_get_m_RenderOpaqueForwardWithRenderingLayersPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*& __cordl_internal_get_m_RenderOpaqueForwardWithRenderingLayersPass() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* const& __cordl_internal_get_m_RenderTransparentForwardPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& __cordl_internal_get_m_RenderTransparentForwardPass() ;

constexpr bool const& __cordl_internal_get_m_RenderingLayerProvidesByDepthNormalPass() const;

constexpr bool& __cordl_internal_get_m_RenderingLayerProvidesByDepthNormalPass() ;

constexpr bool const& __cordl_internal_get_m_RenderingLayerProvidesRenderObjectPass() const;

constexpr bool& __cordl_internal_get_m_RenderingLayerProvidesRenderObjectPass() ;

constexpr ::GlobalNamespace::RenderingLayerUtils_Event const& __cordl_internal_get_m_RenderingLayersEvent() const;

constexpr ::GlobalNamespace::RenderingLayerUtils_Event& __cordl_internal_get_m_RenderingLayersEvent() ;

constexpr ::GlobalNamespace::RenderingLayerUtils_MaskSize const& __cordl_internal_get_m_RenderingLayersMaskSize() const;

constexpr ::GlobalNamespace::RenderingLayerUtils_MaskSize& __cordl_internal_get_m_RenderingLayersMaskSize() ;

constexpr ::StringW const& __cordl_internal_get_m_RenderingLayersTextureName() const;

constexpr ::StringW& __cordl_internal_get_m_RenderingLayersTextureName() ;

constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& __cordl_internal_get_m_RenderingMode() const;

constexpr ::UnityEngine::Rendering::Universal::RenderingMode& __cordl_internal_get_m_RenderingMode() ;

constexpr bool const& __cordl_internal_get_m_RequiresRenderingLayer() const;

constexpr bool& __cordl_internal_get_m_RequiresRenderingLayer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_SamplingMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_SamplingMaterial() ;

constexpr ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass* const& __cordl_internal_get_m_StencilCrossFadeRenderPass() const;

constexpr ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*& __cordl_internal_get_m_StencilCrossFadeRenderPass() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_StencilDeferredMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_StencilDeferredMaterial() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_TargetColorHandle() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_TargetColorHandle() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_TargetDepthHandle() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_TargetDepthHandle() ;

constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass* const& __cordl_internal_get_m_TransparentSettingsPass() const;

constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass*& __cordl_internal_get_m_TransparentSettingsPass() ;

constexpr bool const& __cordl_internal_get_m_VulkanEnablePreTransform() const;

constexpr bool& __cordl_internal_get_m_VulkanEnablePreTransform() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_XRCopyDepthPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_XRCopyDepthPass() ;

constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass* const& __cordl_internal_get_m_XRDepthMotionPass() const;

constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass*& __cordl_internal_get_m_XRDepthMotionPass() ;

constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* const& __cordl_internal_get_m_XROcclusionMeshPass() const;

constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass*& __cordl_internal_get_m_XROcclusionMeshPass() ;

constexpr void __cordl_internal_set__opaqueLayerMask_k__BackingField(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__prepassLayerMask_k__BackingField(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__shadowTransparentReceive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__transparentLayerMask_k__BackingField(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_ActiveCameraColorAttachment(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_ActiveCameraDepthAttachment(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_AdditionalLightsShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*  value) ;

constexpr void __cordl_internal_set_m_BlitHDRMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_CameraDepthAttachment(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_CameraDepthAttachmentFormat(::UnityEngine::Rendering::Universal::DepthFormat  value) ;

constexpr void __cordl_internal_set_m_CameraDepthAttachment_D3d_11(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_CameraDepthTextureFormat(::UnityEngine::Rendering::Universal::DepthFormat  value) ;

constexpr void __cordl_internal_set_m_CameraMotionVecMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_CapturePass(::UnityEngine::Rendering::Universal::CapturePass*  value) ;

constexpr void __cordl_internal_set_m_ClusterDeferredMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_ColorBufferSystem(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*  value) ;

constexpr void __cordl_internal_set_m_ColorFrontBuffer(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_CopyColorPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass*  value) ;

constexpr void __cordl_internal_set_m_CopyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode  value) ;

constexpr void __cordl_internal_set_m_CopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  value) ;

constexpr void __cordl_internal_set_m_DebugBlitMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_DecalLayersTexture(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::StencilState  value) ;

constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights*  value) ;

constexpr void __cordl_internal_set_m_DeferredPass(::UnityEngine::Rendering::Universal::Internal::DeferredPass*  value) ;

constexpr void __cordl_internal_set_m_DepthNormalPrepass(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*  value) ;

constexpr void __cordl_internal_set_m_DepthPrepass(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*  value) ;

constexpr void __cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode  value) ;

constexpr void __cordl_internal_set_m_DepthPrimingRecommended(bool  value) ;

constexpr void __cordl_internal_set_m_DepthTexture(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_DrawOffscreenUIPass(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*  value) ;

constexpr void __cordl_internal_set_m_DrawOverlayUIPass(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*  value) ;

constexpr void __cordl_internal_set_m_DrawSkyboxPass(::UnityEngine::Rendering::Universal::DrawSkyboxPass*  value) ;

constexpr void __cordl_internal_set_m_FinalBlitPass(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*  value) ;

constexpr void __cordl_internal_set_m_ForwardLights(::UnityEngine::Rendering::Universal::Internal::ForwardLights*  value) ;

constexpr void __cordl_internal_set_m_GBufferCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  value) ;

constexpr void __cordl_internal_set_m_GBufferPass(::UnityEngine::Rendering::Universal::Internal::GBufferPass*  value) ;

constexpr void __cordl_internal_set_m_HistoryRawColorCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass*  value) ;

constexpr void __cordl_internal_set_m_HistoryRawDepthCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  value) ;

constexpr void __cordl_internal_set_m_IntermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode  value) ;

constexpr void __cordl_internal_set_m_IssuedGPUOcclusionUnsupportedMsg(bool  value) ;

constexpr void __cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager*  value) ;

constexpr void __cordl_internal_set_m_MainLightShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*  value) ;

constexpr void __cordl_internal_set_m_MotionVectorColor(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_MotionVectorDepth(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_MotionVectorPass(::UnityEngine::Rendering::Universal::MotionVectorRenderPass*  value) ;

constexpr void __cordl_internal_set_m_NormalsTexture(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_OnRenderObjectCallbackPass(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*  value) ;

constexpr void __cordl_internal_set_m_OpaqueColor(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_PostProcessPasses(::UnityEngine::Rendering::Universal::PostProcessPasses  value) ;

constexpr void __cordl_internal_set_m_PrimedDepthCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  value) ;

constexpr void __cordl_internal_set_m_RenderOpaqueForwardOnlyPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*  value) ;

constexpr void __cordl_internal_set_m_RenderOpaqueForwardPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*  value) ;

constexpr void __cordl_internal_set_m_RenderOpaqueForwardWithRenderingLayersPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*  value) ;

constexpr void __cordl_internal_set_m_RenderTransparentForwardPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*  value) ;

constexpr void __cordl_internal_set_m_RenderingLayerProvidesByDepthNormalPass(bool  value) ;

constexpr void __cordl_internal_set_m_RenderingLayerProvidesRenderObjectPass(bool  value) ;

constexpr void __cordl_internal_set_m_RenderingLayersEvent(::GlobalNamespace::RenderingLayerUtils_Event  value) ;

constexpr void __cordl_internal_set_m_RenderingLayersMaskSize(::GlobalNamespace::RenderingLayerUtils_MaskSize  value) ;

constexpr void __cordl_internal_set_m_RenderingLayersTextureName(::StringW  value) ;

constexpr void __cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode  value) ;

constexpr void __cordl_internal_set_m_RequiresRenderingLayer(bool  value) ;

constexpr void __cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_StencilCrossFadeRenderPass(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*  value) ;

constexpr void __cordl_internal_set_m_StencilDeferredMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_TargetColorHandle(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_TargetDepthHandle(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_TransparentSettingsPass(::UnityEngine::Rendering::Universal::TransparentSettingsPass*  value) ;

constexpr void __cordl_internal_set_m_VulkanEnablePreTransform(bool  value) ;

constexpr void __cordl_internal_set_m_XRCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  value) ;

constexpr void __cordl_internal_set_m_XRDepthMotionPass(::UnityEngine::Rendering::Universal::XRDepthMotionPass*  value) ;

constexpr void __cordl_internal_set_m_XROcclusionMeshPass(::UnityEngine::Rendering::Universal::XROcclusionMeshPass*  value) ;

/// @brief Method .ctor, addr 0xb2ab3fc, size 0x1484, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::UniversalRendererData*  data) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF_k_DepthNormalsOnly() ;

static inline int32_t getStaticF_m_CurrentColorHandle() ;

static inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> getStaticF_m_RenderGraphCameraColorHandles() ;

static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_RenderGraphCameraDepthHandle() ;

static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_RenderGraphDebugTextureHandle() ;

static inline bool getStaticF_m_RequiresIntermediateAttachments() ;

/// @brief Method get_accurateGbufferNormals, addr 0xb2ab2ac, size 0x20, virtual false, abstract: false, final false
inline bool get_accurateGbufferNormals() ;

/// @brief Method get_cameraDepthAttachmentFormat, addr 0xb2ab3a0, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_cameraDepthAttachmentFormat() ;

/// @brief Method get_cameraDepthTextureFormat, addr 0xb2ab344, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_cameraDepthTextureFormat() ;

/// @brief Method get_colorGradingLut, addr 0xb2ab2f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* get_colorGradingLut() ;

/// @brief Method get_colorGradingLutPass, addr 0xb2ab2dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* get_colorGradingLutPass() ;

/// @brief Method get_currentRenderGraphCameraColorHandle, addr 0xb2b2d04, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* get_currentRenderGraphCameraColorHandle() ;

/// @brief Method get_deferredLights, addr 0xb2ab2fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights* get_deferredLights() ;

/// @brief Method get_deferredModeUnsupported, addr 0xb2ab13c, size 0x50, virtual false, abstract: false, final false
inline bool get_deferredModeUnsupported() ;

/// @brief Method get_depthPrimingMode, addr 0xb2ab2cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::DepthPrimingMode get_depthPrimingMode() ;

/// @brief Method get_finalPostProcessPass, addr 0xb2ab2ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::PostProcessPass* get_finalPostProcessPass() ;

/// @brief Method get_nextRenderGraphCameraColorHandle, addr 0xb2b2da4, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* get_nextRenderGraphCameraColorHandle() ;

/// [CompilerGenerated]
/// @brief Method get_opaqueLayerMask, addr 0xb2ab314, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_opaqueLayerMask() ;

/// @brief Method get_postProcessPass, addr 0xb2ab2e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::PostProcessPass* get_postProcessPass() ;

/// [CompilerGenerated]
/// @brief Method get_prepassLayerMask, addr 0xb2ab304, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_prepassLayerMask() ;

/// @brief Method get_renderingModeActual, addr 0xb2ab18c, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingModeActual() ;

/// @brief Method get_renderingModeRequested, addr 0xb2ab134, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingModeRequested() ;

/// [CompilerGenerated]
/// @brief Method get_shadowTransparentReceive, addr 0xb2ab334, size 0x8, virtual false, abstract: false, final false
inline bool get_shadowTransparentReceive() ;

/// @brief Method get_supportsGPUOcclusion, addr 0xb2b80d4, size 0xa0, virtual true, abstract: false, final false
inline bool get_supportsGPUOcclusion() ;

/// @brief Method get_supportsNativeRenderPassRendergraphCompiler, addr 0xb2b1b34, size 0x8, virtual true, abstract: false, final false
inline bool get_supportsNativeRenderPassRendergraphCompiler() ;

/// [CompilerGenerated]
/// @brief Method get_transparentLayerMask, addr 0xb2ab324, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_transparentLayerMask() ;

/// @brief Method get_usesClusterLightLoop, addr 0xb2ab278, size 0x34, virtual false, abstract: false, final false
inline bool get_usesClusterLightLoop() ;

/// @brief Method get_usesDeferredLighting, addr 0xb2ab24c, size 0x2c, virtual false, abstract: false, final false
inline bool get_usesDeferredLighting() ;

static inline void setStaticF_k_DepthNormalsOnly(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*  value) ;

static inline void setStaticF_m_CurrentColorHandle(int32_t  value) ;

static inline void setStaticF_m_RenderGraphCameraColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*>  value) ;

static inline void setStaticF_m_RenderGraphCameraDepthHandle(::UnityEngine::Rendering::RTHandle*  value) ;

static inline void setStaticF_m_RenderGraphDebugTextureHandle(::UnityEngine::Rendering::RTHandle*  value) ;

static inline void setStaticF_m_RequiresIntermediateAttachments(bool  value) ;

/// @brief Method set_depthPrimingMode, addr 0xb2ab2d4, size 0x8, virtual false, abstract: false, final false
inline void set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_opaqueLayerMask, addr 0xb2ab31c, size 0x8, virtual false, abstract: false, final false
inline void set_opaqueLayerMask(::UnityEngine::LayerMask  value) ;

/// [CompilerGenerated]
/// @brief Method set_prepassLayerMask, addr 0xb2ab30c, size 0x8, virtual false, abstract: false, final false
inline void set_prepassLayerMask(::UnityEngine::LayerMask  value) ;

/// [CompilerGenerated]
/// @brief Method set_shadowTransparentReceive, addr 0xb2ab33c, size 0x8, virtual false, abstract: false, final false
inline void set_shadowTransparentReceive(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_transparentLayerMask, addr 0xb2ab32c, size 0x8, virtual false, abstract: false, final false
inline void set_transparentLayerMask(::UnityEngine::LayerMask  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalRenderer(UniversalRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalRenderer(UniversalRenderer const& ) = delete;

/// @brief Field _CameraColorAfterPostProcessingName offset 0xffffffff size 0x8
static constexpr ::ConstString  _CameraColorAfterPostProcessingName{u"_CameraColorAfterPostProcessing"};

/// @brief Field _CameraColorUpscaled offset 0xffffffff size 0x8
static constexpr ::ConstString  _CameraColorUpscaled{u"_CameraColorUpscaled"};

/// @brief Field _CameraDepthAttachmentName offset 0xffffffff size 0x8
static constexpr ::ConstString  _CameraDepthAttachmentName{u"_CameraDepthAttachment"};

/// @brief Field _CameraTargetAttachmentAName offset 0xffffffff size 0x8
static constexpr ::ConstString  _CameraTargetAttachmentAName{u"_CameraTargetAttachmentA"};

/// @brief Field _CameraTargetAttachmentBName offset 0xffffffff size 0x8
static constexpr ::ConstString  _CameraTargetAttachmentBName{u"_CameraTargetAttachmentB"};

/// @brief Field _SingleCameraTargetAttachmentName offset 0xffffffff size 0x8
static constexpr ::ConstString  _SingleCameraTargetAttachmentName{u"_CameraTargetAttachment"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18668};

/// @brief Field k_AfterFinalBlitPassQueueOffset offset 0xffffffff size 0x4
static constexpr int32_t  k_AfterFinalBlitPassQueueOffset{static_cast<int32_t>(0x2)};

/// @brief Field k_FinalBlitPassQueueOffset offset 0xffffffff size 0x4
static constexpr int32_t  k_FinalBlitPassQueueOffset{static_cast<int32_t>(0x1)};

/// @brief Field m_DepthPrepass, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*  ___m_DepthPrepass;

/// @brief Field m_DepthNormalPrepass, offset: 0x150, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*  ___m_DepthNormalPrepass;

/// @brief Field m_PrimedDepthCopyPass, offset: 0x158, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  ___m_PrimedDepthCopyPass;

/// @brief Field m_MotionVectorPass, offset: 0x160, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::MotionVectorRenderPass*  ___m_MotionVectorPass;

/// @brief Field m_MainLightShadowCasterPass, offset: 0x168, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*  ___m_MainLightShadowCasterPass;

/// @brief Field m_AdditionalLightsShadowCasterPass, offset: 0x170, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*  ___m_AdditionalLightsShadowCasterPass;

/// @brief Field m_GBufferPass, offset: 0x178, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::GBufferPass*  ___m_GBufferPass;

/// @brief Field m_GBufferCopyDepthPass, offset: 0x180, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  ___m_GBufferCopyDepthPass;

/// @brief Field m_DeferredPass, offset: 0x188, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::DeferredPass*  ___m_DeferredPass;

/// @brief Field m_RenderOpaqueForwardOnlyPass, offset: 0x190, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*  ___m_RenderOpaqueForwardOnlyPass;

/// @brief Field m_RenderOpaqueForwardPass, offset: 0x198, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*  ___m_RenderOpaqueForwardPass;

/// @brief Field m_RenderOpaqueForwardWithRenderingLayersPass, offset: 0x1a0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*  ___m_RenderOpaqueForwardWithRenderingLayersPass;

/// @brief Field m_DrawSkyboxPass, offset: 0x1a8, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::DrawSkyboxPass*  ___m_DrawSkyboxPass;

/// @brief Field m_CopyDepthPass, offset: 0x1b0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  ___m_CopyDepthPass;

/// @brief Field m_CopyColorPass, offset: 0x1b8, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*  ___m_CopyColorPass;

/// @brief Field m_TransparentSettingsPass, offset: 0x1c0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::TransparentSettingsPass*  ___m_TransparentSettingsPass;

/// @brief Field m_RenderTransparentForwardPass, offset: 0x1c8, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*  ___m_RenderTransparentForwardPass;

/// @brief Field m_OnRenderObjectCallbackPass, offset: 0x1d0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*  ___m_OnRenderObjectCallbackPass;

/// @brief Field m_FinalBlitPass, offset: 0x1d8, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*  ___m_FinalBlitPass;

/// @brief Field m_CapturePass, offset: 0x1e0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::CapturePass*  ___m_CapturePass;

/// @brief Field m_XROcclusionMeshPass, offset: 0x1e8, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::XROcclusionMeshPass*  ___m_XROcclusionMeshPass;

/// @brief Field m_XRCopyDepthPass, offset: 0x1f0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  ___m_XRCopyDepthPass;

/// @brief Field m_XRDepthMotionPass, offset: 0x1f8, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::XRDepthMotionPass*  ___m_XRDepthMotionPass;

/// @brief Field m_DrawOffscreenUIPass, offset: 0x200, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*  ___m_DrawOffscreenUIPass;

/// @brief Field m_DrawOverlayUIPass, offset: 0x208, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*  ___m_DrawOverlayUIPass;

/// @brief Field m_HistoryRawColorCopyPass, offset: 0x210, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*  ___m_HistoryRawColorCopyPass;

/// @brief Field m_HistoryRawDepthCopyPass, offset: 0x218, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  ___m_HistoryRawDepthCopyPass;

/// @brief Field m_StencilCrossFadeRenderPass, offset: 0x220, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*  ___m_StencilCrossFadeRenderPass;

/// @brief Field m_ColorBufferSystem, offset: 0x228, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*  ___m_ColorBufferSystem;

/// @brief Field m_ActiveCameraColorAttachment, offset: 0x230, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_ActiveCameraColorAttachment;

/// @brief Field m_ColorFrontBuffer, offset: 0x238, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_ColorFrontBuffer;

/// @brief Field m_ActiveCameraDepthAttachment, offset: 0x240, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_ActiveCameraDepthAttachment;

/// @brief Field m_CameraDepthAttachment, offset: 0x248, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_CameraDepthAttachment;

/// @brief Field m_CameraDepthAttachment_D3d_11, offset: 0x250, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_CameraDepthAttachment_D3d_11;

/// @brief Field m_TargetColorHandle, offset: 0x258, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_TargetColorHandle;

/// @brief Field m_TargetDepthHandle, offset: 0x260, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_TargetDepthHandle;

/// @brief Field m_DepthTexture, offset: 0x268, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_DepthTexture;

/// @brief Field m_NormalsTexture, offset: 0x270, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_NormalsTexture;

/// @brief Field m_DecalLayersTexture, offset: 0x278, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_DecalLayersTexture;

/// @brief Field m_OpaqueColor, offset: 0x280, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_OpaqueColor;

/// @brief Field m_MotionVectorColor, offset: 0x288, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_MotionVectorColor;

/// @brief Field m_MotionVectorDepth, offset: 0x290, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_MotionVectorDepth;

/// @brief Field m_ForwardLights, offset: 0x298, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::ForwardLights*  ___m_ForwardLights;

/// @brief Field m_DeferredLights, offset: 0x2a0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::DeferredLights*  ___m_DeferredLights;

/// @brief Field m_RenderingMode, offset: 0x2a8, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::RenderingMode  ___m_RenderingMode;

/// @brief Field m_DepthPrimingMode, offset: 0x2ac, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::DepthPrimingMode  ___m_DepthPrimingMode;

/// @brief Field m_CopyDepthMode, offset: 0x2b0, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::CopyDepthMode  ___m_CopyDepthMode;

/// @brief Field m_CameraDepthAttachmentFormat, offset: 0x2b4, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::DepthFormat  ___m_CameraDepthAttachmentFormat;

/// @brief Field m_CameraDepthTextureFormat, offset: 0x2b8, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::DepthFormat  ___m_CameraDepthTextureFormat;

/// @brief Field m_DepthPrimingRecommended, offset: 0x2bc, size: 0x1, def value: None
 bool  ___m_DepthPrimingRecommended;

/// @brief Field m_DefaultStencilState, offset: 0x2bd, size: 0xc, def value: None
 ::UnityEngine::Rendering::StencilState  ___m_DefaultStencilState;

/// @brief Field m_LightCookieManager, offset: 0x2d0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::LightCookieManager*  ___m_LightCookieManager;

/// @brief Field m_IntermediateTextureMode, offset: 0x2d8, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::IntermediateTextureMode  ___m_IntermediateTextureMode;

/// @brief Field m_VulkanEnablePreTransform, offset: 0x2dc, size: 0x1, def value: None
 bool  ___m_VulkanEnablePreTransform;

/// @brief Field m_BlitMaterial, offset: 0x2e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_BlitMaterial;

/// @brief Field m_BlitHDRMaterial, offset: 0x2e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_BlitHDRMaterial;

/// @brief Field m_SamplingMaterial, offset: 0x2f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_SamplingMaterial;

/// @brief Field m_StencilDeferredMaterial, offset: 0x2f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_StencilDeferredMaterial;

/// @brief Field m_ClusterDeferredMaterial, offset: 0x300, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_ClusterDeferredMaterial;

/// @brief Field m_CameraMotionVecMaterial, offset: 0x308, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_CameraMotionVecMaterial;

/// @brief Field m_PostProcessPasses, offset: 0x310, size: 0x40, def value: None
 ::UnityEngine::Rendering::Universal::PostProcessPasses  ___m_PostProcessPasses;

/// [CompilerGenerated]
/// @brief Field <prepassLayerMask>k__BackingField, offset: 0x350, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____prepassLayerMask_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <opaqueLayerMask>k__BackingField, offset: 0x354, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____opaqueLayerMask_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <transparentLayerMask>k__BackingField, offset: 0x358, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____transparentLayerMask_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <shadowTransparentReceive>k__BackingField, offset: 0x35c, size: 0x1, def value: None
 bool  ____shadowTransparentReceive_k__BackingField;

/// @brief Field m_DebugBlitMaterial, offset: 0x360, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_DebugBlitMaterial;

/// @brief Field m_RequiresRenderingLayer, offset: 0x368, size: 0x1, def value: None
 bool  ___m_RequiresRenderingLayer;

/// @brief Field m_RenderingLayersEvent, offset: 0x36c, size: 0x4, def value: None
 ::GlobalNamespace::RenderingLayerUtils_Event  ___m_RenderingLayersEvent;

/// @brief Field m_RenderingLayersMaskSize, offset: 0x370, size: 0x4, def value: None
 ::GlobalNamespace::RenderingLayerUtils_MaskSize  ___m_RenderingLayersMaskSize;

/// @brief Field m_RenderingLayerProvidesRenderObjectPass, offset: 0x374, size: 0x1, def value: None
 bool  ___m_RenderingLayerProvidesRenderObjectPass;

/// @brief Field m_RenderingLayerProvidesByDepthNormalPass, offset: 0x375, size: 0x1, def value: None
 bool  ___m_RenderingLayerProvidesByDepthNormalPass;

/// @brief Field m_RenderingLayersTextureName, offset: 0x378, size: 0x8, def value: None
 ::StringW  ___m_RenderingLayersTextureName;

/// @brief Field m_IssuedGPUOcclusionUnsupportedMsg, offset: 0x380, size: 0x1, def value: None
 bool  ___m_IssuedGPUOcclusionUnsupportedMsg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrepass) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthNormalPrepass) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_PrimedDepthCopyPass) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MotionVectorPass) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MainLightShadowCasterPass) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_AdditionalLightsShadowCasterPass) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_GBufferPass) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_GBufferCopyDepthPass) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DeferredPass) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardOnlyPass) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardPass) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardWithRenderingLayersPass) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DrawSkyboxPass) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyDepthPass) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyColorPass) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TransparentSettingsPass) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderTransparentForwardPass) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_OnRenderObjectCallbackPass) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_FinalBlitPass) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CapturePass) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XROcclusionMeshPass) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XRCopyDepthPass) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XRDepthMotionPass) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DrawOffscreenUIPass) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DrawOverlayUIPass) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_HistoryRawColorCopyPass) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_HistoryRawDepthCopyPass) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_StencilCrossFadeRenderPass) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ColorBufferSystem) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ActiveCameraColorAttachment) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ColorFrontBuffer) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ActiveCameraDepthAttachment) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthAttachment) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthAttachment_D3d_11) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TargetColorHandle) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TargetDepthHandle) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthTexture) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_NormalsTexture) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DecalLayersTexture) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_OpaqueColor) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MotionVectorColor) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MotionVectorDepth) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ForwardLights) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DeferredLights) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingMode) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrimingMode) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyDepthMode) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthAttachmentFormat) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthTextureFormat) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrimingRecommended) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DefaultStencilState) == 0x2bd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_LightCookieManager) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_IntermediateTextureMode) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_VulkanEnablePreTransform) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_BlitMaterial) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_BlitHDRMaterial) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_SamplingMaterial) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_StencilDeferredMaterial) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ClusterDeferredMaterial) == 0x300, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraMotionVecMaterial) == 0x308, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_PostProcessPasses) == 0x310, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ____prepassLayerMask_k__BackingField) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ____opaqueLayerMask_k__BackingField) == 0x354, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ____transparentLayerMask_k__BackingField) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ____shadowTransparentReceive_k__BackingField) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DebugBlitMaterial) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RequiresRenderingLayer) == 0x368, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayersEvent) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayersMaskSize) == 0x370, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayerProvidesRenderObjectPass) == 0x374, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayerProvidesByDepthNormalPass) == 0x375, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayersTextureName) == 0x378, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_IssuedGPUOcclusionUnsupportedMsg) == 0x380, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer) == 0x388, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/<>c
class CORDL_TYPE UniversalRenderer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::Universal::UniversalRenderer___c*  __9;

/// @brief Field <>9__126_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__126_0, put=setStaticF___9__126_0)) ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  __9__126_0;

/// @brief Field <>9__126_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__126_1, put=setStaticF___9__126_1)) ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  __9__126_1;

/// @brief Field <>9__156_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__156_0, put=setStaticF___9__156_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__156_0;

/// @brief Field <>9__213_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__213_0, put=setStaticF___9__213_0)) ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  __9__213_0;

static inline ::UnityEngine::Rendering::Universal::UniversalRenderer___c* New_ctor() ;

/// @brief Method <BlitEmptyTexture>b__156_0, addr 0xb2b92d8, size 0xc8, virtual false, abstract: false, final false
inline void _BlitEmptyTexture_b__156_0(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method <OnAfterRendering>b__213_0, addr 0xb2b93a0, size 0x20, virtual false, abstract: false, final false
inline bool _OnAfterRendering_b__213_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  x) ;

/// @brief Method <Setup>b__126_0, addr 0xb2b928c, size 0x1c, virtual false, abstract: false, final false
inline bool _Setup_b__126_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  x) ;

/// @brief Method <Setup>b__126_1, addr 0xb2b92a8, size 0x30, virtual false, abstract: false, final false
inline bool _Setup_b__126_1(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  x) ;

/// @brief Method .ctor, addr 0xb2b9284, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::Universal::UniversalRenderer___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* getStaticF___9__126_0() ;

static inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* getStaticF___9__126_1() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__156_0() ;

static inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* getStaticF___9__213_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::Universal::UniversalRenderer___c*  value) ;

static inline void setStaticF___9__126_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  value) ;

static inline void setStaticF___9__126_1(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  value) ;

static inline void setStaticF___9__156_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__213_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalRenderer___c(UniversalRenderer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalRenderer___c(UniversalRenderer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18667};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/CopyToDebugTexturePassData
class CORDL_TYPE UniversalRenderer_CopyToDebugTexturePassData : public ::System::Object {
public:
// Declarations
/// @brief Field dest, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_dest, put=__cordl_internal_set_dest)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  dest;

/// @brief Field src, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_src, put=__cordl_internal_set_src)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src;

static inline ::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_dest() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_dest() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_src() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_src() ;

constexpr void __cordl_internal_set_dest(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_src(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method .ctor, addr 0xb2b9200, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderer_CopyToDebugTexturePassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer_CopyToDebugTexturePassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalRenderer_CopyToDebugTexturePassData(UniversalRenderer_CopyToDebugTexturePassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer_CopyToDebugTexturePassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalRenderer_CopyToDebugTexturePassData(UniversalRenderer_CopyToDebugTexturePassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18661};

/// @brief Field src, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___src;

/// @brief Field dest, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___dest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData, ___src) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData, ___dest) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/Profiling
class CORDL_TYPE UniversalRenderer_Profiling : public ::System::Object {
public:
// Declarations
/// @brief Field createCameraRenderTarget, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_createCameraRenderTarget, put=setStaticF_createCameraRenderTarget)) ::UnityEngine::Rendering::ProfilingSampler*  createCameraRenderTarget;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_createCameraRenderTarget() ;

static inline void setStaticF_createCameraRenderTarget(::UnityEngine::Rendering::ProfilingSampler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderer_Profiling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer_Profiling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalRenderer_Profiling(UniversalRenderer_Profiling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer_Profiling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalRenderer_Profiling(UniversalRenderer_Profiling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18659};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"UniversalRenderer"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
