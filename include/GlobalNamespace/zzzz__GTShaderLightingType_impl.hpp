#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderLightingType.hpp"
#include "GlobalNamespace/zzzz__GTShaderLightingType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTShaderLightingType::GTShaderLightingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTShaderLightingType::GTShaderLightingType()   {
}
constexpr ::GlobalNamespace::GTShaderLightingType  GlobalNamespace::GTShaderLightingType::Unlit{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTShaderLightingType  GlobalNamespace::GTShaderLightingType::Lightmapped{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTShaderLightingType  GlobalNamespace::GTShaderLightingType::Specular{static_cast<int32_t>(0x2)};
