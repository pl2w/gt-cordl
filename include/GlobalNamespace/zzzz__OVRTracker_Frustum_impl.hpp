#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTracker_Frustum.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTracker_Frustum_def.hpp"
// Ctor Parameters [CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRTracker_Frustum::OVRTracker_Frustum(float_t  nearZ, float_t  farZ, ::UnityEngine::Vector2  fov) noexcept  {
this->nearZ = nearZ;
this->farZ = farZ;
this->fov = fov;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTracker_Frustum::OVRTracker_Frustum()   {
}
