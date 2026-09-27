#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBarrierOverloadable_State.hpp"
#include "GlobalNamespace/zzzz__GRBarrierOverloadable_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRBarrierOverloadable_State::GRBarrierOverloadable_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBarrierOverloadable_State::GRBarrierOverloadable_State()   {
}
constexpr ::GlobalNamespace::GRBarrierOverloadable_State  GlobalNamespace::GRBarrierOverloadable_State::Active{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRBarrierOverloadable_State  GlobalNamespace::GRBarrierOverloadable_State::Destroyed{static_cast<int32_t>(0x1)};
