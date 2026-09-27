#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeButtons.hpp"
#include "GlobalNamespace/zzzz__ArcadeButtons_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ArcadeButtons::ArcadeButtons(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcadeButtons::ArcadeButtons()   {
}
constexpr ::GlobalNamespace::ArcadeButtons  GlobalNamespace::ArcadeButtons::GRAB{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ArcadeButtons  GlobalNamespace::ArcadeButtons::UP{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ArcadeButtons  GlobalNamespace::ArcadeButtons::DOWN{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ArcadeButtons  GlobalNamespace::ArcadeButtons::LEFT{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::ArcadeButtons  GlobalNamespace::ArcadeButtons::RIGHT{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::ArcadeButtons  GlobalNamespace::ArcadeButtons::B0{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::ArcadeButtons  GlobalNamespace::ArcadeButtons::B1{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::ArcadeButtons  GlobalNamespace::ArcadeButtons::TRIGGER{static_cast<int32_t>(0x80)};
