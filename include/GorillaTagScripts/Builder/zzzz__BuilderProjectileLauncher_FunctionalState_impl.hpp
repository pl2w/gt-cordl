#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderProjectileLauncher_FunctionalState.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderProjectileLauncher_FunctionalState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState::BuilderProjectileLauncher_FunctionalState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState::BuilderProjectileLauncher_FunctionalState()   {
}
constexpr ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState  GlobalNamespace::BuilderProjectileLauncher_FunctionalState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState  GlobalNamespace::BuilderProjectileLauncher_FunctionalState::Fire{static_cast<int32_t>(0x1)};
