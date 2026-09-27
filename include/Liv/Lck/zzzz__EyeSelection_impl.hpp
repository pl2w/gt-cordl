#pragma once
// IWYU pragma private; include "Liv/Lck/EyeSelection.hpp"
#include "Liv/Lck/zzzz__EyeSelection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::EyeSelection::EyeSelection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::EyeSelection::EyeSelection()   {
}
constexpr ::Liv::Lck::EyeSelection  Liv::Lck::EyeSelection::Left{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::EyeSelection  Liv::Lck::EyeSelection::Right{static_cast<int32_t>(0x1)};
