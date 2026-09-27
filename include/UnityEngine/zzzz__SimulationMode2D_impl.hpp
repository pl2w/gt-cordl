#pragma once
// IWYU pragma private; include "UnityEngine/SimulationMode2D.hpp"
#include "UnityEngine/zzzz__SimulationMode2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::SimulationMode2D::SimulationMode2D(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SimulationMode2D::SimulationMode2D()   {
}
constexpr ::UnityEngine::SimulationMode2D  UnityEngine::SimulationMode2D::FixedUpdate{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::SimulationMode2D  UnityEngine::SimulationMode2D::Update{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::SimulationMode2D  UnityEngine::SimulationMode2D::Script{static_cast<int32_t>(0x2)};
