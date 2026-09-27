#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderXRayMode.hpp"
#include "GlobalNamespace/zzzz__GTShaderXRayMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTShaderXRayMode::GTShaderXRayMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTShaderXRayMode::GTShaderXRayMode()   {
}
constexpr ::GlobalNamespace::GTShaderXRayMode  GlobalNamespace::GTShaderXRayMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTShaderXRayMode  GlobalNamespace::GTShaderXRayMode::RevealsXRay{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTShaderXRayMode  GlobalNamespace::GTShaderXRayMode::VisibleToXRay{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTShaderXRayMode  GlobalNamespace::GTShaderXRayMode::InvisibleToXRay{static_cast<int32_t>(0x3)};
