#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipApiClient_WebSocketStatus.hpp"
#include "GlobalNamespace/zzzz__MothershipApiClient_WebSocketStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MothershipApiClient_WebSocketStatus::MothershipApiClient_WebSocketStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipApiClient_WebSocketStatus::MothershipApiClient_WebSocketStatus()   {
}
constexpr ::GlobalNamespace::MothershipApiClient_WebSocketStatus  GlobalNamespace::MothershipApiClient_WebSocketStatus::INACTIVE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MothershipApiClient_WebSocketStatus  GlobalNamespace::MothershipApiClient_WebSocketStatus::ACTIVE{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MothershipApiClient_WebSocketStatus  GlobalNamespace::MothershipApiClient_WebSocketStatus::CLOSING{static_cast<int32_t>(0x2)};
