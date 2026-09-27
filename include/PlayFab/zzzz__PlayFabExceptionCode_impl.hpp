#pragma once
// IWYU pragma private; include "PlayFab/PlayFabExceptionCode.hpp"
#include "PlayFab/zzzz__PlayFabExceptionCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::PlayFabExceptionCode::PlayFabExceptionCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabExceptionCode::PlayFabExceptionCode()   {
}
constexpr ::PlayFab::PlayFabExceptionCode  PlayFab::PlayFabExceptionCode::AuthContextRequired{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::PlayFabExceptionCode  PlayFab::PlayFabExceptionCode::BuildError{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::PlayFabExceptionCode  PlayFab::PlayFabExceptionCode::DeveloperKeyNotSet{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::PlayFabExceptionCode  PlayFab::PlayFabExceptionCode::EntityTokenNotSet{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::PlayFabExceptionCode  PlayFab::PlayFabExceptionCode::NotLoggedIn{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::PlayFabExceptionCode  PlayFab::PlayFabExceptionCode::TitleNotSet{static_cast<int32_t>(0x5)};
