#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradePurchaseStationFull_ShelfMovementState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolUpgradePurchaseStationFull_ShelfMovementState)
// Forward declare root types
namespace GlobalNamespace {
struct GRToolUpgradePurchaseStationFull_ShelfMovementState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState, "", "GRToolUpgradePurchaseStationFull/ShelfMovementState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRToolUpgradePurchaseStationFull/ShelfMovementState
struct CORDL_TYPE GRToolUpgradePurchaseStationFull_ShelfMovementState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRToolUpgradePurchaseStationFull_ShelfMovementState_Unwrapped
enum struct __GRToolUpgradePurchaseStationFull_ShelfMovementState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_MoveCurrentShelfBackward = static_cast<int32_t>(0x1),
__E_MoveCurrentShelfForward = static_cast<int32_t>(0x2),
__E_MoveNextShelfUpward = static_cast<int32_t>(0x3),
__E_MoveNextShelfDownward = static_cast<int32_t>(0x4),
__E_Count = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRToolUpgradePurchaseStationFull_ShelfMovementState_Unwrapped () const noexcept {
return static_cast<__GRToolUpgradePurchaseStationFull_ShelfMovementState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgradePurchaseStationFull_ShelfMovementState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRToolUpgradePurchaseStationFull_ShelfMovementState(int32_t  value__) noexcept;

/// @brief Field Count value: I32(5)
static ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState const Count;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState const Idle;

/// @brief Field MoveCurrentShelfBackward value: I32(1)
static ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState const MoveCurrentShelfBackward;

/// @brief Field MoveCurrentShelfForward value: I32(2)
static ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState const MoveCurrentShelfForward;

/// @brief Field MoveNextShelfDownward value: I32(4)
static ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState const MoveNextShelfDownward;

/// @brief Field MoveNextShelfUpward value: I32(3)
static ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState const MoveNextShelfUpward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2089};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
