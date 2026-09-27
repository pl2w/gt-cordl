#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNotification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityNotification)
// Forward declare root types
namespace UnityEngine::Accessibility {
struct AccessibilityNotification;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Accessibility::AccessibilityNotification);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityNotification, "UnityEngine.Accessibility", "AccessibilityNotification");
// [NativeHeader("Modules/Accessibility/Native/AccessibilityNotificationContext.h")]
// Dependencies 
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityNotification
struct CORDL_TYPE AccessibilityNotification {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AccessibilityNotification_Unwrapped
enum struct __AccessibilityNotification_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Announcement = static_cast<int32_t>(0x1),
__E_AnnouncementFinished = static_cast<int32_t>(0x2),
__E_ScreenReaderStatusChanged = static_cast<int32_t>(0x3),
__E_ScreenChanged = static_cast<int32_t>(0x4),
__E_LayoutChanged = static_cast<int32_t>(0x5),
__E_PageScrolled = static_cast<int32_t>(0x6),
__E_ElementFocused = static_cast<int32_t>(0x7),
__E_ElementUnfocused = static_cast<int32_t>(0x8),
__E_FontScaleChanged = static_cast<int32_t>(0x9),
__E_BoldTextStatusChanged = static_cast<int32_t>(0xa),
__E_ClosedCaptioningStatusChanged = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AccessibilityNotification_Unwrapped () const noexcept {
return static_cast<__AccessibilityNotification_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityNotification() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AccessibilityNotification(int32_t  value__) noexcept;

/// @brief Field Announcement value: I32(1)
static ::UnityEngine::Accessibility::AccessibilityNotification const Announcement;

/// @brief Field AnnouncementFinished value: I32(2)
static ::UnityEngine::Accessibility::AccessibilityNotification const AnnouncementFinished;

/// @brief Field BoldTextStatusChanged value: I32(10)
static ::UnityEngine::Accessibility::AccessibilityNotification const BoldTextStatusChanged;

/// @brief Field ClosedCaptioningStatusChanged value: I32(11)
static ::UnityEngine::Accessibility::AccessibilityNotification const ClosedCaptioningStatusChanged;

/// @brief Field ElementFocused value: I32(7)
static ::UnityEngine::Accessibility::AccessibilityNotification const ElementFocused;

/// @brief Field ElementUnfocused value: I32(8)
static ::UnityEngine::Accessibility::AccessibilityNotification const ElementUnfocused;

/// @brief Field FontScaleChanged value: I32(9)
static ::UnityEngine::Accessibility::AccessibilityNotification const FontScaleChanged;

/// @brief Field LayoutChanged value: I32(5)
static ::UnityEngine::Accessibility::AccessibilityNotification const LayoutChanged;

/// @brief Field None value: I32(0)
static ::UnityEngine::Accessibility::AccessibilityNotification const None;

/// @brief Field PageScrolled value: I32(6)
static ::UnityEngine::Accessibility::AccessibilityNotification const PageScrolled;

/// @brief Field ScreenChanged value: I32(4)
static ::UnityEngine::Accessibility::AccessibilityNotification const ScreenChanged;

/// @brief Field ScreenReaderStatusChanged value: I32(3)
static ::UnityEngine::Accessibility::AccessibilityNotification const ScreenReaderStatusChanged;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32530};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNotification, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityNotification) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
