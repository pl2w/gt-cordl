#pragma once
// IWYU pragma private; include "Photon/Realtime/EncryptionMode.hpp"
#include "Photon/Realtime/zzzz__EncryptionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Realtime::EncryptionMode::EncryptionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::EncryptionMode::EncryptionMode()   {
}
constexpr ::Photon::Realtime::EncryptionMode  Photon::Realtime::EncryptionMode::PayloadEncryption{static_cast<int32_t>(0x0)};
constexpr ::Photon::Realtime::EncryptionMode  Photon::Realtime::EncryptionMode::DatagramEncryption{static_cast<int32_t>(0xa)};
constexpr ::Photon::Realtime::EncryptionMode  Photon::Realtime::EncryptionMode::DatagramEncryptionRandomSequence{static_cast<int32_t>(0xb)};
constexpr ::Photon::Realtime::EncryptionMode  Photon::Realtime::EncryptionMode::DatagramEncryptionGCM{static_cast<int32_t>(0xd)};
