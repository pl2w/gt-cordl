#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/EncryptionMode.hpp"
#include "Fusion/Photon/Realtime/zzzz__EncryptionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::EncryptionMode::EncryptionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::EncryptionMode::EncryptionMode()   {
}
constexpr ::Fusion::Photon::Realtime::EncryptionMode  Fusion::Photon::Realtime::EncryptionMode::PayloadEncryption{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Photon::Realtime::EncryptionMode  Fusion::Photon::Realtime::EncryptionMode::DatagramEncryptionGCM{static_cast<int32_t>(0xd)};
