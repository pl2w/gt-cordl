#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx_StateReaction_EOptions.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_StateReaction_EOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions::StateReaction_GameStateFx_EOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions::StateReaction_GameStateFx_EOptions()   {
}
constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions  GlobalNamespace::StateReaction_GameStateFx_EOptions::Delay{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions  GlobalNamespace::StateReaction_GameStateFx_EOptions::Sound{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions  GlobalNamespace::StateReaction_GameStateFx_EOptions::GameObjects{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions  GlobalNamespace::StateReaction_GameStateFx_EOptions::Behaviours{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions  GlobalNamespace::StateReaction_GameStateFx_EOptions::Renderers{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions  GlobalNamespace::StateReaction_GameStateFx_EOptions::Materials{static_cast<int32_t>(0x20)};
