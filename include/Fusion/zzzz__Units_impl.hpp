#pragma once
// IWYU pragma private; include "Fusion/Units.hpp"
#include "Fusion/zzzz__Units_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Units::Units(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Units::Units()   {
}
constexpr ::Fusion::Units  Fusion::Units::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Units  Fusion::Units::Ticks{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Units  Fusion::Units::Seconds{static_cast<int32_t>(0x2)};
constexpr ::Fusion::Units  Fusion::Units::MilliSecs{static_cast<int32_t>(0x3)};
constexpr ::Fusion::Units  Fusion::Units::Kilobytes{static_cast<int32_t>(0x4)};
constexpr ::Fusion::Units  Fusion::Units::Megabytes{static_cast<int32_t>(0x5)};
constexpr ::Fusion::Units  Fusion::Units::Normalized{static_cast<int32_t>(0x6)};
constexpr ::Fusion::Units  Fusion::Units::Multiplier{static_cast<int32_t>(0x7)};
constexpr ::Fusion::Units  Fusion::Units::Percentage{static_cast<int32_t>(0x8)};
constexpr ::Fusion::Units  Fusion::Units::NormalizedPercentage{static_cast<int32_t>(0x9)};
constexpr ::Fusion::Units  Fusion::Units::Degrees{static_cast<int32_t>(0xa)};
constexpr ::Fusion::Units  Fusion::Units::PerSecond{static_cast<int32_t>(0xb)};
constexpr ::Fusion::Units  Fusion::Units::DegreesPerSecond{static_cast<int32_t>(0xc)};
constexpr ::Fusion::Units  Fusion::Units::Radians{static_cast<int32_t>(0xd)};
constexpr ::Fusion::Units  Fusion::Units::RadiansPerSecond{static_cast<int32_t>(0xe)};
constexpr ::Fusion::Units  Fusion::Units::TicksPerSecond{static_cast<int32_t>(0xf)};
constexpr ::Fusion::Units  Fusion::Units::_cordl_Units{static_cast<int32_t>(0x10)};
constexpr ::Fusion::Units  Fusion::Units::Bytes{static_cast<int32_t>(0x11)};
constexpr ::Fusion::Units  Fusion::Units::Count{static_cast<int32_t>(0x12)};
constexpr ::Fusion::Units  Fusion::Units::Packets{static_cast<int32_t>(0x13)};
constexpr ::Fusion::Units  Fusion::Units::Frames{static_cast<int32_t>(0x14)};
constexpr ::Fusion::Units  Fusion::Units::FramesPerSecond{static_cast<int32_t>(0x15)};
constexpr ::Fusion::Units  Fusion::Units::SquareMagnitude{static_cast<int32_t>(0x16)};
