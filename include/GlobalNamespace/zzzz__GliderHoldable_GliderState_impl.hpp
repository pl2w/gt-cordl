#pragma once
// IWYU pragma private; include "GlobalNamespace/GliderHoldable_GliderState.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_GliderState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GliderHoldable_GliderState::GliderHoldable_GliderState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GliderHoldable_GliderState::GliderHoldable_GliderState()   {
}
constexpr ::GlobalNamespace::GliderHoldable_GliderState  GlobalNamespace::GliderHoldable_GliderState::LocallyHeld{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GliderHoldable_GliderState  GlobalNamespace::GliderHoldable_GliderState::LocallyDropped{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GliderHoldable_GliderState  GlobalNamespace::GliderHoldable_GliderState::RemoteSyncing{static_cast<int32_t>(0x2)};
