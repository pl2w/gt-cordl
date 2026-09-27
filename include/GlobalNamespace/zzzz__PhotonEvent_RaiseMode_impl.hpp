#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonEvent_RaiseMode.hpp"
#include "GlobalNamespace/zzzz__PhotonEvent_RaiseMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonEvent_RaiseMode::PhotonEvent_RaiseMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonEvent_RaiseMode::PhotonEvent_RaiseMode()   {
}
constexpr ::GlobalNamespace::PhotonEvent_RaiseMode  GlobalNamespace::PhotonEvent_RaiseMode::Local{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PhotonEvent_RaiseMode  GlobalNamespace::PhotonEvent_RaiseMode::RemoteOthers{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PhotonEvent_RaiseMode  GlobalNamespace::PhotonEvent_RaiseMode::RemoteAll{static_cast<int32_t>(0x2)};
