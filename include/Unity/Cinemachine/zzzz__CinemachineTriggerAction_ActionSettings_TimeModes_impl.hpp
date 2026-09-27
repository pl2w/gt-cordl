#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTriggerAction_ActionSettings_TimeModes.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_TimeModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes::ActionSettings_CinemachineTriggerAction_TimeModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes::ActionSettings_CinemachineTriggerAction_TimeModes()   {
}
constexpr ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes  GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes::FromStart{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes  GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes::FromEnd{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes  GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes::BeforeNow{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes  GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes::AfterNow{static_cast<int32_t>(0x3)};
