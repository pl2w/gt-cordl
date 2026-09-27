#pragma once
// IWYU pragma private; include "Fusion/NetworkProjectConfig_PeerModes.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_PeerModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkProjectConfig_PeerModes::NetworkProjectConfig_PeerModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkProjectConfig_PeerModes::NetworkProjectConfig_PeerModes()   {
}
constexpr ::GlobalNamespace::NetworkProjectConfig_PeerModes  GlobalNamespace::NetworkProjectConfig_PeerModes::Single{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetworkProjectConfig_PeerModes  GlobalNamespace::NetworkProjectConfig_PeerModes::Multiple{static_cast<int32_t>(0x1)};
