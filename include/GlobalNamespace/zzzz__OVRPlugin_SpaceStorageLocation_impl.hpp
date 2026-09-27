#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceStorageLocation.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceStorageLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceStorageLocation::OVRPlugin_SpaceStorageLocation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceStorageLocation::OVRPlugin_SpaceStorageLocation()   {
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  GlobalNamespace::OVRPlugin_SpaceStorageLocation::Invalid{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  GlobalNamespace::OVRPlugin_SpaceStorageLocation::Local{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  GlobalNamespace::OVRPlugin_SpaceStorageLocation::Cloud{static_cast<int32_t>(0x2)};
