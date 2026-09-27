#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshJobs_TransformToUnitySpaceJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector4f_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector4s_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMeshJobs_TransformToUnitySpaceJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshJobs_TransformToUnitySpaceJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob, "", "OVRMeshJobs/TransformToUnitySpaceJob");
// Dependencies OVRPlugin::Vector2f, OVRPlugin::Vector3f, OVRPlugin::Vector4f, OVRPlugin::Vector4s, Unity.Collections.NativeArray`1<T>, UnityEngine.BoneWeight, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMeshJobs/TransformToUnitySpaceJob
struct CORDL_TYPE OVRMeshJobs_TransformToUnitySpaceJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xa667cfc, size 0x180, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRMeshJobs_TransformToUnitySpaceJob() ;

// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Normals", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "UV", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MeshVerticesPosition", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MeshNormals", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MeshUV", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector2f>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MeshBoneWeights", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4f>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MeshBoneIndices", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4s>", modifiers: "", def_value: None, comment: None }]
constexpr OVRMeshJobs_TransformToUnitySpaceJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Normals, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  UV, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  BoneWeights, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>  MeshVerticesPosition, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>  MeshNormals, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector2f>  MeshUV, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4f>  MeshBoneWeights, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4s>  MeshBoneIndices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12657};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field Vertices, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices;

/// @brief Field Normals, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Normals;

/// @brief Field UV, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  UV;

/// @brief Field BoneWeights, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  BoneWeights;

/// @brief Field MeshVerticesPosition, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>  MeshVerticesPosition;

/// @brief Field MeshNormals, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>  MeshNormals;

/// @brief Field MeshUV, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector2f>  MeshUV;

/// @brief Field MeshBoneWeights, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4f>  MeshBoneWeights;

/// @brief Field MeshBoneIndices, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4s>  MeshBoneIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob, Vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob, Normals) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob, UV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob, BoneWeights) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob, MeshVerticesPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob, MeshNormals) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob, MeshUV) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob, MeshBoneWeights) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob, MeshBoneIndices) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
