#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Result.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Result::OVRPlugin_Result(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Result::OVRPlugin_Result()   {
}
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Success_EventUnavailable{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Success_Pending{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Success_ColocationSessionAlreadyAdvertising{static_cast<int32_t>(0xbb9)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Success_ColocationSessionAlreadyDiscovering{static_cast<int32_t>(0xbba)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure{static_cast<int32_t>(0xfffffc18)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_InvalidParameter{static_cast<int32_t>(0xfffffc17)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_NotInitialized{static_cast<int32_t>(0xfffffc16)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_InvalidOperation{static_cast<int32_t>(0xfffffc15)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_Unsupported{static_cast<int32_t>(0xfffffc14)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_NotYetImplemented{static_cast<int32_t>(0xfffffc13)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_OperationFailed{static_cast<int32_t>(0xfffffc12)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_InsufficientSize{static_cast<int32_t>(0xfffffc11)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_DataIsInvalid{static_cast<int32_t>(0xfffffc10)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_DeprecatedOperation{static_cast<int32_t>(0xfffffc0f)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_ErrorLimitReached{static_cast<int32_t>(0xfffffc0e)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_ErrorInitializationFailed{static_cast<int32_t>(0xfffffc0d)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_RuntimeUnavailable{static_cast<int32_t>(0xfffffc0c)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_HandleInvalid{static_cast<int32_t>(0xfffffc0b)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceCloudStorageDisabled{static_cast<int32_t>(0xfffff830)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceMappingInsufficient{static_cast<int32_t>(0xfffff82f)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceLocalizationFailed{static_cast<int32_t>(0xfffff82e)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceNetworkTimeout{static_cast<int32_t>(0xfffff82d)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceNetworkRequestFailed{static_cast<int32_t>(0xfffff82c)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceComponentNotSupported{static_cast<int32_t>(0xfffff82b)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceComponentNotEnabled{static_cast<int32_t>(0xfffff82a)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceComponentStatusPending{static_cast<int32_t>(0xfffff829)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceComponentStatusAlreadySet{static_cast<int32_t>(0xfffff828)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceGroupNotFound{static_cast<int32_t>(0xfffff827)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_ColocationSessionNetworkFailed{static_cast<int32_t>(0xfffff446)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_ColocationSessionNoDiscoveryMethodAvailable{static_cast<int32_t>(0xfffff445)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceInsufficientResources{static_cast<int32_t>(0xffffdcd8)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceStorageAtCapacity{static_cast<int32_t>(0xffffdcd7)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceInsufficientView{static_cast<int32_t>(0xffffdcd6)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpacePermissionInsufficient{static_cast<int32_t>(0xffffdcd5)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceRateLimited{static_cast<int32_t>(0xffffdcd4)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceTooDark{static_cast<int32_t>(0xffffdcd3)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_SpaceTooBright{static_cast<int32_t>(0xffffdcd2)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Warning_BoundaryVisibilitySuppressionNotAllowed{static_cast<int32_t>(0x2346)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_FuturePending{static_cast<int32_t>(0xffffd8f0)};
constexpr ::GlobalNamespace::OVRPlugin_Result  GlobalNamespace::OVRPlugin_Result::Failure_FutureInvalid{static_cast<int32_t>(0xffffd8ef)};
