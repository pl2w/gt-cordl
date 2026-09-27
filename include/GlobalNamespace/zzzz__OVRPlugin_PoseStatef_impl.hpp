#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PoseStatef.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_PoseStatef_def.hpp"
inline void GlobalNamespace::OVRPlugin_PoseStatef::setStaticF_identity(::GlobalNamespace::OVRPlugin_PoseStatef  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_PoseStatef, "identity", ::GlobalNamespace::OVRPlugin_PoseStatef>(std::forward<::GlobalNamespace::OVRPlugin_PoseStatef>(value));
}
inline ::GlobalNamespace::OVRPlugin_PoseStatef GlobalNamespace::OVRPlugin_PoseStatef::getStaticF_identity()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_PoseStatef, "identity", ::GlobalNamespace::OVRPlugin_PoseStatef>();
}
// Ctor Parameters [CppParam { name: "Pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Velocity", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Acceleration", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AngularVelocity", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AngularAcceleration", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_PoseStatef::OVRPlugin_PoseStatef(::GlobalNamespace::OVRPlugin_Posef  Pose, ::GlobalNamespace::OVRPlugin_Vector3f  Velocity, ::GlobalNamespace::OVRPlugin_Vector3f  Acceleration, ::GlobalNamespace::OVRPlugin_Vector3f  AngularVelocity, ::GlobalNamespace::OVRPlugin_Vector3f  AngularAcceleration, double_t  Time) noexcept  {
this->Pose = Pose;
this->Velocity = Velocity;
this->Acceleration = Acceleration;
this->AngularVelocity = AngularVelocity;
this->AngularAcceleration = AngularAcceleration;
this->Time = Time;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_PoseStatef::OVRPlugin_PoseStatef()   {
}
