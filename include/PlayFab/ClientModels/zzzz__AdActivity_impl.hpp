#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AdActivity.hpp"
#include "PlayFab/ClientModels/zzzz__AdActivity_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::AdActivity::AdActivity(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AdActivity::AdActivity()   {
}
constexpr ::PlayFab::ClientModels::AdActivity  PlayFab::ClientModels::AdActivity::Opened{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::AdActivity  PlayFab::ClientModels::AdActivity::Closed{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::AdActivity  PlayFab::ClientModels::AdActivity::Start{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ClientModels::AdActivity  PlayFab::ClientModels::AdActivity::End{static_cast<int32_t>(0x3)};
