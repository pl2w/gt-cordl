#pragma once
// IWYU pragma private; include "GorillaGameModes/GameModeTypeCountdown.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeTypeCountdown_def.hpp"
#include "GameObjectScheduling/zzzz__CountdownTextDate_def.hpp"
// Ctor Parameters [CppParam { name: "mode", ty: "::GorillaGameModes::GameModeType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "countdownTextDate", ty: "::UnityW<::GameObjectScheduling::CountdownTextDate>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaGameModes::GameModeTypeCountdown::GameModeTypeCountdown(::GorillaGameModes::GameModeType  mode, ::UnityW<::GameObjectScheduling::CountdownTextDate>  countdownTextDate) noexcept  {
this->mode = mode;
this->countdownTextDate = countdownTextDate;
}
// Ctor Parameters []
constexpr ::GorillaGameModes::GameModeTypeCountdown::GameModeTypeCountdown()   {
}
