#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneVolumeMeshFilter_PopulateMeshDataJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_MeshData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneVolumeMeshFilter_PopulateMeshDataJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneVolumeMeshFilter_PopulateMeshDataJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneVolumeMeshFilter_PopulateMeshDataJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneVolumeMeshFilter_PopulateMeshDataJob, "", "OVRSceneVolumeMeshFilter/PopulateMeshDataJob");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Mesh::MeshData, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneVolumeMeshFilter/PopulateMeshDataJob
struct CORDL_TYPE OVRSceneVolumeMeshFilter_PopulateMeshDataJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xa63cad0, size 0x220, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneVolumeMeshFilter_PopulateMeshDataJob() ;

// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MeshData", ty: "::GlobalNamespace::Mesh_MeshData", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneVolumeMeshFilter_PopulateMeshDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices, ::Unity::Collections::NativeArray_1<int32_t>  Triangles, ::GlobalNamespace::Mesh_MeshData  MeshData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12448};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [ReadOnly]
/// @brief Field Vertices, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices;

/// [ReadOnly]
/// @brief Field Triangles, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Triangles;

/// [WriteOnly]
/// @brief Field MeshData, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::Mesh_MeshData  MeshData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter_PopulateMeshDataJob, Vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter_PopulateMeshDataJob, Triangles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter_PopulateMeshDataJob, MeshData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneVolumeMeshFilter_PopulateMeshDataJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
