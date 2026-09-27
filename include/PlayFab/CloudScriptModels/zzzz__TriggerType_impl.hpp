#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/TriggerType.hpp"
#include "PlayFab/CloudScriptModels/zzzz__TriggerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::CloudScriptModels::TriggerType::TriggerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::TriggerType::TriggerType()   {
}
constexpr ::PlayFab::CloudScriptModels::TriggerType  PlayFab::CloudScriptModels::TriggerType::HTTP{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::CloudScriptModels::TriggerType  PlayFab::CloudScriptModels::TriggerType::Queue{static_cast<int32_t>(0x1)};
