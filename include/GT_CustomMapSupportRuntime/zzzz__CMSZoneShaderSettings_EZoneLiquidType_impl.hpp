#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CMSZoneShaderSettings_EZoneLiquidType.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_EZoneLiquidType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType::CMSZoneShaderSettings_EZoneLiquidType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType::CMSZoneShaderSettings_EZoneLiquidType()   {
}
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType::Water{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType::Lava{static_cast<int32_t>(0x2)};
