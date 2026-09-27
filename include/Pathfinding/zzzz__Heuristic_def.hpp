#pragma once
// IWYU pragma private; include "Pathfinding/Heuristic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Heuristic)
// Forward declare root types
namespace Pathfinding {
struct Heuristic;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Heuristic);
DEFINE_IL2CPP_CLASS(::Pathfinding::Heuristic, "Pathfinding", "Heuristic");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.Heuristic
struct CORDL_TYPE Heuristic {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Heuristic_Unwrapped
enum struct __Heuristic_Unwrapped : int32_t {
__E_Manhattan = static_cast<int32_t>(0x0),
__E_DiagonalManhattan = static_cast<int32_t>(0x1),
__E_Euclidean = static_cast<int32_t>(0x2),
__E_None = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Heuristic_Unwrapped () const noexcept {
return static_cast<__Heuristic_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Heuristic() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Heuristic(int32_t  value__) noexcept;

/// @brief Field DiagonalManhattan value: I32(1)
static ::Pathfinding::Heuristic const DiagonalManhattan;

/// @brief Field Euclidean value: I32(2)
static ::Pathfinding::Heuristic const Euclidean;

/// @brief Field Manhattan value: I32(0)
static ::Pathfinding::Heuristic const Manhattan;

/// @brief Field None value: I32(3)
static ::Pathfinding::Heuristic const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21210};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Heuristic, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Heuristic) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
