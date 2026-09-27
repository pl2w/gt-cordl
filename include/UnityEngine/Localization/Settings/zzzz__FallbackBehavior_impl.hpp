#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/FallbackBehavior.hpp"
#include "UnityEngine/Localization/Settings/zzzz__FallbackBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Localization::Settings::FallbackBehavior::FallbackBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::FallbackBehavior::FallbackBehavior()   {
}
constexpr ::UnityEngine::Localization::Settings::FallbackBehavior  UnityEngine::Localization::Settings::FallbackBehavior::UseProjectSettings{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Localization::Settings::FallbackBehavior  UnityEngine::Localization::Settings::FallbackBehavior::DontUseFallback{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Localization::Settings::FallbackBehavior  UnityEngine::Localization::Settings::FallbackBehavior::UseFallback{static_cast<int32_t>(0x2)};
