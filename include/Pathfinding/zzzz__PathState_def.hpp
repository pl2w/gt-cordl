#pragma once
// IWYU pragma private; include "Pathfinding/PathState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PathState)
// Forward declare root types
namespace Pathfinding {
struct PathState;
}
// Write type traits
MARK_VAL_T(::Pathfinding::PathState);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathState, "Pathfinding", "PathState");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.PathState
struct CORDL_TYPE PathState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PathState_Unwrapped
enum struct __PathState_Unwrapped : int32_t {
__E_Created = static_cast<int32_t>(0x0),
__E_PathQueue = static_cast<int32_t>(0x1),
__E_Processing = static_cast<int32_t>(0x2),
__E_ReturnQueue = static_cast<int32_t>(0x3),
__E_Returned = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PathState_Unwrapped () const noexcept {
return static_cast<__PathState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PathState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PathState(int32_t  value__) noexcept;

/// @brief Field Created value: I32(0)
static ::Pathfinding::PathState const Created;

/// @brief Field PathQueue value: I32(1)
static ::Pathfinding::PathState const PathQueue;

/// @brief Field Processing value: I32(2)
static ::Pathfinding::PathState const Processing;

/// @brief Field ReturnQueue value: I32(3)
static ::Pathfinding::PathState const ReturnQueue;

/// @brief Field Returned value: I32(4)
static ::Pathfinding::PathState const Returned;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21213};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathState) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
