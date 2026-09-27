#pragma once
// IWYU pragma private; include "GlobalNamespace/SessionStatus.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SessionStatus::SessionStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SessionStatus::SessionStatus()   {
}
constexpr ::GlobalNamespace::SessionStatus  GlobalNamespace::SessionStatus::PASS{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SessionStatus  GlobalNamespace::SessionStatus::PROHIBITED{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SessionStatus  GlobalNamespace::SessionStatus::CHALLENGE{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SessionStatus  GlobalNamespace::SessionStatus::CHALLENGE_SESSION_UPGRADE{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SessionStatus  GlobalNamespace::SessionStatus::PENDING_AGE_APPEAL{static_cast<int32_t>(0x4)};
