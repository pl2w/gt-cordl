#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNotification.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNotification_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Accessibility::AccessibilityNotification::AccessibilityNotification(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityNotification::AccessibilityNotification()   {
}
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::Announcement{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::AnnouncementFinished{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::ScreenReaderStatusChanged{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::ScreenChanged{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::LayoutChanged{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::PageScrolled{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::ElementFocused{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::ElementUnfocused{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::FontScaleChanged{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::BoldTextStatusChanged{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::Accessibility::AccessibilityNotification  UnityEngine::Accessibility::AccessibilityNotification::ClosedCaptioningStatusChanged{static_cast<int32_t>(0xb)};
