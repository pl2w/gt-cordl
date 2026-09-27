#pragma once
// IWYU pragma private; include "Drawing/DrawingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/Text/zzzz__SDFLookupData_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderDataContainer_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderDataContainer_def.hpp"
#include "Drawing/zzzz__RedrawScope_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData)
namespace Drawing {
struct CommandBuilder;
}
namespace Drawing {
class DrawingData_MeshCompareByDrawingOrder;
}
namespace Drawing {
class DrawingData___c;
}
namespace Drawing {
class DrawingSettings_Settings;
}
namespace Drawing {
class DrawingSettings;
}
namespace Drawing {
struct RedrawScope;
}
namespace GlobalNamespace {
struct DrawingData_BuilderDataContainer;
}
namespace GlobalNamespace {
struct DrawingData_BuilderData;
}
namespace GlobalNamespace {
struct DrawingData_CommandBufferWrapper;
}
namespace GlobalNamespace {
struct DrawingData_Hasher;
}
namespace GlobalNamespace {
struct DrawingData_MeshType;
}
namespace GlobalNamespace {
struct DrawingData_MeshWithType;
}
namespace GlobalNamespace {
struct DrawingData_ProcessedBuilderDataContainer;
}
namespace GlobalNamespace {
struct DrawingData_ProcessedBuilderData;
}
namespace GlobalNamespace {
struct DrawingData_Range;
}
namespace GlobalNamespace {
struct DrawingData_RenderedMeshWithType;
}
namespace GlobalNamespace {
struct DrawingData_SubmittedMesh;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace Drawing {
class BuilderData_DrawingData_AnyBuffersWrittenToDelegate;
}
namespace Drawing {
class BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall;
}
namespace Drawing {
class BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate;
}
namespace Drawing {
class BuilderData_DrawingData_ResetAllBuffersToDelegate;
}
namespace Drawing {
class BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall;
}
namespace Drawing {
class BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate;
}
namespace Drawing {
class DrawingData;
}
namespace Drawing {
class DrawingData_MeshCompareByDrawingOrder;
}
namespace Drawing {
class DrawingData___c;
}
// Write type traits
MARK_REF_T(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*);
MARK_REF_T(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall*);
MARK_REF_T(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*);
MARK_REF_T(::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*);
MARK_REF_T(::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall*);
MARK_REF_T(::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*);
MARK_REF_T(::Drawing::DrawingData*);
MARK_REF_T(::Drawing::DrawingData_MeshCompareByDrawingOrder*);
MARK_REF_T(::Drawing::DrawingData___c*);
DEFINE_IL2CPP_CLASS(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*, "Drawing", "DrawingData/BuilderData/AnyBuffersWrittenToDelegate");
DEFINE_IL2CPP_CLASS(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall*, "Drawing", "DrawingData/BuilderData/AnyBuffersWrittenTo_000002FB$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*, "Drawing", "DrawingData/BuilderData/AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*, "Drawing", "DrawingData/BuilderData/ResetAllBuffersToDelegate");
DEFINE_IL2CPP_CLASS(::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall*, "Drawing", "DrawingData/BuilderData/ResetAllBuffers_000002FC$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*, "Drawing", "DrawingData/BuilderData/ResetAllBuffers_000002FC$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::Drawing::DrawingData*, "Drawing", "DrawingData");
DEFINE_IL2CPP_CLASS(::Drawing::DrawingData_MeshCompareByDrawingOrder*, "Drawing", "DrawingData/MeshCompareByDrawingOrder");
DEFINE_IL2CPP_CLASS(::Drawing::DrawingData___c*, "Drawing", "DrawingData/<>c");
// Dependencies Drawing.DrawingData::BuilderDataContainer, Drawing.DrawingData::ProcessedBuilderDataContainer, Drawing.RedrawScope, Drawing.Text.SDFLookupData, System.Object, System.Runtime.InteropServices.GCHandle, Unity.Profiling.ProfilerMarker, UnityEngine.Plane
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingData
class CORDL_TYPE DrawingData : public ::System::Object {
public:
// Declarations
using MeshCompareByDrawingOrder = ::Drawing::DrawingData_MeshCompareByDrawingOrder;

using __c = ::Drawing::DrawingData___c;

using BuilderData = ::GlobalNamespace::DrawingData_BuilderData;

using BuilderDataContainer = ::GlobalNamespace::DrawingData_BuilderDataContainer;

using CommandBufferWrapper = ::GlobalNamespace::DrawingData_CommandBufferWrapper;

using Hasher = ::GlobalNamespace::DrawingData_Hasher;

using MeshType = ::GlobalNamespace::DrawingData_MeshType;

using MeshWithType = ::GlobalNamespace::DrawingData_MeshWithType;

using ProcessedBuilderData = ::GlobalNamespace::DrawingData_ProcessedBuilderData;

using ProcessedBuilderDataContainer = ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer;

using Range = ::GlobalNamespace::DrawingData_Range;

using RenderedMeshWithType = ::GlobalNamespace::DrawingData_RenderedMeshWithType;

using SubmittedMesh = ::GlobalNamespace::DrawingData_SubmittedMesh;

/// @brief Field LeakTracking, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LeakTracking, put=setStaticF_LeakTracking)) ::Unity::Profiling::ProfilerMarker  LeakTracking;

/// @brief Field MarkerAwaitUserDependencies, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerAwaitUserDependencies, put=setStaticF_MarkerAwaitUserDependencies)) ::Unity::Profiling::ProfilerMarker  MarkerAwaitUserDependencies;

/// @brief Field MarkerBuild, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerBuild, put=setStaticF_MarkerBuild)) ::Unity::Profiling::ProfilerMarker  MarkerBuild;

/// @brief Field MarkerBuildMeshes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerBuildMeshes, put=setStaticF_MarkerBuildMeshes)) ::Unity::Profiling::ProfilerMarker  MarkerBuildMeshes;

/// @brief Field MarkerCollectMeshes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerCollectMeshes, put=setStaticF_MarkerCollectMeshes)) ::Unity::Profiling::ProfilerMarker  MarkerCollectMeshes;

/// @brief Field MarkerPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerPool, put=setStaticF_MarkerPool)) ::Unity::Profiling::ProfilerMarker  MarkerPool;

/// @brief Field MarkerRelease, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerRelease, put=setStaticF_MarkerRelease)) ::Unity::Profiling::ProfilerMarker  MarkerRelease;

/// @brief Field MarkerSchedule, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerSchedule, put=setStaticF_MarkerSchedule)) ::Unity::Profiling::ProfilerMarker  MarkerSchedule;

/// @brief Field MarkerScheduleJobs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerScheduleJobs, put=setStaticF_MarkerScheduleJobs)) ::Unity::Profiling::ProfilerMarker  MarkerScheduleJobs;

/// @brief Field MarkerSortMeshes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerSortMeshes, put=setStaticF_MarkerSortMeshes)) ::Unity::Profiling::ProfilerMarker  MarkerSortMeshes;

/// @brief Field <version>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__version_k__BackingField, put=__cordl_internal_set__version_k__BackingField)) int32_t  _version_k__BackingField;

 __declspec(property(get=get_adjustedSceneModeVersion)) int32_t  adjustedSceneModeVersion;

/// @brief Field cachedMeshes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedMeshes, put=__cordl_internal_set_cachedMeshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  cachedMeshes;

/// @brief Field cameraVersions, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraVersions, put=__cordl_internal_set_cameraVersions)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::GlobalNamespace::DrawingData_Range>*  cameraVersions;

/// @brief Field currentDrawOrderIndex, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentDrawOrderIndex, put=__cordl_internal_set_currentDrawOrderIndex)) int32_t  currentDrawOrderIndex;

/// @brief Field customMaterialProperties, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMaterialProperties, put=__cordl_internal_set_customMaterialProperties)) ::UnityEngine::MaterialPropertyBlock*  customMaterialProperties;

/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::DrawingData_BuilderDataContainer  data;

/// @brief Field fontData, offset 0x58, size 0x20 
 __declspec(property(get=__cordl_internal_get_fontData, put=__cordl_internal_set_fontData)) ::Drawing::Text::SDFLookupData  fontData;

/// @brief Field frameRedrawScope, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_frameRedrawScope, put=__cordl_internal_set_frameRedrawScope)) ::Drawing::RedrawScope  frameRedrawScope;

/// @brief Field frustrumPlanes, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_frustrumPlanes, put=__cordl_internal_set_frustrumPlanes)) ::ArrayW<::UnityEngine::Plane>  frustrumPlanes;

/// @brief Field gizmosHandle, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gizmosHandle, put=__cordl_internal_set_gizmosHandle)) ::System::Runtime::InteropServices::GCHandle  gizmosHandle;

/// @brief Field lastTickVersion, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTickVersion, put=__cordl_internal_set_lastTickVersion)) int32_t  lastTickVersion;

/// @brief Field lastTickVersion2, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTickVersion2, put=__cordl_internal_set_lastTickVersion2)) int32_t  lastTickVersion2;

/// @brief Field lastTimeLargestCachedMeshWasUsed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTimeLargestCachedMeshWasUsed, put=__cordl_internal_set_lastTimeLargestCachedMeshWasUsed)) int32_t  lastTimeLargestCachedMeshWasUsed;

/// @brief Field lineMaterial, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineMaterial, put=__cordl_internal_set_lineMaterial)) ::UnityW<::UnityEngine::Material>  lineMaterial;

/// @brief Field meshSorter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_meshSorter, put=setStaticF_meshSorter)) ::Drawing::DrawingData_MeshCompareByDrawingOrder*  meshSorter;

/// @brief Field meshes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshes, put=__cordl_internal_set_meshes)) ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*  meshes;

/// @brief Field persistentRedrawScopes, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_persistentRedrawScopes, put=__cordl_internal_set_persistentRedrawScopes)) ::System::Collections::Generic::HashSet_1<int32_t>*  persistentRedrawScopes;

/// @brief Field processedData, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get_processedData, put=__cordl_internal_set_processedData)) ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer  processedData;

/// @brief Field sceneModeVersion, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneModeVersion, put=__cordl_internal_set_sceneModeVersion)) int32_t  sceneModeVersion;

/// @brief Field settingsAsset, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsAsset, put=__cordl_internal_set_settingsAsset)) ::UnityW<::Drawing::DrawingSettings>  settingsAsset;

 __declspec(property(get=get_settingsRef)) ::Drawing::DrawingSettings_Settings*  settingsRef;

/// @brief Field stagingCachedMeshes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_stagingCachedMeshes, put=__cordl_internal_set_stagingCachedMeshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  stagingCachedMeshes;

/// @brief Field surfaceMaterial, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceMaterial, put=__cordl_internal_set_surfaceMaterial)) ::UnityW<::UnityEngine::Material>  surfaceMaterial;

/// @brief Field textMaterial, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_textMaterial, put=__cordl_internal_set_textMaterial)) ::UnityW<::UnityEngine::Material>  textMaterial;

 __declspec(property(get=get_totalMemoryUsage)) int32_t  totalMemoryUsage;

 __declspec(property(get=get_version, put=set_version)) int32_t  version;

/// @brief Method CeilLog2, addr 0x55cd478, size 0xc0, virtual false, abstract: false, final false
static inline int32_t CeilLog2(int32_t  x) ;

/// @brief Method ClearData, addr 0x55ce46c, size 0x118, virtual false, abstract: false, final false
inline void ClearData() ;

/// @brief Method DiscardData, addr 0x55cc1dc, size 0x10, virtual false, abstract: false, final false
inline void DiscardData(::GlobalNamespace::DrawingData_Hasher  hasher) ;

/// @brief Method DisposeRedrawScope, addr 0x55cb82c, size 0x8c, virtual false, abstract: false, final false
inline void DisposeRedrawScope(::Drawing::RedrawScope  scope) ;

/// @brief Method Draw, addr 0x55cc3ec, size 0x60, virtual false, abstract: false, final false
inline bool Draw(::GlobalNamespace::DrawingData_Hasher  hasher) ;

/// @brief Method Draw, addr 0x55cc550, size 0x80, virtual false, abstract: false, final false
inline bool Draw(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  scope) ;

/// @brief Method Draw, addr 0x55cb4d0, size 0x14, virtual false, abstract: false, final false
inline void Draw(::Drawing::RedrawScope  scope) ;

/// @brief Method DrawUntilDisposed, addr 0x55cb79c, size 0x90, virtual false, abstract: false, final false
inline void DrawUntilDisposed(::Drawing::RedrawScope  scope) ;

/// @brief Method GetBuilder, addr 0x55cc0e4, size 0xe8, virtual false, abstract: false, final false
inline ::Drawing::CommandBuilder GetBuilder(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  redrawScope, bool  renderInGame) ;

/// @brief Method GetBuilder, addr 0x55cc020, size 0xc4, virtual false, abstract: false, final false
inline ::Drawing::CommandBuilder GetBuilder(::Drawing::RedrawScope  redrawScope, bool  renderInGame) ;

/// @brief Method GetBuilder, addr 0x55cbeb0, size 0xb4, virtual false, abstract: false, final false
inline ::Drawing::CommandBuilder GetBuilder(bool  renderInGame) ;

/// @brief Method GetBuiltInBuilder, addr 0x55cbf6c, size 0xb4, virtual false, abstract: false, final false
inline ::Drawing::CommandBuilder GetBuiltInBuilder(bool  renderInGame) ;

/// @brief Method GetMesh, addr 0x55cbb34, size 0x184, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> GetMesh(int32_t  desiredVertexCount) ;

/// @brief Method GetNextDrawOrderIndex, addr 0x55cb970, size 0x14, virtual false, abstract: false, final false
inline int32_t GetNextDrawOrderIndex() ;

/// @brief Method LoadFontDataIfNecessary, addr 0x55cbcb8, size 0xe8, virtual false, abstract: false, final false
inline void LoadFontDataIfNecessary() ;

/// @brief Method LoadMaterials, addr 0x55cd084, size 0x1bc, virtual false, abstract: false, final false
inline void LoadMaterials() ;

static inline ::Drawing::DrawingData* New_ctor() ;

/// @brief Method OnChangingPlayMode, addr 0x55cc3dc, size 0x10, virtual false, abstract: false, final false
inline void OnChangingPlayMode() ;

/// @brief Method PoolMesh, addr 0x55cb984, size 0xac, virtual false, abstract: false, final false
inline void PoolMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method PostRenderCleanup, addr 0x55ccc50, size 0x24, virtual false, abstract: false, final false
inline void PostRenderCleanup() ;

/// @brief Method Render, addr 0x55cd538, size 0x780, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Camera*  cam, bool  allowGizmos, ::GlobalNamespace::DrawingData_CommandBufferWrapper  commandBuffer, bool  allowCameraDefault) ;

/// @brief Method SortPooledMeshes, addr 0x55cba30, size 0x104, virtual false, abstract: false, final false
inline void SortPooledMeshes() ;

/// @brief Method TickFramePreRender, addr 0x55cc73c, size 0x2d8, virtual false, abstract: false, final false
inline void TickFramePreRender() ;

/// @brief Method TransformBoundingBox, addr 0x55cdfe4, size 0x424, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds TransformBoundingBox(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Bounds  bounds) ;

/// @brief Method UpdateTime, addr 0x55cbe0c, size 0xa4, virtual false, abstract: false, final false
static inline void UpdateTime() ;

constexpr int32_t const& __cordl_internal_get__version_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__version_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_cachedMeshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_cachedMeshes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::GlobalNamespace::DrawingData_Range>* const& __cordl_internal_get_cameraVersions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::GlobalNamespace::DrawingData_Range>*& __cordl_internal_get_cameraVersions() ;

constexpr int32_t const& __cordl_internal_get_currentDrawOrderIndex() const;

constexpr int32_t& __cordl_internal_get_currentDrawOrderIndex() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_customMaterialProperties() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_customMaterialProperties() ;

constexpr ::GlobalNamespace::DrawingData_BuilderDataContainer const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::DrawingData_BuilderDataContainer& __cordl_internal_get_data() ;

constexpr ::Drawing::Text::SDFLookupData const& __cordl_internal_get_fontData() const;

constexpr ::Drawing::Text::SDFLookupData& __cordl_internal_get_fontData() ;

constexpr ::Drawing::RedrawScope const& __cordl_internal_get_frameRedrawScope() const;

constexpr ::Drawing::RedrawScope& __cordl_internal_get_frameRedrawScope() ;

constexpr ::ArrayW<::UnityEngine::Plane> const& __cordl_internal_get_frustrumPlanes() const;

constexpr ::ArrayW<::UnityEngine::Plane>& __cordl_internal_get_frustrumPlanes() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_gizmosHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_gizmosHandle() ;

constexpr int32_t const& __cordl_internal_get_lastTickVersion() const;

constexpr int32_t& __cordl_internal_get_lastTickVersion() ;

constexpr int32_t const& __cordl_internal_get_lastTickVersion2() const;

constexpr int32_t& __cordl_internal_get_lastTickVersion2() ;

constexpr int32_t const& __cordl_internal_get_lastTimeLargestCachedMeshWasUsed() const;

constexpr int32_t& __cordl_internal_get_lastTimeLargestCachedMeshWasUsed() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lineMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lineMaterial() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>* const& __cordl_internal_get_meshes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*& __cordl_internal_get_meshes() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_persistentRedrawScopes() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_persistentRedrawScopes() ;

constexpr ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer const& __cordl_internal_get_processedData() const;

constexpr ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer& __cordl_internal_get_processedData() ;

constexpr int32_t const& __cordl_internal_get_sceneModeVersion() const;

constexpr int32_t& __cordl_internal_get_sceneModeVersion() ;

constexpr ::UnityW<::Drawing::DrawingSettings> const& __cordl_internal_get_settingsAsset() const;

constexpr ::UnityW<::Drawing::DrawingSettings>& __cordl_internal_get_settingsAsset() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_stagingCachedMeshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_stagingCachedMeshes() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_surfaceMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_surfaceMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_textMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_textMaterial() ;

constexpr void __cordl_internal_set__version_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_cachedMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_cameraVersions(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::GlobalNamespace::DrawingData_Range>*  value) ;

constexpr void __cordl_internal_set_currentDrawOrderIndex(int32_t  value) ;

constexpr void __cordl_internal_set_customMaterialProperties(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::DrawingData_BuilderDataContainer  value) ;

constexpr void __cordl_internal_set_fontData(::Drawing::Text::SDFLookupData  value) ;

constexpr void __cordl_internal_set_frameRedrawScope(::Drawing::RedrawScope  value) ;

constexpr void __cordl_internal_set_frustrumPlanes(::ArrayW<::UnityEngine::Plane>  value) ;

constexpr void __cordl_internal_set_gizmosHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_lastTickVersion(int32_t  value) ;

constexpr void __cordl_internal_set_lastTickVersion2(int32_t  value) ;

constexpr void __cordl_internal_set_lastTimeLargestCachedMeshWasUsed(int32_t  value) ;

constexpr void __cordl_internal_set_lineMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_meshes(::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*  value) ;

constexpr void __cordl_internal_set_persistentRedrawScopes(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_processedData(::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer  value) ;

constexpr void __cordl_internal_set_sceneModeVersion(int32_t  value) ;

constexpr void __cordl_internal_set_settingsAsset(::UnityW<::Drawing::DrawingSettings>  value) ;

constexpr void __cordl_internal_set_stagingCachedMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_surfaceMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_textMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x55cd240, size 0x238, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_LeakTracking() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerAwaitUserDependencies() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerBuild() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerBuildMeshes() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerCollectMeshes() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerPool() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerRelease() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerSchedule() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerScheduleJobs() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerSortMeshes() ;

static inline ::Drawing::DrawingData_MeshCompareByDrawingOrder* getStaticF_meshSorter() ;

/// @brief Method get_CurrentTime, addr 0x55cbda0, size 0x6c, virtual false, abstract: false, final false
static inline float_t get_CurrentTime() ;

/// @brief Method get_adjustedSceneModeVersion, addr 0x55cb904, size 0x6c, virtual false, abstract: false, final false
inline int32_t get_adjustedSceneModeVersion() ;

/// @brief Method get_settingsRef, addr 0x55cc1ec, size 0xfc, virtual false, abstract: false, final false
inline ::Drawing::DrawingSettings_Settings* get_settingsRef() ;

/// @brief Method get_totalMemoryUsage, addr 0x55ccd48, size 0x30, virtual false, abstract: false, final false
inline int32_t get_totalMemoryUsage() ;

/// [CompilerGenerated]
/// @brief Method get_version, addr 0x55cc340, size 0x8, virtual false, abstract: false, final false
inline int32_t get_version() ;

static inline void setStaticF_LeakTracking(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerAwaitUserDependencies(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerBuild(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerBuildMeshes(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerCollectMeshes(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerPool(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerRelease(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerSchedule(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerScheduleJobs(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerSortMeshes(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_meshSorter(::Drawing::DrawingData_MeshCompareByDrawingOrder*  value) ;

/// [CompilerGenerated]
/// @brief Method set_version, addr 0x55cc348, size 0x8, virtual false, abstract: false, final false
inline void set_version(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawingData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawingData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawingData(DrawingData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawingData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawingData(DrawingData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27752};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::DrawingData_BuilderDataContainer  ___data;

/// @brief Field processedData, offset: 0x18, size: 0x20, def value: None
 ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer  ___processedData;

/// @brief Field meshes, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*  ___meshes;

/// @brief Field cachedMeshes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___cachedMeshes;

/// @brief Field stagingCachedMeshes, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___stagingCachedMeshes;

/// @brief Field lastTimeLargestCachedMeshWasUsed, offset: 0x50, size: 0x4, def value: None
 int32_t  ___lastTimeLargestCachedMeshWasUsed;

/// @brief Field fontData, offset: 0x58, size: 0x20, def value: None
 ::Drawing::Text::SDFLookupData  ___fontData;

/// @brief Field currentDrawOrderIndex, offset: 0x78, size: 0x4, def value: None
 int32_t  ___currentDrawOrderIndex;

/// @brief Field sceneModeVersion, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___sceneModeVersion;

/// @brief Field surfaceMaterial, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___surfaceMaterial;

/// @brief Field lineMaterial, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___lineMaterial;

/// @brief Field textMaterial, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___textMaterial;

/// @brief Field settingsAsset, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::Drawing::DrawingSettings>  ___settingsAsset;

/// [CompilerGenerated]
/// @brief Field <version>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____version_k__BackingField;

/// @brief Field lastTickVersion, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___lastTickVersion;

/// @brief Field lastTickVersion2, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___lastTickVersion2;

/// @brief Field persistentRedrawScopes, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___persistentRedrawScopes;

/// @brief Field gizmosHandle, offset: 0xb8, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___gizmosHandle;

/// @brief Field frameRedrawScope, offset: 0xc0, size: 0x10, def value: None
 ::Drawing::RedrawScope  ___frameRedrawScope;

/// @brief Field cameraVersions, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::GlobalNamespace::DrawingData_Range>*  ___cameraVersions;

/// @brief Field frustrumPlanes, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Plane>  ___frustrumPlanes;

/// @brief Field customMaterialProperties, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___customMaterialProperties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::DrawingData, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___processedData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___meshes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___cachedMeshes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___stagingCachedMeshes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___lastTimeLargestCachedMeshWasUsed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___fontData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___currentDrawOrderIndex) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___sceneModeVersion) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___surfaceMaterial) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___lineMaterial) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___textMaterial) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___settingsAsset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ____version_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___lastTickVersion) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___lastTickVersion2) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___persistentRedrawScopes) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___gizmosHandle) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___frameRedrawScope) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___cameraVersions) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___frustrumPlanes) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingData, ___customMaterialProperties) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::Drawing::DrawingData) == 0xe8, "Size mismatch!");

} // namespace end def Drawing
// [CompilerGenerated]
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingData/<>c
class CORDL_TYPE DrawingData___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Drawing::DrawingData___c*  __9;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::System::Comparison_1<::UnityW<::UnityEngine::Mesh>>*  __9__22_0;

static inline ::Drawing::DrawingData___c* New_ctor() ;

/// @brief Method <SortPooledMeshes>b__22_0, addr 0x55d24ac, size 0x44, virtual false, abstract: false, final false
inline int32_t _SortPooledMeshes_b__22_0(::UnityEngine::Mesh*  a, ::UnityEngine::Mesh*  b) ;

/// @brief Method .ctor, addr 0x55d24a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Drawing::DrawingData___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::UnityEngine::Mesh>>* getStaticF___9__22_0() ;

static inline void setStaticF___9(::Drawing::DrawingData___c*  value) ;

static inline void setStaticF___9__22_0(::System::Comparison_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawingData___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawingData___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawingData___c(DrawingData___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawingData___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawingData___c(DrawingData___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27751};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::DrawingData___c) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingData/MeshCompareByDrawingOrder
class CORDL_TYPE DrawingData_MeshCompareByDrawingOrder : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*() noexcept;

/// @brief Method Compare, addr 0x55d2414, size 0x28, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::DrawingData_RenderedMeshWithType  a, ::GlobalNamespace::DrawingData_RenderedMeshWithType  b) ;

static inline ::Drawing::DrawingData_MeshCompareByDrawingOrder* New_ctor() ;

/// @brief Method .ctor, addr 0x55ce9d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>* i___System__Collections__Generic__IComparer_1___GlobalNamespace__DrawingData_RenderedMeshWithType_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_MeshCompareByDrawingOrder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawingData_MeshCompareByDrawingOrder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawingData_MeshCompareByDrawingOrder(DrawingData_MeshCompareByDrawingOrder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawingData_MeshCompareByDrawingOrder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawingData_MeshCompareByDrawingOrder(DrawingData_MeshCompareByDrawingOrder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::DrawingData_MeshCompareByDrawingOrder) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.IntPtr, System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingData/BuilderData/ResetAllBuffers_000002FC$BurstDirectCall
class CORDL_TYPE BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x55d1f08, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x55d1e18, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x55d05e8, size 0xdc, virtual false, abstract: false, final false
static inline void Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall(BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall(BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27741};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingData/BuilderData/ResetAllBuffers_000002FC$PostfixBurstDelegate
class CORDL_TYPE BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x55d1dac, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method EndInvoke, addr 0x55d1e0c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x55d1d98, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers) ;

static inline ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x55d1ce4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate(BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate(BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27740};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.IntPtr, System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingData/BuilderData/AnyBuffersWrittenTo_000002FB$BurstDirectCall
class CORDL_TYPE BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x55d1ccc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x55d1bdc, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x55d04f0, size 0xf8, virtual false, abstract: false, final false
static inline bool Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall(BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall(BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27739};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingData/BuilderData/AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate
class CORDL_TYPE BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x55d1b54, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method EndInvoke, addr 0x55d1bb4, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x55d1b40, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers) ;

static inline ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x55d1a8c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate(BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate(BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27738};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def Drawing
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingData/BuilderData/ResetAllBuffersToDelegate
class CORDL_TYPE BuilderData_DrawingData_ResetAllBuffersToDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x55d1a20, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x55d1a80, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x55d1a0c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers) ;

static inline ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x55d177c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderData_DrawingData_ResetAllBuffersToDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_ResetAllBuffersToDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderData_DrawingData_ResetAllBuffersToDelegate(BuilderData_DrawingData_ResetAllBuffersToDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_ResetAllBuffersToDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderData_DrawingData_ResetAllBuffersToDelegate(BuilderData_DrawingData_ResetAllBuffersToDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27737};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate) == 0x80, "Size mismatch!");

} // namespace end def Drawing
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingData/BuilderData/AnyBuffersWrittenToDelegate
class CORDL_TYPE BuilderData_DrawingData_AnyBuffersWrittenToDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x55d1984, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x55d19e4, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x55d1970, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers) ;

static inline ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x55d16c8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderData_DrawingData_AnyBuffersWrittenToDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_AnyBuffersWrittenToDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderData_DrawingData_AnyBuffersWrittenToDelegate(BuilderData_DrawingData_AnyBuffersWrittenToDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderData_DrawingData_AnyBuffersWrittenToDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderData_DrawingData_AnyBuffersWrittenToDelegate(BuilderData_DrawingData_AnyBuffersWrittenToDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27736};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate) == 0x80, "Size mismatch!");

} // namespace end def Drawing
