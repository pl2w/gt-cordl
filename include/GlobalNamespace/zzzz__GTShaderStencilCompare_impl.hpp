#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderStencilCompare.hpp"
#include "GlobalNamespace/zzzz__GTShaderStencilCompare_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTShaderStencilCompare::GTShaderStencilCompare(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTShaderStencilCompare::GTShaderStencilCompare()   {
}
constexpr ::GlobalNamespace::GTShaderStencilCompare  GlobalNamespace::GTShaderStencilCompare::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTShaderStencilCompare  GlobalNamespace::GTShaderStencilCompare::Never{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTShaderStencilCompare  GlobalNamespace::GTShaderStencilCompare::Less{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTShaderStencilCompare  GlobalNamespace::GTShaderStencilCompare::Equal{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GTShaderStencilCompare  GlobalNamespace::GTShaderStencilCompare::LEqual{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GTShaderStencilCompare  GlobalNamespace::GTShaderStencilCompare::Greater{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GTShaderStencilCompare  GlobalNamespace::GTShaderStencilCompare::NotEqual{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GTShaderStencilCompare  GlobalNamespace::GTShaderStencilCompare::GEqual{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GTShaderStencilCompare  GlobalNamespace::GTShaderStencilCompare::Always{static_cast<int32_t>(0x8)};
