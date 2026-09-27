#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSentientCore_SentientCoreState.hpp"
#include "GlobalNamespace/zzzz__GRSentientCore_SentientCoreState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState::GRSentientCore_SentientCoreState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState::GRSentientCore_SentientCoreState()   {
}
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState  GlobalNamespace::GRSentientCore_SentientCoreState::Asleep{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState  GlobalNamespace::GRSentientCore_SentientCoreState::Awake{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState  GlobalNamespace::GRSentientCore_SentientCoreState::JumpInitiated{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState  GlobalNamespace::GRSentientCore_SentientCoreState::JumpAnticipation{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState  GlobalNamespace::GRSentientCore_SentientCoreState::Jumping{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState  GlobalNamespace::GRSentientCore_SentientCoreState::Held{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState  GlobalNamespace::GRSentientCore_SentientCoreState::HeldAlert{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState  GlobalNamespace::GRSentientCore_SentientCoreState::AttachedToPlayer{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState  GlobalNamespace::GRSentientCore_SentientCoreState::Dropped{static_cast<int32_t>(0x8)};
