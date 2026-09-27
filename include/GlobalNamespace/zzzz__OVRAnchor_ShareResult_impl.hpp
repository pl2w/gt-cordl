#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_ShareResult.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_ShareResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_ShareResult::OVRAnchor_ShareResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_ShareResult::OVRAnchor_ShareResult()   {
}
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::Failure{static_cast<int32_t>(0xfffffc18)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureOperationFailed{static_cast<int32_t>(0xfffffc12)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureInvalidParameter{static_cast<int32_t>(0xfffffc17)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureHandleInvalid{static_cast<int32_t>(0xfffffc0b)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureDataIsInvalid{static_cast<int32_t>(0xfffffc10)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureNetworkTimeout{static_cast<int32_t>(0xfffff82d)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureNetworkRequestFailed{static_cast<int32_t>(0xfffff82c)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureMappingInsufficient{static_cast<int32_t>(0xfffff82f)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureLocalizationFailed{static_cast<int32_t>(0xfffff82e)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureSharableComponentNotEnabled{static_cast<int32_t>(0xfffff82a)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureCloudStorageDisabled{static_cast<int32_t>(0xfffff830)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailurePermissionInsufficient{static_cast<int32_t>(0xffffdcd5)};
constexpr ::GlobalNamespace::OVRAnchor_ShareResult  GlobalNamespace::OVRAnchor_ShareResult::FailureUnsupported{static_cast<int32_t>(0xfffffc14)};
