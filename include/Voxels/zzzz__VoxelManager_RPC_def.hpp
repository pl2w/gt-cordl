#pragma once
// IWYU pragma private; include "Voxels/VoxelManager_RPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelManager_RPC)
// Forward declare root types
namespace GlobalNamespace {
struct VoxelManager_RPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoxelManager_RPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelManager_RPC, "Voxels", "VoxelManager/RPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.VoxelManager/RPC
struct CORDL_TYPE VoxelManager_RPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VoxelManager_RPC_Unwrapped
enum struct __VoxelManager_RPC_Unwrapped : int32_t {
__E_WorldRequest = static_cast<int32_t>(0x0),
__E_OperationRequest = static_cast<int32_t>(0x1),
__E_MineRequest = static_cast<int32_t>(0x2),
__E_StartChunk = static_cast<int32_t>(0x3),
__E_StartEmptyChunk = static_cast<int32_t>(0x4),
__E_ContinueChunk = static_cast<int32_t>(0x5),
__E_SetDensity = static_cast<int32_t>(0x6),
__E_MineCommand = static_cast<int32_t>(0x7),
__E_Count = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoxelManager_RPC_Unwrapped () const noexcept {
return static_cast<__VoxelManager_RPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VoxelManager_RPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VoxelManager_RPC(int32_t  value__) noexcept;

/// @brief Field ContinueChunk value: I32(5)
static ::GlobalNamespace::VoxelManager_RPC const ContinueChunk;

/// @brief Field Count value: I32(8)
static ::GlobalNamespace::VoxelManager_RPC const Count;

/// @brief Field MineCommand value: I32(7)
static ::GlobalNamespace::VoxelManager_RPC const MineCommand;

/// @brief Field MineRequest value: I32(2)
static ::GlobalNamespace::VoxelManager_RPC const MineRequest;

/// @brief Field OperationRequest value: I32(1)
static ::GlobalNamespace::VoxelManager_RPC const OperationRequest;

/// @brief Field SetDensity value: I32(6)
static ::GlobalNamespace::VoxelManager_RPC const SetDensity;

/// @brief Field StartChunk value: I32(3)
static ::GlobalNamespace::VoxelManager_RPC const StartChunk;

/// @brief Field StartEmptyChunk value: I32(4)
static ::GlobalNamespace::VoxelManager_RPC const StartEmptyChunk;

/// @brief Field WorldRequest value: I32(0)
static ::GlobalNamespace::VoxelManager_RPC const WorldRequest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5071};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelManager_RPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelManager_RPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
