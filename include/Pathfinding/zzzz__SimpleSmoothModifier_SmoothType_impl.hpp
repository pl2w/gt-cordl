#pragma once
// IWYU pragma private; include "Pathfinding/SimpleSmoothModifier_SmoothType.hpp"
#include "Pathfinding/zzzz__SimpleSmoothModifier_SmoothType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimpleSmoothModifier_SmoothType::SimpleSmoothModifier_SmoothType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleSmoothModifier_SmoothType::SimpleSmoothModifier_SmoothType()   {
}
constexpr ::GlobalNamespace::SimpleSmoothModifier_SmoothType  GlobalNamespace::SimpleSmoothModifier_SmoothType::Simple{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SimpleSmoothModifier_SmoothType  GlobalNamespace::SimpleSmoothModifier_SmoothType::Bezier{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SimpleSmoothModifier_SmoothType  GlobalNamespace::SimpleSmoothModifier_SmoothType::OffsetSimple{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SimpleSmoothModifier_SmoothType  GlobalNamespace::SimpleSmoothModifier_SmoothType::CurvedNonuniform{static_cast<int32_t>(0x3)};
