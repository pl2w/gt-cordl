#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ContainerFlavor.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ContainerFlavor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::MultiplayerModels::ContainerFlavor::ContainerFlavor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ContainerFlavor::ContainerFlavor()   {
}
constexpr ::PlayFab::MultiplayerModels::ContainerFlavor  PlayFab::MultiplayerModels::ContainerFlavor::ManagedWindowsServerCore{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::MultiplayerModels::ContainerFlavor  PlayFab::MultiplayerModels::ContainerFlavor::CustomLinux{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::MultiplayerModels::ContainerFlavor  PlayFab::MultiplayerModels::ContainerFlavor::ManagedWindowsServerCorePreview{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::MultiplayerModels::ContainerFlavor  PlayFab::MultiplayerModels::ContainerFlavor::Invalid{static_cast<int32_t>(0x3)};
