#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_ColocationSessionDiscoveryResultData.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_ColocationSessionDiscoveryResultData__AdvertisementMetadata_e__FixedBuffer_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EventType_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_ColocationSessionDiscoveryResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_ColocationSessionDiscoveryResultData__AdvertisementMetadata_e__FixedBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AdvertisementUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AdvertisementMetadataCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AdvertisementMetadata", ty: "::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData::OVRDeserialize_ColocationSessionDiscoveryResultData(::GlobalNamespace::OVRPlugin_EventType  EventType, uint64_t  RequestId, ::System::Guid  AdvertisementUuid, uint32_t  AdvertisementMetadataCount, ::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer  AdvertisementMetadata) noexcept  {
this->EventType = EventType;
this->RequestId = RequestId;
this->AdvertisementUuid = AdvertisementUuid;
this->AdvertisementMetadataCount = AdvertisementMetadataCount;
this->AdvertisementMetadata = AdvertisementMetadata;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData::OVRDeserialize_ColocationSessionDiscoveryResultData()   {
}
