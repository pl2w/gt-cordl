#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_RefVolTransform.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_RefVolTransform_def.hpp"
// Ctor Parameters [CppParam { name: "posWS", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeReferenceVolume_RefVolTransform::ProbeReferenceVolume_RefVolTransform(::UnityEngine::Vector3  posWS, ::UnityEngine::Quaternion  rot, float_t  scale) noexcept  {
this->posWS = posWS;
this->rot = rot;
this->scale = scale;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeReferenceVolume_RefVolTransform::ProbeReferenceVolume_RefVolTransform()   {
}
