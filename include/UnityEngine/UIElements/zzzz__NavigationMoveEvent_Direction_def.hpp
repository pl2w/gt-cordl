#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationMoveEvent_Direction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationMoveEvent_Direction)
// Forward declare root types
namespace GlobalNamespace {
struct NavigationMoveEvent_Direction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NavigationMoveEvent_Direction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NavigationMoveEvent_Direction, "UnityEngine.UIElements", "NavigationMoveEvent/Direction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.NavigationMoveEvent/Direction
struct CORDL_TYPE NavigationMoveEvent_Direction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NavigationMoveEvent_Direction_Unwrapped
enum struct __NavigationMoveEvent_Direction_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Up = static_cast<int32_t>(0x2),
__E_Right = static_cast<int32_t>(0x3),
__E_Down = static_cast<int32_t>(0x4),
__E_Next = static_cast<int32_t>(0x5),
__E_Previous = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NavigationMoveEvent_Direction_Unwrapped () const noexcept {
return static_cast<__NavigationMoveEvent_Direction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NavigationMoveEvent_Direction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavigationMoveEvent_Direction(int32_t  value__) noexcept;

/// @brief Field Down value: I32(4)
static ::GlobalNamespace::NavigationMoveEvent_Direction const Down;

/// @brief Field Left value: I32(1)
static ::GlobalNamespace::NavigationMoveEvent_Direction const Left;

/// @brief Field Next value: I32(5)
static ::GlobalNamespace::NavigationMoveEvent_Direction const Next;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::NavigationMoveEvent_Direction const None;

/// @brief Field Previous value: I32(6)
static ::GlobalNamespace::NavigationMoveEvent_Direction const Previous;

/// @brief Field Right value: I32(3)
static ::GlobalNamespace::NavigationMoveEvent_Direction const Right;

/// @brief Field Up value: I32(2)
static ::GlobalNamespace::NavigationMoveEvent_Direction const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7668};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NavigationMoveEvent_Direction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NavigationMoveEvent_Direction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
