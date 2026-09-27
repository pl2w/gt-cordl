#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_SaveResult.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_SaveResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_SaveResult::OVRAnchor_SaveResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_SaveResult::OVRAnchor_SaveResult()   {
}
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::Failure{static_cast<int32_t>(0xfffffc18)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailureInvalidAnchor{static_cast<int32_t>(0xfffffc0b)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailureDataIsInvalid{static_cast<int32_t>(0xfffffc10)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailureInsufficientResources{static_cast<int32_t>(0xffffdcd8)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailureStorageAtCapacity{static_cast<int32_t>(0xffffdcd7)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailureInsufficientView{static_cast<int32_t>(0xffffdcd6)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailurePermissionInsufficient{static_cast<int32_t>(0xffffdcd5)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailureRateLimited{static_cast<int32_t>(0xffffdcd4)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailureTooDark{static_cast<int32_t>(0xffffdcd3)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailureTooBright{static_cast<int32_t>(0xffffdcd2)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailureUnsupported{static_cast<int32_t>(0xfffffc14)};
constexpr ::GlobalNamespace::OVRAnchor_SaveResult  GlobalNamespace::OVRAnchor_SaveResult::FailurePersistenceNotEnabled{static_cast<int32_t>(0xfffff82a)};
