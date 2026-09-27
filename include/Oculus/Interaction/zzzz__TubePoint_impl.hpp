#pragma once
// IWYU pragma private; include "Oculus/Interaction/TubePoint.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__TubePoint_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "relativeLength", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::TubePoint::TubePoint(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  relativeLength) noexcept  {
this->position = position;
this->rotation = rotation;
this->relativeLength = relativeLength;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TubePoint::TubePoint()   {
}
