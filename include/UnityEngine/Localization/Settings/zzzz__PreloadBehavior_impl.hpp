#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/PreloadBehavior.hpp"
#include "UnityEngine/Localization/Settings/zzzz__PreloadBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Localization::Settings::PreloadBehavior::PreloadBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::PreloadBehavior::PreloadBehavior()   {
}
constexpr ::UnityEngine::Localization::Settings::PreloadBehavior  UnityEngine::Localization::Settings::PreloadBehavior::NoPreloading{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Localization::Settings::PreloadBehavior  UnityEngine::Localization::Settings::PreloadBehavior::PreloadSelectedLocale{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Localization::Settings::PreloadBehavior  UnityEngine::Localization::Settings::PreloadBehavior::PreloadSelectedLocaleAndFallbacks{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Localization::Settings::PreloadBehavior  UnityEngine::Localization::Settings::PreloadBehavior::PreloadAllLocales{static_cast<int32_t>(0x3)};
