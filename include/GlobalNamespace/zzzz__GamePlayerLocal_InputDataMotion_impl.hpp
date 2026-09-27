#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayerLocal_InputDataMotion.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_InputDataMotion_def.hpp"
// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "angVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GamePlayerLocal_InputDataMotion::GamePlayerLocal_InputDataMotion(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity) noexcept  {
this->time = time;
this->position = position;
this->rotation = rotation;
this->velocity = velocity;
this->angVelocity = angVelocity;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamePlayerLocal_InputDataMotion::GamePlayerLocal_InputDataMotion()   {
}
