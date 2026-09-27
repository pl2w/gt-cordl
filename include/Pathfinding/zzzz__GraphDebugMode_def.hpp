#pragma once
// IWYU pragma private; include "Pathfinding/GraphDebugMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphDebugMode)
// Forward declare root types
namespace Pathfinding {
struct GraphDebugMode;
}
// Write type traits
MARK_VAL_T(::Pathfinding::GraphDebugMode);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphDebugMode, "Pathfinding", "GraphDebugMode");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.GraphDebugMode
struct CORDL_TYPE GraphDebugMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphDebugMode_Unwrapped
enum struct __GraphDebugMode_Unwrapped : int32_t {
__E_SolidColor = static_cast<int32_t>(0x0),
__E_G = static_cast<int32_t>(0x1),
__E_H = static_cast<int32_t>(0x2),
__E_F = static_cast<int32_t>(0x3),
__E_Penalty = static_cast<int32_t>(0x4),
__E_Areas = static_cast<int32_t>(0x5),
__E_Tags = static_cast<int32_t>(0x6),
__E_HierarchicalNode = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphDebugMode_Unwrapped () const noexcept {
return static_cast<__GraphDebugMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphDebugMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GraphDebugMode(int32_t  value__) noexcept;

/// @brief Field Areas value: I32(5)
static ::Pathfinding::GraphDebugMode const Areas;

/// @brief Field F value: I32(3)
static ::Pathfinding::GraphDebugMode const F;

/// @brief Field G value: I32(1)
static ::Pathfinding::GraphDebugMode const G;

/// @brief Field H value: I32(2)
static ::Pathfinding::GraphDebugMode const H;

/// @brief Field HierarchicalNode value: I32(7)
static ::Pathfinding::GraphDebugMode const HierarchicalNode;

/// @brief Field Penalty value: I32(4)
static ::Pathfinding::GraphDebugMode const Penalty;

/// @brief Field SolidColor value: I32(0)
static ::Pathfinding::GraphDebugMode const SolidColor;

/// @brief Field Tags value: I32(6)
static ::Pathfinding::GraphDebugMode const Tags;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21211};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphDebugMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphDebugMode) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
