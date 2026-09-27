#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePath_Waypoint.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePath_Waypoint_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tangent", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roll", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachinePath_Waypoint::CinemachinePath_Waypoint(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  tangent, float_t  roll) noexcept  {
this->position = position;
this->tangent = tangent;
this->roll = roll;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachinePath_Waypoint::CinemachinePath_Waypoint()   {
}
