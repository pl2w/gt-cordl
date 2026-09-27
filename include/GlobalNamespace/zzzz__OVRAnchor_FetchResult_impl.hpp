#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_FetchResult.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_FetchResult::OVRAnchor_FetchResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_FetchResult::OVRAnchor_FetchResult()   {
}
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::Failure{static_cast<int32_t>(0xfffffc18)};
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::FailureDataIsInvalid{static_cast<int32_t>(0xfffffc10)};
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::FailureInvalidOption{static_cast<int32_t>(0xfffffc17)};
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::FailureInsufficientResources{static_cast<int32_t>(0xffffdcd8)};
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::FailureInsufficientView{static_cast<int32_t>(0xffffdcd6)};
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::FailurePermissionInsufficient{static_cast<int32_t>(0xffffdcd5)};
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::FailureRateLimited{static_cast<int32_t>(0xffffdcd4)};
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::FailureTooDark{static_cast<int32_t>(0xffffdcd3)};
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::FailureTooBright{static_cast<int32_t>(0xffffdcd2)};
constexpr ::GlobalNamespace::OVRAnchor_FetchResult  GlobalNamespace::OVRAnchor_FetchResult::FailureUnsupported{static_cast<int32_t>(0xfffffc14)};
