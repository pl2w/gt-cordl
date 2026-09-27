#pragma once
// IWYU pragma private; include "Fusion/NetworkSpawnFlags.hpp"
#include "Fusion/zzzz__NetworkSpawnFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkSpawnFlags::NetworkSpawnFlags(int16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSpawnFlags::NetworkSpawnFlags()   {
}
constexpr ::Fusion::NetworkSpawnFlags  Fusion::NetworkSpawnFlags::DontDestroyOnLoad{static_cast<int16_t>(0x1)};
constexpr ::Fusion::NetworkSpawnFlags  Fusion::NetworkSpawnFlags::SharedModeStateAuthMasterClient{static_cast<int16_t>(0x2)};
constexpr ::Fusion::NetworkSpawnFlags  Fusion::NetworkSpawnFlags::SharedModeStateAuthLocalPlayer{static_cast<int16_t>(0x4)};
