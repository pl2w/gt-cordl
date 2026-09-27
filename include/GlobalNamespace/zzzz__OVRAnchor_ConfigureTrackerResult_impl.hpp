#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_ConfigureTrackerResult.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_ConfigureTrackerResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult::OVRAnchor_ConfigureTrackerResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult::OVRAnchor_ConfigureTrackerResult()   {
}
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult  GlobalNamespace::OVRAnchor_ConfigureTrackerResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult  GlobalNamespace::OVRAnchor_ConfigureTrackerResult::Failure{static_cast<int32_t>(0xfffffc18)};
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult  GlobalNamespace::OVRAnchor_ConfigureTrackerResult::Invalid{static_cast<int32_t>(0xfffffc10)};
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult  GlobalNamespace::OVRAnchor_ConfigureTrackerResult::NotSupported{static_cast<int32_t>(0xfffffc14)};
