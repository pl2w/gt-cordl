#pragma once
// IWYU pragma private; include "GlobalNamespace/LuaCam.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LuaCam_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LuaCam::LuaCam(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept  {
this->position = position;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LuaCam::LuaCam()   {
}
