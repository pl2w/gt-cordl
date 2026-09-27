#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukHit.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukHit_def.hpp"
// Ctor Parameters [CppParam { name: "roomAnchorUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sceneAnchorUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukHit::MRUKNativeFuncs_MrukHit(::System::Guid  roomAnchorUuid, ::System::Guid  sceneAnchorUuid, float_t  hitDistance, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal) noexcept  {
this->roomAnchorUuid = roomAnchorUuid;
this->sceneAnchorUuid = sceneAnchorUuid;
this->hitDistance = hitDistance;
this->hitPosition = hitPosition;
this->hitNormal = hitNormal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukHit::MRUKNativeFuncs_MrukHit()   {
}
