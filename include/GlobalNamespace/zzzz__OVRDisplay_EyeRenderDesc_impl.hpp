#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDisplay_EyeRenderDesc.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_EyeFov_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_EyeRenderDesc_def.hpp"
// Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fullFov", ty: "::GlobalNamespace::OVRDisplay_EyeFov", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRDisplay_EyeRenderDesc::OVRDisplay_EyeRenderDesc(::UnityEngine::Vector2  resolution, ::UnityEngine::Vector2  fov, ::GlobalNamespace::OVRDisplay_EyeFov  fullFov) noexcept  {
this->resolution = resolution;
this->fov = fov;
this->fullFov = fullFov;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDisplay_EyeRenderDesc::OVRDisplay_EyeRenderDesc()   {
}
