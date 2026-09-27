#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Settings/ErrorAction.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Settings/zzzz__ErrorAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction::ErrorAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction::ErrorAction()   {
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction::ThrowError{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction::OutputErrorInResult{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction::Ignore{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction::MaintainTokens{static_cast<int32_t>(0x3)};
