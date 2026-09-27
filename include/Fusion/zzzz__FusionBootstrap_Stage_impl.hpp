#pragma once
// IWYU pragma private; include "Fusion/FusionBootstrap_Stage.hpp"
#include "Fusion/zzzz__FusionBootstrap_Stage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FusionBootstrap_Stage::FusionBootstrap_Stage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionBootstrap_Stage::FusionBootstrap_Stage()   {
}
constexpr ::GlobalNamespace::FusionBootstrap_Stage  GlobalNamespace::FusionBootstrap_Stage::Disconnected{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FusionBootstrap_Stage  GlobalNamespace::FusionBootstrap_Stage::StartingUp{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FusionBootstrap_Stage  GlobalNamespace::FusionBootstrap_Stage::UnloadOriginalScene{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::FusionBootstrap_Stage  GlobalNamespace::FusionBootstrap_Stage::ConnectingServer{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::FusionBootstrap_Stage  GlobalNamespace::FusionBootstrap_Stage::ConnectingClients{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::FusionBootstrap_Stage  GlobalNamespace::FusionBootstrap_Stage::AllConnected{static_cast<int32_t>(0x5)};
