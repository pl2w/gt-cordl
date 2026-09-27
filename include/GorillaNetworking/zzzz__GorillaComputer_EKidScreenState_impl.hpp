#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaComputer_EKidScreenState.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_EKidScreenState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaComputer_EKidScreenState::GorillaComputer_EKidScreenState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaComputer_EKidScreenState::GorillaComputer_EKidScreenState()   {
}
constexpr ::GlobalNamespace::GorillaComputer_EKidScreenState  GlobalNamespace::GorillaComputer_EKidScreenState::Ready{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GorillaComputer_EKidScreenState  GlobalNamespace::GorillaComputer_EKidScreenState::Show_OTP{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GorillaComputer_EKidScreenState  GlobalNamespace::GorillaComputer_EKidScreenState::Show_Setup_Screen{static_cast<int32_t>(0x2)};
