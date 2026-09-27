#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler_SpaceSharingInfo.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler_SpaceSharingInfo_def.hpp"
// Ctor Parameters [CppParam { name: "RoomId", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FloorAnchor", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ColocationSessionEventHandler_SpaceSharingInfo::ColocationSessionEventHandler_SpaceSharingInfo(::System::Guid  RoomId, ::UnityEngine::Pose  FloorAnchor) noexcept  {
this->RoomId = RoomId;
this->FloorAnchor = FloorAnchor;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColocationSessionEventHandler_SpaceSharingInfo::ColocationSessionEventHandler_SpaceSharingInfo()   {
}
