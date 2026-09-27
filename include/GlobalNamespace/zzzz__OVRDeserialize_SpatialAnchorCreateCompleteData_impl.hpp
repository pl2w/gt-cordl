#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpatialAnchorCreateCompleteData.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpatialAnchorCreateCompleteData_def.hpp"
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData::OVRDeserialize_SpatialAnchorCreateCompleteData(uint64_t  RequestId, int32_t  Result, uint64_t  Space, ::System::Guid  Uuid) noexcept  {
this->RequestId = RequestId;
this->Result = Result;
this->Space = Space;
this->Uuid = Uuid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData::OVRDeserialize_SpatialAnchorCreateCompleteData()   {
}
