#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderer)
namespace GlobalNamespace {
struct ScriptableRenderer_RenderBlocks;
}
namespace GlobalNamespace {
struct ScriptableRenderer_RenderPassDescriptor;
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
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
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
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
struct CameraRenderType;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler;
}
namespace UnityEngine::Rendering::Universal {
class Profiling_ScriptableRenderer_RenderBlock;
}
namespace UnityEngine::Rendering::Universal {
class Profiling_ScriptableRenderer_RenderPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_BeginXRPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DrawGizmosPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DrawWireOverlayPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DummyData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_EndXRPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_PassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_Profiling;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_RenderPassBlock;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_RenderingFeatures;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_VFXProcessCameraPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
namespace UnityEngine::Rendering {
struct ClearFlag;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct GizmoSubset;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine::Rendering {
class IBaseCommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Hash128;
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
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Profiling_ScriptableRenderer_RenderBlock;
}
namespace UnityEngine::Rendering::Universal {
class Profiling_ScriptableRenderer_RenderPass;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_BeginXRPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DrawGizmosPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DrawWireOverlayPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DummyData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_EndXRPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_PassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_Profiling;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_RenderPassBlock;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_RenderingFeatures;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_VFXProcessCameraPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/Profiling/RenderBlock");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/Profiling/RenderPass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer*, "UnityEngine.Rendering.Universal", "ScriptableRenderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/BeginXRPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/DrawGizmosPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/DrawWireOverlayPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/DummyData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/EndXRPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/PassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/Profiling");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderPassBlock");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderingFeatures");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/VFXProcessCameraPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer___c*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/<>c");
// Dependencies System.Object, UnityEngine.Hash128, UnityEngine.Plane, UnityEngine.Rendering.AttachmentDescriptor, UnityEngine.Rendering.GraphicsDeviceType, UnityEngine.Rendering.RTHandle, UnityEngine.Rendering.RenderBufferStoreAction, UnityEngine.Rendering.RenderTargetIdentifier, UnityEngine.Rendering.Universal.StoreActionsOptimization, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer
class CORDL_TYPE ScriptableRenderer : public ::System::Object {
public:
// Declarations
using RenderBlocks = ::GlobalNamespace::ScriptableRenderer_RenderBlocks;

using RenderPassDescriptor = ::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor;

using BeginXRPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData;

using DrawGizmosPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData;

using DrawWireOverlayPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData;

using DummyData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData;

using EndXRPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData;

using PassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData;

using Profiling = ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling;

using RenderPassBlock = ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock;

using RenderingFeatures = ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures;

using VFXProcessCameraPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData;

using __c = ::UnityEngine::Rendering::Universal::ScriptableRenderer___c;

 __declspec(property(get=get_DebugHandler)) ::UnityEngine::Rendering::Universal::DebugHandler*  DebugHandler;

/// @brief Field <DebugHandler>k__BackingField, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__DebugHandler_k__BackingField, put=__cordl_internal_set__DebugHandler_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugHandler*  _DebugHandler_k__BackingField;

/// @brief Field <profilingExecute>k__BackingField, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__profilingExecute_k__BackingField, put=__cordl_internal_set__profilingExecute_k__BackingField)) ::UnityEngine::Rendering::ProfilingSampler*  _profilingExecute_k__BackingField;

/// @brief Field <stripAdditionalLightOffVariants>k__BackingField, offset 0x142, size 0x1 
 __declspec(property(get=__cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField, put=__cordl_internal_set__stripAdditionalLightOffVariants_k__BackingField)) bool  _stripAdditionalLightOffVariants_k__BackingField;

/// @brief Field <stripShadowsOffVariants>k__BackingField, offset 0x141, size 0x1 
 __declspec(property(get=__cordl_internal_get__stripShadowsOffVariants_k__BackingField, put=__cordl_internal_set__stripShadowsOffVariants_k__BackingField)) bool  _stripShadowsOffVariants_k__BackingField;

/// @brief Field <supportedRenderingFeatures>k__BackingField, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__supportedRenderingFeatures_k__BackingField, put=__cordl_internal_set__supportedRenderingFeatures_k__BackingField)) ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*  _supportedRenderingFeatures_k__BackingField;

/// @brief Field <unsupportedGraphicsDeviceTypes>k__BackingField, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField, put=__cordl_internal_set__unsupportedGraphicsDeviceTypes_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>  _unsupportedGraphicsDeviceTypes_k__BackingField;

/// @brief Field <useDepthPriming>k__BackingField, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get__useDepthPriming_k__BackingField, put=__cordl_internal_set__useDepthPriming_k__BackingField)) bool  _useDepthPriming_k__BackingField;

 __declspec(property(get=get_activeRenderPassQueue)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  activeRenderPassQueue;

/// @brief [Obsolete("Use cameraColorTargetHandle", true)]
 __declspec(property(get=get_cameraColorTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier  cameraColorTarget;

/// @brief [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
 __declspec(property(get=get_cameraColorTargetHandle)) ::UnityEngine::Rendering::RTHandle*  cameraColorTargetHandle;

/// [Obsolete("cameraDepth has been renamed to cameraDepthTarget. (UnityUpgradable) -> cameraDepthTarget", true)]
/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_cameraDepth)) ::UnityEngine::Rendering::RenderTargetIdentifier  cameraDepth;

/// @brief [Obsolete("Use cameraDepthTargetHandle", true)]
 __declspec(property(get=get_cameraDepthTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier  cameraDepthTarget;

/// @brief [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
 __declspec(property(get=get_cameraDepthTargetHandle)) ::UnityEngine::Rendering::RTHandle*  cameraDepthTargetHandle;

/// @brief Field current, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_current, put=setStaticF_current)) ::UnityEngine::Rendering::Universal::ScriptableRenderer*  current;

/// @brief Field disableNativeRenderPassInFeatures, offset 0x133, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableNativeRenderPassInFeatures, put=__cordl_internal_set_disableNativeRenderPassInFeatures)) bool  disableNativeRenderPassInFeatures;

 __declspec(property(get=get_frameData)) ::UnityEngine::Rendering::ContextContainer*  frameData;

/// @brief Field hasReleasedRTs, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasReleasedRTs, put=__cordl_internal_set_hasReleasedRTs)) bool  hasReleasedRTs;

/// @brief Field k_CameraTarget, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_CameraTarget, put=setStaticF_k_CameraTarget)) ::UnityEngine::Rendering::RTHandle*  k_CameraTarget;

/// @brief Field m_ActiveColorAttachmentDescriptors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveColorAttachmentDescriptors, put=__cordl_internal_set_m_ActiveColorAttachmentDescriptors)) ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>  m_ActiveColorAttachmentDescriptors;

/// @brief Field m_ActiveColorAttachmentIDs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_ActiveColorAttachmentIDs, put=setStaticF_m_ActiveColorAttachmentIDs)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  m_ActiveColorAttachmentIDs;

/// @brief Field m_ActiveColorAttachments, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_ActiveColorAttachments, put=setStaticF_m_ActiveColorAttachments)) ::ArrayW<::UnityEngine::Rendering::RTHandle*>  m_ActiveColorAttachments;

/// @brief Field m_ActiveColorStoreActions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_ActiveColorStoreActions, put=setStaticF_m_ActiveColorStoreActions)) ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  m_ActiveColorStoreActions;

/// @brief Field m_ActiveDepthAttachment, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_ActiveDepthAttachment, put=setStaticF_m_ActiveDepthAttachment)) ::UnityEngine::Rendering::RTHandle*  m_ActiveDepthAttachment;

/// @brief Field m_ActiveDepthAttachmentDescriptor, offset 0x48, size 0x78 
 __declspec(property(get=__cordl_internal_get_m_ActiveDepthAttachmentDescriptor, put=__cordl_internal_set_m_ActiveDepthAttachmentDescriptor)) ::UnityEngine::Rendering::AttachmentDescriptor  m_ActiveDepthAttachmentDescriptor;

/// @brief Field m_ActiveDepthStoreAction, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_ActiveDepthStoreAction, put=setStaticF_m_ActiveDepthStoreAction)) ::UnityEngine::Rendering::RenderBufferStoreAction  m_ActiveDepthStoreAction;

/// @brief Field m_ActiveRenderPassQueue, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveRenderPassQueue, put=__cordl_internal_set_m_ActiveRenderPassQueue)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  m_ActiveRenderPassQueue;

/// @brief Field m_CameraColorTarget, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraColorTarget, put=__cordl_internal_set_m_CameraColorTarget)) ::UnityEngine::Rendering::RTHandle*  m_CameraColorTarget;

/// @brief Field m_CameraDepthTarget, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraDepthTarget, put=__cordl_internal_set_m_CameraDepthTarget)) ::UnityEngine::Rendering::RTHandle*  m_CameraDepthTarget;

/// @brief Field m_CameraResolveTarget, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraResolveTarget, put=__cordl_internal_set_m_CameraResolveTarget)) ::UnityEngine::Rendering::RTHandle*  m_CameraResolveTarget;

/// @brief Field m_FinalColorStoreAction, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FinalColorStoreAction, put=__cordl_internal_set_m_FinalColorStoreAction)) ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  m_FinalColorStoreAction;

/// @brief Field m_FinalDepthStoreAction, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FinalDepthStoreAction, put=__cordl_internal_set_m_FinalDepthStoreAction)) ::UnityEngine::Rendering::RenderBufferStoreAction  m_FinalDepthStoreAction;

/// @brief Field m_FirstTimeCameraColorTargetIsBound, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FirstTimeCameraColorTargetIsBound, put=__cordl_internal_set_m_FirstTimeCameraColorTargetIsBound)) bool  m_FirstTimeCameraColorTargetIsBound;

/// @brief Field m_FirstTimeCameraDepthTargetIsBound, offset 0x131, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound, put=__cordl_internal_set_m_FirstTimeCameraDepthTargetIsBound)) bool  m_FirstTimeCameraDepthTargetIsBound;

/// @brief Field m_IsActiveColorAttachmentTransient, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IsActiveColorAttachmentTransient, put=__cordl_internal_set_m_IsActiveColorAttachmentTransient)) ::ArrayW<bool>  m_IsActiveColorAttachmentTransient;

/// @brief Field m_IsPipelineExecuting, offset 0x132, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsPipelineExecuting, put=__cordl_internal_set_m_IsPipelineExecuting)) bool  m_IsPipelineExecuting;

/// @brief Field m_LastBeginSubpassPassIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastBeginSubpassPassIndex, put=__cordl_internal_set_m_LastBeginSubpassPassIndex)) int32_t  m_LastBeginSubpassPassIndex;

/// @brief Field m_MergeableRenderPassesMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MergeableRenderPassesMap, put=__cordl_internal_set_m_MergeableRenderPassesMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,::ArrayW<int32_t>>*  m_MergeableRenderPassesMap;

/// @brief Field m_MergeableRenderPassesMapArrays, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MergeableRenderPassesMapArrays, put=__cordl_internal_set_m_MergeableRenderPassesMapArrays)) ::ArrayW<::ArrayW<int32_t>>  m_MergeableRenderPassesMapArrays;

/// @brief Field m_PassIndexToPassHash, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PassIndexToPassHash, put=__cordl_internal_set_m_PassIndexToPassHash)) ::ArrayW<::UnityEngine::Hash128>  m_PassIndexToPassHash;

/// @brief Field m_RenderPassesAttachmentCount, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderPassesAttachmentCount, put=__cordl_internal_set_m_RenderPassesAttachmentCount)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,int32_t>*  m_RenderPassesAttachmentCount;

/// @brief Field m_RendererFeatures, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RendererFeatures, put=__cordl_internal_set_m_RendererFeatures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  m_RendererFeatures;

/// @brief Field m_StoreActionsOptimizationSetting, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StoreActionsOptimizationSetting, put=__cordl_internal_set_m_StoreActionsOptimizationSetting)) ::UnityEngine::Rendering::Universal::StoreActionsOptimization  m_StoreActionsOptimizationSetting;

/// @brief Field m_TrimmedColorAttachmentCopies, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_TrimmedColorAttachmentCopies, put=setStaticF_m_TrimmedColorAttachmentCopies)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>>  m_TrimmedColorAttachmentCopies;

/// @brief Field m_TrimmedColorAttachmentCopyIDs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_TrimmedColorAttachmentCopyIDs, put=setStaticF_m_TrimmedColorAttachmentCopyIDs)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>  m_TrimmedColorAttachmentCopyIDs;

/// @brief Field m_UseOptimizedStoreActions, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_UseOptimizedStoreActions, put=setStaticF_m_UseOptimizedStoreActions)) bool  m_UseOptimizedStoreActions;

/// @brief Field m_firstPassIndexOfLastMergeableGroup, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_firstPassIndexOfLastMergeableGroup, put=__cordl_internal_set_m_firstPassIndexOfLastMergeableGroup)) int32_t  m_firstPassIndexOfLastMergeableGroup;

/// @brief Field m_frameData, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_frameData, put=__cordl_internal_set_m_frameData)) ::UnityEngine::Rendering::ContextContainer*  m_frameData;

 __declspec(property(get=get_profilingExecute, put=set_profilingExecute)) ::UnityEngine::Rendering::ProfilingSampler*  profilingExecute;

 __declspec(property(get=get_rendererFeatures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  rendererFeatures;

/// @brief Field s_Planes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Planes, put=setStaticF_s_Planes)) ::ArrayW<::UnityEngine::Plane>  s_Planes;

/// @brief Field s_VectorPlanes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_VectorPlanes, put=setStaticF_s_VectorPlanes)) ::ArrayW<::UnityEngine::Vector4>  s_VectorPlanes;

 __declspec(property(get=get_stripAdditionalLightOffVariants, put=set_stripAdditionalLightOffVariants)) bool  stripAdditionalLightOffVariants;

 __declspec(property(get=get_stripShadowsOffVariants, put=set_stripShadowsOffVariants)) bool  stripShadowsOffVariants;

 __declspec(property(get=get_supportedRenderingFeatures, put=set_supportedRenderingFeatures)) ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*  supportedRenderingFeatures;

 __declspec(property(get=get_supportsGPUOcclusion)) bool  supportsGPUOcclusion;

 __declspec(property(get=get_supportsNativeRenderPassRendergraphCompiler)) bool  supportsNativeRenderPassRendergraphCompiler;

 __declspec(property(get=get_unsupportedGraphicsDeviceTypes, put=set_unsupportedGraphicsDeviceTypes)) ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>  unsupportedGraphicsDeviceTypes;

 __declspec(property(get=get_useDepthPriming, put=set_useDepthPriming)) bool  useDepthPriming;

/// @brief Field useRenderPassEnabled, offset 0x134, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRenderPassEnabled, put=__cordl_internal_set_useRenderPassEnabled)) bool  useRenderPassEnabled;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddRenderPasses, addr 0xb24ad14, size 0x2c8, virtual false, abstract: false, final false
inline void AddRenderPasses(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method AdjustAndGetScreenMSAASamples, addr 0xb24d64c, size 0x19c, virtual false, abstract: false, final false
inline int32_t AdjustAndGetScreenMSAASamples(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, bool  useIntermediateColorTarget) ;

/// @brief Method AreAttachmentIndicesCompatible, addr 0xb242f78, size 0xf0, virtual false, abstract: false, final false
static inline bool AreAttachmentIndicesCompatible(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  lastSubPass, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  currentSubPass) ;

/// @brief Method BeginRenderGraphXRRendering, addr 0xb246b20, size 0x498, virtual false, abstract: false, final false
inline void BeginRenderGraphXRRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method BeginXRRendering, addr 0xb24a588, size 0x1c0, virtual false, abstract: false, final false
inline void BeginXRRendering(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData) ;

/// @brief Method CalculateBillboardProperties, addr 0xb2444c4, size 0x3ac, virtual false, abstract: false, final false
static inline void CalculateBillboardProperties(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  worldToCameraMatrix, ::by_ref<::UnityEngine::Vector3>  billboardTangent, ::by_ref<::UnityEngine::Vector3>  billboardNormal, ::by_ref<float_t>  cameraXZAngle) ;

/// @brief Method CalculateSplitEventRange, addr 0xb247f48, size 0x11c, virtual false, abstract: false, final false
inline void CalculateSplitEventRange(::UnityEngine::Rendering::Universal::RenderPassEvent  startInjectionPoint, ::UnityEngine::Rendering::Universal::RenderPassEvent  targetEvent, ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>  startEvent, ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>  splitEvent, ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>  endEvent) ;

/// @brief Method Clear, addr 0xb245948, size 0x288, virtual false, abstract: false, final false
inline void Clear(::UnityEngine::Rendering::Universal::CameraRenderType  cameraType) ;

/// @brief Method ClearRenderingState, addr 0xb249968, size 0xa50, virtual false, abstract: false, final false
static inline void ClearRenderingState(::UnityEngine::Rendering::IBaseCommandBuffer*  cmd) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method ConfigureCameraColorTarget, addr 0xb245eac, size 0x10, virtual false, abstract: false, final false
inline void ConfigureCameraColorTarget(::UnityEngine::Rendering::RTHandle*  colorTarget) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method ConfigureCameraTarget, addr 0xb245e30, size 0x34, virtual false, abstract: false, final false
inline void ConfigureCameraTarget(::UnityEngine::Rendering::RTHandle*  colorTarget, ::UnityEngine::Rendering::RTHandle*  depthTarget) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method ConfigureCameraTarget, addr 0xb245e64, size 0x48, virtual false, abstract: false, final false
inline void ConfigureCameraTarget(::UnityEngine::Rendering::RTHandle*  colorTarget, ::UnityEngine::Rendering::RTHandle*  depthTarget, ::UnityEngine::Rendering::RTHandle*  resolveTarget) ;

/// [Obsolete("Use RTHandles for colorTarget and depthTarget", true)]
/// @brief Method ConfigureCameraTarget, addr 0xb245de4, size 0x4c, virtual false, abstract: false, final false
inline void ConfigureCameraTarget(::UnityEngine::Rendering::RenderTargetIdentifier  colorTarget, ::UnityEngine::Rendering::RenderTargetIdentifier  depthTarget) ;

/// @brief Method CreateRenderPassHash, addr 0xb2401d0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Hash128 CreateRenderPassHash(::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor  desc, uint32_t  hashIndex) ;

/// @brief Method CreateRenderPassHash, addr 0xb2431f8, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityEngine::Hash128 CreateRenderPassHash(int32_t  width, int32_t  height, int32_t  depthID, int32_t  sample, uint32_t  hashIndex) ;

/// @brief Method Dispose, addr 0xb245bd0, size 0x1fc, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb245dcc, size 0x14, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method DrawGizmos, addr 0xb24d5dc, size 0x4, virtual false, abstract: false, final false
inline void DrawGizmos(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::GizmoSubset  gizmoSubset, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method DrawRenderGraphGizmos, addr 0xb246b18, size 0x4, virtual false, abstract: false, final false
inline void DrawRenderGraphGizmos(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  color, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  depth, ::UnityEngine::Rendering::GizmoSubset  gizmoSubset) ;

/// @brief Method DrawRenderGraphWireOverlay, addr 0xb246b1c, size 0x4, virtual false, abstract: false, final false
inline void DrawRenderGraphWireOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  color) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method DrawWireOverlay, addr 0xb24d5e0, size 0x6c, virtual false, abstract: false, final false
inline void DrawWireOverlay(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method EnableSwapBufferMSAA, addr 0xb24d5d8, size 0x4, virtual true, abstract: false, final false
inline void EnableSwapBufferMSAA(bool  enable) ;

/// @brief Method EndRenderGraphXRRendering, addr 0xb246fb8, size 0x3d4, virtual false, abstract: false, final false
inline void EndRenderGraphXRRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method EndXRRendering, addr 0xb24a748, size 0x1b4, virtual false, abstract: false, final false
inline void EndXRRendering(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData) ;

/// @brief Method EnqueuePass, addr 0xb24a9a4, size 0xbc, virtual false, abstract: false, final false
inline void EnqueuePass(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  pass) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method Execute, addr 0xb248350, size 0x12a0, virtual false, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method ExecuteBlock, addr 0xb24a3b8, size 0x1d0, virtual false, abstract: false, final false
inline void ExecuteBlock(int32_t  blockIndex, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::ScriptableRenderer_RenderBlocks>  renderBlocks, ::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData, bool  submit) ;

/// @brief Method ExecuteNativeRenderPass, addr 0xb2422b8, size 0xb4c, virtual false, abstract: false, final false
inline void ExecuteNativeRenderPass(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method ExecuteRenderPass, addr 0xb24afdc, size 0x4e4, virtual false, abstract: false, final false
inline void ExecuteRenderPass(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method FindAttachmentDescriptorIndexInList, addr 0xb242160, size 0x158, virtual false, abstract: false, final false
static inline int32_t FindAttachmentDescriptorIndexInList(int32_t  attachmentIdx, ::UnityEngine::Rendering::AttachmentDescriptor  attachmentDescriptor, ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>  attachmentDescriptors) ;

/// @brief Method FindAttachmentDescriptorIndexInList, addr 0xb241090, size 0x134, virtual false, abstract: false, final false
static inline int32_t FindAttachmentDescriptorIndexInList(::UnityEngine::Rendering::RenderTargetIdentifier  target, ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>  attachmentDescriptors) ;

/// @brief Method FinishRenderGraphRendering, addr 0xb247b30, size 0x84, virtual false, abstract: false, final false
inline void FinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method FinishRendering, addr 0xb245ec4, size 0x4, virtual true, abstract: false, final false
inline void FinishRendering(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method GetCameraClearFlag, addr 0xb24aac8, size 0x188, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ClearFlag GetCameraClearFlag(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method GetCameraClearFlag, addr 0xb24aa60, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ClearFlag GetCameraClearFlag(::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method GetCameraColorBackBuffer, addr 0xb244f58, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* GetCameraColorBackBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method GetCameraColorFrontBuffer, addr 0xb244f50, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method GetFirstAllocatedRTHandle, addr 0xb2405a4, size 0xdc, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RTHandle* GetFirstAllocatedRTHandle(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  pass) ;

/// @brief Method GetRenderTextureDescriptor, addr 0xb243224, size 0x1e8, virtual false, abstract: false, final false
static inline void GetRenderTextureDescriptor(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::by_ref<::UnityEngine::RenderTextureDescriptor>  targetRT) ;

/// @brief Method GetSubPassAttachmentIndicesCount, addr 0xb242e04, size 0x174, virtual false, abstract: false, final false
static inline uint32_t GetSubPassAttachmentIndicesCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  pass) ;

/// @brief Method GetValidColorAttachmentCount, addr 0xb2430b0, size 0x148, virtual false, abstract: false, final false
static inline uint32_t GetValidColorAttachmentCount(::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>  colorAttachments) ;

/// @brief Method GetValidInputAttachmentCount, addr 0xb243068, size 0x48, virtual false, abstract: false, final false
static inline int32_t GetValidInputAttachmentCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass) ;

/// @brief Method GetValidPassIndexCount, addr 0xb240260, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetValidPassIndexCount(::ArrayW<int32_t>  array) ;

/// @brief Method InitRenderGraphFrame, addr 0xb245ed4, size 0x384, virtual false, abstract: false, final false
inline void InitRenderGraphFrame(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// @brief Method InitializeRenderPassDescriptor, addr 0xb2400c8, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor InitializeRenderPassDescriptor(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass) ;

/// @brief Method InternalFinishRenderingCommon, addr 0xb247bb4, size 0x214, virtual false, abstract: false, final false
inline void InternalFinishRenderingCommon(::UnityEngine::Rendering::CommandBuffer*  cmd, bool  resolveFinalTarget) ;

/// @brief Method InternalFinishRenderingExecute, addr 0xb24a8fc, size 0xa8, virtual false, abstract: false, final false
inline void InternalFinishRenderingExecute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::CommandBuffer*  cmd, bool  resolveFinalTarget) ;

/// @brief Method InternalStartRendering, addr 0xb249784, size 0x1e4, virtual false, abstract: false, final false
inline void InternalStartRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method IsDepthOnlyRenderTexture, addr 0xb241528, size 0x28, virtual false, abstract: false, final false
inline bool IsDepthOnlyRenderTexture(::UnityEngine::RenderTexture*  t) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method IsRenderPassEnabled, addr 0xb24009c, size 0x2c, virtual false, abstract: false, final false
inline bool IsRenderPassEnabled(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass) ;

/// @brief Method IsSceneFilteringEnabled, addr 0xb24cac8, size 0x8, virtual false, abstract: false, final false
inline bool IsSceneFilteringEnabled(::UnityEngine::Camera*  camera) ;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* New_ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData*  data) ;

/// @brief Method OnBeginRenderGraphFrame, addr 0xb245ec8, size 0x4, virtual true, abstract: false, final false
inline void OnBeginRenderGraphFrame() ;

/// @brief Method OnEndRenderGraphFrame, addr 0xb245ed0, size 0x4, virtual true, abstract: false, final false
inline void OnEndRenderGraphFrame() ;

/// @brief Method OnFinishRenderGraphRendering, addr 0xb247dc8, size 0x4, virtual true, abstract: false, final false
inline void OnFinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method OnPreCullRenderPasses, addr 0xb24ac50, size 0xc4, virtual false, abstract: false, final false
inline void OnPreCullRenderPasses(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData) ;

/// @brief Method OnRecordRenderGraph, addr 0xb245ecc, size 0x4, virtual true, abstract: false, final false
inline void OnRecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext  context) ;

/// @brief Method PassHasInputAttachments, addr 0xb2411c4, size 0x3c, virtual false, abstract: false, final false
static inline bool PassHasInputAttachments(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass) ;

/// @brief Method ProcessVFXCameraCommand, addr 0xb246258, size 0x4c0, virtual false, abstract: false, final false
inline void ProcessVFXCameraCommand(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// @brief Method RecordCustomRenderGraphPasses, addr 0xb2480ec, size 0x8, virtual false, abstract: false, final false
inline void RecordCustomRenderGraphPasses(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent  injectionPoint) ;

/// @brief Method RecordCustomRenderGraphPasses, addr 0xb248064, size 0x88, virtual false, abstract: false, final false
inline void RecordCustomRenderGraphPasses(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent  startInjectionPoint, ::UnityEngine::Rendering::Universal::RenderPassEvent  endInjectionPoint) ;

/// @brief Method RecordCustomRenderGraphPassesInEventRange, addr 0xb247dcc, size 0x17c, virtual false, abstract: false, final false
inline void RecordCustomRenderGraphPassesInEventRange(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent  eventStart, ::UnityEngine::Rendering::Universal::RenderPassEvent  eventEnd) ;

/// @brief Method RecordRenderGraph, addr 0xb2476fc, size 0x2d4, virtual false, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext  context) ;

/// @brief Method ReleaseRenderTargets, addr 0xb245de0, size 0x4, virtual true, abstract: false, final false
inline void ReleaseRenderTargets() ;

/// @brief Method ResetNativeRenderPassFrameData, addr 0xb23f788, size 0x148, virtual false, abstract: false, final false
inline void ResetNativeRenderPassFrameData() ;

/// @brief Method SetCameraMatrices, addr 0xb243a94, size 0x108, virtual false, abstract: false, final false
static inline void SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  setInverseMatrices) ;

/// @brief Method SetCameraMatrices, addr 0xb2434f0, size 0x114, virtual false, abstract: false, final false
static inline void SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData, bool  setInverseMatrices) ;

/// @brief Method SetCameraMatrices, addr 0xb243604, size 0x490, virtual false, abstract: false, final false
static inline void SetCameraMatrices(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  setInverseMatrices, bool  isTargetFlipped) ;

/// @brief Method SetEditorTarget, addr 0xb24738c, size 0x370, virtual false, abstract: false, final false
inline void SetEditorTarget(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// @brief Method SetNativeRenderPassAttachmentList, addr 0xb241550, size 0xc10, virtual false, abstract: false, final false
inline void SetNativeRenderPassAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::RTHandle*  passColorAttachment, ::UnityEngine::Rendering::RTHandle*  passDepthAttachment, ::UnityEngine::Rendering::ClearFlag  finalClearFlag, ::UnityEngine::Color  finalClearColor) ;

/// @brief Method SetNativeRenderPassMRTAttachmentList, addr 0xb240680, size 0xa10, virtual false, abstract: false, final false
inline void SetNativeRenderPassMRTAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  needCustomCameraColorClear, ::UnityEngine::Rendering::ClearFlag  cameraClearFlag) ;

/// @brief Method SetPerCameraBillboardProperties, addr 0xb244308, size 0x1bc, virtual false, abstract: false, final false
inline void SetPerCameraBillboardProperties(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method SetPerCameraClippingPlaneProperties, addr 0xb244870, size 0x40, virtual false, abstract: false, final false
inline void SetPerCameraClippingPlaneProperties(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method SetPerCameraClippingPlaneProperties, addr 0xb2448b0, size 0x1d4, virtual false, abstract: false, final false
inline void SetPerCameraClippingPlaneProperties(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>  cameraData, bool  isTargetFlipped) ;

/// @brief Method SetPerCameraProperties, addr 0xb2480f4, size 0x25c, virtual false, abstract: false, final false
inline void SetPerCameraProperties(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method SetPerCameraShaderVariables, addr 0xb243b9c, size 0x58, virtual false, abstract: false, final false
inline void SetPerCameraShaderVariables(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method SetPerCameraShaderVariables, addr 0xb243bf4, size 0x714, virtual false, abstract: false, final false
inline void SetPerCameraShaderVariables(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Vector2Int  cameraTargetSizeCopy, bool  isTargetFlipped) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method SetRenderPassAttachments, addr 0xb24b4c0, size 0x1608, virtual false, abstract: false, final false
inline void SetRenderPassAttachments(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method SetRenderTarget, addr 0xb24d418, size 0x1bc, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RTHandle*  depthAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlags, ::UnityEngine::Color  clearColor) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method SetRenderTarget, addr 0xb24cad0, size 0x488, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorAttachment, ::UnityEngine::Rendering::RTHandle*  depthAttachment, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method SetRenderTarget, addr 0xb24d078, size 0x3a0, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorAttachment, ::UnityEngine::Rendering::RTHandle*  depthAttachment, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method SetRenderTarget, addr 0xb24cf58, size 0x120, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RTHandle*>  colorAttachments, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorAttachmentIDs, ::UnityEngine::Rendering::RTHandle*  depthAttachment, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor) ;

/// @brief Method SetShaderTimeValues, addr 0xb244a84, size 0x480, virtual false, abstract: false, final false
static inline void SetShaderTimeValues(::UnityEngine::Rendering::IBaseCommandBuffer*  cmd, float_t  time, float_t  deltaTime, float_t  smoothDeltaTime) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method Setup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method SetupCullingParameters, addr 0xb245ec0, size 0x4, virtual true, abstract: false, final false
inline void SetupCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData) ;

/// @brief Method SetupInputAttachmentIndices, addr 0xb241200, size 0x1e0, virtual false, abstract: false, final false
inline void SetupInputAttachmentIndices(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  pass) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method SetupLights, addr 0xb245ebc, size 0x4, virtual true, abstract: false, final false
inline void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method SetupNativeRenderPassFrameData, addr 0xb23f8d0, size 0x7cc, virtual false, abstract: false, final false
inline void SetupNativeRenderPassFrameData(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  isRenderPassEnabled) ;

/// @brief Method SetupRenderGraphCameraProperties, addr 0xb246718, size 0x400, virtual false, abstract: false, final false
inline void SetupRenderGraphCameraProperties(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, bool  isTargetBackbuffer) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method SetupRenderPasses, addr 0xb2495f0, size 0x194, virtual false, abstract: false, final false
inline void SetupRenderPasses(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method SetupTransientInputAttachments, addr 0xb2413e0, size 0x148, virtual false, abstract: false, final false
inline void SetupTransientInputAttachments(int32_t  attachmentCount) ;

/// @brief Method SortStable, addr 0xb2479d0, size 0x160, virtual false, abstract: false, final false
static inline void SortStable(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  list) ;

/// @brief Method SupportedCameraStackingTypes, addr 0xb243490, size 0x8, virtual true, abstract: false, final false
inline int32_t SupportedCameraStackingTypes() ;

/// @brief Method SupportsCameraNormals, addr 0xb2434d0, size 0x8, virtual true, abstract: false, final false
inline bool SupportsCameraNormals() ;

/// @brief Method SupportsCameraOpaque, addr 0xb2434c8, size 0x8, virtual true, abstract: false, final false
inline bool SupportsCameraOpaque() ;

/// @brief Method SupportsCameraStackingType, addr 0xb243498, size 0x28, virtual false, abstract: false, final false
inline bool SupportsCameraStackingType(::UnityEngine::Rendering::Universal::CameraRenderType  cameraRenderType) ;

/// @brief Method SupportsMotionVectors, addr 0xb2434c0, size 0x8, virtual true, abstract: false, final false
inline bool SupportsMotionVectors() ;

/// @brief Method SwapColorBuffer, addr 0xb24d5d4, size 0x4, virtual true, abstract: false, final false
inline void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method UpdateFinalStoreActions, addr 0xb2402a0, size 0x304, virtual false, abstract: false, final false
inline void UpdateFinalStoreActions(::ArrayW<int32_t>  currentMergeablePasses, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  isLastMergeableGroup) ;

constexpr ::UnityEngine::Rendering::Universal::DebugHandler* const& __cordl_internal_get__DebugHandler_k__BackingField() const;

constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& __cordl_internal_get__DebugHandler_k__BackingField() ;

constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get__profilingExecute_k__BackingField() const;

constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get__profilingExecute_k__BackingField() ;

constexpr bool const& __cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField() const;

constexpr bool& __cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField() ;

constexpr bool const& __cordl_internal_get__stripShadowsOffVariants_k__BackingField() const;

constexpr bool& __cordl_internal_get__stripShadowsOffVariants_k__BackingField() ;

constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* const& __cordl_internal_get__supportedRenderingFeatures_k__BackingField() const;

constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*& __cordl_internal_get__supportedRenderingFeatures_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> const& __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>& __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField() ;

constexpr bool const& __cordl_internal_get__useDepthPriming_k__BackingField() const;

constexpr bool& __cordl_internal_get__useDepthPriming_k__BackingField() ;

constexpr bool const& __cordl_internal_get_disableNativeRenderPassInFeatures() const;

constexpr bool& __cordl_internal_get_disableNativeRenderPassInFeatures() ;

constexpr bool const& __cordl_internal_get_hasReleasedRTs() const;

constexpr bool& __cordl_internal_get_hasReleasedRTs() ;

constexpr ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor> const& __cordl_internal_get_m_ActiveColorAttachmentDescriptors() const;

constexpr ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>& __cordl_internal_get_m_ActiveColorAttachmentDescriptors() ;

constexpr ::UnityEngine::Rendering::AttachmentDescriptor const& __cordl_internal_get_m_ActiveDepthAttachmentDescriptor() const;

constexpr ::UnityEngine::Rendering::AttachmentDescriptor& __cordl_internal_get_m_ActiveDepthAttachmentDescriptor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* const& __cordl_internal_get_m_ActiveRenderPassQueue() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*& __cordl_internal_get_m_ActiveRenderPassQueue() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraColorTarget() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraColorTarget() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraDepthTarget() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraDepthTarget() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraResolveTarget() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraResolveTarget() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> const& __cordl_internal_get_m_FinalColorStoreAction() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>& __cordl_internal_get_m_FinalColorStoreAction() ;

constexpr ::UnityEngine::Rendering::RenderBufferStoreAction const& __cordl_internal_get_m_FinalDepthStoreAction() const;

constexpr ::UnityEngine::Rendering::RenderBufferStoreAction& __cordl_internal_get_m_FinalDepthStoreAction() ;

constexpr bool const& __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound() const;

constexpr bool& __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound() ;

constexpr bool const& __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound() const;

constexpr bool& __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_m_IsActiveColorAttachmentTransient() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_m_IsActiveColorAttachmentTransient() ;

constexpr bool const& __cordl_internal_get_m_IsPipelineExecuting() const;

constexpr bool& __cordl_internal_get_m_IsPipelineExecuting() ;

constexpr int32_t const& __cordl_internal_get_m_LastBeginSubpassPassIndex() const;

constexpr int32_t& __cordl_internal_get_m_LastBeginSubpassPassIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,::ArrayW<int32_t>>* const& __cordl_internal_get_m_MergeableRenderPassesMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,::ArrayW<int32_t>>*& __cordl_internal_get_m_MergeableRenderPassesMap() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get_m_MergeableRenderPassesMapArrays() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get_m_MergeableRenderPassesMapArrays() ;

constexpr ::ArrayW<::UnityEngine::Hash128> const& __cordl_internal_get_m_PassIndexToPassHash() const;

constexpr ::ArrayW<::UnityEngine::Hash128>& __cordl_internal_get_m_PassIndexToPassHash() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,int32_t>* const& __cordl_internal_get_m_RenderPassesAttachmentCount() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,int32_t>*& __cordl_internal_get_m_RenderPassesAttachmentCount() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* const& __cordl_internal_get_m_RendererFeatures() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*& __cordl_internal_get_m_RendererFeatures() ;

constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization const& __cordl_internal_get_m_StoreActionsOptimizationSetting() const;

constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization& __cordl_internal_get_m_StoreActionsOptimizationSetting() ;

constexpr int32_t const& __cordl_internal_get_m_firstPassIndexOfLastMergeableGroup() const;

constexpr int32_t& __cordl_internal_get_m_firstPassIndexOfLastMergeableGroup() ;

constexpr ::UnityEngine::Rendering::ContextContainer* const& __cordl_internal_get_m_frameData() const;

constexpr ::UnityEngine::Rendering::ContextContainer*& __cordl_internal_get_m_frameData() ;

constexpr bool const& __cordl_internal_get_useRenderPassEnabled() const;

constexpr bool& __cordl_internal_get_useRenderPassEnabled() ;

constexpr void __cordl_internal_set__DebugHandler_k__BackingField(::UnityEngine::Rendering::Universal::DebugHandler*  value) ;

constexpr void __cordl_internal_set__profilingExecute_k__BackingField(::UnityEngine::Rendering::ProfilingSampler*  value) ;

constexpr void __cordl_internal_set__stripAdditionalLightOffVariants_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__stripShadowsOffVariants_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__supportedRenderingFeatures_k__BackingField(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*  value) ;

constexpr void __cordl_internal_set__unsupportedGraphicsDeviceTypes_k__BackingField(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>  value) ;

constexpr void __cordl_internal_set__useDepthPriming_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_disableNativeRenderPassInFeatures(bool  value) ;

constexpr void __cordl_internal_set_hasReleasedRTs(bool  value) ;

constexpr void __cordl_internal_set_m_ActiveColorAttachmentDescriptors(::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>  value) ;

constexpr void __cordl_internal_set_m_ActiveDepthAttachmentDescriptor(::UnityEngine::Rendering::AttachmentDescriptor  value) ;

constexpr void __cordl_internal_set_m_ActiveRenderPassQueue(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  value) ;

constexpr void __cordl_internal_set_m_CameraColorTarget(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_CameraDepthTarget(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_CameraResolveTarget(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_FinalColorStoreAction(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  value) ;

constexpr void __cordl_internal_set_m_FinalDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction  value) ;

constexpr void __cordl_internal_set_m_FirstTimeCameraColorTargetIsBound(bool  value) ;

constexpr void __cordl_internal_set_m_FirstTimeCameraDepthTargetIsBound(bool  value) ;

constexpr void __cordl_internal_set_m_IsActiveColorAttachmentTransient(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_m_IsPipelineExecuting(bool  value) ;

constexpr void __cordl_internal_set_m_LastBeginSubpassPassIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_MergeableRenderPassesMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,::ArrayW<int32_t>>*  value) ;

constexpr void __cordl_internal_set_m_MergeableRenderPassesMapArrays(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set_m_PassIndexToPassHash(::ArrayW<::UnityEngine::Hash128>  value) ;

constexpr void __cordl_internal_set_m_RenderPassesAttachmentCount(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,int32_t>*  value) ;

constexpr void __cordl_internal_set_m_RendererFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  value) ;

constexpr void __cordl_internal_set_m_StoreActionsOptimizationSetting(::UnityEngine::Rendering::Universal::StoreActionsOptimization  value) ;

constexpr void __cordl_internal_set_m_firstPassIndexOfLastMergeableGroup(int32_t  value) ;

constexpr void __cordl_internal_set_m_frameData(::UnityEngine::Rendering::ContextContainer*  value) ;

constexpr void __cordl_internal_set_useRenderPassEnabled(bool  value) ;

/// @brief Method .ctor, addr 0xb245014, size 0x934, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData*  data) ;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* getStaticF_current() ;

static inline ::UnityEngine::Rendering::RTHandle* getStaticF_k_CameraTarget() ;

static inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> getStaticF_m_ActiveColorAttachmentIDs() ;

static inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> getStaticF_m_ActiveColorAttachments() ;

static inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> getStaticF_m_ActiveColorStoreActions() ;

static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_ActiveDepthAttachment() ;

static inline ::UnityEngine::Rendering::RenderBufferStoreAction getStaticF_m_ActiveDepthStoreAction() ;

static inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>> getStaticF_m_TrimmedColorAttachmentCopies() ;

static inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> getStaticF_m_TrimmedColorAttachmentCopyIDs() ;

static inline bool getStaticF_m_UseOptimizedStoreActions() ;

static inline ::ArrayW<::UnityEngine::Plane> getStaticF_s_Planes() ;

static inline ::ArrayW<::UnityEngine::Vector4> getStaticF_s_VectorPlanes() ;

/// [CompilerGenerated]
/// @brief Method get_DebugHandler, addr 0xb2434e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::DebugHandler* get_DebugHandler() ;

/// @brief Method get_activeRenderPassQueue, addr 0xb244fb4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* get_activeRenderPassQueue() ;

/// @brief Method get_cameraColorTarget, addr 0xb244f04, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraColorTarget() ;

/// @brief Method get_cameraColorTargetHandle, addr 0xb23ef88, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* get_cameraColorTargetHandle() ;

/// @brief Method get_cameraDepth, addr 0xb23f760, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepth() ;

/// @brief Method get_cameraDepthTarget, addr 0xb244f60, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepthTarget() ;

/// @brief Method get_cameraDepthTargetHandle, addr 0xb24340c, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* get_cameraDepthTargetHandle() ;

/// @brief Method get_frameData, addr 0xb244fdc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ContextContainer* get_frameData() ;

/// [CompilerGenerated]
/// @brief Method get_profilingExecute, addr 0xb2434d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ProfilingSampler* get_profilingExecute() ;

/// @brief Method get_rendererFeatures, addr 0xb244fac, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* get_rendererFeatures() ;

/// [CompilerGenerated]
/// @brief Method get_stripAdditionalLightOffVariants, addr 0xb245004, size 0x8, virtual false, abstract: false, final false
inline bool get_stripAdditionalLightOffVariants() ;

/// [CompilerGenerated]
/// @brief Method get_stripShadowsOffVariants, addr 0xb244ff4, size 0x8, virtual false, abstract: false, final false
inline bool get_stripShadowsOffVariants() ;

/// [CompilerGenerated]
/// @brief Method get_supportedRenderingFeatures, addr 0xb244fbc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* get_supportedRenderingFeatures() ;

/// @brief Method get_supportsGPUOcclusion, addr 0xb24d7f0, size 0x8, virtual true, abstract: false, final false
inline bool get_supportsGPUOcclusion() ;

/// @brief Method get_supportsNativeRenderPassRendergraphCompiler, addr 0xb24d7e8, size 0x8, virtual true, abstract: false, final false
inline bool get_supportsNativeRenderPassRendergraphCompiler() ;

/// [CompilerGenerated]
/// @brief Method get_unsupportedGraphicsDeviceTypes, addr 0xb244fcc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> get_unsupportedGraphicsDeviceTypes() ;

/// [CompilerGenerated]
/// @brief Method get_useDepthPriming, addr 0xb244fe4, size 0x8, virtual false, abstract: false, final false
inline bool get_useDepthPriming() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_current(::UnityEngine::Rendering::Universal::ScriptableRenderer*  value) ;

static inline void setStaticF_k_CameraTarget(::UnityEngine::Rendering::RTHandle*  value) ;

static inline void setStaticF_m_ActiveColorAttachmentIDs(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value) ;

static inline void setStaticF_m_ActiveColorAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*>  value) ;

static inline void setStaticF_m_ActiveColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  value) ;

static inline void setStaticF_m_ActiveDepthAttachment(::UnityEngine::Rendering::RTHandle*  value) ;

static inline void setStaticF_m_ActiveDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction  value) ;

static inline void setStaticF_m_TrimmedColorAttachmentCopies(::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>>  value) ;

static inline void setStaticF_m_TrimmedColorAttachmentCopyIDs(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>  value) ;

static inline void setStaticF_m_UseOptimizedStoreActions(bool  value) ;

static inline void setStaticF_s_Planes(::ArrayW<::UnityEngine::Plane>  value) ;

static inline void setStaticF_s_VectorPlanes(::ArrayW<::UnityEngine::Vector4>  value) ;

/// [CompilerGenerated]
/// @brief Method set_profilingExecute, addr 0xb2434e0, size 0x8, virtual false, abstract: false, final false
inline void set_profilingExecute(::UnityEngine::Rendering::ProfilingSampler*  value) ;

/// [CompilerGenerated]
/// @brief Method set_stripAdditionalLightOffVariants, addr 0xb24500c, size 0x8, virtual false, abstract: false, final false
inline void set_stripAdditionalLightOffVariants(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_stripShadowsOffVariants, addr 0xb244ffc, size 0x8, virtual false, abstract: false, final false
inline void set_stripShadowsOffVariants(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_supportedRenderingFeatures, addr 0xb244fc4, size 0x8, virtual false, abstract: false, final false
inline void set_supportedRenderingFeatures(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*  value) ;

/// [CompilerGenerated]
/// @brief Method set_unsupportedGraphicsDeviceTypes, addr 0xb244fd4, size 0x8, virtual false, abstract: false, final false
inline void set_unsupportedGraphicsDeviceTypes(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>  value) ;

/// [CompilerGenerated]
/// @brief Method set_useDepthPriming, addr 0xb244fec, size 0x8, virtual false, abstract: false, final false
inline void set_useDepthPriming(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer(ScriptableRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer(ScriptableRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18378};

/// @brief Field kRenderPassMapSize offset 0xffffffff size 0x4
static constexpr int32_t  kRenderPassMapSize{static_cast<int32_t>(0xa)};

/// @brief Field kRenderPassMaxCount offset 0xffffffff size 0x4
static constexpr int32_t  kRenderPassMaxCount{static_cast<int32_t>(0x14)};

/// @brief Field k_RenderPassBlockCount offset 0xffffffff size 0x4
static constexpr int32_t  k_RenderPassBlockCount{static_cast<int32_t>(0x4)};

/// @brief Field m_LastBeginSubpassPassIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_LastBeginSubpassPassIndex;

/// @brief Field m_MergeableRenderPassesMap, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,::ArrayW<int32_t>>*  ___m_MergeableRenderPassesMap;

/// @brief Field m_MergeableRenderPassesMapArrays, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ___m_MergeableRenderPassesMapArrays;

/// @brief Field m_PassIndexToPassHash, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Hash128>  ___m_PassIndexToPassHash;

/// @brief Field m_RenderPassesAttachmentCount, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,int32_t>*  ___m_RenderPassesAttachmentCount;

/// @brief Field m_firstPassIndexOfLastMergeableGroup, offset: 0x38, size: 0x4, def value: None
 int32_t  ___m_firstPassIndexOfLastMergeableGroup;

/// @brief Field m_ActiveColorAttachmentDescriptors, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>  ___m_ActiveColorAttachmentDescriptors;

/// @brief Field m_ActiveDepthAttachmentDescriptor, offset: 0x48, size: 0x78, def value: None
 ::UnityEngine::Rendering::AttachmentDescriptor  ___m_ActiveDepthAttachmentDescriptor;

/// @brief Field m_IsActiveColorAttachmentTransient, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<bool>  ___m_IsActiveColorAttachmentTransient;

/// @brief Field m_FinalColorStoreAction, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  ___m_FinalColorStoreAction;

/// @brief Field m_FinalDepthStoreAction, offset: 0xd0, size: 0x4, def value: None
 ::UnityEngine::Rendering::RenderBufferStoreAction  ___m_FinalDepthStoreAction;

/// [CompilerGenerated]
/// @brief Field <profilingExecute>k__BackingField, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Rendering::ProfilingSampler*  ____profilingExecute_k__BackingField;

/// @brief Field hasReleasedRTs, offset: 0xe0, size: 0x1, def value: None
 bool  ___hasReleasedRTs;

/// [CompilerGenerated]
/// @brief Field <DebugHandler>k__BackingField, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::DebugHandler*  ____DebugHandler_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <supportedRenderingFeatures>k__BackingField, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*  ____supportedRenderingFeatures_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <unsupportedGraphicsDeviceTypes>k__BackingField, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>  ____unsupportedGraphicsDeviceTypes_k__BackingField;

/// @brief Field m_StoreActionsOptimizationSetting, offset: 0x100, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::StoreActionsOptimization  ___m_StoreActionsOptimizationSetting;

/// @brief Field m_ActiveRenderPassQueue, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  ___m_ActiveRenderPassQueue;

/// @brief Field m_RendererFeatures, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  ___m_RendererFeatures;

/// @brief Field m_CameraColorTarget, offset: 0x118, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_CameraColorTarget;

/// @brief Field m_CameraDepthTarget, offset: 0x120, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_CameraDepthTarget;

/// @brief Field m_CameraResolveTarget, offset: 0x128, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_CameraResolveTarget;

/// @brief Field m_FirstTimeCameraColorTargetIsBound, offset: 0x130, size: 0x1, def value: None
 bool  ___m_FirstTimeCameraColorTargetIsBound;

/// @brief Field m_FirstTimeCameraDepthTargetIsBound, offset: 0x131, size: 0x1, def value: None
 bool  ___m_FirstTimeCameraDepthTargetIsBound;

/// @brief Field m_IsPipelineExecuting, offset: 0x132, size: 0x1, def value: None
 bool  ___m_IsPipelineExecuting;

/// @brief Field disableNativeRenderPassInFeatures, offset: 0x133, size: 0x1, def value: None
 bool  ___disableNativeRenderPassInFeatures;

/// @brief Field useRenderPassEnabled, offset: 0x134, size: 0x1, def value: None
 bool  ___useRenderPassEnabled;

/// @brief Field m_frameData, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::Rendering::ContextContainer*  ___m_frameData;

/// [CompilerGenerated]
/// @brief Field <useDepthPriming>k__BackingField, offset: 0x140, size: 0x1, def value: None
 bool  ____useDepthPriming_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <stripShadowsOffVariants>k__BackingField, offset: 0x141, size: 0x1, def value: None
 bool  ____stripShadowsOffVariants_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <stripAdditionalLightOffVariants>k__BackingField, offset: 0x142, size: 0x1, def value: None
 bool  ____stripAdditionalLightOffVariants_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_LastBeginSubpassPassIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_MergeableRenderPassesMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_MergeableRenderPassesMapArrays) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_PassIndexToPassHash) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_RenderPassesAttachmentCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_firstPassIndexOfLastMergeableGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_ActiveColorAttachmentDescriptors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_ActiveDepthAttachmentDescriptor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_IsActiveColorAttachmentTransient) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FinalColorStoreAction) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FinalDepthStoreAction) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____profilingExecute_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___hasReleasedRTs) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____DebugHandler_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____supportedRenderingFeatures_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____unsupportedGraphicsDeviceTypes_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_StoreActionsOptimizationSetting) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_ActiveRenderPassQueue) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_RendererFeatures) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraColorTarget) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraDepthTarget) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraResolveTarget) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FirstTimeCameraColorTargetIsBound) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FirstTimeCameraDepthTargetIsBound) == 0x131, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_IsPipelineExecuting) == 0x132, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___disableNativeRenderPassInFeatures) == 0x133, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___useRenderPassEnabled) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_frameData) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____useDepthPriming_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____stripShadowsOffVariants_k__BackingField) == 0x141, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____stripAdditionalLightOffVariants_k__BackingField) == 0x142, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer) == 0x148, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/<>c
class CORDL_TYPE ScriptableRenderer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*  __9;

/// @brief Field <>9__140_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__140_0, put=setStaticF___9__140_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  __9__140_0;

/// @brief Field <>9__142_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__142_0, put=setStaticF___9__142_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  __9__142_0;

/// @brief Field <>9__143_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__143_0, put=setStaticF___9__143_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__143_0;

/// @brief Field <>9__149_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__149_0, put=setStaticF___9__149_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__149_0;

/// @brief Field <>9__151_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__151_0, put=setStaticF___9__151_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__151_0;

/// @brief Field <>9__153_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__153_0, put=setStaticF___9__153_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  __9__153_0;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer___c* New_ctor() ;

/// @brief Method <BeginRenderGraphXRRendering>b__149_0, addr 0xb24ef14, size 0x17c, virtual false, abstract: false, final false
inline void _BeginRenderGraphXRRendering_b__149_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method <EndRenderGraphXRRendering>b__151_0, addr 0xb24f10c, size 0x170, virtual false, abstract: false, final false
inline void _EndRenderGraphXRRendering_b__151_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method <InitRenderGraphFrame>b__140_0, addr 0xb24ec04, size 0xb0, virtual false, abstract: false, final false
inline void _InitRenderGraphFrame_b__140_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  rgContext) ;

/// @brief Method <ProcessVFXCameraCommand>b__142_0, addr 0xb24ecb4, size 0xf4, virtual false, abstract: false, final false
inline void _ProcessVFXCameraCommand_b__142_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context) ;

/// @brief Method <SetEditorTarget>b__153_0, addr 0xb24f27c, size 0xac, virtual false, abstract: false, final false
inline void _SetEditorTarget_b__153_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context) ;

/// @brief Method <SetupRenderGraphCameraProperties>b__143_0, addr 0xb24eda8, size 0x16c, virtual false, abstract: false, final false
inline void _SetupRenderGraphCameraProperties_b__143_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method .ctor, addr 0xb24ebfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* getStaticF___9__140_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* getStaticF___9__142_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__143_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__149_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__151_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* getStaticF___9__153_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::Universal::ScriptableRenderer___c*  value) ;

static inline void setStaticF___9__140_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value) ;

static inline void setStaticF___9__142_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value) ;

static inline void setStaticF___9__143_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__149_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__151_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__153_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer___c(ScriptableRenderer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer___c(ScriptableRenderer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Vector2Int
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/PassData
class CORDL_TYPE ScriptableRenderer_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field cameraData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraData, put=__cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData;

/// @brief Field cameraTargetSizeCopy, offset 0x24, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraTargetSizeCopy, put=__cordl_internal_set_cameraTargetSizeCopy)) ::UnityEngine::Vector2Int  cameraTargetSizeCopy;

/// @brief Field isTargetBackbuffer, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTargetBackbuffer, put=__cordl_internal_set_isTargetBackbuffer)) bool  isTargetBackbuffer;

/// @brief Field renderer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderer, put=__cordl_internal_set_renderer)) ::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_cameraTargetSizeCopy() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_cameraTargetSizeCopy() ;

constexpr bool const& __cordl_internal_get_isTargetBackbuffer() const;

constexpr bool& __cordl_internal_get_isTargetBackbuffer() ;

constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer* const& __cordl_internal_get_renderer() const;

constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& __cordl_internal_get_renderer() ;

constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value) ;

constexpr void __cordl_internal_set_cameraTargetSizeCopy(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set_isTargetBackbuffer(bool  value) ;

constexpr void __cordl_internal_set_renderer(::UnityEngine::Rendering::Universal::ScriptableRenderer*  value) ;

/// @brief Method .ctor, addr 0xb24e800, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_PassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer_PassData(ScriptableRenderer_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_PassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer_PassData(ScriptableRenderer_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18374};

/// @brief Field renderer, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::ScriptableRenderer*  ___renderer;

/// @brief Field cameraData, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalCameraData*  ___cameraData;

/// @brief Field isTargetBackbuffer, offset: 0x20, size: 0x1, def value: None
 bool  ___isTargetBackbuffer;

/// @brief Field cameraTargetSizeCopy, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___cameraTargetSizeCopy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___renderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___cameraData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___isTargetBackbuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___cameraTargetSizeCopy) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/DummyData
class CORDL_TYPE ScriptableRenderer_DummyData : public ::System::Object {
public:
// Declarations
static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData* New_ctor() ;

/// @brief Method .ctor, addr 0xb24e7f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_DummyData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DummyData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer_DummyData(ScriptableRenderer_DummyData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DummyData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer_DummyData(ScriptableRenderer_DummyData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18373};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/EndXRPassData
class CORDL_TYPE ScriptableRenderer_EndXRPassData : public ::System::Object {
public:
// Declarations
/// @brief Field cameraData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraData, put=__cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData() ;

constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value) ;

/// @brief Method .ctor, addr 0xb24e7f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_EndXRPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_EndXRPassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer_EndXRPassData(ScriptableRenderer_EndXRPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_EndXRPassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer_EndXRPassData(ScriptableRenderer_EndXRPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18372};

/// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalCameraData*  ___cameraData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/BeginXRPassData
class CORDL_TYPE ScriptableRenderer_BeginXRPassData : public ::System::Object {
public:
// Declarations
/// @brief Field cameraData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraData, put=__cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData() ;

constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value) ;

/// @brief Method .ctor, addr 0xb24e7e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_BeginXRPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_BeginXRPassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer_BeginXRPassData(ScriptableRenderer_BeginXRPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_BeginXRPassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer_BeginXRPassData(ScriptableRenderer_BeginXRPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18371};

/// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalCameraData*  ___cameraData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/DrawWireOverlayPassData
class CORDL_TYPE ScriptableRenderer_DrawWireOverlayPassData : public ::System::Object {
public:
// Declarations
/// @brief Field wireOverlayList, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_wireOverlayList, put=__cordl_internal_set_wireOverlayList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  wireOverlayList;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_wireOverlayList() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_wireOverlayList() ;

constexpr void __cordl_internal_set_wireOverlayList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  value) ;

/// @brief Method .ctor, addr 0xb24e7e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_DrawWireOverlayPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawWireOverlayPassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer_DrawWireOverlayPassData(ScriptableRenderer_DrawWireOverlayPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawWireOverlayPassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer_DrawWireOverlayPassData(ScriptableRenderer_DrawWireOverlayPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18370};

/// @brief Field wireOverlayList, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  ___wireOverlayList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData, ___wireOverlayList) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/DrawGizmosPassData
class CORDL_TYPE ScriptableRenderer_DrawGizmosPassData : public ::System::Object {
public:
// Declarations
/// @brief Field color, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  color;

/// @brief Field depth, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_depth, put=__cordl_internal_set_depth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  depth;

/// @brief Field gizmoRenderList, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_gizmoRenderList, put=__cordl_internal_set_gizmoRenderList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  gizmoRenderList;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_color() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depth() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depth() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_gizmoRenderList() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_gizmoRenderList() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_depth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_gizmoRenderList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  value) ;

/// @brief Method .ctor, addr 0xb24e7d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_DrawGizmosPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawGizmosPassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer_DrawGizmosPassData(ScriptableRenderer_DrawGizmosPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawGizmosPassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer_DrawGizmosPassData(ScriptableRenderer_DrawGizmosPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18369};

/// @brief Field gizmoRenderList, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  ___gizmoRenderList;

/// @brief Field color, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___color;

/// @brief Field depth, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___depth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData, ___gizmoRenderList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData, ___color) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData, ___depth) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.VFX.VFXCameraXRSettings
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/VFXProcessCameraPassData
class CORDL_TYPE ScriptableRenderer_VFXProcessCameraPassData : public ::System::Object {
public:
// Declarations
/// @brief Field camera, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_camera, put=__cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

/// @brief Field cameraXRSettings, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_cameraXRSettings, put=__cordl_internal_set_cameraXRSettings)) ::UnityEngine::VFX::VFXCameraXRSettings  cameraXRSettings;

/// @brief Field renderingData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderingData, put=__cordl_internal_set_renderingData)) ::UnityEngine::Rendering::Universal::UniversalRenderingData*  renderingData;

/// @brief Field xrPass, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_xrPass, put=__cordl_internal_set_xrPass)) ::UnityEngine::Experimental::Rendering::XRPass*  xrPass;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera() ;

constexpr ::UnityEngine::VFX::VFXCameraXRSettings const& __cordl_internal_get_cameraXRSettings() const;

constexpr ::UnityEngine::VFX::VFXCameraXRSettings& __cordl_internal_get_cameraXRSettings() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData* const& __cordl_internal_get_renderingData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData*& __cordl_internal_get_renderingData() ;

constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xrPass() const;

constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xrPass() ;

constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_cameraXRSettings(::UnityEngine::VFX::VFXCameraXRSettings  value) ;

constexpr void __cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::UniversalRenderingData*  value) ;

constexpr void __cordl_internal_set_xrPass(::UnityEngine::Experimental::Rendering::XRPass*  value) ;

/// @brief Method .ctor, addr 0xb24e7d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_VFXProcessCameraPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_VFXProcessCameraPassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer_VFXProcessCameraPassData(ScriptableRenderer_VFXProcessCameraPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_VFXProcessCameraPassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer_VFXProcessCameraPassData(ScriptableRenderer_VFXProcessCameraPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18368};

/// @brief Field renderingData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalRenderingData*  ___renderingData;

/// @brief Field camera, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___camera;

/// @brief Field cameraXRSettings, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::VFX::VFXCameraXRSettings  ___cameraXRSettings;

/// @brief Field xrPass, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Experimental::Rendering::XRPass*  ___xrPass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData, ___renderingData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData, ___camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData, ___cameraXRSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData, ___xrPass) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassBlock
class CORDL_TYPE ScriptableRenderer_RenderPassBlock : public ::System::Object {
public:
// Declarations
/// @brief Field AfterRendering, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AfterRendering, put=setStaticF_AfterRendering)) int32_t  AfterRendering;

/// @brief Field BeforeRendering, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BeforeRendering, put=setStaticF_BeforeRendering)) int32_t  BeforeRendering;

/// @brief Field MainRenderingOpaque, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MainRenderingOpaque, put=setStaticF_MainRenderingOpaque)) int32_t  MainRenderingOpaque;

/// @brief Field MainRenderingTransparent, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MainRenderingTransparent, put=setStaticF_MainRenderingTransparent)) int32_t  MainRenderingTransparent;

static inline int32_t getStaticF_AfterRendering() ;

static inline int32_t getStaticF_BeforeRendering() ;

static inline int32_t getStaticF_MainRenderingOpaque() ;

static inline int32_t getStaticF_MainRenderingTransparent() ;

static inline void setStaticF_AfterRendering(int32_t  value) ;

static inline void setStaticF_BeforeRendering(int32_t  value) ;

static inline void setStaticF_MainRenderingOpaque(int32_t  value) ;

static inline void setStaticF_MainRenderingTransparent(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_RenderPassBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderPassBlock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer_RenderPassBlock(ScriptableRenderer_RenderPassBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderPassBlock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer_RenderPassBlock(ScriptableRenderer_RenderPassBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18367};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
class CORDL_TYPE ScriptableRenderer_RenderingFeatures : public ::System::Object {
public:
// Declarations
/// @brief Field <cameraStacking>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__cameraStacking_k__BackingField, put=__cordl_internal_set__cameraStacking_k__BackingField)) bool  _cameraStacking_k__BackingField;

/// @brief Field <msaa>k__BackingField, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__msaa_k__BackingField, put=__cordl_internal_set__msaa_k__BackingField)) bool  _msaa_k__BackingField;

/// @brief [Obsolete("cameraStacking has been deprecated use SupportedCameraRenderTypes() in ScriptableRenderer instead.", true)]
 __declspec(property(get=get_cameraStacking, put=set_cameraStacking)) bool  cameraStacking;

 __declspec(property(get=get_msaa, put=set_msaa)) bool  msaa;

static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* New_ctor() ;

constexpr bool const& __cordl_internal_get__cameraStacking_k__BackingField() const;

constexpr bool& __cordl_internal_get__cameraStacking_k__BackingField() ;

constexpr bool const& __cordl_internal_get__msaa_k__BackingField() const;

constexpr bool& __cordl_internal_get__msaa_k__BackingField() ;

constexpr void __cordl_internal_set__cameraStacking_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__msaa_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xb24e770, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_cameraStacking, addr 0xb24e750, size 0x8, virtual false, abstract: false, final false
inline bool get_cameraStacking() ;

/// [CompilerGenerated]
/// @brief Method get_msaa, addr 0xb24e760, size 0x8, virtual false, abstract: false, final false
inline bool get_msaa() ;

/// [CompilerGenerated]
/// @brief Method set_cameraStacking, addr 0xb24e758, size 0x8, virtual false, abstract: false, final false
inline void set_cameraStacking(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_msaa, addr 0xb24e768, size 0x8, virtual false, abstract: false, final false
inline void set_msaa(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_RenderingFeatures() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderingFeatures", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer_RenderingFeatures(ScriptableRenderer_RenderingFeatures && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderingFeatures", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer_RenderingFeatures(ScriptableRenderer_RenderingFeatures const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18366};

/// [CompilerGenerated]
/// @brief Field <cameraStacking>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____cameraStacking_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <msaa>k__BackingField, offset: 0x11, size: 0x1, def value: None
 bool  ____msaa_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures, ____cameraStacking_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures, ____msaa_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling
class CORDL_TYPE ScriptableRenderer_Profiling : public ::System::Object {
public:
// Declarations
using RenderBlock = ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock;

using RenderPass = ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass;

/// @brief Field addRenderPasses, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_addRenderPasses, put=setStaticF_addRenderPasses)) ::UnityEngine::Rendering::ProfilingSampler*  addRenderPasses;

/// @brief Field beginXRRendering, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_beginXRRendering, put=setStaticF_beginXRRendering)) ::UnityEngine::Rendering::ProfilingSampler*  beginXRRendering;

/// @brief Field clearRenderingState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_clearRenderingState, put=setStaticF_clearRenderingState)) ::UnityEngine::Rendering::ProfilingSampler*  clearRenderingState;

/// @brief Field drawGizmos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_drawGizmos, put=setStaticF_drawGizmos)) ::UnityEngine::Rendering::ProfilingSampler*  drawGizmos;

/// @brief Field drawWireOverlay, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_drawWireOverlay, put=setStaticF_drawWireOverlay)) ::UnityEngine::Rendering::ProfilingSampler*  drawWireOverlay;

/// @brief Field endXRRendering, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_endXRRendering, put=setStaticF_endXRRendering)) ::UnityEngine::Rendering::ProfilingSampler*  endXRRendering;

/// @brief Field execute, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_execute, put=setStaticF_execute)) ::UnityEngine::Rendering::ProfilingSampler*  execute;

/// @brief Field initRenderGraphFrame, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initRenderGraphFrame, put=setStaticF_initRenderGraphFrame)) ::UnityEngine::Rendering::ProfilingSampler*  initRenderGraphFrame;

/// @brief Field internalFinishRenderingCommon, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_internalFinishRenderingCommon, put=setStaticF_internalFinishRenderingCommon)) ::UnityEngine::Rendering::ProfilingSampler*  internalFinishRenderingCommon;

/// @brief Field internalStartRendering, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_internalStartRendering, put=setStaticF_internalStartRendering)) ::UnityEngine::Rendering::ProfilingSampler*  internalStartRendering;

/// @brief Field recordRenderGraph, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_recordRenderGraph, put=setStaticF_recordRenderGraph)) ::UnityEngine::Rendering::ProfilingSampler*  recordRenderGraph;

/// @brief Field setAttachmentList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setAttachmentList, put=setStaticF_setAttachmentList)) ::UnityEngine::Rendering::ProfilingSampler*  setAttachmentList;

/// @brief Field setEditorTarget, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setEditorTarget, put=setStaticF_setEditorTarget)) ::UnityEngine::Rendering::ProfilingSampler*  setEditorTarget;

/// @brief Field setMRTAttachmentsList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setMRTAttachmentsList, put=setStaticF_setMRTAttachmentsList)) ::UnityEngine::Rendering::ProfilingSampler*  setMRTAttachmentsList;

/// @brief Field setPerCameraShaderVariables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setPerCameraShaderVariables, put=setStaticF_setPerCameraShaderVariables)) ::UnityEngine::Rendering::ProfilingSampler*  setPerCameraShaderVariables;

/// @brief Field setupCamera, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setupCamera, put=setStaticF_setupCamera)) ::UnityEngine::Rendering::ProfilingSampler*  setupCamera;

/// @brief Field setupFrameData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setupFrameData, put=setStaticF_setupFrameData)) ::UnityEngine::Rendering::ProfilingSampler*  setupFrameData;

/// @brief Field setupLights, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setupLights, put=setStaticF_setupLights)) ::UnityEngine::Rendering::ProfilingSampler*  setupLights;

/// @brief Field setupRenderPasses, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setupRenderPasses, put=setStaticF_setupRenderPasses)) ::UnityEngine::Rendering::ProfilingSampler*  setupRenderPasses;

/// @brief Field sortRenderPasses, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sortRenderPasses, put=setStaticF_sortRenderPasses)) ::UnityEngine::Rendering::ProfilingSampler*  sortRenderPasses;

/// @brief Field vfxProcessCamera, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vfxProcessCamera, put=setStaticF_vfxProcessCamera)) ::UnityEngine::Rendering::ProfilingSampler*  vfxProcessCamera;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_addRenderPasses() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beginXRRendering() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_clearRenderingState() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_drawGizmos() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_drawWireOverlay() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_endXRRendering() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_execute() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initRenderGraphFrame() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_internalFinishRenderingCommon() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_internalStartRendering() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_recordRenderGraph() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setAttachmentList() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setEditorTarget() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setMRTAttachmentsList() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setPerCameraShaderVariables() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupCamera() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupFrameData() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupLights() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupRenderPasses() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_sortRenderPasses() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_vfxProcessCamera() ;

static inline void setStaticF_addRenderPasses(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_beginXRRendering(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_clearRenderingState(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_drawGizmos(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_drawWireOverlay(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_endXRRendering(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_execute(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_initRenderGraphFrame(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_internalFinishRenderingCommon(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_internalStartRendering(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_recordRenderGraph(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setAttachmentList(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setEditorTarget(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setMRTAttachmentsList(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setPerCameraShaderVariables(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setupCamera(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setupFrameData(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setupLights(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setupRenderPasses(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_sortRenderPasses(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_vfxProcessCamera(::UnityEngine::Rendering::ProfilingSampler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_Profiling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_Profiling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRenderer_Profiling(ScriptableRenderer_Profiling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_Profiling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRenderer_Profiling(ScriptableRenderer_Profiling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18364};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"ScriptableRenderer"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderPass
class CORDL_TYPE Profiling_ScriptableRenderer_RenderPass : public ::System::Object {
public:
// Declarations
/// @brief Field configure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_configure, put=setStaticF_configure)) ::UnityEngine::Rendering::ProfilingSampler*  configure;

/// @brief Field setRenderPassAttachments, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setRenderPassAttachments, put=setStaticF_setRenderPassAttachments)) ::UnityEngine::Rendering::ProfilingSampler*  setRenderPassAttachments;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_configure() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setRenderPassAttachments() ;

static inline void setStaticF_configure(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_setRenderPassAttachments(::UnityEngine::Rendering::ProfilingSampler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Profiling_ScriptableRenderer_RenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Profiling_ScriptableRenderer_RenderPass", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Profiling_ScriptableRenderer_RenderPass(Profiling_ScriptableRenderer_RenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Profiling_ScriptableRenderer_RenderPass", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Profiling_ScriptableRenderer_RenderPass(Profiling_ScriptableRenderer_RenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18363};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"ScriptableRenderPass"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderBlock
class CORDL_TYPE Profiling_ScriptableRenderer_RenderBlock : public ::System::Object {
public:
// Declarations
/// @brief Field afterRendering, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_afterRendering, put=setStaticF_afterRendering)) ::UnityEngine::Rendering::ProfilingSampler*  afterRendering;

/// @brief Field beforeRendering, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_beforeRendering, put=setStaticF_beforeRendering)) ::UnityEngine::Rendering::ProfilingSampler*  beforeRendering;

/// @brief Field mainRenderingOpaque, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mainRenderingOpaque, put=setStaticF_mainRenderingOpaque)) ::UnityEngine::Rendering::ProfilingSampler*  mainRenderingOpaque;

/// @brief Field mainRenderingTransparent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mainRenderingTransparent, put=setStaticF_mainRenderingTransparent)) ::UnityEngine::Rendering::ProfilingSampler*  mainRenderingTransparent;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_afterRendering() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beforeRendering() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_mainRenderingOpaque() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_mainRenderingTransparent() ;

static inline void setStaticF_afterRendering(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_beforeRendering(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_mainRenderingOpaque(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_mainRenderingTransparent(::UnityEngine::Rendering::ProfilingSampler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Profiling_ScriptableRenderer_RenderBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Profiling_ScriptableRenderer_RenderBlock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Profiling_ScriptableRenderer_RenderBlock(Profiling_ScriptableRenderer_RenderBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Profiling_ScriptableRenderer_RenderBlock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Profiling_ScriptableRenderer_RenderBlock(Profiling_ScriptableRenderer_RenderBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18362};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"RenderPassBlock"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
