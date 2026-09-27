#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerEffect.hpp"
#include "GlobalNamespace/zzzz__PlayerEffect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlayerEffect::PlayerEffect(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerEffect::PlayerEffect()   {
}
constexpr ::GlobalNamespace::PlayerEffect  GlobalNamespace::PlayerEffect::NONE{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::PlayerEffect  GlobalNamespace::PlayerEffect::SNOWBALL_IMPACT{static_cast<int32_t>(0x0)};
