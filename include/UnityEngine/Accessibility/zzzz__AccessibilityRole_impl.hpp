#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityRole.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityRole_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Accessibility::AccessibilityRole::AccessibilityRole(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityRole::AccessibilityRole()   {
}
constexpr ::UnityEngine::Accessibility::AccessibilityRole  UnityEngine::Accessibility::AccessibilityRole::None{static_cast<uint16_t>(0x0u)};
constexpr ::UnityEngine::Accessibility::AccessibilityRole  UnityEngine::Accessibility::AccessibilityRole::Button{static_cast<uint16_t>(0x1u)};
constexpr ::UnityEngine::Accessibility::AccessibilityRole  UnityEngine::Accessibility::AccessibilityRole::Image{static_cast<uint16_t>(0x2u)};
constexpr ::UnityEngine::Accessibility::AccessibilityRole  UnityEngine::Accessibility::AccessibilityRole::StaticText{static_cast<uint16_t>(0x4u)};
constexpr ::UnityEngine::Accessibility::AccessibilityRole  UnityEngine::Accessibility::AccessibilityRole::SearchField{static_cast<uint16_t>(0x8u)};
constexpr ::UnityEngine::Accessibility::AccessibilityRole  UnityEngine::Accessibility::AccessibilityRole::KeyboardKey{static_cast<uint16_t>(0x10u)};
constexpr ::UnityEngine::Accessibility::AccessibilityRole  UnityEngine::Accessibility::AccessibilityRole::Header{static_cast<uint16_t>(0x20u)};
constexpr ::UnityEngine::Accessibility::AccessibilityRole  UnityEngine::Accessibility::AccessibilityRole::TabBar{static_cast<uint16_t>(0x40u)};
constexpr ::UnityEngine::Accessibility::AccessibilityRole  UnityEngine::Accessibility::AccessibilityRole::Slider{static_cast<uint16_t>(0x80u)};
constexpr ::UnityEngine::Accessibility::AccessibilityRole  UnityEngine::Accessibility::AccessibilityRole::Toggle{static_cast<uint16_t>(0x100u)};
