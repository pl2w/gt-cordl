#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsScreenTouchPoint_TouchPointDirections.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsScreenTouchPoint_TouchPointDirections)
// Forward declare root types
namespace GlobalNamespace {
struct CustomMapsScreenTouchPoint_TouchPointDirections;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections, "", "CustomMapsScreenTouchPoint/TouchPointDirections");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomMapsScreenTouchPoint/TouchPointDirections
struct CORDL_TYPE CustomMapsScreenTouchPoint_TouchPointDirections {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomMapsScreenTouchPoint_TouchPointDirections_Unwrapped
enum struct __CustomMapsScreenTouchPoint_TouchPointDirections_Unwrapped : int32_t {
__E_Forward = static_cast<int32_t>(0x0),
__E_Backward = static_cast<int32_t>(0x1),
__E_Left = static_cast<int32_t>(0x2),
__E_Right = static_cast<int32_t>(0x3),
__E_Up = static_cast<int32_t>(0x4),
__E_Down = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomMapsScreenTouchPoint_TouchPointDirections_Unwrapped () const noexcept {
return static_cast<__CustomMapsScreenTouchPoint_TouchPointDirections_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsScreenTouchPoint_TouchPointDirections() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapsScreenTouchPoint_TouchPointDirections(int32_t  value__) noexcept;

/// @brief Field Backward value: I32(1)
static ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections const Backward;

/// @brief Field Down value: I32(5)
static ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections const Down;

/// @brief Field Forward value: I32(0)
static ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections const Forward;

/// @brief Field Left value: I32(2)
static ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections const Left;

/// @brief Field Right value: I32(3)
static ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections const Right;

/// @brief Field Up value: I32(4)
static ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
