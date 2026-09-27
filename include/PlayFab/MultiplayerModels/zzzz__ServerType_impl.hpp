#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ServerType.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ServerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::MultiplayerModels::ServerType::ServerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ServerType::ServerType()   {
}
constexpr ::PlayFab::MultiplayerModels::ServerType  PlayFab::MultiplayerModels::ServerType::Container{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::MultiplayerModels::ServerType  PlayFab::MultiplayerModels::ServerType::Process{static_cast<int32_t>(0x1)};
