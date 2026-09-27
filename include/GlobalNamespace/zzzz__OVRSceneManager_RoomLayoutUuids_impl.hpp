#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager_RoomLayoutUuids.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_RoomLayoutUuids_def.hpp"
#include "System/zzzz__Guid_def.hpp"
// Ctor Parameters [CppParam { name: "Floor", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Ceiling", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Walls", ty: "::ArrayW<::System::Guid>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids::OVRSceneManager_RoomLayoutUuids(::System::Guid  Floor, ::System::Guid  Ceiling, ::ArrayW<::System::Guid>  Walls) noexcept  {
this->Floor = Floor;
this->Ceiling = Ceiling;
this->Walls = Walls;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids::OVRSceneManager_RoomLayoutUuids()   {
}
