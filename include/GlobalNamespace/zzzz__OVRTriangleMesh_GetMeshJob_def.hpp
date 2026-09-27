#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh_GetMeshJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTriangleMesh_GetMeshJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTriangleMesh_GetMeshJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh_GetMeshJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTriangleMesh_GetMeshJob, "", "OVRTriangleMesh/GetMeshJob");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTriangleMesh/GetMeshJob
struct CORDL_TYPE OVRTriangleMesh_GetMeshJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xa57c250, size 0xd4, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTriangleMesh_GetMeshJob() ;

// Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr OVRTriangleMesh_GetMeshJob(uint64_t  Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions, ::Unity::Collections::NativeArray_1<int32_t>  Indices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11857};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Space, offset: 0x0, size: 0x8, def value: None
 uint64_t  Space;

/// @brief Field Positions, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions;

/// @brief Field Indices, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Indices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_GetMeshJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_GetMeshJob, Positions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_GetMeshJob, Indices) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRTriangleMesh_GetMeshJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
