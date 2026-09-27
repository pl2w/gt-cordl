#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/JoinMode.hpp"
#include "Fusion/Photon/Realtime/zzzz__JoinMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::JoinMode::JoinMode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::JoinMode::JoinMode()   {
}
constexpr ::Fusion::Photon::Realtime::JoinMode  Fusion::Photon::Realtime::JoinMode::Default{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Photon::Realtime::JoinMode  Fusion::Photon::Realtime::JoinMode::CreateIfNotExists{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Photon::Realtime::JoinMode  Fusion::Photon::Realtime::JoinMode::JoinOrRejoin{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Photon::Realtime::JoinMode  Fusion::Photon::Realtime::JoinMode::RejoinOnly{static_cast<uint8_t>(0x3u)};
