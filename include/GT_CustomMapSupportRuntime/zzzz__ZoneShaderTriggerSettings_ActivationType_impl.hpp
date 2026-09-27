#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ZoneShaderTriggerSettings_ActivationType.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ZoneShaderTriggerSettings_ActivationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType::ZoneShaderTriggerSettings_ActivationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType::ZoneShaderTriggerSettings_ActivationType()   {
}
constexpr ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType  GlobalNamespace::ZoneShaderTriggerSettings_ActivationType::ActivateSpecificSettings{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType  GlobalNamespace::ZoneShaderTriggerSettings_ActivationType::ActivateCustomMapDefaults{static_cast<int32_t>(0x1)};
