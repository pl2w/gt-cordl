#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderTransparencyMode.hpp"
#include "GlobalNamespace/zzzz__GTShaderTransparencyMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTShaderTransparencyMode::GTShaderTransparencyMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTShaderTransparencyMode::GTShaderTransparencyMode()   {
}
constexpr ::GlobalNamespace::GTShaderTransparencyMode  GlobalNamespace::GTShaderTransparencyMode::Opaque{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTShaderTransparencyMode  GlobalNamespace::GTShaderTransparencyMode::AlphaTest{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTShaderTransparencyMode  GlobalNamespace::GTShaderTransparencyMode::Transparent{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTShaderTransparencyMode  GlobalNamespace::GTShaderTransparencyMode::Premultiplied{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GTShaderTransparencyMode  GlobalNamespace::GTShaderTransparencyMode::Add{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GTShaderTransparencyMode  GlobalNamespace::GTShaderTransparencyMode::Multiply{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GTShaderTransparencyMode  GlobalNamespace::GTShaderTransparencyMode::DitherBlueLive{static_cast<int32_t>(0x6)};
