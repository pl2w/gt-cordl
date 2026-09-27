#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Axis.hpp"
#include "UnityEngine/Animations/zzzz__Axis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::Axis::Axis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Axis::Axis()   {
}
constexpr ::UnityEngine::Animations::Axis  UnityEngine::Animations::Axis::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Animations::Axis  UnityEngine::Animations::Axis::X{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Animations::Axis  UnityEngine::Animations::Axis::Y{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Animations::Axis  UnityEngine::Animations::Axis::Z{static_cast<int32_t>(0x4)};
