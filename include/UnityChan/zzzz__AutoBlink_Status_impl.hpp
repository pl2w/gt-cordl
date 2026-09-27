#pragma once
// IWYU pragma private; include "UnityChan/AutoBlink_Status.hpp"
#include "UnityChan/zzzz__AutoBlink_Status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AutoBlink_Status::AutoBlink_Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoBlink_Status::AutoBlink_Status()   {
}
constexpr ::GlobalNamespace::AutoBlink_Status  GlobalNamespace::AutoBlink_Status::Close{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AutoBlink_Status  GlobalNamespace::AutoBlink_Status::HalfClose{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AutoBlink_Status  GlobalNamespace::AutoBlink_Status::Open{static_cast<int32_t>(0x2)};
