#pragma once
// IWYU pragma private; include "Voxels/CollisionJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__MeshColliderCookingOptions_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CollisionJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Voxels {
struct CollisionJob;
}
// Write type traits
MARK_VAL_T(::Voxels::CollisionJob);
DEFINE_IL2CPP_CLASS(::Voxels::CollisionJob, "Voxels", "CollisionJob");
// [BurstCompile]
// Dependencies UnityEngine.EntityId, UnityEngine.MeshColliderCookingOptions
namespace Voxels {
// Is value type: true
// CS Name: Voxels.CollisionJob
struct CORDL_TYPE CollisionJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x5daedc8, size 0x64, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CollisionJob() ;

// Ctor Parameters [CppParam { name: "MeshId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None, comment: None }]
constexpr CollisionJob(::UnityEngine::EntityId  MeshId) noexcept;

/// @brief Field CookingOptions value: I32(30)
static ::UnityEngine::MeshColliderCookingOptions const CookingOptions;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5010};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field MeshId, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  MeshId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::CollisionJob, MeshId) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Voxels::CollisionJob) == 0x4, "Size mismatch!");

} // namespace end def Voxels
