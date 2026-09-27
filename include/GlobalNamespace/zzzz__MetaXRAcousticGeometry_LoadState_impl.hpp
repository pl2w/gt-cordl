#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticGeometry_LoadState.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_LoadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_LoadState::MetaXRAcousticGeometry_LoadState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_LoadState::MetaXRAcousticGeometry_LoadState()   {
}
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_LoadState  GlobalNamespace::MetaXRAcousticGeometry_LoadState::NotLoaded{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_LoadState  GlobalNamespace::MetaXRAcousticGeometry_LoadState::Loading{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_LoadState  GlobalNamespace::MetaXRAcousticGeometry_LoadState::Interrupted{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_LoadState  GlobalNamespace::MetaXRAcousticGeometry_LoadState::Loaded{static_cast<int32_t>(0x3)};
