#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpace_StorageLocation.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSpace_StorageLocation::OVRSpace_StorageLocation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpace_StorageLocation::OVRSpace_StorageLocation()   {
}
constexpr ::GlobalNamespace::OVRSpace_StorageLocation  GlobalNamespace::OVRSpace_StorageLocation::Local{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRSpace_StorageLocation  GlobalNamespace::OVRSpace_StorageLocation::Cloud{static_cast<int32_t>(0x1)};
