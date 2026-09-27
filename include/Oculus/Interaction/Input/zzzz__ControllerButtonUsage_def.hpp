#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerButtonUsage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerButtonUsage)
// Forward declare root types
namespace Oculus::Interaction::Input {
struct ControllerButtonUsage;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::ControllerButtonUsage);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ControllerButtonUsage, "Oculus.Interaction.Input", "ControllerButtonUsage");
// [Flags]
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: true
// CS Name: Oculus.Interaction.Input.ControllerButtonUsage
struct CORDL_TYPE ControllerButtonUsage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerButtonUsage_Unwrapped
enum struct __ControllerButtonUsage_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PrimaryButton = static_cast<int32_t>(0x1),
__E_PrimaryTouch = static_cast<int32_t>(0x2),
__E_SecondaryButton = static_cast<int32_t>(0x4),
__E_SecondaryTouch = static_cast<int32_t>(0x8),
__E_GripButton = static_cast<int32_t>(0x10),
__E_TriggerButton = static_cast<int32_t>(0x20),
__E_MenuButton = static_cast<int32_t>(0x40),
__E_Primary2DAxisClick = static_cast<int32_t>(0x80),
__E_Primary2DAxisTouch = static_cast<int32_t>(0x100),
__E_Thumbrest = static_cast<int32_t>(0x200),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerButtonUsage_Unwrapped () const noexcept {
return static_cast<__ControllerButtonUsage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerButtonUsage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ControllerButtonUsage(int32_t  value__) noexcept;

/// @brief Field GripButton value: I32(16)
static ::Oculus::Interaction::Input::ControllerButtonUsage const GripButton;

/// @brief Field MenuButton value: I32(64)
static ::Oculus::Interaction::Input::ControllerButtonUsage const MenuButton;

/// @brief Field None value: I32(0)
static ::Oculus::Interaction::Input::ControllerButtonUsage const None;

/// @brief Field Primary2DAxisClick value: I32(128)
static ::Oculus::Interaction::Input::ControllerButtonUsage const Primary2DAxisClick;

/// @brief Field Primary2DAxisTouch value: I32(256)
static ::Oculus::Interaction::Input::ControllerButtonUsage const Primary2DAxisTouch;

/// @brief Field PrimaryButton value: I32(1)
static ::Oculus::Interaction::Input::ControllerButtonUsage const PrimaryButton;

/// @brief Field PrimaryTouch value: I32(2)
static ::Oculus::Interaction::Input::ControllerButtonUsage const PrimaryTouch;

/// @brief Field SecondaryButton value: I32(4)
static ::Oculus::Interaction::Input::ControllerButtonUsage const SecondaryButton;

/// @brief Field SecondaryTouch value: I32(8)
static ::Oculus::Interaction::Input::ControllerButtonUsage const SecondaryTouch;

/// @brief Field Thumbrest value: I32(512)
static ::Oculus::Interaction::Input::ControllerButtonUsage const Thumbrest;

/// @brief Field TriggerButton value: I32(32)
static ::Oculus::Interaction::Input::ControllerButtonUsage const TriggerButton;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16456};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ControllerButtonUsage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ControllerButtonUsage) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
