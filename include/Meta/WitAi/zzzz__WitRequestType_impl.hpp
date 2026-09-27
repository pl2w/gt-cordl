#pragma once
// IWYU pragma private; include "Meta/WitAi/WitRequestType.hpp"
#include "Meta/WitAi/zzzz__WitRequestType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::WitRequestType::WitRequestType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequestType::WitRequestType()   {
}
constexpr ::Meta::WitAi::WitRequestType  Meta::WitAi::WitRequestType::Http{static_cast<int32_t>(0x0)};
constexpr ::Meta::WitAi::WitRequestType  Meta::WitAi::WitRequestType::WebSocket{static_cast<int32_t>(0x1)};
