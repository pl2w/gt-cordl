#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CancellationReason.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CancellationReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::MultiplayerModels::CancellationReason::CancellationReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CancellationReason::CancellationReason()   {
}
constexpr ::PlayFab::MultiplayerModels::CancellationReason  PlayFab::MultiplayerModels::CancellationReason::Requested{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::MultiplayerModels::CancellationReason  PlayFab::MultiplayerModels::CancellationReason::Internal{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::MultiplayerModels::CancellationReason  PlayFab::MultiplayerModels::CancellationReason::Timeout{static_cast<int32_t>(0x2)};
