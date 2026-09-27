#pragma once
// IWYU pragma private; include "System/AppContext_SwitchValueState.hpp"
#include "System/zzzz__AppContext_SwitchValueState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AppContext_SwitchValueState::AppContext_SwitchValueState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppContext_SwitchValueState::AppContext_SwitchValueState()   {
}
constexpr ::GlobalNamespace::AppContext_SwitchValueState  GlobalNamespace::AppContext_SwitchValueState::HasFalseValue{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AppContext_SwitchValueState  GlobalNamespace::AppContext_SwitchValueState::HasTrueValue{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AppContext_SwitchValueState  GlobalNamespace::AppContext_SwitchValueState::HasLookedForOverride{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::AppContext_SwitchValueState  GlobalNamespace::AppContext_SwitchValueState::UnknownValue{static_cast<int32_t>(0x8)};
