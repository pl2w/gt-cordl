#pragma once
// IWYU pragma private; include "CjLib/DebugUtil_Style.hpp"
#include "CjLib/zzzz__DebugUtil_Style_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DebugUtil_Style::DebugUtil_Style(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugUtil_Style::DebugUtil_Style()   {
}
constexpr ::GlobalNamespace::DebugUtil_Style  GlobalNamespace::DebugUtil_Style::Wireframe{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DebugUtil_Style  GlobalNamespace::DebugUtil_Style::SolidColor{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DebugUtil_Style  GlobalNamespace::DebugUtil_Style::FlatShaded{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DebugUtil_Style  GlobalNamespace::DebugUtil_Style::SmoothShaded{static_cast<int32_t>(0x3)};
