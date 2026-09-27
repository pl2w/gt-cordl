#pragma once
// IWYU pragma private; include "Pathfinding/RVO/MovementPlane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MovementPlane)
// Forward declare root types
namespace Pathfinding::RVO {
struct MovementPlane;
}
// Write type traits
MARK_VAL_T(::Pathfinding::RVO::MovementPlane);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::MovementPlane, "Pathfinding.RVO", "MovementPlane");
// Dependencies 
namespace Pathfinding::RVO {
// Is value type: true
// CS Name: Pathfinding.RVO.MovementPlane
struct CORDL_TYPE MovementPlane {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MovementPlane_Unwrapped
enum struct __MovementPlane_Unwrapped : int32_t {
__E_XZ = static_cast<int32_t>(0x0),
__E_XY = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MovementPlane_Unwrapped () const noexcept {
return static_cast<__MovementPlane_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MovementPlane() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MovementPlane(int32_t  value__) noexcept;

/// @brief Field XY value: I32(1)
static ::Pathfinding::RVO::MovementPlane const XY;

/// @brief Field XZ value: I32(0)
static ::Pathfinding::RVO::MovementPlane const XZ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21494};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::MovementPlane, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::MovementPlane) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::RVO
