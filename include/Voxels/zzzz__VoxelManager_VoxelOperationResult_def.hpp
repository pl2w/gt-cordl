#pragma once
// IWYU pragma private; include "Voxels/VoxelManager_VoxelOperationResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelManager_VoxelOperationResult)
// Forward declare root types
namespace GlobalNamespace {
struct VoxelManager_VoxelOperationResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoxelManager_VoxelOperationResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelManager_VoxelOperationResult, "Voxels", "VoxelManager/VoxelOperationResult");
// Dependencies UnityEngine.BoundsInt
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.VoxelManager/VoxelOperationResult
struct CORDL_TYPE VoxelManager_VoxelOperationResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VoxelManager_VoxelOperationResult() ;

// Ctor Parameters [CppParam { name: "worldId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bounds", ty: "::UnityEngine::BoundsInt", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr VoxelManager_VoxelOperationResult(int32_t  worldId, ::UnityEngine::BoundsInt  bounds, ::ArrayW<uint8_t>  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5068};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field worldId, offset: 0x0, size: 0x4, def value: None
 int32_t  worldId;

/// @brief Field bounds, offset: 0x4, size: 0x18, def value: None
 ::UnityEngine::BoundsInt  bounds;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelManager_VoxelOperationResult, worldId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelManager_VoxelOperationResult, bounds) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelManager_VoxelOperationResult, data) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelManager_VoxelOperationResult) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
