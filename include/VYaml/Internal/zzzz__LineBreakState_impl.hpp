#pragma once
// IWYU pragma private; include "VYaml/Internal/LineBreakState.hpp"
#include "VYaml/Internal/zzzz__LineBreakState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Internal::LineBreakState::LineBreakState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VYaml::Internal::LineBreakState::LineBreakState()   {
}
constexpr ::VYaml::Internal::LineBreakState  VYaml::Internal::LineBreakState::None{static_cast<int32_t>(0x0)};
constexpr ::VYaml::Internal::LineBreakState  VYaml::Internal::LineBreakState::Lf{static_cast<int32_t>(0x1)};
constexpr ::VYaml::Internal::LineBreakState  VYaml::Internal::LineBreakState::CrLf{static_cast<int32_t>(0x2)};
constexpr ::VYaml::Internal::LineBreakState  VYaml::Internal::LineBreakState::Cr{static_cast<int32_t>(0x3)};
