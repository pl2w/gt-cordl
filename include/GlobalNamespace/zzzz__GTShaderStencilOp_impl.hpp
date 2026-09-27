#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderStencilOp.hpp"
#include "GlobalNamespace/zzzz__GTShaderStencilOp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTShaderStencilOp::GTShaderStencilOp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTShaderStencilOp::GTShaderStencilOp()   {
}
constexpr ::GlobalNamespace::GTShaderStencilOp  GlobalNamespace::GTShaderStencilOp::Keep{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTShaderStencilOp  GlobalNamespace::GTShaderStencilOp::Zero{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTShaderStencilOp  GlobalNamespace::GTShaderStencilOp::Replace{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTShaderStencilOp  GlobalNamespace::GTShaderStencilOp::IncrSat{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GTShaderStencilOp  GlobalNamespace::GTShaderStencilOp::DecrSat{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GTShaderStencilOp  GlobalNamespace::GTShaderStencilOp::Invert{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GTShaderStencilOp  GlobalNamespace::GTShaderStencilOp::IncrWrap{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GTShaderStencilOp  GlobalNamespace::GTShaderStencilOp::DecrWrap{static_cast<int32_t>(0x7)};
