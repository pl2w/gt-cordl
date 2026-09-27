#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/MatchmakingMode.hpp"
#include "Fusion/Photon/Realtime/zzzz__MatchmakingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::MatchmakingMode::MatchmakingMode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::MatchmakingMode::MatchmakingMode()   {
}
constexpr ::Fusion::Photon::Realtime::MatchmakingMode  Fusion::Photon::Realtime::MatchmakingMode::FillRoom{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Photon::Realtime::MatchmakingMode  Fusion::Photon::Realtime::MatchmakingMode::SerialMatching{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Photon::Realtime::MatchmakingMode  Fusion::Photon::Realtime::MatchmakingMode::RandomMatching{static_cast<uint8_t>(0x2u)};
