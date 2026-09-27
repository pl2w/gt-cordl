#pragma once
// IWYU pragma private; include "Fusion/FusionBootstrap_StartModes.hpp"
#include "Fusion/zzzz__FusionBootstrap_StartModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FusionBootstrap_StartModes::FusionBootstrap_StartModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionBootstrap_StartModes::FusionBootstrap_StartModes()   {
}
constexpr ::GlobalNamespace::FusionBootstrap_StartModes  GlobalNamespace::FusionBootstrap_StartModes::UserInterface{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FusionBootstrap_StartModes  GlobalNamespace::FusionBootstrap_StartModes::Automatic{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FusionBootstrap_StartModes  GlobalNamespace::FusionBootstrap_StartModes::Manual{static_cast<int32_t>(0x2)};
