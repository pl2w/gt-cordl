#pragma once
// IWYU pragma private; include "Pathfinding/HeuristicOptimizationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HeuristicOptimizationMode)
// Forward declare root types
namespace Pathfinding {
struct HeuristicOptimizationMode;
}
// Write type traits
MARK_VAL_T(::Pathfinding::HeuristicOptimizationMode);
DEFINE_IL2CPP_CLASS(::Pathfinding::HeuristicOptimizationMode, "Pathfinding", "HeuristicOptimizationMode");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.HeuristicOptimizationMode
struct CORDL_TYPE HeuristicOptimizationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HeuristicOptimizationMode_Unwrapped
enum struct __HeuristicOptimizationMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Random = static_cast<int32_t>(0x1),
__E_RandomSpreadOut = static_cast<int32_t>(0x2),
__E_Custom = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HeuristicOptimizationMode_Unwrapped () const noexcept {
return static_cast<__HeuristicOptimizationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HeuristicOptimizationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HeuristicOptimizationMode(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(3)
static ::Pathfinding::HeuristicOptimizationMode const Custom;

/// @brief Field None value: I32(0)
static ::Pathfinding::HeuristicOptimizationMode const None;

/// @brief Field Random value: I32(1)
static ::Pathfinding::HeuristicOptimizationMode const Random;

/// @brief Field RandomSpreadOut value: I32(2)
static ::Pathfinding::HeuristicOptimizationMode const RandomSpreadOut;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21339};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::HeuristicOptimizationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::HeuristicOptimizationMode) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
