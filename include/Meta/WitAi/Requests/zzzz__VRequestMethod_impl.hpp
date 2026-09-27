#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequestMethod.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::Requests::VRequestMethod::VRequestMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VRequestMethod::VRequestMethod()   {
}
constexpr ::Meta::WitAi::Requests::VRequestMethod  Meta::WitAi::Requests::VRequestMethod::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Meta::WitAi::Requests::VRequestMethod  Meta::WitAi::Requests::VRequestMethod::HttpGet{static_cast<int32_t>(0x1)};
constexpr ::Meta::WitAi::Requests::VRequestMethod  Meta::WitAi::Requests::VRequestMethod::HttpPost{static_cast<int32_t>(0x2)};
constexpr ::Meta::WitAi::Requests::VRequestMethod  Meta::WitAi::Requests::VRequestMethod::HttpPut{static_cast<int32_t>(0x3)};
constexpr ::Meta::WitAi::Requests::VRequestMethod  Meta::WitAi::Requests::VRequestMethod::HttpHead{static_cast<int32_t>(0x4)};
