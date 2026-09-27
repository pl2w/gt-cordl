#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_GRPlayerShieldFlags.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_GRPlayerShieldFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRPlayer_GRPlayerShieldFlags::GRPlayer_GRPlayerShieldFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRPlayer_GRPlayerShieldFlags::GRPlayer_GRPlayerShieldFlags()   {
}
constexpr ::GlobalNamespace::GRPlayer_GRPlayerShieldFlags  GlobalNamespace::GRPlayer_GRPlayerShieldFlags::Light{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRPlayer_GRPlayerShieldFlags  GlobalNamespace::GRPlayer_GRPlayerShieldFlags::Stealth{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRPlayer_GRPlayerShieldFlags  GlobalNamespace::GRPlayer_GRPlayerShieldFlags::Heal{static_cast<int32_t>(0x4)};
