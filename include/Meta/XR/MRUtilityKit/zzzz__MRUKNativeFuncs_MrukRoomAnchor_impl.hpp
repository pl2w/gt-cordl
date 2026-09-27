#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukRoomAnchor.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukRoomAnchor_def.hpp"
// Ctor Parameters [CppParam { name: "space", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor::MRUKNativeFuncs_MrukRoomAnchor(uint64_t  space, ::System::Guid  uuid, ::UnityEngine::Pose  pose) noexcept  {
this->space = space;
this->uuid = uuid;
this->pose = pose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor::MRUKNativeFuncs_MrukRoomAnchor()   {
}
