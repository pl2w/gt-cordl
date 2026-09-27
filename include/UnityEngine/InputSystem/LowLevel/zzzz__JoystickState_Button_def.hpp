#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/JoystickState_Button.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoystickState_Button)
// Forward declare root types
namespace GlobalNamespace {
struct JoystickState_Button;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JoystickState_Button);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoystickState_Button, "UnityEngine.InputSystem.LowLevel", "JoystickState/Button");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.JoystickState/Button
struct CORDL_TYPE JoystickState_Button {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JoystickState_Button_Unwrapped
enum struct __JoystickState_Button_Unwrapped : int32_t {
__E_HatSwitchUp = static_cast<int32_t>(0x0),
__E_HatSwitchDown = static_cast<int32_t>(0x1),
__E_HatSwitchLeft = static_cast<int32_t>(0x2),
__E_HatSwitchRight = static_cast<int32_t>(0x3),
__E_Trigger = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JoystickState_Button_Unwrapped () const noexcept {
return static_cast<__JoystickState_Button_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JoystickState_Button() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JoystickState_Button(int32_t  value__) noexcept;

/// @brief Field HatSwitchDown value: I32(1)
static ::GlobalNamespace::JoystickState_Button const HatSwitchDown;

/// @brief Field HatSwitchLeft value: I32(2)
static ::GlobalNamespace::JoystickState_Button const HatSwitchLeft;

/// @brief Field HatSwitchRight value: I32(3)
static ::GlobalNamespace::JoystickState_Button const HatSwitchRight;

/// @brief Field HatSwitchUp value: I32(0)
static ::GlobalNamespace::JoystickState_Button const HatSwitchUp;

/// @brief Field Trigger value: I32(4)
static ::GlobalNamespace::JoystickState_Button const Trigger;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13724};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoystickState_Button, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoystickState_Button) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
