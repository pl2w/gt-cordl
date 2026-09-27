#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMeshAnchor_BakeMeshJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMeshAnchor_BakeMeshJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct RoomMeshAnchor_BakeMeshJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RoomMeshAnchor_BakeMeshJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomMeshAnchor_BakeMeshJob, "", "RoomMeshAnchor/BakeMeshJob");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomMeshAnchor/BakeMeshJob
struct CORDL_TYPE RoomMeshAnchor_BakeMeshJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x9ec0a34, size 0x68, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr RoomMeshAnchor_BakeMeshJob() ;

// Ctor Parameters [CppParam { name: "MeshID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Convex", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RoomMeshAnchor_BakeMeshJob(int32_t  MeshID, bool  Convex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31428};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field MeshID, offset: 0x0, size: 0x4, def value: None
 int32_t  MeshID;

/// @brief Field Convex, offset: 0x4, size: 0x1, def value: None
 bool  Convex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_BakeMeshJob, MeshID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_BakeMeshJob, Convex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomMeshAnchor_BakeMeshJob) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
