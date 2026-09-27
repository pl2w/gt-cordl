#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallData.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameBallData_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "angVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "grabbedByActorNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameBallData::GameBallData(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, int32_t  grabbedByActorNumber) noexcept  {
this->position = position;
this->rotation = rotation;
this->velocity = velocity;
this->angVelocity = angVelocity;
this->grabbedByActorNumber = grabbedByActorNumber;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameBallData::GameBallData()   {
}
