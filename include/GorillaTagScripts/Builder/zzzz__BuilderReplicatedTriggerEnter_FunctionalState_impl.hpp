#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderReplicatedTriggerEnter_FunctionalState.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderReplicatedTriggerEnter_FunctionalState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState::BuilderReplicatedTriggerEnter_FunctionalState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState::BuilderReplicatedTriggerEnter_FunctionalState()   {
}
constexpr ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState  GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState  GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState::TriggerEntered{static_cast<int32_t>(0x1)};
