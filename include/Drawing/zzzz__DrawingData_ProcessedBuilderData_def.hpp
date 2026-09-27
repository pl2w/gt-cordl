#pragma once
// IWYU pragma private; include "Drawing/DrawingData_ProcessedBuilderData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__DrawingData_BuilderData_Meta_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_MeshBuffers_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_Type_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_ProcessedBuilderData)
namespace Drawing {
class DrawingData;
}
namespace GlobalNamespace {
struct BuilderData_DrawingData_Meta;
}
namespace GlobalNamespace {
struct DrawingData_MeshWithType;
}
namespace GlobalNamespace {
struct DrawingData_RenderedMeshWithType;
}
namespace GlobalNamespace {
struct GeometryBuilder_CameraInfo;
}
namespace GlobalNamespace {
struct ProcessedBuilderData_DrawingData_CapturedState;
}
namespace GlobalNamespace {
struct ProcessedBuilderData_DrawingData_MeshBuffers;
}
namespace GlobalNamespace {
struct ProcessedBuilderData_DrawingData_Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_ProcessedBuilderData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_ProcessedBuilderData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_ProcessedBuilderData, "Drawing", "DrawingData/ProcessedBuilderData");
// Dependencies Drawing.DrawingData::BuilderData::Meta, Drawing.DrawingData::ProcessedBuilderData::MeshBuffers, Drawing.DrawingData::ProcessedBuilderData::Type, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/ProcessedBuilderData
struct CORDL_TYPE DrawingData_ProcessedBuilderData {
public:
// Declarations
using CapturedState = ::GlobalNamespace::ProcessedBuilderData_DrawingData_CapturedState;

using MeshBuffers = ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers;

using Type = ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type;

/// @brief Field SubmittedJobs, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SubmittedJobs, put=setStaticF_SubmittedJobs)) int32_t  SubmittedJobs;

 __declspec(property(get=get_isValid)) bool  isValid;

 __declspec(property(get=get_splitterOutputPtr)) ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  splitterOutputPtr;

/// @brief Method BuildMeshes, addr 0x55cf4f0, size 0x94, virtual false, abstract: false, final false
inline void BuildMeshes(::Drawing::DrawingData*  gizmos) ;

/// @brief Method CollectMeshes, addr 0x55cf974, size 0x26c, virtual false, abstract: false, final false
inline void CollectMeshes(::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*  meshes) ;

/// @brief Method Dispose, addr 0x55cfef4, size 0xe0, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Init, addr 0x55cea54, size 0x140, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  type, ::GlobalNamespace::BuilderData_DrawingData_Meta  meta) ;

/// @brief Method IsValidForCamera, addr 0x55cf3e4, size 0x8c, virtual false, abstract: false, final false
inline bool IsValidForCamera(::UnityEngine::Camera*  camera, bool  allowGizmos, bool  allowCameraDefault) ;

/// @brief Method PoolDynamicMeshes, addr 0x55cfd70, size 0x20, virtual false, abstract: false, final false
inline void PoolDynamicMeshes(::Drawing::DrawingData*  gizmos) ;

/// @brief Method PoolMeshes, addr 0x55cfbe0, size 0x190, virtual false, abstract: false, final false
inline void PoolMeshes(::Drawing::DrawingData*  gizmos, bool  includeCustom) ;

/// @brief Method Release, addr 0x55cfd90, size 0x11c, virtual false, abstract: false, final false
inline void Release(::Drawing::DrawingData*  gizmos) ;

/// @brief Method Schedule, addr 0x55cf470, size 0x80, virtual false, abstract: false, final false
inline void Schedule(::Drawing::DrawingData*  gizmos, ::by_ref<::GlobalNamespace::GeometryBuilder_CameraInfo>  cameraInfo) ;

/// @brief Method SchedulePersistFilter, addr 0x55cf2b4, size 0x130, virtual false, abstract: false, final false
inline void SchedulePersistFilter(int32_t  version, int32_t  lastTickVersion, float_t  time, int32_t  sceneModeVersion) ;

/// @brief Method SetSplitterJob, addr 0x55ced9c, size 0x100, virtual false, abstract: false, final false
inline void SetSplitterJob(::Drawing::DrawingData*  gizmos, ::Unity::Jobs::JobHandle  splitterJob) ;

static inline int32_t getStaticF_SubmittedJobs() ;

/// @brief Method get_isValid, addr 0x55ce9f0, size 0x10, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// @brief Method get_splitterOutputPtr, addr 0x55cea00, size 0x54, virtual false, abstract: false, final false
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer* get_splitterOutputPtr() ;

static inline void setStaticF_SubmittedJobs(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_ProcessedBuilderData() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::ProcessedBuilderData_DrawingData_Type", modifiers: "", def_value: None, comment: None }, CppParam { name: "meta", ty: "::GlobalNamespace::BuilderData_DrawingData_Meta", modifiers: "", def_value: None, comment: None }, CppParam { name: "submitted", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "temporaryMeshBuffers", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>", modifiers: "", def_value: None, comment: None }, CppParam { name: "buildJob", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "splitterJob", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshes", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_MeshWithType>*", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_ProcessedBuilderData(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  type, ::GlobalNamespace::BuilderData_DrawingData_Meta  meta, bool  submitted, ::Unity::Collections::NativeArray_1<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>  temporaryMeshBuffers, ::Unity::Jobs::JobHandle  buildJob, ::Unity::Jobs::JobHandle  splitterJob, ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_MeshWithType>*  meshes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27731};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  type;

/// @brief Field meta, offset: 0x8, size: 0x40, def value: None
 ::GlobalNamespace::BuilderData_DrawingData_Meta  meta;

/// @brief Field submitted, offset: 0x48, size: 0x1, def value: None
 bool  submitted;

/// @brief Field temporaryMeshBuffers, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>  temporaryMeshBuffers;

/// @brief Field buildJob, offset: 0x60, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  buildJob;

/// @brief Field splitterJob, offset: 0x70, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  splitterJob;

/// @brief Field meshes, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_MeshWithType>*  meshes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderData, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderData, meta) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderData, submitted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderData, temporaryMeshBuffers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderData, buildJob) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderData, splitterJob) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderData, meshes) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_ProcessedBuilderData) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
