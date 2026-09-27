#pragma once
// IWYU pragma private; include "Liv/Lck/UpdateTimingMode.hpp"
#include "Liv/Lck/zzzz__UpdateTimingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::UpdateTimingMode::UpdateTimingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::UpdateTimingMode::UpdateTimingMode()   {
}
constexpr ::Liv::Lck::UpdateTimingMode  Liv::Lck::UpdateTimingMode::FixedUpdate{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::UpdateTimingMode  Liv::Lck::UpdateTimingMode::Update{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::UpdateTimingMode  Liv::Lck::UpdateTimingMode::LateUpdate{static_cast<int32_t>(0x2)};
