#pragma once
// IWYU pragma private; include "GlobalNamespace/GameGrab.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameGrab_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameGrab::GameGrab(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept  {
this->position = position;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameGrab::GameGrab()   {
}
