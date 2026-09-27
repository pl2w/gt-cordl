#pragma once
// IWYU pragma private; include "UnityEngine/LightAnchor_Axes.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__LightAnchor_Axes_def.hpp"
// Ctor Parameters [CppParam { name: "up", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "right", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "forward", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LightAnchor_Axes::LightAnchor_Axes(::UnityEngine::Vector3  up, ::UnityEngine::Vector3  right, ::UnityEngine::Vector3  forward) noexcept  {
this->up = up;
this->right = right;
this->forward = forward;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightAnchor_Axes::LightAnchor_Axes()   {
}
