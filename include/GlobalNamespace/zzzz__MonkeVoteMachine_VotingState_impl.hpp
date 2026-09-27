#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteMachine_VotingState.hpp"
#include "GlobalNamespace/zzzz__MonkeVoteMachine_VotingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MonkeVoteMachine_VotingState::MonkeVoteMachine_VotingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeVoteMachine_VotingState::MonkeVoteMachine_VotingState()   {
}
constexpr ::GlobalNamespace::MonkeVoteMachine_VotingState  GlobalNamespace::MonkeVoteMachine_VotingState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MonkeVoteMachine_VotingState  GlobalNamespace::MonkeVoteMachine_VotingState::Voting{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MonkeVoteMachine_VotingState  GlobalNamespace::MonkeVoteMachine_VotingState::Predicting{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MonkeVoteMachine_VotingState  GlobalNamespace::MonkeVoteMachine_VotingState::Complete{static_cast<int32_t>(0x3)};
