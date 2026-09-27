#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCCosmeticNetworkSync_SyncedState.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCCosmeticNetworkSync_SyncedState_def.hpp"
// Ctor Parameters [CppParam { name: "state", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dataA", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dataB", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dataC", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RCCosmeticNetworkSync_SyncedState::RCCosmeticNetworkSync_SyncedState(uint8_t  state, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, uint8_t  dataA, uint8_t  dataB, uint8_t  dataC) noexcept  {
this->state = state;
this->position = position;
this->rotation = rotation;
this->dataA = dataA;
this->dataB = dataB;
this->dataC = dataC;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RCCosmeticNetworkSync_SyncedState::RCCosmeticNetworkSync_SyncedState()   {
}
