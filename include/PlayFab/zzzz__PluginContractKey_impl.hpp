#pragma once
// IWYU pragma private; include "PlayFab/PluginContractKey.hpp"
#include "PlayFab/zzzz__PluginContract_impl.hpp"
#include "PlayFab/zzzz__PluginContractKey_def.hpp"
// Ctor Parameters [CppParam { name: "_pluginContract", ty: "::PlayFab::PluginContract", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pluginName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::PluginContractKey::PluginContractKey(::PlayFab::PluginContract  _pluginContract, ::StringW  _pluginName) noexcept  {
this->_pluginContract = _pluginContract;
this->_pluginName = _pluginName;
}
// Ctor Parameters []
constexpr ::PlayFab::PluginContractKey::PluginContractKey()   {
}
