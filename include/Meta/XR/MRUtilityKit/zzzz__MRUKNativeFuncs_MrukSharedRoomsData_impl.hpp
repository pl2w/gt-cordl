#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukSharedRoomsData.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukSharedRoomsData_def.hpp"
#include "System/zzzz__Guid_def.hpp"
// Ctor Parameters [CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roomUuids", ty: "::System::Guid*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numRoomUuids", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "alignmentRoomUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roomWorldPoseOnHost", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData::MRUKNativeFuncs_MrukSharedRoomsData(::System::Guid  groupUuid, ::System::Guid*  roomUuids, uint32_t  numRoomUuids, ::System::Guid  alignmentRoomUuid, ::UnityEngine::Pose  roomWorldPoseOnHost) noexcept  {
this->groupUuid = groupUuid;
this->roomUuids = roomUuids;
this->numRoomUuids = numRoomUuids;
this->alignmentRoomUuid = alignmentRoomUuid;
this->roomWorldPoseOnHost = roomWorldPoseOnHost;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData::MRUKNativeFuncs_MrukSharedRoomsData()   {
}
