#pragma once
// IWYU pragma private; include "Pathfinding/RayDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RayDirection)
// Forward declare root types
namespace Pathfinding {
struct RayDirection;
}
// Write type traits
MARK_VAL_T(::Pathfinding::RayDirection);
DEFINE_IL2CPP_CLASS(::Pathfinding::RayDirection, "Pathfinding", "RayDirection");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.RayDirection
struct CORDL_TYPE RayDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RayDirection_Unwrapped
enum struct __RayDirection_Unwrapped : int32_t {
__E_Up = static_cast<int32_t>(0x0),
__E_Down = static_cast<int32_t>(0x1),
__E_Both = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RayDirection_Unwrapped () const noexcept {
return static_cast<__RayDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RayDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RayDirection(int32_t  value__) noexcept;

/// @brief Field Both value: I32(2)
static ::Pathfinding::RayDirection const Both;

/// @brief Field Down value: I32(1)
static ::Pathfinding::RayDirection const Down;

/// @brief Field Up value: I32(0)
static ::Pathfinding::RayDirection const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21299};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RayDirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RayDirection) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
