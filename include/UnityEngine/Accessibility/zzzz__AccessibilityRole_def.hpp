#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityRole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityRole)
// Forward declare root types
namespace UnityEngine::Accessibility {
struct AccessibilityRole;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Accessibility::AccessibilityRole);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityRole, "UnityEngine.Accessibility", "AccessibilityRole");
// [NativeHeader("Modules/Accessibility/Native/AccessibilityNodeData.h")]
// [Flags]
// Dependencies 
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityRole
struct CORDL_TYPE AccessibilityRole {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __AccessibilityRole_Unwrapped
enum struct __AccessibilityRole_Unwrapped : uint16_t {
__E_None = static_cast<uint16_t>(0x0u),
__E_Button = static_cast<uint16_t>(0x1u),
__E_Image = static_cast<uint16_t>(0x2u),
__E_StaticText = static_cast<uint16_t>(0x4u),
__E_SearchField = static_cast<uint16_t>(0x8u),
__E_KeyboardKey = static_cast<uint16_t>(0x10u),
__E_Header = static_cast<uint16_t>(0x20u),
__E_TabBar = static_cast<uint16_t>(0x40u),
__E_Slider = static_cast<uint16_t>(0x80u),
__E_Toggle = static_cast<uint16_t>(0x100u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AccessibilityRole_Unwrapped () const noexcept {
return static_cast<__AccessibilityRole_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityRole() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr AccessibilityRole(uint16_t  value__) noexcept;

/// @brief Field Button value: U16(1)
static ::UnityEngine::Accessibility::AccessibilityRole const Button;

/// @brief Field Header value: U16(32)
static ::UnityEngine::Accessibility::AccessibilityRole const Header;

/// @brief Field Image value: U16(2)
static ::UnityEngine::Accessibility::AccessibilityRole const Image;

/// @brief Field KeyboardKey value: U16(16)
static ::UnityEngine::Accessibility::AccessibilityRole const KeyboardKey;

/// @brief Field None value: U16(0)
static ::UnityEngine::Accessibility::AccessibilityRole const None;

/// @brief Field SearchField value: U16(8)
static ::UnityEngine::Accessibility::AccessibilityRole const SearchField;

/// @brief Field Slider value: U16(128)
static ::UnityEngine::Accessibility::AccessibilityRole const Slider;

/// @brief Field StaticText value: U16(4)
static ::UnityEngine::Accessibility::AccessibilityRole const StaticText;

/// @brief Field TabBar value: U16(64)
static ::UnityEngine::Accessibility::AccessibilityRole const TabBar;

/// @brief Field Toggle value: U16(256)
static ::UnityEngine::Accessibility::AccessibilityRole const Toggle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32526};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityRole, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityRole) == 0x2, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
