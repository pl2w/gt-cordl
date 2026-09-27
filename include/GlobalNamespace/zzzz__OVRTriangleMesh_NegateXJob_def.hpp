#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh_NegateXJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTriangleMesh_NegateXJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTriangleMesh_NegateXJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh_NegateXJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTriangleMesh_NegateXJob, "", "OVRTriangleMesh/NegateXJob");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTriangleMesh/NegateXJob
struct CORDL_TYPE OVRTriangleMesh_NegateXJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xa57c344, size 0x1c, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTriangleMesh_NegateXJob() ;

// Ctor Parameters [CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }]
constexpr OVRTriangleMesh_NegateXJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11860};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Positions, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_NegateXJob, Positions) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRTriangleMesh_NegateXJob) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
