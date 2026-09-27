#pragma once
// IWYU pragma private; include "GlobalNamespace/AbilitySound_SoundSelectMode.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_SoundSelectMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AbilitySound_SoundSelectMode::AbilitySound_SoundSelectMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AbilitySound_SoundSelectMode::AbilitySound_SoundSelectMode()   {
}
constexpr ::GlobalNamespace::AbilitySound_SoundSelectMode  GlobalNamespace::AbilitySound_SoundSelectMode::Sequential{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AbilitySound_SoundSelectMode  GlobalNamespace::AbilitySound_SoundSelectMode::Random{static_cast<int32_t>(0x1)};
