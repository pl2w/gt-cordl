#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_SharedRoomsData.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SharedRoomsData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
// Ctor Parameters [CppParam { name: "roomUuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "alignmentData", ty: "::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK_SharedRoomsData::MRUK_SharedRoomsData(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  roomUuids, ::System::Guid  groupUuid, ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>  alignmentData) noexcept  {
this->roomUuids = roomUuids;
this->groupUuid = groupUuid;
this->alignmentData = alignmentData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK_SharedRoomsData::MRUK_SharedRoomsData()   {
}
