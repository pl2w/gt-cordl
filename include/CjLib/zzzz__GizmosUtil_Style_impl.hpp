#pragma once
// IWYU pragma private; include "CjLib/GizmosUtil_Style.hpp"
#include "CjLib/zzzz__GizmosUtil_Style_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GizmosUtil_Style::GizmosUtil_Style(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GizmosUtil_Style::GizmosUtil_Style()   {
}
constexpr ::GlobalNamespace::GizmosUtil_Style  GlobalNamespace::GizmosUtil_Style::Wireframe{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GizmosUtil_Style  GlobalNamespace::GizmosUtil_Style::FlatShaded{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GizmosUtil_Style  GlobalNamespace::GizmosUtil_Style::SmoothShaded{static_cast<int32_t>(0x2)};
