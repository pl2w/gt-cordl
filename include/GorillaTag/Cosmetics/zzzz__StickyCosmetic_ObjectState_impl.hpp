#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/StickyCosmetic_ObjectState.hpp"
#include "GorillaTag/Cosmetics/zzzz__StickyCosmetic_ObjectState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StickyCosmetic_ObjectState::StickyCosmetic_ObjectState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StickyCosmetic_ObjectState::StickyCosmetic_ObjectState()   {
}
constexpr ::GlobalNamespace::StickyCosmetic_ObjectState  GlobalNamespace::StickyCosmetic_ObjectState::Extending{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::StickyCosmetic_ObjectState  GlobalNamespace::StickyCosmetic_ObjectState::Retracting{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StickyCosmetic_ObjectState  GlobalNamespace::StickyCosmetic_ObjectState::Stuck{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::StickyCosmetic_ObjectState  GlobalNamespace::StickyCosmetic_ObjectState::JustRetracted{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::StickyCosmetic_ObjectState  GlobalNamespace::StickyCosmetic_ObjectState::Idle{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::StickyCosmetic_ObjectState  GlobalNamespace::StickyCosmetic_ObjectState::AutoUnstuck{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::StickyCosmetic_ObjectState  GlobalNamespace::StickyCosmetic_ObjectState::AutoRetract{static_cast<int32_t>(0x6)};
