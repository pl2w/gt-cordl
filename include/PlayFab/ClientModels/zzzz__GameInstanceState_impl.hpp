#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GameInstanceState.hpp"
#include "PlayFab/ClientModels/zzzz__GameInstanceState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::GameInstanceState::GameInstanceState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GameInstanceState::GameInstanceState()   {
}
constexpr ::PlayFab::ClientModels::GameInstanceState  PlayFab::ClientModels::GameInstanceState::Open{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::GameInstanceState  PlayFab::ClientModels::GameInstanceState::Closed{static_cast<int32_t>(0x1)};
