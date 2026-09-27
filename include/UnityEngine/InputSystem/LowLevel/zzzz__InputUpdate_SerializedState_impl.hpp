#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdate_SerializedState.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_UpdateStepCount_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_SerializedState_def.hpp"
// Ctor Parameters [CppParam { name: "lastUpdateType", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playerUpdateStepCount", ty: "::GlobalNamespace::InputUpdate_UpdateStepCount", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputUpdate_SerializedState::InputUpdate_SerializedState(::UnityEngine::InputSystem::LowLevel::InputUpdateType  lastUpdateType, ::GlobalNamespace::InputUpdate_UpdateStepCount  playerUpdateStepCount) noexcept  {
this->lastUpdateType = lastUpdateType;
this->playerUpdateStepCount = playerUpdateStepCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputUpdate_SerializedState::InputUpdate_SerializedState()   {
}
