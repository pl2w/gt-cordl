#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpaceEraseCompleteData.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceStorageLocation_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceEraseCompleteData_def.hpp"
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Location", ty: "::GlobalNamespace::OVRPlugin_SpaceStorageLocation", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData::OVRDeserialize_SpaceEraseCompleteData(uint64_t  RequestId, int32_t  Result, ::System::Guid  Uuid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  Location) noexcept  {
this->RequestId = RequestId;
this->Result = Result;
this->Uuid = Uuid;
this->Location = Location;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData::OVRDeserialize_SpaceEraseCompleteData()   {
}
