#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RoomLayoutInternal.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_RoomLayoutInternal_def.hpp"
// Ctor Parameters [CppParam { name: "floorUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ceilingUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wallUuidCapacityInput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wallUuidCountOutput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wallUuids", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_RoomLayoutInternal::OVRPlugin_RoomLayoutInternal(::System::Guid  floorUuid, ::System::Guid  ceilingUuid, int32_t  wallUuidCapacityInput, int32_t  wallUuidCountOutput, ::System::IntPtr  wallUuids) noexcept  {
this->floorUuid = floorUuid;
this->ceilingUuid = ceilingUuid;
this->wallUuidCapacityInput = wallUuidCapacityInput;
this->wallUuidCountOutput = wallUuidCountOutput;
this->wallUuids = wallUuids;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_RoomLayoutInternal::OVRPlugin_RoomLayoutInternal()   {
}
