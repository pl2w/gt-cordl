#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/RecordingState.hpp"
#include "Liv/Lck/GorillaTag/zzzz__RecordingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::GorillaTag::RecordingState::RecordingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::RecordingState::RecordingState()   {
}
constexpr ::Liv::Lck::GorillaTag::RecordingState  Liv::Lck::GorillaTag::RecordingState::Idle{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::GorillaTag::RecordingState  Liv::Lck::GorillaTag::RecordingState::Recording{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::GorillaTag::RecordingState  Liv::Lck::GorillaTag::RecordingState::Saving{static_cast<int32_t>(0x2)};
