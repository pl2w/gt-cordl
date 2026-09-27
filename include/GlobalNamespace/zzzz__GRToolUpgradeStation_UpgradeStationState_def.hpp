#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradeStation_UpgradeStationState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolUpgradeStation_UpgradeStationState)
// Forward declare root types
namespace GlobalNamespace {
struct GRToolUpgradeStation_UpgradeStationState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState, "", "GRToolUpgradeStation/UpgradeStationState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRToolUpgradeStation/UpgradeStationState
struct CORDL_TYPE GRToolUpgradeStation_UpgradeStationState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRToolUpgradeStation_UpgradeStationState_Unwrapped
enum struct __GRToolUpgradeStation_UpgradeStationState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_ItemInserted = static_cast<int32_t>(0x1),
__E_Upgrading = static_cast<int32_t>(0x2),
__E_Complete = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRToolUpgradeStation_UpgradeStationState_Unwrapped () const noexcept {
return static_cast<__GRToolUpgradeStation_UpgradeStationState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgradeStation_UpgradeStationState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRToolUpgradeStation_UpgradeStationState(int32_t  value__) noexcept;

/// @brief Field Complete value: I32(3)
static ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState const Complete;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState const Idle;

/// @brief Field ItemInserted value: I32(1)
static ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState const ItemInserted;

/// @brief Field Upgrading value: I32(2)
static ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState const Upgrading;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2094};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
