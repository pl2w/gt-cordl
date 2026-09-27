#pragma once
// IWYU pragma private; include "PlayFab/Internal/HttpRequestState.hpp"
#include "PlayFab/Internal/zzzz__HttpRequestState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::Internal::HttpRequestState::HttpRequestState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::HttpRequestState::HttpRequestState()   {
}
constexpr ::PlayFab::Internal::HttpRequestState  PlayFab::Internal::HttpRequestState::Sent{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::Internal::HttpRequestState  PlayFab::Internal::HttpRequestState::Received{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::Internal::HttpRequestState  PlayFab::Internal::HttpRequestState::Idle{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::Internal::HttpRequestState  PlayFab::Internal::HttpRequestState::Error{static_cast<int32_t>(0x3)};
