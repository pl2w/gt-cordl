#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/AxisComposite_WhichSideWins.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_WhichSideWins_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AxisComposite_WhichSideWins::AxisComposite_WhichSideWins(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AxisComposite_WhichSideWins::AxisComposite_WhichSideWins()   {
}
constexpr ::GlobalNamespace::AxisComposite_WhichSideWins  GlobalNamespace::AxisComposite_WhichSideWins::Neither{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AxisComposite_WhichSideWins  GlobalNamespace::AxisComposite_WhichSideWins::Positive{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AxisComposite_WhichSideWins  GlobalNamespace::AxisComposite_WhichSideWins::Negative{static_cast<int32_t>(0x2)};
