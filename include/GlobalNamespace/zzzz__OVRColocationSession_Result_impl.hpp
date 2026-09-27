#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRColocationSession_Result.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_Result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRColocationSession_Result::OVRColocationSession_Result(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRColocationSession_Result::OVRColocationSession_Result()   {
}
constexpr ::GlobalNamespace::OVRColocationSession_Result  GlobalNamespace::OVRColocationSession_Result::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRColocationSession_Result  GlobalNamespace::OVRColocationSession_Result::AlreadyAdvertising{static_cast<int32_t>(0xbb9)};
constexpr ::GlobalNamespace::OVRColocationSession_Result  GlobalNamespace::OVRColocationSession_Result::AlreadyDiscovering{static_cast<int32_t>(0xbba)};
constexpr ::GlobalNamespace::OVRColocationSession_Result  GlobalNamespace::OVRColocationSession_Result::Failure{static_cast<int32_t>(0xfffffc18)};
constexpr ::GlobalNamespace::OVRColocationSession_Result  GlobalNamespace::OVRColocationSession_Result::Unsupported{static_cast<int32_t>(0xfffffc14)};
constexpr ::GlobalNamespace::OVRColocationSession_Result  GlobalNamespace::OVRColocationSession_Result::OperationFailed{static_cast<int32_t>(0xfffffc12)};
constexpr ::GlobalNamespace::OVRColocationSession_Result  GlobalNamespace::OVRColocationSession_Result::InvalidData{static_cast<int32_t>(0xfffffc10)};
constexpr ::GlobalNamespace::OVRColocationSession_Result  GlobalNamespace::OVRColocationSession_Result::NetworkFailed{static_cast<int32_t>(0xfffff446)};
constexpr ::GlobalNamespace::OVRColocationSession_Result  GlobalNamespace::OVRColocationSession_Result::NoDiscoveryMethodAvailable{static_cast<int32_t>(0xfffff445)};
