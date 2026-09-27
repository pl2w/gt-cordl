#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderContext)
namespace GlobalNamespace {
struct ScriptableRenderContext_CullShadowCastersContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ComputeQueueType;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
struct GizmoSubset;
}
namespace UnityEngine::Rendering {
struct RendererListParams;
}
namespace UnityEngine::Rendering {
struct RendererListStatus;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct ShadowCastersCullingInfos;
}
namespace UnityEngine::Rendering {
struct ShadowDrawingSettings;
}
namespace UnityEngine::Rendering {
struct SortingSettings;
}
namespace UnityEngine::Rendering {
struct UISubset;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ScriptableRenderContext);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
// [NativeType("Runtime/Graphics/ScriptableRenderLoop/ScriptableRenderContext.h")]
// [NativeHeader("Modules/UI/CanvasManager.h")]
// [NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
// [NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableDrawRenderersUtility.h")]
// [NativeHeader("Modules/UI/Canvas.h")]
// [NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderContext.bindings.h")]
// Dependencies System.IntPtr, UnityEngine.Rendering.ShaderTagId
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ScriptableRenderContext
struct CORDL_TYPE ScriptableRenderContext {
public:
// Declarations
using CullShadowCastersContext = ::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext;

/// @brief Field kRenderTypeTag, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kRenderTypeTag, put=setStaticF_kRenderTypeTag)) ::UnityEngine::Rendering::ShaderTagId  kRenderTypeTag;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*() ;

/// @brief Method BeginRenderPass, addr 0xb623b28, size 0x114, virtual false, abstract: false, final false
inline void BeginRenderPass(int32_t  width, int32_t  height, int32_t  samples, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor>  attachments, int32_t  depthAttachmentIndex) ;

/// [FreeFunction("ScriptableRenderContext::BeginRenderPass")]
/// @brief Method BeginRenderPass_Internal, addr 0xb622734, size 0x9c, virtual false, abstract: false, final false
static inline void BeginRenderPass_Internal(::System::IntPtr  self, int32_t  width, int32_t  height, int32_t  volumeDepth, int32_t  samples, ::System::IntPtr  colors, int32_t  colorCount, int32_t  depthAttachmentIndex, int32_t  shadingRateImageAttachmentIndex) ;

/// @brief Method BeginSubPass, addr 0xb623c3c, size 0x10c, virtual false, abstract: false, final false
inline void BeginSubPass(::Unity::Collections::NativeArray_1<int32_t>  colors, ::Unity::Collections::NativeArray_1<int32_t>  inputs, bool  isDepthStencilReadOnly) ;

/// @brief Method BeginSubPass, addr 0xb623d48, size 0xe0, virtual false, abstract: false, final false
inline void BeginSubPass(::Unity::Collections::NativeArray_1<int32_t>  colors, bool  isDepthStencilReadOnly) ;

/// [FreeFunction("ScriptableRenderContext::BeginSubPass")]
/// @brief Method BeginSubPass_Internal, addr 0xb6227d0, size 0x84, virtual false, abstract: false, final false
static inline void BeginSubPass_Internal(::System::IntPtr  self, ::System::IntPtr  colors, int32_t  colorCount, ::System::IntPtr  inputs, int32_t  inputCount, bool  isDepthReadOnly, bool  isStencilReadOnly) ;

/// @brief Method CreateGizmoRendererList, addr 0xb624c2c, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateGizmoRendererList(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::GizmoSubset  gizmoSubset) ;

/// @brief Method CreateGizmoRendererList_Internal, addr 0xb6235e0, size 0x114, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateGizmoRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::GizmoSubset  gizmoSubset) ;

/// @brief Method CreateGizmoRendererList_Internal_Injected, addr 0xb6236f4, size 0x5c, virtual false, abstract: false, final false
static inline void CreateGizmoRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::IntPtr  camera, ::UnityEngine::Rendering::GizmoSubset  gizmoSubset, ::by_ref<::UnityEngine::Rendering::RendererList>  ret) ;

/// @brief Method CreateRendererList, addr 0xb62463c, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateRendererList(::by_ref<::UnityEngine::Rendering::RendererListParams>  param) ;

/// @brief Method CreateRendererList_Internal, addr 0xb623168, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateRendererList_Internal(::System::IntPtr  cullResults, ::by_ref<::UnityEngine::Rendering::DrawingSettings>  drawingSettings, ::by_ref<::UnityEngine::Rendering::FilteringSettings>  filteringSettings, ::UnityEngine::Rendering::ShaderTagId  tagName, bool  isPassTagName, ::System::IntPtr  tagValues, ::System::IntPtr  stateBlocks, int32_t  stateCount) ;

/// @brief Method CreateRendererList_Internal_Injected, addr 0xb623268, size 0xa4, virtual false, abstract: false, final false
static inline void CreateRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::IntPtr  cullResults, ::by_ref<::UnityEngine::Rendering::DrawingSettings>  drawingSettings, ::by_ref<::UnityEngine::Rendering::FilteringSettings>  filteringSettings, ::by_ref<::UnityEngine::Rendering::ShaderTagId>  tagName, bool  isPassTagName, ::System::IntPtr  tagValues, ::System::IntPtr  stateBlocks, int32_t  stateCount, ::by_ref<::UnityEngine::Rendering::RendererList>  ret) ;

/// @brief Method CreateShadowRendererList, addr 0xb624760, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateShadowRendererList(::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>  settings) ;

/// @brief Method CreateShadowRendererList_Internal, addr 0xb62330c, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateShadowRendererList_Internal(::System::IntPtr  shadowDrawinSettings) ;

/// @brief Method CreateShadowRendererList_Internal_Injected, addr 0xb6233bc, size 0x54, virtual false, abstract: false, final false
static inline void CreateShadowRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::IntPtr  shadowDrawinSettings, ::by_ref<::UnityEngine::Rendering::RendererList>  ret) ;

/// @brief Method CreateSkyboxRendererList, addr 0xb624ac4, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList(::UnityEngine::Camera*  camera) ;

/// @brief Method CreateSkyboxRendererList, addr 0xb624958, size 0x16c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList(::UnityEngine::Camera*  camera, ::UnityEngine::Matrix4x4  projectionMatrix, ::UnityEngine::Matrix4x4  viewMatrix) ;

/// @brief Method CreateSkyboxRendererList, addr 0xb624804, size 0x154, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList(::UnityEngine::Camera*  camera, ::UnityEngine::Matrix4x4  projectionMatrixL, ::UnityEngine::Matrix4x4  viewMatrixL, ::UnityEngine::Matrix4x4  projectionMatrixR, ::UnityEngine::Matrix4x4  viewMatrixR) ;

/// @brief Method CreateSkyboxRendererList_Internal, addr 0xb623410, size 0x144, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera*  camera, int32_t  mode, ::UnityEngine::Matrix4x4  proj, ::UnityEngine::Matrix4x4  view, ::UnityEngine::Matrix4x4  projR, ::UnityEngine::Matrix4x4  viewR) ;

/// @brief Method CreateSkyboxRendererList_Internal_Injected, addr 0xb623554, size 0x8c, virtual false, abstract: false, final false
static inline void CreateSkyboxRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::IntPtr  camera, int32_t  mode, ::by_ref<::UnityEngine::Matrix4x4>  proj, ::by_ref<::UnityEngine::Matrix4x4>  view, ::by_ref<::UnityEngine::Matrix4x4>  projR, ::by_ref<::UnityEngine::Matrix4x4>  viewR, ::by_ref<::UnityEngine::Rendering::RendererList>  ret) ;

/// @brief Method CreateUIOverlayRendererList, addr 0xb624cc8, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateUIOverlayRendererList(::UnityEngine::Camera*  camera) ;

/// @brief Method CreateUIOverlayRendererList, addr 0xb624d5c, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateUIOverlayRendererList(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::UISubset  uiSubset) ;

/// @brief Method CreateUIOverlayRendererList_Internal, addr 0xb623750, size 0x114, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateUIOverlayRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::UISubset  uiSubset) ;

/// @brief Method CreateUIOverlayRendererList_Internal_Injected, addr 0xb623864, size 0x5c, virtual false, abstract: false, final false
static inline void CreateUIOverlayRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::IntPtr  camera, ::UnityEngine::Rendering::UISubset  uiSubset, ::by_ref<::UnityEngine::Rendering::RendererList>  ret) ;

/// @brief Method CreateWireOverlayRendererList, addr 0xb624df8, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateWireOverlayRendererList(::UnityEngine::Camera*  camera) ;

/// @brief Method CreateWireOverlayRendererList_Internal, addr 0xb6238c0, size 0x108, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererList CreateWireOverlayRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera*  camera) ;

/// @brief Method CreateWireOverlayRendererList_Internal_Injected, addr 0xb6239c8, size 0x54, virtual false, abstract: false, final false
static inline void CreateWireOverlayRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::IntPtr  camera, ::by_ref<::UnityEngine::Rendering::RendererList>  ret) ;

/// @brief Method Cull, addr 0xb624390, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::CullingResults Cull(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  parameters) ;

/// @brief Method CullShadowCasters, addr 0xb624424, size 0xfc, virtual false, abstract: false, final false
inline void CullShadowCasters(::UnityEngine::Rendering::CullingResults  cullingResults, ::UnityEngine::Rendering::ShadowCastersCullingInfos  infos) ;

/// @brief Method DrawWireOverlay, addr 0xb62432c, size 0x64, virtual false, abstract: false, final false
inline void DrawWireOverlay(::UnityEngine::Camera*  camera) ;

/// @brief Method DrawWireOverlay_Impl, addr 0xb623040, size 0xdc, virtual false, abstract: false, final false
inline void DrawWireOverlay_Impl(/* [NotNull] */ ::UnityEngine::Camera*  camera) ;

/// @brief Method DrawWireOverlay_Impl_Injected, addr 0xb62311c, size 0x44, virtual false, abstract: false, final false
static inline void DrawWireOverlay_Impl_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::IntPtr  camera) ;

/// [FreeFunction("PlayerEmitCanvasGeometryForCamera")]
/// @brief Method EmitGeometryForCamera, addr 0xb622c64, size 0xa0, virtual false, abstract: false, final false
static inline void EmitGeometryForCamera(::UnityEngine::Camera*  camera) ;

/// @brief Method EmitGeometryForCamera_Injected, addr 0xb622d04, size 0x3c, virtual false, abstract: false, final false
static inline void EmitGeometryForCamera_Injected(::System::IntPtr  camera) ;

/// @brief Method EndRenderPass, addr 0xb623ea0, size 0x78, virtual false, abstract: false, final false
inline void EndRenderPass() ;

/// [FreeFunction("ScriptableRenderContext::EndRenderPass")]
/// @brief Method EndRenderPass_Internal, addr 0xb622890, size 0x3c, virtual false, abstract: false, final false
static inline void EndRenderPass_Internal(::System::IntPtr  self) ;

/// @brief Method EndSubPass, addr 0xb623e28, size 0x78, virtual false, abstract: false, final false
inline void EndSubPass() ;

/// [FreeFunction("ScriptableRenderContext::EndSubPass")]
/// @brief Method EndSubPass_Internal, addr 0xb622854, size 0x3c, virtual false, abstract: false, final false
static inline void EndSubPass_Internal(::System::IntPtr  self) ;

/// @brief Method Equals, addr 0xb624564, size 0xd0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb624520, size 0x44, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Rendering::ScriptableRenderContext  other) ;

/// @brief Method ExecuteCommandBuffer, addr 0xb624068, size 0xe4, virtual false, abstract: false, final false
inline void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  commandBuffer) ;

/// @brief Method ExecuteCommandBufferAsync, addr 0xb62414c, size 0xf4, virtual false, abstract: false, final false
inline void ExecuteCommandBufferAsync(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Rendering::ComputeQueueType  queueType) ;

/// [NativeThrows]
/// @brief Method ExecuteCommandBufferAsync_Internal, addr 0xb622e08, size 0x94, virtual false, abstract: false, final false
inline void ExecuteCommandBufferAsync_Internal(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Rendering::ComputeQueueType  queueType) ;

/// @brief Method ExecuteCommandBufferAsync_Internal_Injected, addr 0xb622e9c, size 0x54, virtual false, abstract: false, final false
static inline void ExecuteCommandBufferAsync_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::IntPtr  commandBuffer, ::UnityEngine::Rendering::ComputeQueueType  queueType) ;

/// [NativeThrows]
/// @brief Method ExecuteCommandBuffer_Internal, addr 0xb622d40, size 0x84, virtual false, abstract: false, final false
inline void ExecuteCommandBuffer_Internal(::UnityEngine::Rendering::CommandBuffer*  commandBuffer) ;

/// @brief Method ExecuteCommandBuffer_Internal_Injected, addr 0xb622dc4, size 0x44, virtual false, abstract: false, final false
static inline void ExecuteCommandBuffer_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::IntPtr  commandBuffer) ;

/// @brief Method GetCameras, addr 0xb621168, size 0xcc, virtual false, abstract: false, final false
inline void GetCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  results) ;

/// @brief Method GetCameras_Internal, addr 0xb622c10, size 0x54, virtual false, abstract: false, final false
inline void GetCameras_Internal(::System::Type*  listType, ::System::Object*  resultList) ;

/// @brief Method GetHashCode, addr 0xb624634, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method HasInvokeOnRenderObjectCallbacks, addr 0xb624000, size 0x68, virtual false, abstract: false, final false
inline bool HasInvokeOnRenderObjectCallbacks() ;

/// [FreeFunction("ScriptableRenderContext::HasInvokeOnRenderObjectCallbacks")]
/// @brief Method HasInvokeOnRenderObjectCallbacks_Internal, addr 0xb6228cc, size 0x28, virtual false, abstract: false, final false
static inline bool HasInvokeOnRenderObjectCallbacks_Internal() ;

/// [FreeFunction("InitializeSortSettings")]
/// @brief Method InitializeSortSettings, addr 0xb622aa4, size 0xb0, virtual false, abstract: false, final false
static inline void InitializeSortSettings(::UnityEngine::Camera*  camera, ::by_ref<::UnityEngine::Rendering::SortingSettings>  sortingSettings) ;

/// @brief Method InitializeSortSettings_Injected, addr 0xb622b54, size 0x44, virtual false, abstract: false, final false
static inline void InitializeSortSettings_Injected(::System::IntPtr  camera, ::by_ref<::UnityEngine::Rendering::SortingSettings>  sortingSettings) ;

/// [FreeFunction("ScriptableRenderPipeline_Bindings::Internal_Cull")]
/// @brief Method Internal_Cull, addr 0xb6228f4, size 0x90, virtual false, abstract: false, final false
static inline void Internal_Cull(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  parameters, ::UnityEngine::Rendering::ScriptableRenderContext  renderLoop, ::System::IntPtr  results) ;

/// [FreeFunction("ScriptableRenderPipeline_Bindings::Internal_CullShadowCasters")]
/// @brief Method Internal_CullShadowCasters, addr 0xb6229d8, size 0x88, virtual false, abstract: false, final false
static inline void Internal_CullShadowCasters(::UnityEngine::Rendering::ScriptableRenderContext  renderLoop, ::System::IntPtr  context) ;

/// @brief Method Internal_CullShadowCasters_Injected, addr 0xb622a60, size 0x44, virtual false, abstract: false, final false
static inline void Internal_CullShadowCasters_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  renderLoop, ::System::IntPtr  context) ;

/// @brief Method Internal_Cull_Injected, addr 0xb622984, size 0x54, virtual false, abstract: false, final false
static inline void Internal_Cull_Injected(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  parameters, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  renderLoop, ::System::IntPtr  results) ;

/// @brief Method Internal_GetPtr, addr 0xb623160, size 0x8, virtual false, abstract: false, final false
inline ::System::IntPtr Internal_GetPtr() ;

/// @brief Method PrepareRendererListsAsync, addr 0xb624e88, size 0x84, virtual false, abstract: false, final false
inline void PrepareRendererListsAsync(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>*  rendererLists) ;

/// @brief Method PrepareRendererListsAsync_Internal, addr 0xb623a1c, size 0x44, virtual false, abstract: false, final false
inline void PrepareRendererListsAsync_Internal(::System::Object*  rendererLists) ;

/// @brief Method QueryRendererListStatus, addr 0xb624f0c, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererListStatus QueryRendererListStatus(::UnityEngine::Rendering::RendererList  rendererList) ;

/// @brief Method QueryRendererListStatus_Internal, addr 0xb623a60, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RendererListStatus QueryRendererListStatus_Internal(::UnityEngine::Rendering::RendererList  handle) ;

/// @brief Method QueryRendererListStatus_Internal_Injected, addr 0xb623ae4, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RendererListStatus QueryRendererListStatus_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::by_ref<::UnityEngine::Rendering::RendererList>  handle) ;

/// @brief Method SetupCameraProperties, addr 0xb624240, size 0x70, virtual false, abstract: false, final false
inline void SetupCameraProperties(::UnityEngine::Camera*  camera, bool  stereoSetup) ;

/// @brief Method SetupCameraProperties, addr 0xb6242b0, size 0x7c, virtual false, abstract: false, final false
inline void SetupCameraProperties(::UnityEngine::Camera*  camera, bool  stereoSetup, int32_t  eye) ;

/// @brief Method SetupCameraProperties_Internal, addr 0xb622ef0, size 0xf4, virtual false, abstract: false, final false
inline void SetupCameraProperties_Internal(/* [NotNull] */ ::UnityEngine::Camera*  camera, bool  stereoSetup, int32_t  eye) ;

/// @brief Method SetupCameraProperties_Internal_Injected, addr 0xb622fe4, size 0x5c, virtual false, abstract: false, final false
static inline void SetupCameraProperties_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::IntPtr  camera, bool  stereoSetup, int32_t  eye) ;

/// @brief Method Submit, addr 0xb623f18, size 0x74, virtual false, abstract: false, final false
inline void Submit() ;

/// @brief Method SubmitForRenderPassValidation, addr 0xb623f8c, size 0x74, virtual false, abstract: false, final false
inline bool SubmitForRenderPassValidation() ;

/// @brief Method SubmitForRenderPassValidation_Internal, addr 0xb622bd4, size 0x3c, virtual false, abstract: false, final false
inline bool SubmitForRenderPassValidation_Internal() ;

/// @brief Method Submit_Internal, addr 0xb622b98, size 0x3c, virtual false, abstract: false, final false
inline void Submit_Internal() ;

/// @brief Method .ctor, addr 0xb621160, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ptr) ;

static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_kRenderTypeTag() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>* i___System__IEquatable_1___UnityEngine__Rendering__ScriptableRenderContext_() ;

static inline void setStaticF_kRenderTypeTag(::UnityEngine::Rendering::ShaderTagId  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderContext() ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr ScriptableRenderContext(::System::IntPtr  m_Ptr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15565};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ScriptableRenderContext) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
