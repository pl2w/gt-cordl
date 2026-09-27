#pragma once
// IWYU pragma private; include "Fusion/NetworkProjectConfig_ReplicationFeatures.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_ReplicationFeatures_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures::NetworkProjectConfig_ReplicationFeatures(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures::NetworkProjectConfig_ReplicationFeatures()   {
}
constexpr ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures  GlobalNamespace::NetworkProjectConfig_ReplicationFeatures::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures  GlobalNamespace::NetworkProjectConfig_ReplicationFeatures::Scheduling{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures  GlobalNamespace::NetworkProjectConfig_ReplicationFeatures::SchedulingAndInterestManagement{static_cast<int32_t>(0x3)};
