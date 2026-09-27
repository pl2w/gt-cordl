#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_Button.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID_Button)
// Forward declare root types
namespace GlobalNamespace {
struct HID_Button;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HID_Button);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HID_Button, "UnityEngine.InputSystem.HID", "HID/Button");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/Button
struct CORDL_TYPE HID_Button {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HID_Button_Unwrapped
enum struct __HID_Button_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_Primary = static_cast<int32_t>(0x1),
__E_Secondary = static_cast<int32_t>(0x2),
__E_Tertiary = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HID_Button_Unwrapped () const noexcept {
return static_cast<__HID_Button_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HID_Button() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HID_Button(int32_t  value__) noexcept;

/// @brief Field Primary value: I32(1)
static ::GlobalNamespace::HID_Button const Primary;

/// @brief Field Secondary value: I32(2)
static ::GlobalNamespace::HID_Button const Secondary;

/// @brief Field Tertiary value: I32(3)
static ::GlobalNamespace::HID_Button const Tertiary;

/// @brief Field Undefined value: I32(0)
static ::GlobalNamespace::HID_Button const Undefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13625};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HID_Button, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HID_Button) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
