#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CloserCosmetic_State.hpp"
#include "GorillaTag/Cosmetics/zzzz__CloserCosmetic_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CloserCosmetic_State::CloserCosmetic_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CloserCosmetic_State::CloserCosmetic_State()   {
}
constexpr ::GlobalNamespace::CloserCosmetic_State  GlobalNamespace::CloserCosmetic_State::Closing{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CloserCosmetic_State  GlobalNamespace::CloserCosmetic_State::Opening{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CloserCosmetic_State  GlobalNamespace::CloserCosmetic_State::None{static_cast<int32_t>(0x2)};
