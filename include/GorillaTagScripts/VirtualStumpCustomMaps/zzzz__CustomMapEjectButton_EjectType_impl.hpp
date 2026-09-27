#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapEjectButton_EjectType.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapEjectButton_EjectType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CustomMapEjectButton_EjectType::CustomMapEjectButton_EjectType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapEjectButton_EjectType::CustomMapEjectButton_EjectType()   {
}
constexpr ::GlobalNamespace::CustomMapEjectButton_EjectType  GlobalNamespace::CustomMapEjectButton_EjectType::EjectFromVirtualStump{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CustomMapEjectButton_EjectType  GlobalNamespace::CustomMapEjectButton_EjectType::ReturnToVirtualStump{static_cast<int32_t>(0x1)};
