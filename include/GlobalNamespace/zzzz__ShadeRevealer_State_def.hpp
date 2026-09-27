#pragma once
// IWYU pragma private; include "GlobalNamespace/ShadeRevealer_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadeRevealer_State)
// Forward declare root types
namespace GlobalNamespace {
struct ShadeRevealer_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShadeRevealer_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShadeRevealer_State, "", "ShadeRevealer/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ShadeRevealer/State
struct CORDL_TYPE ShadeRevealer_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShadeRevealer_State_Unwrapped
enum struct __ShadeRevealer_State_Unwrapped : int32_t {
__E_OFF = static_cast<int32_t>(0x0),
__E_SCANNING = static_cast<int32_t>(0x1),
__E_TRACKING = static_cast<int32_t>(0x2),
__E_LOCKED = static_cast<int32_t>(0x3),
__E_PRIMED = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShadeRevealer_State_Unwrapped () const noexcept {
return static_cast<__ShadeRevealer_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShadeRevealer_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ShadeRevealer_State(int32_t  value__) noexcept;

/// @brief Field LOCKED value: I32(3)
static ::GlobalNamespace::ShadeRevealer_State const LOCKED;

/// @brief Field OFF value: I32(0)
static ::GlobalNamespace::ShadeRevealer_State const OFF;

/// @brief Field PRIMED value: I32(4)
static ::GlobalNamespace::ShadeRevealer_State const PRIMED;

/// @brief Field SCANNING value: I32(1)
static ::GlobalNamespace::ShadeRevealer_State const SCANNING;

/// @brief Field TRACKING value: I32(2)
static ::GlobalNamespace::ShadeRevealer_State const TRACKING;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{204};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShadeRevealer_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShadeRevealer_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
