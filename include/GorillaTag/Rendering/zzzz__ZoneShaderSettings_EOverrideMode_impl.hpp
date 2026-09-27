#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/ZoneShaderSettings_EOverrideMode.hpp"
#include "GorillaTag/Rendering/zzzz__ZoneShaderSettings_EOverrideMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode::ZoneShaderSettings_EOverrideMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode::ZoneShaderSettings_EOverrideMode()   {
}
constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  GlobalNamespace::ZoneShaderSettings_EOverrideMode::LeaveUnchanged{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  GlobalNamespace::ZoneShaderSettings_EOverrideMode::ApplyNewValue{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  GlobalNamespace::ZoneShaderSettings_EOverrideMode::ApplyDefaultValue{static_cast<int32_t>(0x2)};
