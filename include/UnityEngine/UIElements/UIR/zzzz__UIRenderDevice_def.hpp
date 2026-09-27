#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_DrawStatistics_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRenderDevice)
namespace GlobalNamespace {
struct UIRenderDevice_AllocToFree;
}
namespace GlobalNamespace {
struct UIRenderDevice_AllocToUpdate;
}
namespace GlobalNamespace {
struct UIRenderDevice_DeviceToFree;
}
namespace GlobalNamespace {
struct UIRenderDevice_DrawStatistics;
}
namespace GlobalNamespace {
struct UIRenderDevice_EvaluationState;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class CommandList;
}
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
namespace UnityEngine::UIElements::UIR {
class DrawParams;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements::UIR {
class Page;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
struct State;
}
namespace UnityEngine::UIElements::UIR {
class TextureSlotManager;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice___c;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class Utility_GPUBuffer_1;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::UIRenderDevice*);
MARK_REF_T(::UnityEngine::UIElements::UIR::UIRenderDevice___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::UIRenderDevice*, "UnityEngine.UIElements.UIR", "UIRenderDevice");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::UIRenderDevice___c*, "UnityEngine.UIElements.UIR", "UIRenderDevice/<>c");
// Dependencies System.Collections.Generic.List`1<T>, System.IntPtr, System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.UIR.UIRenderDevice::DrawStatistics
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice
class CORDL_TYPE UIRenderDevice : public ::System::Object {
public:
// Declarations
using AllocToFree = ::GlobalNamespace::UIRenderDevice_AllocToFree;

using AllocToUpdate = ::GlobalNamespace::UIRenderDevice_AllocToUpdate;

using DeviceToFree = ::GlobalNamespace::UIRenderDevice_DeviceToFree;

using DrawStatistics = ::GlobalNamespace::UIRenderDevice_DrawStatistics;

using EvaluationState = ::GlobalNamespace::UIRenderDevice_EvaluationState;

using __c = ::UnityEngine::UIElements::UIR::UIRenderDevice___c;

/// @brief Field <breakBatches>k__BackingField, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__breakBatches_k__BackingField, put=__cordl_internal_set__breakBatches_k__BackingField)) bool  _breakBatches_k__BackingField;

/// @brief Field <disposed>k__BackingField, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed_k__BackingField, put=__cordl_internal_set__disposed_k__BackingField)) bool  _disposed_k__BackingField;

/// @brief Field <forceGammaRendering>k__BackingField, offset 0xba, size 0x1 
 __declspec(property(get=__cordl_internal_get__forceGammaRendering_k__BackingField, put=__cordl_internal_set__forceGammaRendering_k__BackingField)) bool  _forceGammaRendering_k__BackingField;

/// @brief Field <isFlat>k__BackingField, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFlat_k__BackingField, put=__cordl_internal_set__isFlat_k__BackingField)) bool  _isFlat_k__BackingField;

 __declspec(property(get=get_breakBatches, put=set_breakBatches)) bool  breakBatches;

 __declspec(property(get=get_commandLists)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>  commandLists;

/// @brief Field currentFrameCommandListCount, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFrameCommandListCount, put=__cordl_internal_set_currentFrameCommandListCount)) int32_t  currentFrameCommandListCount;

 __declspec(property(get=get_currentFrameCommandLists)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*  currentFrameCommandLists;

 __declspec(property(get=get_disposed, put=set_disposed)) bool  disposed;

 __declspec(property(get=get_forceGammaRendering)) bool  forceGammaRendering;

 __declspec(property(get=get_frameIndex)) uint32_t  frameIndex;

 __declspec(property(get=get_isFlat)) bool  isFlat;

/// @brief Field m_ActiveDeviceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_ActiveDeviceCount, put=setStaticF_m_ActiveDeviceCount)) int32_t  m_ActiveDeviceCount;

/// @brief Field m_BatchProps, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BatchProps, put=__cordl_internal_set_m_BatchProps)) ::UnityEngine::MaterialPropertyBlock*  m_BatchProps;

/// @brief Field m_CommandLists, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CommandLists, put=__cordl_internal_set_m_CommandLists)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>  m_CommandLists;

/// @brief Field m_ConstantProps, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ConstantProps, put=__cordl_internal_set_m_ConstantProps)) ::UnityEngine::MaterialPropertyBlock*  m_ConstantProps;

/// @brief Field m_DefaultCommandList, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DefaultCommandList, put=__cordl_internal_set_m_DefaultCommandList)) ::UnityEngine::UIElements::UIR::CommandList*  m_DefaultCommandList;

/// @brief Field m_DefaultStencilState, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DefaultStencilState, put=__cordl_internal_set_m_DefaultStencilState)) ::System::IntPtr  m_DefaultStencilState;

/// @brief Field m_DeferredFrees, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeferredFrees, put=__cordl_internal_set_m_DeferredFrees)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToFree>*>*  m_DeferredFrees;

/// @brief Field m_DeviceFreeQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_DeviceFreeQueue, put=setStaticF_m_DeviceFreeQueue)) ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::UIRenderDevice_DeviceToFree>*  m_DeviceFreeQueue;

/// @brief Field m_DrawParams, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DrawParams, put=__cordl_internal_set_m_DrawParams)) ::UnityEngine::UIElements::UIR::DrawParams*  m_DrawParams;

/// @brief Field m_DrawStats, offset 0x70, size 0x2c 
 __declspec(property(get=__cordl_internal_get_m_DrawStats, put=__cordl_internal_set_m_DrawStats)) ::GlobalNamespace::UIRenderDevice_DrawStatistics  m_DrawStats;

/// @brief Field m_Fences, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Fences, put=__cordl_internal_set_m_Fences)) ::ArrayW<uint32_t>  m_Fences;

/// @brief Field m_FirstPage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FirstPage, put=__cordl_internal_set_m_FirstPage)) ::UnityEngine::UIElements::UIR::Page*  m_FirstPage;

/// @brief Field m_FrameIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FrameIndex, put=__cordl_internal_set_m_FrameIndex)) uint32_t  m_FrameIndex;

/// @brief Field m_IndexToVertexCountRatio, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_IndexToVertexCountRatio, put=__cordl_internal_set_m_IndexToVertexCountRatio)) float_t  m_IndexToVertexCountRatio;

/// @brief Field m_LargeMeshVertexCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LargeMeshVertexCount, put=__cordl_internal_set_m_LargeMeshVertexCount)) uint32_t  m_LargeMeshVertexCount;

/// @brief Field m_MeshHandles, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MeshHandles, put=__cordl_internal_set_m_MeshHandles)) ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  m_MeshHandles;

/// @brief Field m_NextPageVertexCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextPageVertexCount, put=__cordl_internal_set_m_NextPageVertexCount)) uint32_t  m_NextPageVertexCount;

/// @brief Field m_NextUpdateID, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextUpdateID, put=__cordl_internal_set_m_NextUpdateID)) uint32_t  m_NextUpdateID;

/// @brief Field m_SubscribedToNotifications, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_SubscribedToNotifications, put=setStaticF_m_SubscribedToNotifications)) bool  m_SubscribedToNotifications;

/// @brief Field m_SynchronousFree, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_SynchronousFree, put=setStaticF_m_SynchronousFree)) bool  m_SynchronousFree;

/// @brief Field m_TextureSlotManager, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextureSlotManager, put=__cordl_internal_set_m_TextureSlotManager)) ::UnityEngine::UIElements::UIR::TextureSlotManager*  m_TextureSlotManager;

/// @brief Field m_Updates, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Updates, put=__cordl_internal_set_m_Updates)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToUpdate>*>*  m_Updates;

/// @brief Field m_VertexDecl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VertexDecl, put=__cordl_internal_set_m_VertexDecl)) ::System::IntPtr  m_VertexDecl;

/// @brief Field s_GradientSettingsTexID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_GradientSettingsTexID, put=setStaticF_s_GradientSettingsTexID)) int32_t  s_GradientSettingsTexID;

/// @brief Field s_MarkerAdvanceFrame, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MarkerAdvanceFrame, put=setStaticF_s_MarkerAdvanceFrame)) ::Unity::Profiling::ProfilerMarker  s_MarkerAdvanceFrame;

/// @brief Field s_MarkerAllocate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MarkerAllocate, put=setStaticF_s_MarkerAllocate)) ::Unity::Profiling::ProfilerMarker  s_MarkerAllocate;

/// @brief Field s_MarkerBeforeDraw, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MarkerBeforeDraw, put=setStaticF_s_MarkerBeforeDraw)) ::Unity::Profiling::ProfilerMarker  s_MarkerBeforeDraw;

/// @brief Field s_MarkerFence, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MarkerFence, put=setStaticF_s_MarkerFence)) ::Unity::Profiling::ProfilerMarker  s_MarkerFence;

/// @brief Field s_MarkerFree, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MarkerFree, put=setStaticF_s_MarkerFree)) ::Unity::Profiling::ProfilerMarker  s_MarkerFree;

/// @brief Field s_ShaderInfoTexID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShaderInfoTexID, put=setStaticF_s_ShaderInfoTexID)) int32_t  s_ShaderInfoTexID;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ActiveUpdatesForMeshHandle, addr 0xb7f8c20, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToUpdate>* ActiveUpdatesForMeshHandle(::UnityEngine::UIElements::UIR::MeshHandle*  mesh) ;

/// @brief Method AdvanceFrame, addr 0xb7ec684, size 0xb68, virtual false, abstract: false, final false
inline void AdvanceFrame() ;

/// @brief Method Allocate, addr 0xb7f7a74, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::UIR::MeshHandle* Allocate(uint32_t  vertexCount, uint32_t  indexCount, ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertexData, ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>  indexData, ::by_ref<uint16_t>  indexOffset) ;

/// @brief Method Allocate, addr 0xb7f7b34, size 0x6e4, virtual false, abstract: false, final false
inline void Allocate(::UnityEngine::UIElements::UIR::MeshHandle*  meshHandle, uint32_t  vertexCount, uint32_t  indexCount, ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertexData, ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>  indexData, bool  shortLived) ;

/// @brief Method ApplyBatchState, addr 0xb7f90fc, size 0x1ec, virtual false, abstract: false, final false
inline void ApplyBatchState(::by_ref<::GlobalNamespace::UIRenderDevice_EvaluationState>  st) ;

/// @brief Method ApplyDrawCommandState, addr 0xb7f8e64, size 0x1f0, virtual false, abstract: false, final false
inline void ApplyDrawCommandState(::UnityEngine::UIElements::UIR::RenderChainCommand*  cmd, int32_t  textureSlot, ::UnityEngine::Material*  newMat, bool  newMatDiffers, bool  kickRanges, ::UnityEngine::Texture*  gradientSettings, ::UnityEngine::Texture*  shaderInfo, ::by_ref<::GlobalNamespace::UIRenderDevice_EvaluationState>  st) ;

/// @brief Method Dispose, addr 0xb7ec0b4, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb7f7648, size 0x1b0, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DrawRanges, addr 0xb7f97b4, size 0x1e8, virtual false, abstract: false, final false
inline void DrawRanges(::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<uint16_t>*  ib, ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<::UnityEngine::UIElements::Vertex>*  vb, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  ranges, ::UnityEngine::UIElements::UIR::CommandList*  commandList) ;

/// @brief Method EvaluateChain, addr 0xb7ed9a4, size 0xcb0, virtual false, abstract: false, final false
inline void EvaluateChain(::UnityEngine::UIElements::UIR::RenderChainCommand*  head, ::UnityEngine::Material*  defaultMat, ::UnityEngine::Texture*  gradientSettings, ::UnityEngine::Texture*  shaderInfo, ::System::Nullable_1<::UnityEngine::Rect>  scissor, float_t  pixelsPerPoint, bool  isSerializing, ::by_ref<::System::Exception*>  immediateException) ;

/// @brief Method FlushAllPendingDeviceDisposes, addr 0xb7f9c2c, size 0x78, virtual false, abstract: false, final false
static inline void FlushAllPendingDeviceDisposes() ;

/// @brief Method Free, addr 0xb7f0060, size 0x80c, virtual false, abstract: false, final false
inline void Free(::UnityEngine::UIElements::UIR::MeshHandle*  mesh) ;

/// @brief Method GatherDrawStatistics, addr 0xb7f092c, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::UIRenderDevice_DrawStatistics GatherDrawStatistics() ;

/// @brief Method GetOrCreateCommandList, addr 0xb7f9634, size 0x180, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::UIR::CommandList* GetOrCreateCommandList(::by_ref<::GlobalNamespace::UIRenderDevice_EvaluationState>  st, ::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::Material*  material, ::UnityEngine::Texture*  gradientSettings, ::UnityEngine::Texture*  shaderInfo) ;

/// @brief Method InitVertexDeclaration, addr 0xb7f739c, size 0x29c, virtual false, abstract: false, final false
inline void InitVertexDeclaration() ;

/// @brief Method InitializeConstantProperties, addr 0xb7f92e8, size 0x11c, virtual false, abstract: false, final false
inline void InitializeConstantProperties(::UnityEngine::MaterialPropertyBlock*  constantProps, ::UnityEngine::Texture*  gradientSettings, ::UnityEngine::Texture*  shaderInfo) ;

/// @brief Method KickRanges, addr 0xb7f9404, size 0x230, virtual false, abstract: false, final false
inline void KickRanges(::UnityEngine::UIElements::UIR::DrawBufferRange*  ranges, ::by_ref<int32_t>  rangesReady, ::by_ref<int32_t>  rangesStart, int32_t  rangesCount, ::UnityEngine::UIElements::UIR::Page*  curPage, ::UnityEngine::UIElements::UIR::CommandList*  commandList) ;

static inline ::UnityEngine::UIElements::UIR::UIRenderDevice* New_ctor(uint32_t  initialVertexCapacity, uint32_t  initialIndexCapacity, bool  isFlat, bool  forceGammaRendering) ;

/// @brief Method OnEngineUpdateGlobal, addr 0xb7f9ca4, size 0x4c, virtual false, abstract: false, final false
static inline void OnEngineUpdateGlobal() ;

/// @brief Method OnFlushPendingResources, addr 0xb7f9cf0, size 0x528, virtual false, abstract: false, final false
static inline void OnFlushPendingResources() ;

/// @brief Method OnFrameRenderingBegin, addr 0xb7ed428, size 0xa8, virtual false, abstract: false, final false
inline void OnFrameRenderingBegin() ;

/// @brief Method PrepareForGfxDeviceRecreate, addr 0xb7f9b6c, size 0x60, virtual false, abstract: false, final false
static inline void PrepareForGfxDeviceRecreate() ;

/// @brief Method ProcessDeviceFreeQueue, addr 0xb7f77f8, size 0x27c, virtual false, abstract: false, final false
static inline void ProcessDeviceFreeQueue() ;

/// @brief Method PruneUnusedPages, addr 0xb7f9a24, size 0x148, virtual false, abstract: false, final false
inline void PruneUnusedPages() ;

/// @brief Method PtrToSlice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Collections::NativeSlice_1<T> PtrToSlice(void*  p, int32_t  count) ;

/// @brief Method SetupCommandList, addr 0xb7f9054, size 0xa8, virtual false, abstract: false, final false
inline void SetupCommandList(::by_ref<::GlobalNamespace::UIRenderDevice_EvaluationState>  st, ::UnityEngine::Texture*  gradientSettings, ::UnityEngine::Texture*  shaderInfo, ::UnityEngine::UIElements::UIR::State  commandState) ;

/// @brief Method TryAllocFromPage, addr 0xb7f8c94, size 0x114, virtual false, abstract: false, final false
inline bool TryAllocFromPage(::UnityEngine::UIElements::UIR::Page*  page, uint32_t  vertexCount, uint32_t  indexCount, ::by_ref<::UnityEngine::UIElements::UIR::Alloc>  va, ::by_ref<::UnityEngine::UIElements::UIR::Alloc>  ia, bool  shortLived) ;

/// @brief Method Update, addr 0xb7f895c, size 0x1ac, virtual false, abstract: false, final false
inline void Update(::UnityEngine::UIElements::UIR::MeshHandle*  mesh, uint32_t  vertexCount, uint32_t  indexCount, ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertexData, ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>  indexData, ::by_ref<uint16_t>  indexOffset) ;

/// @brief Method Update, addr 0xb7f11d8, size 0x1cc, virtual false, abstract: false, final false
inline void Update(::UnityEngine::UIElements::UIR::MeshHandle*  mesh, uint32_t  vertexCount, ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertexData) ;

/// @brief Method UpdateAfterGPUUsedData, addr 0xb7f8218, size 0x744, virtual false, abstract: false, final false
inline void UpdateAfterGPUUsedData(::UnityEngine::UIElements::UIR::MeshHandle*  mesh, uint32_t  vertexCount, uint32_t  indexCount, ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertexData, ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>  indexData, ::by_ref<uint16_t>  indexOffset, ::by_ref<::GlobalNamespace::UIRenderDevice_AllocToUpdate>  allocToUpdate, bool  copyBackIndices) ;

/// @brief Method UpdateCopyBackIndices, addr 0xb7f8b08, size 0x118, virtual false, abstract: false, final false
inline void UpdateCopyBackIndices(::UnityEngine::UIElements::UIR::MeshHandle*  mesh, bool  copyBackIndices) ;

/// @brief Method UpdateFenceValue, addr 0xb7f8da8, size 0xbc, virtual false, abstract: false, final false
inline void UpdateFenceValue() ;

/// @brief Method WaitOnCpuFence, addr 0xb7f999c, size 0x88, virtual false, abstract: false, final false
inline void WaitOnCpuFence(uint32_t  fence) ;

/// @brief Method WrapUpGfxDeviceRecreate, addr 0xb7f9bcc, size 0x60, virtual false, abstract: false, final false
static inline void WrapUpGfxDeviceRecreate() ;

constexpr bool const& __cordl_internal_get__breakBatches_k__BackingField() const;

constexpr bool& __cordl_internal_get__breakBatches_k__BackingField() ;

constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

constexpr bool& __cordl_internal_get__disposed_k__BackingField() ;

constexpr bool const& __cordl_internal_get__forceGammaRendering_k__BackingField() const;

constexpr bool& __cordl_internal_get__forceGammaRendering_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isFlat_k__BackingField() const;

constexpr bool& __cordl_internal_get__isFlat_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_currentFrameCommandListCount() const;

constexpr int32_t& __cordl_internal_get_currentFrameCommandListCount() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_BatchProps() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_BatchProps() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*> const& __cordl_internal_get_m_CommandLists() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>& __cordl_internal_get_m_CommandLists() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_ConstantProps() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_ConstantProps() ;

constexpr ::UnityEngine::UIElements::UIR::CommandList* const& __cordl_internal_get_m_DefaultCommandList() const;

constexpr ::UnityEngine::UIElements::UIR::CommandList*& __cordl_internal_get_m_DefaultCommandList() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_DefaultStencilState() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_DefaultStencilState() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToFree>*>* const& __cordl_internal_get_m_DeferredFrees() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToFree>*>*& __cordl_internal_get_m_DeferredFrees() ;

constexpr ::UnityEngine::UIElements::UIR::DrawParams* const& __cordl_internal_get_m_DrawParams() const;

constexpr ::UnityEngine::UIElements::UIR::DrawParams*& __cordl_internal_get_m_DrawParams() ;

constexpr ::GlobalNamespace::UIRenderDevice_DrawStatistics const& __cordl_internal_get_m_DrawStats() const;

constexpr ::GlobalNamespace::UIRenderDevice_DrawStatistics& __cordl_internal_get_m_DrawStats() ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_m_Fences() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get_m_Fences() ;

constexpr ::UnityEngine::UIElements::UIR::Page* const& __cordl_internal_get_m_FirstPage() const;

constexpr ::UnityEngine::UIElements::UIR::Page*& __cordl_internal_get_m_FirstPage() ;

constexpr uint32_t const& __cordl_internal_get_m_FrameIndex() const;

constexpr uint32_t& __cordl_internal_get_m_FrameIndex() ;

constexpr float_t const& __cordl_internal_get_m_IndexToVertexCountRatio() const;

constexpr float_t& __cordl_internal_get_m_IndexToVertexCountRatio() ;

constexpr uint32_t const& __cordl_internal_get_m_LargeMeshVertexCount() const;

constexpr uint32_t& __cordl_internal_get_m_LargeMeshVertexCount() ;

constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* const& __cordl_internal_get_m_MeshHandles() const;

constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& __cordl_internal_get_m_MeshHandles() ;

constexpr uint32_t const& __cordl_internal_get_m_NextPageVertexCount() const;

constexpr uint32_t& __cordl_internal_get_m_NextPageVertexCount() ;

constexpr uint32_t const& __cordl_internal_get_m_NextUpdateID() const;

constexpr uint32_t& __cordl_internal_get_m_NextUpdateID() ;

constexpr ::UnityEngine::UIElements::UIR::TextureSlotManager* const& __cordl_internal_get_m_TextureSlotManager() const;

constexpr ::UnityEngine::UIElements::UIR::TextureSlotManager*& __cordl_internal_get_m_TextureSlotManager() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToUpdate>*>* const& __cordl_internal_get_m_Updates() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToUpdate>*>*& __cordl_internal_get_m_Updates() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_VertexDecl() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_VertexDecl() ;

constexpr void __cordl_internal_set__breakBatches_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__disposed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__forceGammaRendering_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isFlat_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_currentFrameCommandListCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_BatchProps(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_m_CommandLists(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>  value) ;

constexpr void __cordl_internal_set_m_ConstantProps(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_m_DefaultCommandList(::UnityEngine::UIElements::UIR::CommandList*  value) ;

constexpr void __cordl_internal_set_m_DefaultStencilState(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_DeferredFrees(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToFree>*>*  value) ;

constexpr void __cordl_internal_set_m_DrawParams(::UnityEngine::UIElements::UIR::DrawParams*  value) ;

constexpr void __cordl_internal_set_m_DrawStats(::GlobalNamespace::UIRenderDevice_DrawStatistics  value) ;

constexpr void __cordl_internal_set_m_Fences(::ArrayW<uint32_t>  value) ;

constexpr void __cordl_internal_set_m_FirstPage(::UnityEngine::UIElements::UIR::Page*  value) ;

constexpr void __cordl_internal_set_m_FrameIndex(uint32_t  value) ;

constexpr void __cordl_internal_set_m_IndexToVertexCountRatio(float_t  value) ;

constexpr void __cordl_internal_set_m_LargeMeshVertexCount(uint32_t  value) ;

constexpr void __cordl_internal_set_m_MeshHandles(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  value) ;

constexpr void __cordl_internal_set_m_NextPageVertexCount(uint32_t  value) ;

constexpr void __cordl_internal_set_m_NextUpdateID(uint32_t  value) ;

constexpr void __cordl_internal_set_m_TextureSlotManager(::UnityEngine::UIElements::UIR::TextureSlotManager*  value) ;

constexpr void __cordl_internal_set_m_Updates(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToUpdate>*>*  value) ;

constexpr void __cordl_internal_set_m_VertexDecl(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xb7eaf04, size 0x8ac, virtual false, abstract: false, final false
inline void _ctor(uint32_t  initialVertexCapacity, uint32_t  initialIndexCapacity, bool  isFlat, bool  forceGammaRendering) ;

static inline int32_t getStaticF_m_ActiveDeviceCount() ;

static inline ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::UIRenderDevice_DeviceToFree>* getStaticF_m_DeviceFreeQueue() ;

static inline bool getStaticF_m_SubscribedToNotifications() ;

static inline bool getStaticF_m_SynchronousFree() ;

static inline int32_t getStaticF_s_GradientSettingsTexID() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerAdvanceFrame() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerAllocate() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerBeforeDraw() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerFence() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerFree() ;

static inline int32_t getStaticF_s_ShaderInfoTexID() ;

/// [CompilerGenerated]
/// @brief Method get_breakBatches, addr 0xb7f7074, size 0x8, virtual false, abstract: false, final false
inline bool get_breakBatches() ;

/// @brief Method get_commandLists, addr 0xb7f709c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*> get_commandLists() ;

/// @brief Method get_currentFrameCommandLists, addr 0xb7ee654, size 0x40, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>* get_currentFrameCommandLists() ;

/// [CompilerGenerated]
/// @brief Method get_disposed, addr 0xb7f7638, size 0x8, virtual false, abstract: false, final false
inline bool get_disposed() ;

/// [CompilerGenerated]
/// @brief Method get_forceGammaRendering, addr 0xb7f708c, size 0x8, virtual false, abstract: false, final false
inline bool get_forceGammaRendering() ;

/// @brief Method get_frameIndex, addr 0xb7f7094, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_frameIndex() ;

/// [CompilerGenerated]
/// @brief Method get_isFlat, addr 0xb7f7084, size 0x8, virtual false, abstract: false, final false
inline bool get_isFlat() ;

/// @brief Method get_maxVerticesPerPage, addr 0xb7f2048, size 0x8, virtual false, abstract: false, final false
static inline uint32_t get_maxVerticesPerPage() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_m_ActiveDeviceCount(int32_t  value) ;

static inline void setStaticF_m_DeviceFreeQueue(::System::Collections::Generic::LinkedList_1<::GlobalNamespace::UIRenderDevice_DeviceToFree>*  value) ;

static inline void setStaticF_m_SubscribedToNotifications(bool  value) ;

static inline void setStaticF_m_SynchronousFree(bool  value) ;

static inline void setStaticF_s_GradientSettingsTexID(int32_t  value) ;

static inline void setStaticF_s_MarkerAdvanceFrame(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_MarkerAllocate(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_MarkerBeforeDraw(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_MarkerFence(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_MarkerFree(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_ShaderInfoTexID(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_breakBatches, addr 0xb7f707c, size 0x8, virtual false, abstract: false, final false
inline void set_breakBatches(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_disposed, addr 0xb7f7640, size 0x8, virtual false, abstract: false, final false
inline void set_disposed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIRenderDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UIRenderDevice(UIRenderDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIRenderDevice(UIRenderDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8608};

/// @brief Field k_MaxQueuedFrameCount offset 0xffffffff size 0x4
static constexpr uint32_t  k_MaxQueuedFrameCount{static_cast<uint32_t>(0x4u)};

/// @brief Field k_PruneEmptyPageFrameCount offset 0xffffffff size 0x4
static constexpr int32_t  k_PruneEmptyPageFrameCount{static_cast<int32_t>(0x3c)};

/// @brief Field m_DefaultStencilState, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_DefaultStencilState;

/// @brief Field m_VertexDecl, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___m_VertexDecl;

/// @brief Field m_FirstPage, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::Page*  ___m_FirstPage;

/// @brief Field m_NextPageVertexCount, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___m_NextPageVertexCount;

/// @brief Field m_LargeMeshVertexCount, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ___m_LargeMeshVertexCount;

/// @brief Field m_IndexToVertexCountRatio, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_IndexToVertexCountRatio;

/// @brief Field m_DeferredFrees, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToFree>*>*  ___m_DeferredFrees;

/// @brief Field m_Updates, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::UIRenderDevice_AllocToUpdate>*>*  ___m_Updates;

/// @brief Field m_CommandLists, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>  ___m_CommandLists;

/// @brief Field m_Fences, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ___m_Fences;

/// @brief Field m_ConstantProps, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_ConstantProps;

/// @brief Field m_BatchProps, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_BatchProps;

/// @brief Field m_FrameIndex, offset: 0x68, size: 0x4, def value: None
 uint32_t  ___m_FrameIndex;

/// @brief Field m_NextUpdateID, offset: 0x6c, size: 0x4, def value: None
 uint32_t  ___m_NextUpdateID;

/// @brief Field m_DrawStats, offset: 0x70, size: 0x2c, def value: None
 ::GlobalNamespace::UIRenderDevice_DrawStatistics  ___m_DrawStats;

/// @brief Field m_MeshHandles, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  ___m_MeshHandles;

/// @brief Field m_DrawParams, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::DrawParams*  ___m_DrawParams;

/// @brief Field m_TextureSlotManager, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::TextureSlotManager*  ___m_TextureSlotManager;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <breakBatches>k__BackingField, offset: 0xb8, size: 0x1, def value: None
 bool  ____breakBatches_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <isFlat>k__BackingField, offset: 0xb9, size: 0x1, def value: None
 bool  ____isFlat_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <forceGammaRendering>k__BackingField, offset: 0xba, size: 0x1, def value: None
 bool  ____forceGammaRendering_k__BackingField;

/// @brief Field currentFrameCommandListCount, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___currentFrameCommandListCount;

/// @brief Field m_DefaultCommandList, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::CommandList*  ___m_DefaultCommandList;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <disposed>k__BackingField, offset: 0xc8, size: 0x1, def value: None
 bool  ____disposed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DefaultStencilState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_VertexDecl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_FirstPage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_NextPageVertexCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_LargeMeshVertexCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_IndexToVertexCountRatio) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DeferredFrees) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_Updates) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_CommandLists) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_Fences) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_ConstantProps) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_BatchProps) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_FrameIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_NextUpdateID) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DrawStats) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_MeshHandles) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DrawParams) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_TextureSlotManager) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____breakBatches_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____isFlat_k__BackingField) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____forceGammaRendering_k__BackingField) == 0xba, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___currentFrameCommandListCount) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DefaultCommandList) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____disposed_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::UIRenderDevice) == 0xd0, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/<>c
class CORDL_TYPE UIRenderDevice___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::UIR::UIRenderDevice___c*  __9;

/// @brief Field <>9__55_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__55_0, put=setStaticF___9__55_0)) ::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  __9__55_0;

/// @brief Field <>9__55_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__55_1, put=setStaticF___9__55_1)) ::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  __9__55_1;

static inline ::UnityEngine::UIElements::UIR::UIRenderDevice___c* New_ctor() ;

/// @brief Method <.ctor>b__55_0, addr 0xb7fa4d4, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::UIR::MeshHandle* __ctor_b__55_0() ;

/// @brief Method <.ctor>b__55_1, addr 0xb7fa528, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__55_1(::UnityEngine::UIElements::UIR::MeshHandle*  mh) ;

/// @brief Method .ctor, addr 0xb7fa4cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::UIR::UIRenderDevice___c* getStaticF___9() ;

static inline ::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* getStaticF___9__55_0() ;

static inline ::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* getStaticF___9__55_1() ;

static inline void setStaticF___9(::UnityEngine::UIElements::UIR::UIRenderDevice___c*  value) ;

static inline void setStaticF___9__55_0(::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  value) ;

static inline void setStaticF___9__55_1(::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIRenderDevice___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UIRenderDevice___c(UIRenderDevice___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIRenderDevice___c(UIRenderDevice___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8607};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIR::UIRenderDevice___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
