#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest_NtlmAuthState.hpp"
#include "System/Net/zzzz__HttpWebRequest_NtlmAuthState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HttpWebRequest_NtlmAuthState::HttpWebRequest_NtlmAuthState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HttpWebRequest_NtlmAuthState::HttpWebRequest_NtlmAuthState()   {
}
constexpr ::GlobalNamespace::HttpWebRequest_NtlmAuthState  GlobalNamespace::HttpWebRequest_NtlmAuthState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HttpWebRequest_NtlmAuthState  GlobalNamespace::HttpWebRequest_NtlmAuthState::Challenge{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HttpWebRequest_NtlmAuthState  GlobalNamespace::HttpWebRequest_NtlmAuthState::Response{static_cast<int32_t>(0x2)};
