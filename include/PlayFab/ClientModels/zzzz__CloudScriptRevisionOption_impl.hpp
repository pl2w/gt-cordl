#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CloudScriptRevisionOption.hpp"
#include "PlayFab/ClientModels/zzzz__CloudScriptRevisionOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::CloudScriptRevisionOption::CloudScriptRevisionOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CloudScriptRevisionOption::CloudScriptRevisionOption()   {
}
constexpr ::PlayFab::ClientModels::CloudScriptRevisionOption  PlayFab::ClientModels::CloudScriptRevisionOption::Live{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::CloudScriptRevisionOption  PlayFab::ClientModels::CloudScriptRevisionOption::Latest{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::CloudScriptRevisionOption  PlayFab::ClientModels::CloudScriptRevisionOption::Specific{static_cast<int32_t>(0x2)};
