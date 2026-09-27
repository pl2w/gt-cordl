#pragma once
// IWYU pragma private; include "Voxels/ChunkState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChunkState)
// Forward declare root types
namespace Voxels {
struct ChunkState;
}
// Write type traits
MARK_VAL_T(::Voxels::ChunkState);
DEFINE_IL2CPP_CLASS(::Voxels::ChunkState, "Voxels", "ChunkState");
// Dependencies 
namespace Voxels {
// Is value type: true
// CS Name: Voxels.ChunkState
struct CORDL_TYPE ChunkState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChunkState_Unwrapped
enum struct __ChunkState_Unwrapped : int32_t {
__E_UNINITIALIZED = static_cast<int32_t>(0x0),
__E_Created = static_cast<int32_t>(0x1),
__E_VoxelDataGenerated = static_cast<int32_t>(0x2),
__E_MeshDataGenerated = static_cast<int32_t>(0x3),
__E_MeshCreated = static_cast<int32_t>(0x4),
__E_CollisionBaked = static_cast<int32_t>(0x5),
__E_MeshAssigned = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChunkState_Unwrapped () const noexcept {
return static_cast<__ChunkState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChunkState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ChunkState(int32_t  value__) noexcept;

/// @brief Field CollisionBaked value: I32(5)
static ::Voxels::ChunkState const CollisionBaked;

/// @brief Field Created value: I32(1)
static ::Voxels::ChunkState const Created;

/// @brief Field MeshAssigned value: I32(6)
static ::Voxels::ChunkState const MeshAssigned;

/// @brief Field MeshCreated value: I32(4)
static ::Voxels::ChunkState const MeshCreated;

/// @brief Field MeshDataGenerated value: I32(3)
static ::Voxels::ChunkState const MeshDataGenerated;

/// @brief Field UNINITIALIZED value: I32(0)
static ::Voxels::ChunkState const UNINITIALIZED;

/// @brief Field VoxelDataGenerated value: I32(2)
static ::Voxels::ChunkState const VoxelDataGenerated;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5001};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::ChunkState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Voxels::ChunkState) == 0x4, "Size mismatch!");

} // namespace end def Voxels
