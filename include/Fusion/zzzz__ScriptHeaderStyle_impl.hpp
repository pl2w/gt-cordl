#pragma once
// IWYU pragma private; include "Fusion/ScriptHeaderStyle.hpp"
#include "Fusion/zzzz__ScriptHeaderStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::ScriptHeaderStyle::ScriptHeaderStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::ScriptHeaderStyle::ScriptHeaderStyle()   {
}
constexpr ::Fusion::ScriptHeaderStyle  Fusion::ScriptHeaderStyle::Unity{static_cast<int32_t>(0x0)};
constexpr ::Fusion::ScriptHeaderStyle  Fusion::ScriptHeaderStyle::Photon{static_cast<int32_t>(0x1)};
