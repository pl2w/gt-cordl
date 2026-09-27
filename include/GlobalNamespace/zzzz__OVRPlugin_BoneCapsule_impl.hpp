#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BoneCapsule.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoneCapsule_def.hpp"
// Ctor Parameters [CppParam { name: "BoneIndex", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StartPoint", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EndPoint", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_BoneCapsule::OVRPlugin_BoneCapsule(int16_t  BoneIndex, ::GlobalNamespace::OVRPlugin_Vector3f  StartPoint, ::GlobalNamespace::OVRPlugin_Vector3f  EndPoint, float_t  Radius) noexcept  {
this->BoneIndex = BoneIndex;
this->StartPoint = StartPoint;
this->EndPoint = EndPoint;
this->Radius = Radius;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_BoneCapsule::OVRPlugin_BoneCapsule()   {
}
