#pragma once
// IWYU pragma private; include "TagEffects/IHandEffectsTrigger_Mode.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode::IHandEffectsTrigger_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode::IHandEffectsTrigger_Mode()   {
}
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode  GlobalNamespace::IHandEffectsTrigger_Mode::HighFive{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode  GlobalNamespace::IHandEffectsTrigger_Mode::FistBump{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode  GlobalNamespace::IHandEffectsTrigger_Mode::Tag3P{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode  GlobalNamespace::IHandEffectsTrigger_Mode::Tag1P{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode  GlobalNamespace::IHandEffectsTrigger_Mode::HighFive_And_FistBump{static_cast<int32_t>(0x4)};
