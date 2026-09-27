#pragma once
// IWYU pragma private; include "GorillaTagScripts/Flower_FlowerState.hpp"
#include "GorillaTagScripts/zzzz__Flower_FlowerState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Flower_FlowerState::Flower_FlowerState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Flower_FlowerState::Flower_FlowerState()   {
}
constexpr ::GlobalNamespace::Flower_FlowerState  GlobalNamespace::Flower_FlowerState::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::Flower_FlowerState  GlobalNamespace::Flower_FlowerState::Healthy{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Flower_FlowerState  GlobalNamespace::Flower_FlowerState::Middle{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Flower_FlowerState  GlobalNamespace::Flower_FlowerState::Wilted{static_cast<int32_t>(0x2)};
