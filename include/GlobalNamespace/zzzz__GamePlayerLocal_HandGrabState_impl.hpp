#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayerLocal_HandGrabState.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_HandGrabState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GamePlayerLocal_HandGrabState::GamePlayerLocal_HandGrabState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamePlayerLocal_HandGrabState::GamePlayerLocal_HandGrabState()   {
}
constexpr ::GlobalNamespace::GamePlayerLocal_HandGrabState  GlobalNamespace::GamePlayerLocal_HandGrabState::Empty{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GamePlayerLocal_HandGrabState  GlobalNamespace::GamePlayerLocal_HandGrabState::Holding{static_cast<int32_t>(0x1)};
