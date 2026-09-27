#pragma once
// IWYU pragma private; include "Pathfinding/InspectorGridMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InspectorGridMode)
// Forward declare root types
namespace Pathfinding {
struct InspectorGridMode;
}
// Write type traits
MARK_VAL_T(::Pathfinding::InspectorGridMode);
DEFINE_IL2CPP_CLASS(::Pathfinding::InspectorGridMode, "Pathfinding", "InspectorGridMode");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.InspectorGridMode
struct CORDL_TYPE InspectorGridMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InspectorGridMode_Unwrapped
enum struct __InspectorGridMode_Unwrapped : int32_t {
__E_Grid = static_cast<int32_t>(0x0),
__E_IsometricGrid = static_cast<int32_t>(0x1),
__E_Hexagonal = static_cast<int32_t>(0x2),
__E_Advanced = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InspectorGridMode_Unwrapped () const noexcept {
return static_cast<__InspectorGridMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InspectorGridMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InspectorGridMode(int32_t  value__) noexcept;

/// @brief Field Advanced value: I32(3)
static ::Pathfinding::InspectorGridMode const Advanced;

/// @brief Field Grid value: I32(0)
static ::Pathfinding::InspectorGridMode const Grid;

/// @brief Field Hexagonal value: I32(2)
static ::Pathfinding::InspectorGridMode const Hexagonal;

/// @brief Field IsometricGrid value: I32(1)
static ::Pathfinding::InspectorGridMode const IsometricGrid;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21218};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::InspectorGridMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::InspectorGridMode) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
