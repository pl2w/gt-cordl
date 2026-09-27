#pragma once
// IWYU pragma private; include "Drawing/Examples/GizmoSphereExample_Contact.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Drawing/Examples/zzzz__GizmoSphereExample_Contact_def.hpp"
// Ctor Parameters [CppParam { name: "impulse", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "smoothImpulse", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GizmoSphereExample_Contact::GizmoSphereExample_Contact(float_t  impulse, float_t  smoothImpulse, ::UnityEngine::Vector3  lastPoint, ::UnityEngine::Vector3  lastNormal) noexcept  {
this->impulse = impulse;
this->smoothImpulse = smoothImpulse;
this->lastPoint = lastPoint;
this->lastNormal = lastNormal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GizmoSphereExample_Contact::GizmoSphereExample_Contact()   {
}
