#pragma once
// IWYU pragma private; include "Fusion/RpcHostMode.hpp"
#include "Fusion/zzzz__RpcHostMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcHostMode::RpcHostMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RpcHostMode::RpcHostMode()   {
}
constexpr ::Fusion::RpcHostMode  Fusion::RpcHostMode::SourceIsServer{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RpcHostMode  Fusion::RpcHostMode::SourceIsHostPlayer{static_cast<int32_t>(0x1)};
