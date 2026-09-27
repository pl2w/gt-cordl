#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/MissingTranslationBehavior.hpp"
#include "UnityEngine/Localization/Settings/zzzz__MissingTranslationBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Localization::Settings::MissingTranslationBehavior::MissingTranslationBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::MissingTranslationBehavior::MissingTranslationBehavior()   {
}
constexpr ::UnityEngine::Localization::Settings::MissingTranslationBehavior  UnityEngine::Localization::Settings::MissingTranslationBehavior::ShowMissingTranslationMessage{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Localization::Settings::MissingTranslationBehavior  UnityEngine::Localization::Settings::MissingTranslationBehavior::PrintWarning{static_cast<int32_t>(0x2)};
