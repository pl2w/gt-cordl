#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayerLocal_HandData.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_HandGrabState_impl.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_HandData_def.hpp"
// Ctor Parameters [CppParam { name: "grabState", ty: "::GlobalNamespace::GamePlayerLocal_HandGrabState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gripWasHeld", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triggerWasHeld", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gripPressedTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triggerPressedTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GamePlayerLocal_HandData::GamePlayerLocal_HandData(::GlobalNamespace::GamePlayerLocal_HandGrabState  grabState, bool  gripWasHeld, bool  triggerWasHeld, double_t  gripPressedTime, double_t  triggerPressedTime) noexcept  {
this->grabState = grabState;
this->gripWasHeld = gripWasHeld;
this->triggerWasHeld = triggerWasHeld;
this->gripPressedTime = gripPressedTime;
this->triggerPressedTime = triggerPressedTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamePlayerLocal_HandData::GamePlayerLocal_HandData()   {
}
