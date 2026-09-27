#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleCountdown_Mode.hpp"
#include "GlobalNamespace/zzzz__SimpleCountdown_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimpleCountdown_Mode::SimpleCountdown_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleCountdown_Mode::SimpleCountdown_Mode()   {
}
constexpr ::GlobalNamespace::SimpleCountdown_Mode  GlobalNamespace::SimpleCountdown_Mode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SimpleCountdown_Mode  GlobalNamespace::SimpleCountdown_Mode::TitleData{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SimpleCountdown_Mode  GlobalNamespace::SimpleCountdown_Mode::FixedDate{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SimpleCountdown_Mode  GlobalNamespace::SimpleCountdown_Mode::TimeSync{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SimpleCountdown_Mode  GlobalNamespace::SimpleCountdown_Mode::ScheduledEvent{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SimpleCountdown_Mode  GlobalNamespace::SimpleCountdown_Mode::EventStart{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::SimpleCountdown_Mode  GlobalNamespace::SimpleCountdown_Mode::EventEnd{static_cast<int32_t>(0x6)};
