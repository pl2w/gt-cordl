#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Frustumf2.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Fovf_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Frustumf2_def.hpp"
// Ctor Parameters [CppParam { name: "zNear", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "zFar", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Fov", ty: "::GlobalNamespace::OVRPlugin_Fovf", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Frustumf2::OVRPlugin_Frustumf2(float_t  zNear, float_t  zFar, ::GlobalNamespace::OVRPlugin_Fovf  Fov) noexcept  {
this->zNear = zNear;
this->zFar = zFar;
this->Fov = Fov;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Frustumf2::OVRPlugin_Frustumf2()   {
}
