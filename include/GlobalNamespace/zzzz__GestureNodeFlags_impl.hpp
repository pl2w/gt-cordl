#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureNodeFlags.hpp"
#include "GlobalNamespace/zzzz__GestureNodeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GestureNodeFlags::GestureNodeFlags(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GestureNodeFlags::GestureNodeFlags()   {
}
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::None{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::HandLeft{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::HandRight{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::HandOpen{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::HandClosed{static_cast<uint32_t>(0x8u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::DigitOpen{static_cast<uint32_t>(0x10u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::DigitClosed{static_cast<uint32_t>(0x20u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::DigitBent{static_cast<uint32_t>(0x40u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::TowardFace{static_cast<uint32_t>(0x80u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::AwayFromFace{static_cast<uint32_t>(0x100u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::AxisWorldUp{static_cast<uint32_t>(0x200u)};
constexpr ::GlobalNamespace::GestureNodeFlags  GlobalNamespace::GestureNodeFlags::AxisWorldDown{static_cast<uint32_t>(0x400u)};
