#pragma once
// IWYU pragma private; include "Pathfinding/StartEndModifier_Exactness.hpp"
#include "Pathfinding/zzzz__StartEndModifier_Exactness_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StartEndModifier_Exactness::StartEndModifier_Exactness(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartEndModifier_Exactness::StartEndModifier_Exactness()   {
}
constexpr ::GlobalNamespace::StartEndModifier_Exactness  GlobalNamespace::StartEndModifier_Exactness::SnapToNode{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::StartEndModifier_Exactness  GlobalNamespace::StartEndModifier_Exactness::Original{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StartEndModifier_Exactness  GlobalNamespace::StartEndModifier_Exactness::Interpolate{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::StartEndModifier_Exactness  GlobalNamespace::StartEndModifier_Exactness::ClosestOnNode{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::StartEndModifier_Exactness  GlobalNamespace::StartEndModifier_Exactness::NodeConnection{static_cast<int32_t>(0x4)};
