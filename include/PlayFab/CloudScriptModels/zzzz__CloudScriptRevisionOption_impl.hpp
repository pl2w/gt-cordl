#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/CloudScriptRevisionOption.hpp"
#include "PlayFab/CloudScriptModels/zzzz__CloudScriptRevisionOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::CloudScriptModels::CloudScriptRevisionOption::CloudScriptRevisionOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::CloudScriptRevisionOption::CloudScriptRevisionOption()   {
}
constexpr ::PlayFab::CloudScriptModels::CloudScriptRevisionOption  PlayFab::CloudScriptModels::CloudScriptRevisionOption::Live{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::CloudScriptModels::CloudScriptRevisionOption  PlayFab::CloudScriptModels::CloudScriptRevisionOption::Latest{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::CloudScriptModels::CloudScriptRevisionOption  PlayFab::CloudScriptModels::CloudScriptRevisionOption::Specific{static_cast<int32_t>(0x2)};
