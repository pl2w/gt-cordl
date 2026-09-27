#pragma once
// IWYU pragma private; include "GlobalNamespace/GameButtonActivatable_InputButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameButtonActivatable_InputButton)
// Forward declare root types
namespace GlobalNamespace {
struct GameButtonActivatable_InputButton;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameButtonActivatable_InputButton);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameButtonActivatable_InputButton, "", "GameButtonActivatable/InputButton");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameButtonActivatable/InputButton
struct CORDL_TYPE GameButtonActivatable_InputButton {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameButtonActivatable_InputButton_Unwrapped
enum struct __GameButtonActivatable_InputButton_Unwrapped : int32_t {
__E_Trigger = static_cast<int32_t>(0x0),
__E_ButtonA = static_cast<int32_t>(0x1),
__E_ButtonB = static_cast<int32_t>(0x2),
__E_Grip = static_cast<int32_t>(0x3),
__E_Joystick = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameButtonActivatable_InputButton_Unwrapped () const noexcept {
return static_cast<__GameButtonActivatable_InputButton_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameButtonActivatable_InputButton() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameButtonActivatable_InputButton(int32_t  value__) noexcept;

/// @brief Field ButtonA value: I32(1)
static ::GlobalNamespace::GameButtonActivatable_InputButton const ButtonA;

/// @brief Field ButtonB value: I32(2)
static ::GlobalNamespace::GameButtonActivatable_InputButton const ButtonB;

/// @brief Field Grip value: I32(3)
static ::GlobalNamespace::GameButtonActivatable_InputButton const Grip;

/// @brief Field Joystick value: I32(4)
static ::GlobalNamespace::GameButtonActivatable_InputButton const Joystick;

/// @brief Field Trigger value: I32(0)
static ::GlobalNamespace::GameButtonActivatable_InputButton const Trigger;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1723};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameButtonActivatable_InputButton, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameButtonActivatable_InputButton) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
