#pragma once
// IWYU pragma private; include "Unity/Cinemachine/RequiredTargetAttribute_RequiredTargets.hpp"
#include "Unity/Cinemachine/zzzz__RequiredTargetAttribute_RequiredTargets_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets::RequiredTargetAttribute_RequiredTargets(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets::RequiredTargetAttribute_RequiredTargets()   {
}
constexpr ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  GlobalNamespace::RequiredTargetAttribute_RequiredTargets::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  GlobalNamespace::RequiredTargetAttribute_RequiredTargets::Tracking{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  GlobalNamespace::RequiredTargetAttribute_RequiredTargets::LookAt{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  GlobalNamespace::RequiredTargetAttribute_RequiredTargets::GroupLookAt{static_cast<int32_t>(0x3)};
