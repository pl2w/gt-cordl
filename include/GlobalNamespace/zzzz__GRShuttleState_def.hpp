#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShuttleState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRShuttleState)
// Forward declare root types
namespace GlobalNamespace {
struct GRShuttleState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRShuttleState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRShuttleState, "", "GRShuttleState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRShuttleState
struct CORDL_TYPE GRShuttleState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRShuttleState_Unwrapped
enum struct __GRShuttleState_Unwrapped : int32_t {
__E_Docking = static_cast<int32_t>(0x0),
__E_Docked = static_cast<int32_t>(0x1),
__E_PreMove = static_cast<int32_t>(0x2),
__E_Moving = static_cast<int32_t>(0x3),
__E_PostMove = static_cast<int32_t>(0x4),
__E_Arriving = static_cast<int32_t>(0x5),
__E_PostArrive = static_cast<int32_t>(0x6),
__E_Count = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRShuttleState_Unwrapped () const noexcept {
return static_cast<__GRShuttleState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRShuttleState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRShuttleState(int32_t  value__) noexcept;

/// @brief Field Arriving value: I32(5)
static ::GlobalNamespace::GRShuttleState const Arriving;

/// @brief Field Count value: I32(7)
static ::GlobalNamespace::GRShuttleState const Count;

/// @brief Field Docked value: I32(1)
static ::GlobalNamespace::GRShuttleState const Docked;

/// @brief Field Docking value: I32(0)
static ::GlobalNamespace::GRShuttleState const Docking;

/// @brief Field Moving value: I32(3)
static ::GlobalNamespace::GRShuttleState const Moving;

/// @brief Field PostArrive value: I32(6)
static ::GlobalNamespace::GRShuttleState const PostArrive;

/// @brief Field PostMove value: I32(4)
static ::GlobalNamespace::GRShuttleState const PostMove;

/// @brief Field PreMove value: I32(2)
static ::GlobalNamespace::GRShuttleState const PreMove;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2043};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRShuttleState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRShuttleState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
