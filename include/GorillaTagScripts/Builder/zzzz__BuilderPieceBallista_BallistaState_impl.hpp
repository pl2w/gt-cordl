#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceBallista_BallistaState.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceBallista_BallistaState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState::BuilderPieceBallista_BallistaState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState::BuilderPieceBallista_BallistaState()   {
}
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState  GlobalNamespace::BuilderPieceBallista_BallistaState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState  GlobalNamespace::BuilderPieceBallista_BallistaState::Loading{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState  GlobalNamespace::BuilderPieceBallista_BallistaState::WaitingForTrigger{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState  GlobalNamespace::BuilderPieceBallista_BallistaState::PlayerInTrigger{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState  GlobalNamespace::BuilderPieceBallista_BallistaState::PrepareForLaunch{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState  GlobalNamespace::BuilderPieceBallista_BallistaState::PrepareForLaunchLocal{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState  GlobalNamespace::BuilderPieceBallista_BallistaState::Launching{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState  GlobalNamespace::BuilderPieceBallista_BallistaState::LaunchingLocal{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState  GlobalNamespace::BuilderPieceBallista_BallistaState::Count{static_cast<int32_t>(0x8)};
