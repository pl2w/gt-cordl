#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVignette_FalloffType.hpp"
#include "GlobalNamespace/zzzz__OVRVignette_FalloffType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRVignette_FalloffType::OVRVignette_FalloffType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVignette_FalloffType::OVRVignette_FalloffType()   {
}
constexpr ::GlobalNamespace::OVRVignette_FalloffType  GlobalNamespace::OVRVignette_FalloffType::Linear{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRVignette_FalloffType  GlobalNamespace::OVRVignette_FalloffType::Quadratic{static_cast<int32_t>(0x1)};
