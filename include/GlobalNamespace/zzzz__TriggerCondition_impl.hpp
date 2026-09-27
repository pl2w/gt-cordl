#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerCondition.hpp"
#include "GlobalNamespace/zzzz__TriggerCondition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TriggerCondition::TriggerCondition(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TriggerCondition::TriggerCondition()   {
}
constexpr ::GlobalNamespace::TriggerCondition  GlobalNamespace::TriggerCondition::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TriggerCondition  GlobalNamespace::TriggerCondition::TimeElapsed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TriggerCondition  GlobalNamespace::TriggerCondition::Proximity{static_cast<int32_t>(0x2)};
