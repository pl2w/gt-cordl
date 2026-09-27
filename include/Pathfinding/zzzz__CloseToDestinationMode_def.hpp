#pragma once
// IWYU pragma private; include "Pathfinding/CloseToDestinationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloseToDestinationMode)
// Forward declare root types
namespace Pathfinding {
struct CloseToDestinationMode;
}
// Write type traits
MARK_VAL_T(::Pathfinding::CloseToDestinationMode);
DEFINE_IL2CPP_CLASS(::Pathfinding::CloseToDestinationMode, "Pathfinding", "CloseToDestinationMode");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.CloseToDestinationMode
struct CORDL_TYPE CloseToDestinationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CloseToDestinationMode_Unwrapped
enum struct __CloseToDestinationMode_Unwrapped : int32_t {
__E_Stop = static_cast<int32_t>(0x0),
__E_ContinueToExactDestination = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CloseToDestinationMode_Unwrapped () const noexcept {
return static_cast<__CloseToDestinationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CloseToDestinationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CloseToDestinationMode(int32_t  value__) noexcept;

/// @brief Field ContinueToExactDestination value: I32(1)
static ::Pathfinding::CloseToDestinationMode const ContinueToExactDestination;

/// @brief Field Stop value: I32(0)
static ::Pathfinding::CloseToDestinationMode const Stop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21215};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::CloseToDestinationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::CloseToDestinationMode) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
