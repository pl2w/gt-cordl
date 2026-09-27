#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleEventSequencer_OnCompleteAction.hpp"
#include "GlobalNamespace/zzzz__SimpleEventSequencer_OnCompleteAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction::SimpleEventSequencer_OnCompleteAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction::SimpleEventSequencer_OnCompleteAction()   {
}
constexpr ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction  GlobalNamespace::SimpleEventSequencer_OnCompleteAction::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction  GlobalNamespace::SimpleEventSequencer_OnCompleteAction::Disable{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction  GlobalNamespace::SimpleEventSequencer_OnCompleteAction::Repeat{static_cast<int32_t>(0x2)};
