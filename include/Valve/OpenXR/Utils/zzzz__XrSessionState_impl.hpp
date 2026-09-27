#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/XrSessionState.hpp"
#include "Valve/OpenXR/Utils/zzzz__XrSessionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Valve::OpenXR::Utils::XrSessionState::XrSessionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::XrSessionState::XrSessionState()   {
}
constexpr ::Valve::OpenXR::Utils::XrSessionState  Valve::OpenXR::Utils::XrSessionState::XR_SESSION_STATE_UNKNOWN{static_cast<int32_t>(0x0)};
constexpr ::Valve::OpenXR::Utils::XrSessionState  Valve::OpenXR::Utils::XrSessionState::XR_SESSION_STATE_IDLE{static_cast<int32_t>(0x1)};
constexpr ::Valve::OpenXR::Utils::XrSessionState  Valve::OpenXR::Utils::XrSessionState::XR_SESSION_STATE_READY{static_cast<int32_t>(0x2)};
constexpr ::Valve::OpenXR::Utils::XrSessionState  Valve::OpenXR::Utils::XrSessionState::XR_SESSION_STATE_SYNCHRONIZED{static_cast<int32_t>(0x3)};
constexpr ::Valve::OpenXR::Utils::XrSessionState  Valve::OpenXR::Utils::XrSessionState::XR_SESSION_STATE_VISIBLE{static_cast<int32_t>(0x4)};
constexpr ::Valve::OpenXR::Utils::XrSessionState  Valve::OpenXR::Utils::XrSessionState::XR_SESSION_STATE_FOCUSED{static_cast<int32_t>(0x5)};
constexpr ::Valve::OpenXR::Utils::XrSessionState  Valve::OpenXR::Utils::XrSessionState::XR_SESSION_STATE_STOPPING{static_cast<int32_t>(0x6)};
constexpr ::Valve::OpenXR::Utils::XrSessionState  Valve::OpenXR::Utils::XrSessionState::XR_SESSION_STATE_LOSS_PENDING{static_cast<int32_t>(0x7)};
constexpr ::Valve::OpenXR::Utils::XrSessionState  Valve::OpenXR::Utils::XrSessionState::XR_SESSION_STATE_EXITING{static_cast<int32_t>(0x8)};
constexpr ::Valve::OpenXR::Utils::XrSessionState  Valve::OpenXR::Utils::XrSessionState::XR_SESSION_STATE_MAX_ENUM{static_cast<int32_t>(0x7fffffff)};
