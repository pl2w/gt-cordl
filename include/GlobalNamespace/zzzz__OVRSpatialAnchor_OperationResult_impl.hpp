#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_OperationResult.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult::OVRSpatialAnchor_OperationResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult::OVRSpatialAnchor_OperationResult()   {
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult  GlobalNamespace::OVRSpatialAnchor_OperationResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult  GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure{static_cast<int32_t>(0xfffffc18)};
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult  GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_DataIsInvalid{static_cast<int32_t>(0xfffffc10)};
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult  GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_InvalidParameter{static_cast<int32_t>(0xfffffc17)};
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult  GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceCloudStorageDisabled{static_cast<int32_t>(0xfffff830)};
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult  GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceMappingInsufficient{static_cast<int32_t>(0xfffff82f)};
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult  GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceLocalizationFailed{static_cast<int32_t>(0xfffff82e)};
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult  GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceNetworkTimeout{static_cast<int32_t>(0xfffff82d)};
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult  GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceNetworkRequestFailed{static_cast<int32_t>(0xfffff82c)};
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult  GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_GroupNotFound{static_cast<int32_t>(0xfffff827)};
