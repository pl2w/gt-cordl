#pragma once
// IWYU pragma private; include "GlobalNamespace/GTBlendMode.hpp"
#include "GlobalNamespace/zzzz__GTBlendMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTBlendMode::GTBlendMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTBlendMode::GTBlendMode()   {
}
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::Darken{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::Multiply{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::ColorBurn{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::LinearBurn{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::Lighten{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::Screen{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::ColorDodge{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::LinearDodge{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::Overlay{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::SoftLight{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::HardLight{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::VividLight{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::LinearLight{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::PinLight{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::Difference{static_cast<int32_t>(0xf)};
constexpr ::GlobalNamespace::GTBlendMode  GlobalNamespace::GTBlendMode::Exclusion{static_cast<int32_t>(0x10)};
