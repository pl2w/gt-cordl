#pragma once
// IWYU pragma private; include "UnityEngine/UI/GridLayoutGroup_Constraint.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_Constraint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GridLayoutGroup_Constraint::GridLayoutGroup_Constraint(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GridLayoutGroup_Constraint::GridLayoutGroup_Constraint()   {
}
constexpr ::GlobalNamespace::GridLayoutGroup_Constraint  GlobalNamespace::GridLayoutGroup_Constraint::Flexible{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GridLayoutGroup_Constraint  GlobalNamespace::GridLayoutGroup_Constraint::FixedColumnCount{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GridLayoutGroup_Constraint  GlobalNamespace::GridLayoutGroup_Constraint::FixedRowCount{static_cast<int32_t>(0x2)};
