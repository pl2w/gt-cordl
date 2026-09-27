#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RoomLayout.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_RoomLayout_def.hpp"
#include "System/zzzz__Guid_def.hpp"
// Ctor Parameters [CppParam { name: "floorUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ceilingUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wallUuids", ty: "::ArrayW<::System::Guid>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_RoomLayout::OVRPlugin_RoomLayout(::System::Guid  floorUuid, ::System::Guid  ceilingUuid, ::ArrayW<::System::Guid>  wallUuids) noexcept  {
this->floorUuid = floorUuid;
this->ceilingUuid = ceilingUuid;
this->wallUuids = wallUuids;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_RoomLayout::OVRPlugin_RoomLayout()   {
}
