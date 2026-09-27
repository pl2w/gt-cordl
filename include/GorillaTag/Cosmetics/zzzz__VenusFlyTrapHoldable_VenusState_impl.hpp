#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/VenusFlyTrapHoldable_VenusState.hpp"
#include "GorillaTag/Cosmetics/zzzz__VenusFlyTrapHoldable_VenusState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VenusFlyTrapHoldable_VenusState::VenusFlyTrapHoldable_VenusState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VenusFlyTrapHoldable_VenusState::VenusFlyTrapHoldable_VenusState()   {
}
constexpr ::GlobalNamespace::VenusFlyTrapHoldable_VenusState  GlobalNamespace::VenusFlyTrapHoldable_VenusState::Closed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VenusFlyTrapHoldable_VenusState  GlobalNamespace::VenusFlyTrapHoldable_VenusState::Open{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VenusFlyTrapHoldable_VenusState  GlobalNamespace::VenusFlyTrapHoldable_VenusState::Closing{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::VenusFlyTrapHoldable_VenusState  GlobalNamespace::VenusFlyTrapHoldable_VenusState::Opening{static_cast<int32_t>(0x3)};
