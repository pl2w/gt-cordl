#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionMessenger_MessageEvent.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionMessenger_MessageEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FusionMessenger_MessageEvent::FusionMessenger_MessageEvent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionMessenger_MessageEvent::FusionMessenger_MessageEvent()   {
}
constexpr ::GlobalNamespace::FusionMessenger_MessageEvent  GlobalNamespace::FusionMessenger_MessageEvent::AnchorShareRequest{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FusionMessenger_MessageEvent  GlobalNamespace::FusionMessenger_MessageEvent::AnchorShareComplete{static_cast<int32_t>(0x1)};
