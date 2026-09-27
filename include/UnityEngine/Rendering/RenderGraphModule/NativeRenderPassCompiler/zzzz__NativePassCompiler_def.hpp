#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassCompiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassCompiler_RenderGraphInputInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativePassCompiler)
namespace GlobalNamespace {
struct NativePassCompiler_NativeCompilerProfileId;
}
namespace GlobalNamespace {
struct NativePassCompiler_RenderGraphInputInfo;
}
namespace GlobalNamespace {
class RenderGraphCompilationCache;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct Name;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassData;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassBreakAudit;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class InternalRenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderTargetInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
template<typename T>
class DynamicArray_1;
}
namespace UnityEngine::Rendering {
struct SubPassDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
class NativePassCompiler;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "NativePassCompiler");
// Dependencies System.Object, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.AttachmentDescriptor, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler::RenderGraphInputInfo
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler
class CORDL_TYPE NativePassCompiler : public ::System::Object {
public:
// Declarations
using NativeCompilerProfileId = ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId;

using RenderGraphInputInfo = ::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo;

/// @brief Field contextData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_contextData, put=__cordl_internal_set_contextData)) Il2CppObject*  contextData;

/// @brief Field defaultContextData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultContextData, put=__cordl_internal_set_defaultContextData)) Il2CppObject*  defaultContextData;

/// @brief Field graph, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo  graph;

/// @brief Field graphPassNamesForDebug, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphPassNamesForDebug, put=__cordl_internal_set_graphPassNamesForDebug)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*  graphPassNamesForDebug;

/// @brief Field m_BeginRenderPassAttachments, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BeginRenderPassAttachments, put=__cordl_internal_set_m_BeginRenderPassAttachments)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor>  m_BeginRenderPassAttachments;

/// @brief Field m_CompilationCache, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CompilationCache, put=__cordl_internal_set_m_CompilationCache)) ::GlobalNamespace::RenderGraphCompilationCache*  m_CompilationCache;

/// @brief Field previousCommandBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousCommandBuffer, put=__cordl_internal_set_previousCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer*  previousCommandBuffer;

/// @brief Field toVisitPassIds, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_toVisitPassIds, put=__cordl_internal_set_toVisitPassIds)) ::System::Collections::Generic::Stack_1<int32_t>*  toVisitPassIds;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BuildGraph, addr 0xb1c829c, size 0xf14, virtual false, abstract: false, final false
inline void BuildGraph() ;

/// @brief Method Cleanup, addr 0xb1c7f5c, size 0x80, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Clear, addr 0xb1c8108, size 0x64, virtual false, abstract: false, final false
inline void Clear(bool  clearContextData) ;

/// @brief Method Compile, addr 0xb1c816c, size 0x40, virtual false, abstract: false, final false
inline void Compile(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources) ;

/// @brief Method CullUnusedRenderPasses, addr 0xb1c91b0, size 0x508, virtual false, abstract: false, final false
inline void CullUnusedRenderPasses() ;

/// @brief Method DetectMemoryLessResources, addr 0xb1ca340, size 0x4a0, virtual false, abstract: false, final false
inline void DetectMemoryLessResources() ;

/// @brief Method DetermineLoadStoreActions, addr 0xb1ca954, size 0x5d4, virtual false, abstract: false, final false
inline void DetermineLoadStoreActions(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>  nativePass) ;

/// @brief Method Dispose, addr 0xb1c7fdc, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ExecuteBeginRenderPass, addr 0xb1cba9c, size 0x78c, virtual false, abstract: false, final false
inline void ExecuteBeginRenderPass(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*  rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>  nativePass) ;

/// @brief Method ExecuteDestroyResource, addr 0xb1cc228, size 0x45c, virtual false, abstract: false, final false
inline void ExecuteDestroyResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*  rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>  pass) ;

/// @brief Method ExecuteGraph, addr 0xb1ccba0, size 0x65c, virtual false, abstract: false, final false
inline void ExecuteGraph(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*  rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, /* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>  passes) ;

/// @brief Method ExecuteGraphNode, addr 0xb1cc888, size 0x318, virtual false, abstract: false, final false
inline void ExecuteGraphNode(::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>  rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  pass) ;

/// @brief Method ExecuteInitializeResource, addr 0xb1cb248, size 0x564, virtual false, abstract: false, final false
inline void ExecuteInitializeResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*  rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>  pass) ;

/// @brief Method ExecuteSetRandomWriteTarget, addr 0xb1cc684, size 0x204, virtual false, abstract: false, final false
inline void ExecuteSetRandomWriteTarget(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CommandBuffer*>  cmd, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, int32_t  index, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle  resource, bool  preserveCounterValue) ;

/// @brief Method Finalize, addr 0xb1c7ed8, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FindResourceUsageRanges, addr 0xb1c9a24, size 0x91c, virtual false, abstract: false, final false
inline void FindResourceUsageRanges() ;

/// @brief Method GenerateNativeCompilerDebugData, addr 0xb1ce3fc, size 0x24a4, virtual false, abstract: false, final false
inline void GenerateNativeCompilerDebugData(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>  debugData) ;

/// @brief Method Initialize, addr 0xb1c803c, size 0xcc, virtual false, abstract: false, final false
inline bool Initialize(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*  renderPasses, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*  debugParams, ::StringW  debugName, bool  useCompilationCaching, int32_t  graphHash, int32_t  frameIndex) ;

/// @brief Method InjectSpaces, addr 0xb1ce284, size 0x178, virtual false, abstract: false, final false
static inline ::StringW InjectSpaces(::StringW  camelCaseString) ;

/// @brief Method IsGlobalTextureInPass, addr 0xb1caf28, size 0x174, virtual false, abstract: false, final false
static inline bool IsGlobalTextureInPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  pass, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle  handle) ;

/// @brief Method IsSameNativeSubPass, addr 0xb1cb09c, size 0x1ac, virtual false, abstract: false, final false
static inline bool IsSameNativeSubPass(::by_ref<::UnityEngine::Rendering::SubPassDescriptor>  a, ::by_ref<::UnityEngine::Rendering::SubPassDescriptor>  b) ;

/// @brief Method MakeAttachmentInfo, addr 0xb1cd298, size 0x4e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo* MakeAttachmentInfo(Il2CppObject*  ctx, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>  nativePass, int32_t  attachmentIndex) ;

/// @brief Method MakePassBreakInfoMessage, addr 0xb1cd778, size 0x120, virtual false, abstract: false, final false
static inline ::StringW MakePassBreakInfoMessage(Il2CppObject*  ctx, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>  nativePass) ;

/// @brief Method MakePassMergeMessage, addr 0xb1cd898, size 0x9ec, virtual false, abstract: false, final false
static inline ::StringW MakePassMergeMessage(Il2CppObject*  ctx, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>  pass, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>  prevPass, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit  mergeResult) ;

static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* New_ctor(::GlobalNamespace::RenderGraphCompilationCache*  cache) ;

/// @brief Method PrepareNativeRenderPasses, addr 0xb1ca7e0, size 0xc4, virtual false, abstract: false, final false
inline void PrepareNativeRenderPasses() ;

/// @brief Method SetPassStatesForNativePass, addr 0xb1ca8a4, size 0xc, virtual false, abstract: false, final false
inline void SetPassStatesForNativePass(int32_t  nativePassId) ;

/// @brief Method SetupContextData, addr 0xb1c81ac, size 0xf0, virtual false, abstract: false, final false
inline void SetupContextData(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources) ;

/// @brief Method TryMergeNativePasses, addr 0xb1c96b8, size 0x36c, virtual false, abstract: false, final false
inline void TryMergeNativePasses() ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method ValidateAttachment, addr 0xb1cb924, size 0x178, virtual false, abstract: false, final false
inline void ValidateAttachment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>  attRenderTargetInfo, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, int32_t  nativePassWidth, int32_t  nativePassHeight, int32_t  nativePassMSAASamples, bool  isVrs) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method ValidateNativePass, addr 0xb1cb7ac, size 0x178, virtual false, abstract: false, final false
inline void ValidateNativePass(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>  nativePass, int32_t  width, int32_t  height, int32_t  depth, int32_t  samples, int32_t  attachmentCount) ;

constexpr Il2CppObject* const& __cordl_internal_get_contextData() const;

constexpr Il2CppObject*& __cordl_internal_get_contextData() ;

constexpr Il2CppObject* const& __cordl_internal_get_defaultContextData() const;

constexpr Il2CppObject*& __cordl_internal_get_defaultContextData() ;

constexpr ::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo const& __cordl_internal_get_graph() const;

constexpr ::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo& __cordl_internal_get_graph() ;

constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* const& __cordl_internal_get_graphPassNamesForDebug() const;

constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*& __cordl_internal_get_graphPassNamesForDebug() ;

constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor> const& __cordl_internal_get_m_BeginRenderPassAttachments() const;

constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor>& __cordl_internal_get_m_BeginRenderPassAttachments() ;

constexpr ::GlobalNamespace::RenderGraphCompilationCache* const& __cordl_internal_get_m_CompilationCache() const;

constexpr ::GlobalNamespace::RenderGraphCompilationCache*& __cordl_internal_get_m_CompilationCache() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_previousCommandBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_previousCommandBuffer() ;

constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_toVisitPassIds() const;

constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_toVisitPassIds() ;

constexpr void __cordl_internal_set_contextData(Il2CppObject*  value) ;

constexpr void __cordl_internal_set_defaultContextData(Il2CppObject*  value) ;

constexpr void __cordl_internal_set_graph(::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo  value) ;

constexpr void __cordl_internal_set_graphPassNamesForDebug(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*  value) ;

constexpr void __cordl_internal_set_m_BeginRenderPassAttachments(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor>  value) ;

constexpr void __cordl_internal_set_m_CompilationCache(::GlobalNamespace::RenderGraphCompilationCache*  value) ;

constexpr void __cordl_internal_set_previousCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set_toVisitPassIds(::System::Collections::Generic::Stack_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0xb1c7da4, size 0x134, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::RenderGraphCompilationCache*  cache) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativePassCompiler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativePassCompiler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativePassCompiler(NativePassCompiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativePassCompiler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativePassCompiler(NativePassCompiler const& ) = delete;

/// @brief Field ArbitraryMaxNbMergedPasses offset 0xffffffff size 0x4
static constexpr int32_t  ArbitraryMaxNbMergedPasses{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17226};

/// @brief Field k_EstimatedPassCount offset 0xffffffff size 0x4
static constexpr int32_t  k_EstimatedPassCount{static_cast<int32_t>(0x64)};

/// @brief Field k_MaxSubpass offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxSubpass{static_cast<int32_t>(0x8)};

/// @brief Field graph, offset: 0x10, size: 0x20, def value: None
 ::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo  ___graph;

/// @brief Field contextData, offset: 0x30, size: 0x8, def value: None
 Il2CppObject*  ___contextData;

/// @brief Field defaultContextData, offset: 0x38, size: 0x8, def value: None
 Il2CppObject*  ___defaultContextData;

/// @brief Field previousCommandBuffer, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ___previousCommandBuffer;

/// @brief Field toVisitPassIds, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<int32_t>*  ___toVisitPassIds;

/// @brief Field m_CompilationCache, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::RenderGraphCompilationCache*  ___m_CompilationCache;

/// @brief Field m_BeginRenderPassAttachments, offset: 0x58, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor>  ___m_BeginRenderPassAttachments;

/// @brief Field graphPassNamesForDebug, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*  ___graphPassNamesForDebug;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___graph) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___contextData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___defaultContextData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___previousCommandBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___toVisitPassIds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_CompilationCache) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_BeginRenderPassAttachments) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___graphPassNamesForDebug) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
