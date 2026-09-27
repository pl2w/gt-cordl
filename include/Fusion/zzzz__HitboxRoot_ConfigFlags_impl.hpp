#pragma once
// IWYU pragma private; include "Fusion/HitboxRoot_ConfigFlags.hpp"
#include "Fusion/zzzz__HitboxRoot_ConfigFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HitboxRoot_ConfigFlags::HitboxRoot_ConfigFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HitboxRoot_ConfigFlags::HitboxRoot_ConfigFlags()   {
}
constexpr ::GlobalNamespace::HitboxRoot_ConfigFlags  GlobalNamespace::HitboxRoot_ConfigFlags::ReinitializeHitboxesBeforeRegistration{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HitboxRoot_ConfigFlags  GlobalNamespace::HitboxRoot_ConfigFlags::IncludeInactiveHitboxes{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HitboxRoot_ConfigFlags  GlobalNamespace::HitboxRoot_ConfigFlags::Legacy{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HitboxRoot_ConfigFlags  GlobalNamespace::HitboxRoot_ConfigFlags::Default{static_cast<int32_t>(0x3)};
