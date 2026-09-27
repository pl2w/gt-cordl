#pragma once
// IWYU pragma private; include "PlayFab/WebRequestType.hpp"
#include "PlayFab/zzzz__WebRequestType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::WebRequestType::WebRequestType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::WebRequestType::WebRequestType()   {
}
constexpr ::PlayFab::WebRequestType  PlayFab::WebRequestType::UnityWebRequest{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::WebRequestType  PlayFab::WebRequestType::HttpWebRequest{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::WebRequestType  PlayFab::WebRequestType::CustomHttp{static_cast<int32_t>(0x2)};
