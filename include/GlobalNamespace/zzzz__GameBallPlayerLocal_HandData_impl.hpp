#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallPlayerLocal_HandData.hpp"
#include "GlobalNamespace/zzzz__GameBallId_impl.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayerLocal_HandGrabState_impl.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayerLocal_HandData_def.hpp"
// Ctor Parameters [CppParam { name: "grabState", ty: "::GlobalNamespace::GameBallPlayerLocal_HandGrabState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gripWasHeld", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gripPressedTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "grabbedGameBallId", ty: "::GlobalNamespace::GameBallId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameBallPlayerLocal_HandData::GameBallPlayerLocal_HandData(::GlobalNamespace::GameBallPlayerLocal_HandGrabState  grabState, bool  gripWasHeld, double_t  gripPressedTime, ::GlobalNamespace::GameBallId  grabbedGameBallId) noexcept  {
this->grabState = grabState;
this->gripWasHeld = gripWasHeld;
this->gripPressedTime = gripPressedTime;
this->grabbedGameBallId = grabbedGameBallId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameBallPlayerLocal_HandData::GameBallPlayerLocal_HandData()   {
}
