#pragma once
// IWYU pragma private; include "GlobalNamespace/AlertViewHUD_MessageType.hpp"
#include "GlobalNamespace/zzzz__AlertViewHUD_MessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AlertViewHUD_MessageType::AlertViewHUD_MessageType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlertViewHUD_MessageType::AlertViewHUD_MessageType()   {
}
constexpr ::GlobalNamespace::AlertViewHUD_MessageType  GlobalNamespace::AlertViewHUD_MessageType::Info{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AlertViewHUD_MessageType  GlobalNamespace::AlertViewHUD_MessageType::Warning{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AlertViewHUD_MessageType  GlobalNamespace::AlertViewHUD_MessageType::Error{static_cast<int32_t>(0x2)};
