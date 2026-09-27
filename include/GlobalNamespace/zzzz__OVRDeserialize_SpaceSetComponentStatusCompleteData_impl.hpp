#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpaceSetComponentStatusCompleteData.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceSetComponentStatusCompleteData_def.hpp"
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComponentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Enabled", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData::OVRDeserialize_SpaceSetComponentStatusCompleteData(uint64_t  RequestId, int32_t  Result, uint64_t  Space, ::System::Guid  Uuid, ::GlobalNamespace::OVRPlugin_SpaceComponentType  ComponentType, int32_t  Enabled) noexcept  {
this->RequestId = RequestId;
this->Result = Result;
this->Space = Space;
this->Uuid = Uuid;
this->ComponentType = ComponentType;
this->Enabled = Enabled;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData::OVRDeserialize_SpaceSetComponentStatusCompleteData()   {
}
