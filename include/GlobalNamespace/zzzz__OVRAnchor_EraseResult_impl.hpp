#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_EraseResult.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_EraseResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_EraseResult::OVRAnchor_EraseResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_EraseResult::OVRAnchor_EraseResult()   {
}
constexpr ::GlobalNamespace::OVRAnchor_EraseResult  GlobalNamespace::OVRAnchor_EraseResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRAnchor_EraseResult  GlobalNamespace::OVRAnchor_EraseResult::Failure{static_cast<int32_t>(0xfffffc18)};
constexpr ::GlobalNamespace::OVRAnchor_EraseResult  GlobalNamespace::OVRAnchor_EraseResult::FailureInvalidAnchor{static_cast<int32_t>(0xfffffc0b)};
constexpr ::GlobalNamespace::OVRAnchor_EraseResult  GlobalNamespace::OVRAnchor_EraseResult::FailureDataIsInvalid{static_cast<int32_t>(0xfffffc10)};
constexpr ::GlobalNamespace::OVRAnchor_EraseResult  GlobalNamespace::OVRAnchor_EraseResult::FailureInsufficientResources{static_cast<int32_t>(0xffffdcd8)};
constexpr ::GlobalNamespace::OVRAnchor_EraseResult  GlobalNamespace::OVRAnchor_EraseResult::FailurePermissionInsufficient{static_cast<int32_t>(0xffffdcd5)};
constexpr ::GlobalNamespace::OVRAnchor_EraseResult  GlobalNamespace::OVRAnchor_EraseResult::FailureRateLimited{static_cast<int32_t>(0xffffdcd4)};
constexpr ::GlobalNamespace::OVRAnchor_EraseResult  GlobalNamespace::OVRAnchor_EraseResult::FailureUnsupported{static_cast<int32_t>(0xfffffc14)};
constexpr ::GlobalNamespace::OVRAnchor_EraseResult  GlobalNamespace::OVRAnchor_EraseResult::FailurePersistenceNotEnabled{static_cast<int32_t>(0xfffff82a)};
