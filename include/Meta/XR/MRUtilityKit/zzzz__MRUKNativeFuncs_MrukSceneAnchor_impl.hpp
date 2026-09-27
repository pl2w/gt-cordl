#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukSceneAnchor.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukLabel_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukPlane_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukVolume_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukSceneAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "space", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roomUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volume", ty: "::GlobalNamespace::MRUKNativeFuncs_MrukVolume", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "plane", ty: "::GlobalNamespace::MRUKNativeFuncs_MrukPlane", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "semanticLabel", ty: "::GlobalNamespace::MRUKNativeFuncs_MrukLabel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "planeBoundary", ty: "::UnityEngine::Vector2*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "globalMeshIndices", ty: "uint32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "globalMeshPositions", ty: "::UnityEngine::Vector3*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "planeBoundaryCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "globalMeshIndicesCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "globalMeshPositionsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasVolume", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasPlane", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor::MRUKNativeFuncs_MrukSceneAnchor(uint64_t  space, ::System::Guid  uuid, ::System::Guid  roomUuid, ::UnityEngine::Pose  pose, ::GlobalNamespace::MRUKNativeFuncs_MrukVolume  volume, ::GlobalNamespace::MRUKNativeFuncs_MrukPlane  plane, ::GlobalNamespace::MRUKNativeFuncs_MrukLabel  semanticLabel, ::UnityEngine::Vector2*  planeBoundary, uint32_t*  globalMeshIndices, ::UnityEngine::Vector3*  globalMeshPositions, uint32_t  planeBoundaryCount, uint32_t  globalMeshIndicesCount, uint32_t  globalMeshPositionsCount, bool  hasVolume, bool  hasPlane) noexcept  {
this->space = space;
this->uuid = uuid;
this->roomUuid = roomUuid;
this->pose = pose;
this->volume = volume;
this->plane = plane;
this->semanticLabel = semanticLabel;
this->planeBoundary = planeBoundary;
this->globalMeshIndices = globalMeshIndices;
this->globalMeshPositions = globalMeshPositions;
this->planeBoundaryCount = planeBoundaryCount;
this->globalMeshIndicesCount = globalMeshIndicesCount;
this->globalMeshPositionsCount = globalMeshPositionsCount;
this->hasVolume = hasVolume;
this->hasPlane = hasPlane;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor::MRUKNativeFuncs_MrukSceneAnchor()   {
}
