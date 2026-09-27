#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateToggle_StatePrecedence.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateToggle_StatePrecedence_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ActiveStateToggle_StatePrecedence::ActiveStateToggle_StatePrecedence(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActiveStateToggle_StatePrecedence::ActiveStateToggle_StatePrecedence()   {
}
constexpr ::GlobalNamespace::ActiveStateToggle_StatePrecedence  GlobalNamespace::ActiveStateToggle_StatePrecedence::On{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ActiveStateToggle_StatePrecedence  GlobalNamespace::ActiveStateToggle_StatePrecedence::Off{static_cast<int32_t>(0x1)};
