#pragma once
// IWYU pragma private; include "PlayFab/PluginContract.hpp"
#include "PlayFab/zzzz__PluginContract_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::PluginContract::PluginContract(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::PluginContract::PluginContract()   {
}
constexpr ::PlayFab::PluginContract  PlayFab::PluginContract::PlayFab_Serializer{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::PluginContract  PlayFab::PluginContract::PlayFab_Transport{static_cast<int32_t>(0x1)};
