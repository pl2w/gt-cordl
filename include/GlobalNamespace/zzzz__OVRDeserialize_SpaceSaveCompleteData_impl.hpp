#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpaceSaveCompleteData.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceSaveCompleteData_def.hpp"
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData::OVRDeserialize_SpaceSaveCompleteData(uint64_t  RequestId, uint64_t  Space, int32_t  Result, ::System::Guid  Uuid) noexcept  {
this->RequestId = RequestId;
this->Space = Space;
this->Result = Result;
this->Uuid = Uuid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData::OVRDeserialize_SpaceSaveCompleteData()   {
}
