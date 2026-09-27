#pragma once
// IWYU pragma private; include "GlobalNamespace/RigContainer_MuteReason.hpp"
#include "GlobalNamespace/zzzz__RigContainer_MuteReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RigContainer_MuteReason::RigContainer_MuteReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigContainer_MuteReason::RigContainer_MuteReason()   {
}
constexpr ::GlobalNamespace::RigContainer_MuteReason  GlobalNamespace::RigContainer_MuteReason::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RigContainer_MuteReason  GlobalNamespace::RigContainer_MuteReason::Manual{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RigContainer_MuteReason  GlobalNamespace::RigContainer_MuteReason::Auto{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RigContainer_MuteReason  GlobalNamespace::RigContainer_MuteReason::Banned{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::RigContainer_MuteReason  GlobalNamespace::RigContainer_MuteReason::OversizedStream{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::RigContainer_MuteReason  GlobalNamespace::RigContainer_MuteReason::Room{static_cast<int32_t>(0x10)};
