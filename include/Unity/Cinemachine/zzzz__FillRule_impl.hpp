#pragma once
// IWYU pragma private; include "Unity/Cinemachine/FillRule.hpp"
#include "Unity/Cinemachine/zzzz__FillRule_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::FillRule::FillRule(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::FillRule::FillRule()   {
}
constexpr ::Unity::Cinemachine::FillRule  Unity::Cinemachine::FillRule::EvenOdd{static_cast<int32_t>(0x0)};
constexpr ::Unity::Cinemachine::FillRule  Unity::Cinemachine::FillRule::NonZero{static_cast<int32_t>(0x1)};
constexpr ::Unity::Cinemachine::FillRule  Unity::Cinemachine::FillRule::Positive{static_cast<int32_t>(0x2)};
constexpr ::Unity::Cinemachine::FillRule  Unity::Cinemachine::FillRule::Negative{static_cast<int32_t>(0x3)};
