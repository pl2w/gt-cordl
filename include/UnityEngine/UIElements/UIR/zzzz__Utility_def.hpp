#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Utility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utility)
namespace GlobalNamespace {
struct Utility_GPUBufferType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct StencilState;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::UIElements::UIR {
struct GfxUpdateBufferRange;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class Utility_GPUBuffer_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class Utility;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class Utility_GPUBuffer_1;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::Utility*);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::Utility*, "UnityEngine.UIElements.UIR", "Utility");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1, "UnityEngine.UIElements.UIR", "Utility/GPUBuffer`1");
// [VisibleToOtherModules(new[] { "Unity.UIElements" })]
// [NativeHeader("Modules/UIElements/Core/Native/Renderer/UIRendererUtility.h")]
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Utility
class CORDL_TYPE Utility : public ::System::Object {
public:
// Declarations
using GPUBufferType = ::GlobalNamespace::Utility_GPUBufferType;

template<typename T>
using GPUBuffer_1 = ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>;

/// @brief Field EngineUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EngineUpdate, put=setStaticF_EngineUpdate)) ::System::Action*  EngineUpdate;

/// @brief Field FlushPendingResources, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FlushPendingResources, put=setStaticF_FlushPendingResources)) ::System::Action*  FlushPendingResources;

/// @brief Field GraphicsResourcesRecreate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GraphicsResourcesRecreate, put=setStaticF_GraphicsResourcesRecreate)) ::System::Action_1<bool>*  GraphicsResourcesRecreate;

/// @brief Field s_MarkerRaiseEngineUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MarkerRaiseEngineUpdate, put=setStaticF_s_MarkerRaiseEngineUpdate)) ::Unity::Profiling::ProfilerMarker  s_MarkerRaiseEngineUpdate;

/// [ThreadSafe]
/// @brief Method AllocateBuffer, addr 0xb7cb790, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocateBuffer(int32_t  elementCount, int32_t  elementStride, bool  vertexBuffer) ;

/// [ThreadSafe]
/// @brief Method AllocateShaderPropertySheet, addr 0xb7cba8c, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocateShaderPropertySheet() ;

/// [ThreadSafe]
/// @brief Method ApplyShaderPropertySheet, addr 0xb7cbbc8, size 0x3c, virtual false, abstract: false, final false
static inline void ApplyShaderPropertySheet(::System::IntPtr  shaderPropertySheet) ;

/// [ThreadSafe]
/// @brief Method CPUFencePassed, addr 0xb7cbe78, size 0x3c, virtual false, abstract: false, final false
static inline bool CPUFencePassed(uint32_t  fence) ;

/// [ThreadSafe]
/// @brief Method CreateStencilState, addr 0xb7cbd24, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateStencilState(::UnityEngine::Rendering::StencilState  stencilState) ;

/// @brief Method CreateStencilState_Injected, addr 0xb7cbda8, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateStencilState_Injected(::by_ref<::UnityEngine::Rendering::StencilState>  stencilState) ;

/// [ThreadSafe]
/// @brief Method DisableScissor, addr 0xb7cbcfc, size 0x28, virtual false, abstract: false, final false
static inline void DisableScissor() ;

/// [ThreadSafe]
/// @brief Method DrawRanges, addr 0xb7cba18, size 0x74, virtual false, abstract: false, final false
static inline void DrawRanges(::System::IntPtr  ib, ::System::IntPtr*  vertexStreams, int32_t  streamCount, ::System::IntPtr  ranges, int32_t  rangeCount, ::System::IntPtr  vertexDecl) ;

/// [ThreadSafe]
/// @brief Method FreeBuffer, addr 0xb7cb7e4, size 0x3c, virtual false, abstract: false, final false
static inline void FreeBuffer(::System::IntPtr  buffer) ;

/// [ThreadSafe]
/// @brief Method GetActiveViewport, addr 0xb7cbf18, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::RectInt GetActiveViewport() ;

/// @brief Method GetActiveViewport_Injected, addr 0xb7cbf9c, size 0x3c, virtual false, abstract: false, final false
static inline void GetActiveViewport_Injected(::by_ref<::UnityEngine::RectInt>  ret) ;

/// [ThreadSafe]
/// @brief Method GetUnityProjectionMatrix, addr 0xb7cc064, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetUnityProjectionMatrix() ;

/// @brief Method GetUnityProjectionMatrix_Injected, addr 0xb7cc100, size 0x3c, virtual false, abstract: false, final false
static inline void GetUnityProjectionMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// [ThreadSafe]
/// @brief Method GetVertexDeclaration, addr 0xb7cb8e8, size 0xf4, virtual false, abstract: false, final false
static inline ::System::IntPtr GetVertexDeclaration(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  vertexAttributes) ;

/// @brief Method GetVertexDeclaration_Injected, addr 0xb7cb9dc, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetVertexDeclaration_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  vertexAttributes) ;

/// [ThreadSafe]
/// @brief Method HasMappedBufferRange, addr 0xb7cbe28, size 0x28, virtual false, abstract: false, final false
static inline bool HasMappedBufferRange() ;

/// [ThreadSafe]
/// @brief Method InsertCPUFence, addr 0xb7cbe50, size 0x28, virtual false, abstract: false, final false
static inline uint32_t InsertCPUFence() ;

/// @brief Method NotifyOfUIREvents, addr 0xb7cc028, size 0x3c, virtual false, abstract: false, final false
static inline void NotifyOfUIREvents(bool  subscribe) ;

/// [ThreadSafe]
/// @brief Method ProfileDrawChainBegin, addr 0xb7cbfd8, size 0x28, virtual false, abstract: false, final false
static inline void ProfileDrawChainBegin() ;

/// [ThreadSafe]
/// @brief Method ProfileDrawChainEnd, addr 0xb7cc000, size 0x28, virtual false, abstract: false, final false
static inline void ProfileDrawChainEnd() ;

/// [RequiredByNativeCode]
/// @brief Method RaiseEngineUpdate, addr 0xb7cb688, size 0x94, virtual false, abstract: false, final false
static inline void RaiseEngineUpdate() ;

/// [RequiredByNativeCode]
/// @brief Method RaiseFlushPendingResources, addr 0xb7cb71c, size 0x74, virtual false, abstract: false, final false
static inline void RaiseFlushPendingResources() ;

/// [RequiredByNativeCode]
/// @brief Method RaiseGraphicsResourcesRecreate, addr 0xb7cb60c, size 0x7c, virtual false, abstract: false, final false
static inline void RaiseGraphicsResourcesRecreate(bool  recreate) ;

/// [ThreadSafe]
/// @brief Method ReleasePropertySheet, addr 0xb7cbc04, size 0x3c, virtual false, abstract: false, final false
static inline void ReleasePropertySheet(::System::IntPtr  shaderPropertySheet) ;

/// [ThreadSafe]
/// @brief Method SetAllTextures, addr 0xb7cbab4, size 0x5c, virtual false, abstract: false, final false
static inline void SetAllTextures(::System::IntPtr  shaderPropertySheet, ::System::IntPtr  textureNames, ::System::IntPtr  texturePtrs, int32_t  count) ;

/// [ThreadSafe]
/// @brief Method SetPropertyBlock, addr 0xb7cbb10, size 0x7c, virtual false, abstract: false, final false
static inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  props) ;

/// @brief Method SetPropertyBlock_Injected, addr 0xb7cbb8c, size 0x3c, virtual false, abstract: false, final false
static inline void SetPropertyBlock_Injected(::System::IntPtr  props) ;

/// [ThreadSafe]
/// @brief Method SetScissorRect, addr 0xb7cbc40, size 0x80, virtual false, abstract: false, final false
static inline void SetScissorRect(::UnityEngine::RectInt  scissorRect) ;

/// @brief Method SetScissorRect_Injected, addr 0xb7cbcc0, size 0x3c, virtual false, abstract: false, final false
static inline void SetScissorRect_Injected(::by_ref<::UnityEngine::RectInt>  scissorRect) ;

/// [ThreadSafe]
/// @brief Method SetStencilState, addr 0xb7cbde4, size 0x44, virtual false, abstract: false, final false
static inline void SetStencilState(::System::IntPtr  stencilState, int32_t  stencilRef) ;

/// [ThreadSafe]
/// @brief Method SetVectorArray, addr 0xb7cafa8, size 0x114, virtual false, abstract: false, final false
static inline void SetVectorArray(::System::IntPtr  shaderPropertySheet, int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count) ;

/// @brief Method SetVectorArray, addr 0xb7caf30, size 0x78, virtual false, abstract: false, final false
static inline void SetVectorArray(::System::IntPtr  shaderPropertySheet, int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  vector4s) ;

/// @brief Method SetVectorArray_Injected, addr 0xb7cb88c, size 0x5c, virtual false, abstract: false, final false
static inline void SetVectorArray_Injected(::System::IntPtr  shaderPropertySheet, int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// [ThreadSafe]
/// @brief Method SyncRenderThread, addr 0xb7cbef0, size 0x28, virtual false, abstract: false, final false
static inline void SyncRenderThread() ;

/// [ThreadSafe]
/// @brief Method UpdateBufferRanges, addr 0xb7cb820, size 0x6c, virtual false, abstract: false, final false
static inline void UpdateBufferRanges(::System::IntPtr  buffer, ::System::IntPtr  ranges, int32_t  rangeCount, int32_t  writeRangeStart, int32_t  writeRangeEnd) ;

/// [ThreadSafe]
/// @brief Method WaitForCPUFencePassed, addr 0xb7cbeb4, size 0x3c, virtual false, abstract: false, final false
static inline void WaitForCPUFencePassed(uint32_t  fence) ;

/// [CompilerGenerated]
/// @brief Method add_EngineUpdate, addr 0xb7cb29c, size 0xdc, virtual false, abstract: false, final false
static inline void add_EngineUpdate(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_FlushPendingResources, addr 0xb7cb454, size 0xdc, virtual false, abstract: false, final false
static inline void add_FlushPendingResources(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_GraphicsResourcesRecreate, addr 0xb7cb0bc, size 0xf0, virtual false, abstract: false, final false
static inline void add_GraphicsResourcesRecreate(::System::Action_1<bool>*  value) ;

static inline ::System::Action* getStaticF_EngineUpdate() ;

static inline ::System::Action* getStaticF_FlushPendingResources() ;

static inline ::System::Action_1<bool>* getStaticF_GraphicsResourcesRecreate() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerRaiseEngineUpdate() ;

/// [CompilerGenerated]
/// @brief Method remove_EngineUpdate, addr 0xb7cb378, size 0xdc, virtual false, abstract: false, final false
static inline void remove_EngineUpdate(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_FlushPendingResources, addr 0xb7cb530, size 0xdc, virtual false, abstract: false, final false
static inline void remove_FlushPendingResources(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_GraphicsResourcesRecreate, addr 0xb7cb1ac, size 0xf0, virtual false, abstract: false, final false
static inline void remove_GraphicsResourcesRecreate(::System::Action_1<bool>*  value) ;

static inline void setStaticF_EngineUpdate(::System::Action*  value) ;

static inline void setStaticF_FlushPendingResources(::System::Action*  value) ;

static inline void setStaticF_GraphicsResourcesRecreate(::System::Action_1<bool>*  value) ;

static inline void setStaticF_s_MarkerRaiseEngineUpdate(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utility(Utility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utility(Utility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8500};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIR::Utility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::UIElements::UIR {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<T>
class CORDL_TYPE Utility_GPUBuffer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BufferPointer)) ::System::IntPtr  BufferPointer;

 __declspec(property(get=get_ElementStride)) int32_t  ElementStride;

/// @brief Field buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::System::IntPtr  buffer;

/// @brief Field elemCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_elemCount, put=__cordl_internal_set_elemCount)) int32_t  elemCount;

/// @brief Field elemStride, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_elemStride, put=__cordl_internal_set_elemStride)) int32_t  elemStride;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>* New_ctor(int32_t  elementCount, ::GlobalNamespace::Utility_GPUBufferType  type) ;

/// @brief Method UpdateRanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateRanges(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  ranges, int32_t  rangesMin, int32_t  rangesMax) ;

constexpr ::System::IntPtr const& __cordl_internal_get_buffer() const;

constexpr ::System::IntPtr& __cordl_internal_get_buffer() ;

constexpr int32_t const& __cordl_internal_get_elemCount() const;

constexpr int32_t& __cordl_internal_get_elemCount() ;

constexpr int32_t const& __cordl_internal_get_elemStride() const;

constexpr int32_t& __cordl_internal_get_elemStride() ;

constexpr void __cordl_internal_set_buffer(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_elemCount(int32_t  value) ;

constexpr void __cordl_internal_set_elemStride(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  elementCount, ::GlobalNamespace::Utility_GPUBufferType  type) ;

/// @brief Method get_BufferPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::IntPtr get_BufferPointer() ;

/// @brief Method get_ElementStride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_ElementStride() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utility_GPUBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utility_GPUBuffer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utility_GPUBuffer_1(Utility_GPUBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utility_GPUBuffer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utility_GPUBuffer_1(Utility_GPUBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8499};

/// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___buffer;

/// @brief Field elemCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___elemCount;

/// @brief Field elemStride, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___elemStride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
