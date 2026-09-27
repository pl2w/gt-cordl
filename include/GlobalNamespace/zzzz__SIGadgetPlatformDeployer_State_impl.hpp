#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetPlatformDeployer_State.hpp"
#include "GlobalNamespace/zzzz__SIGadgetPlatformDeployer_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetPlatformDeployer_State::SIGadgetPlatformDeployer_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetPlatformDeployer_State::SIGadgetPlatformDeployer_State()   {
}
constexpr ::GlobalNamespace::SIGadgetPlatformDeployer_State  GlobalNamespace::SIGadgetPlatformDeployer_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetPlatformDeployer_State  GlobalNamespace::SIGadgetPlatformDeployer_State::Deploying{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetPlatformDeployer_State  GlobalNamespace::SIGadgetPlatformDeployer_State::Count{static_cast<int32_t>(0x2)};
