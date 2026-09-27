#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CMSZoneShaderSettings_EOverrideMode.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_EOverrideMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode::CMSZoneShaderSettings_EOverrideMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode::CMSZoneShaderSettings_EOverrideMode()   {
}
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  GlobalNamespace::CMSZoneShaderSettings_EOverrideMode::LeaveUnchanged{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  GlobalNamespace::CMSZoneShaderSettings_EOverrideMode::ApplyNewValue{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  GlobalNamespace::CMSZoneShaderSettings_EOverrideMode::ApplyDefaultValue{static_cast<int32_t>(0x2)};
