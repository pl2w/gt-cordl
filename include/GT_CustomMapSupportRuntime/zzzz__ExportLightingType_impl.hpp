#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ExportLightingType.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ExportLightingType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GT_CustomMapSupportRuntime::ExportLightingType::ExportLightingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::ExportLightingType::ExportLightingType()   {
}
constexpr ::GT_CustomMapSupportRuntime::ExportLightingType  GT_CustomMapSupportRuntime::ExportLightingType::Default_Unity{static_cast<int32_t>(0x0)};
constexpr ::GT_CustomMapSupportRuntime::ExportLightingType  GT_CustomMapSupportRuntime::ExportLightingType::Alternative{static_cast<int32_t>(0x1)};
constexpr ::GT_CustomMapSupportRuntime::ExportLightingType  GT_CustomMapSupportRuntime::ExportLightingType::Off{static_cast<int32_t>(0x2)};
