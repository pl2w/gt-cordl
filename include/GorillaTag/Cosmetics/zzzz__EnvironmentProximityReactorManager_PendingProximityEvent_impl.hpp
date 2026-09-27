#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/EnvironmentProximityReactorManager_PendingProximityEvent.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__EnvironmentProximityReactorManager_PendingProximityEvent_def.hpp"
// Ctor Parameters [CppParam { name: "reactorId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "blockIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isBelow", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "info", ty: "::GlobalNamespace::PhotonMessageInfoWrapped", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "receivedTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent::EnvironmentProximityReactorManager_PendingProximityEvent(int32_t  reactorId, int32_t  blockIndex, bool  isBelow, ::GlobalNamespace::PhotonMessageInfoWrapped  info, float_t  receivedTime) noexcept  {
this->reactorId = reactorId;
this->blockIndex = blockIndex;
this->isBelow = isBelow;
this->info = info;
this->receivedTime = receivedTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent::EnvironmentProximityReactorManager_PendingProximityEvent()   {
}
