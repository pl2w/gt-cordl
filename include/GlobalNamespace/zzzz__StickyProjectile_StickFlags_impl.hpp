#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyProjectile_StickFlags.hpp"
#include "GlobalNamespace/zzzz__StickyProjectile_StickFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StickyProjectile_StickFlags::StickyProjectile_StickFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StickyProjectile_StickFlags::StickyProjectile_StickFlags()   {
}
constexpr ::GlobalNamespace::StickyProjectile_StickFlags  GlobalNamespace::StickyProjectile_StickFlags::Wall{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StickyProjectile_StickFlags  GlobalNamespace::StickyProjectile_StickFlags::LocalPlayer{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::StickyProjectile_StickFlags  GlobalNamespace::StickyProjectile_StickFlags::RemotePlayer{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::StickyProjectile_StickFlags  GlobalNamespace::StickyProjectile_StickFlags::LocalHeadZone{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::StickyProjectile_StickFlags  GlobalNamespace::StickyProjectile_StickFlags::RemoteHeadZone{static_cast<int32_t>(0x10)};
