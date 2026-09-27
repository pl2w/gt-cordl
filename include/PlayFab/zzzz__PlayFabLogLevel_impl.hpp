#pragma once
// IWYU pragma private; include "PlayFab/PlayFabLogLevel.hpp"
#include "PlayFab/zzzz__PlayFabLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::PlayFabLogLevel::PlayFabLogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabLogLevel::PlayFabLogLevel()   {
}
constexpr ::PlayFab::PlayFabLogLevel  PlayFab::PlayFabLogLevel::None{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::PlayFabLogLevel  PlayFab::PlayFabLogLevel::Debug{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::PlayFabLogLevel  PlayFab::PlayFabLogLevel::Info{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::PlayFabLogLevel  PlayFab::PlayFabLogLevel::Warning{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::PlayFabLogLevel  PlayFab::PlayFabLogLevel::Error{static_cast<int32_t>(0x8)};
constexpr ::PlayFab::PlayFabLogLevel  PlayFab::PlayFabLogLevel::All{static_cast<int32_t>(0xf)};
