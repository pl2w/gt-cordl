#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/SelectorState.hpp"
#include "Liv/Lck/GorillaTag/zzzz__SelectorState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::GorillaTag::SelectorState::SelectorState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::SelectorState::SelectorState()   {
}
constexpr ::Liv::Lck::GorillaTag::SelectorState  Liv::Lck::GorillaTag::SelectorState::Default{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::GorillaTag::SelectorState  Liv::Lck::GorillaTag::SelectorState::Selected{static_cast<int32_t>(0x1)};
