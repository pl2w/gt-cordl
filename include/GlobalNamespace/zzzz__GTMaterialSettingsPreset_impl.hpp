#pragma once
// IWYU pragma private; include "GlobalNamespace/GTMaterialSettingsPreset.hpp"
#include "GlobalNamespace/zzzz__GTMaterialSettingsPreset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTMaterialSettingsPreset::GTMaterialSettingsPreset(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTMaterialSettingsPreset::GTMaterialSettingsPreset()   {
}
constexpr ::GlobalNamespace::GTMaterialSettingsPreset  GlobalNamespace::GTMaterialSettingsPreset::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTMaterialSettingsPreset  GlobalNamespace::GTMaterialSettingsPreset::Environment{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTMaterialSettingsPreset  GlobalNamespace::GTMaterialSettingsPreset::Glass{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTMaterialSettingsPreset  GlobalNamespace::GTMaterialSettingsPreset::ReflectiveDark{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GTMaterialSettingsPreset  GlobalNamespace::GTMaterialSettingsPreset::Reflective{static_cast<int32_t>(0x4)};
