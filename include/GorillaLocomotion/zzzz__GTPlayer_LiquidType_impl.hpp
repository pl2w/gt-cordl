#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_LiquidType.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_LiquidType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTPlayer_LiquidType::GTPlayer_LiquidType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTPlayer_LiquidType::GTPlayer_LiquidType()   {
}
constexpr ::GlobalNamespace::GTPlayer_LiquidType  GlobalNamespace::GTPlayer_LiquidType::Water{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTPlayer_LiquidType  GlobalNamespace::GTPlayer_LiquidType::Lava{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTPlayer_LiquidType  GlobalNamespace::GTPlayer_LiquidType::SwimInAir{static_cast<int32_t>(0x2)};
