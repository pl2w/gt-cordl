#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PropertyTypeFlag.hpp"
#include "Fusion/Photon/Realtime/zzzz__PropertyTypeFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::PropertyTypeFlag::PropertyTypeFlag(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::PropertyTypeFlag::PropertyTypeFlag()   {
}
constexpr ::Fusion::Photon::Realtime::PropertyTypeFlag  Fusion::Photon::Realtime::PropertyTypeFlag::None{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Photon::Realtime::PropertyTypeFlag  Fusion::Photon::Realtime::PropertyTypeFlag::Game{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Photon::Realtime::PropertyTypeFlag  Fusion::Photon::Realtime::PropertyTypeFlag::Actor{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Photon::Realtime::PropertyTypeFlag  Fusion::Photon::Realtime::PropertyTypeFlag::GameAndActor{static_cast<uint8_t>(0x3u)};
