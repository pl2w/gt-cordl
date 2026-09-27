#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_Collection_LayoutMatcher.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Collection_LayoutMatcher_def.hpp"
// Ctor Parameters [CppParam { name: "layoutName", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceMatcher", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher::Collection_InputControlLayout_LayoutMatcher(::UnityEngine::InputSystem::Utilities::InternedString  layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  deviceMatcher) noexcept  {
this->layoutName = layoutName;
this->deviceMatcher = deviceMatcher;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher::Collection_InputControlLayout_LayoutMatcher()   {
}
