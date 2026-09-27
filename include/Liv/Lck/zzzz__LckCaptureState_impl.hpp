#pragma once
// IWYU pragma private; include "Liv/Lck/LckCaptureState.hpp"
#include "Liv/Lck/zzzz__LckCaptureState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::LckCaptureState::LckCaptureState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckCaptureState::LckCaptureState()   {
}
constexpr ::Liv::Lck::LckCaptureState  Liv::Lck::LckCaptureState::Idle{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::LckCaptureState  Liv::Lck::LckCaptureState::Starting{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::LckCaptureState  Liv::Lck::LckCaptureState::InProgress{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::LckCaptureState  Liv::Lck::LckCaptureState::Paused{static_cast<int32_t>(0x3)};
constexpr ::Liv::Lck::LckCaptureState  Liv::Lck::LckCaptureState::Stopping{static_cast<int32_t>(0x4)};
constexpr ::Liv::Lck::LckCaptureState  Liv::Lck::LckCaptureState::Blocked{static_cast<int32_t>(0x5)};
