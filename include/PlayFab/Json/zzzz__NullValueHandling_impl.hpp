#pragma once
// IWYU pragma private; include "PlayFab/Json/NullValueHandling.hpp"
#include "PlayFab/Json/zzzz__NullValueHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::Json::NullValueHandling::NullValueHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::Json::NullValueHandling::NullValueHandling()   {
}
constexpr ::PlayFab::Json::NullValueHandling  PlayFab::Json::NullValueHandling::Include{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::Json::NullValueHandling  PlayFab::Json::NullValueHandling::Ignore{static_cast<int32_t>(0x1)};
