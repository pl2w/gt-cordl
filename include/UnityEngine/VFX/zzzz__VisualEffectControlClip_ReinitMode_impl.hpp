#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlClip_ReinitMode.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_ReinitMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualEffectControlClip_ReinitMode::VisualEffectControlClip_ReinitMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectControlClip_ReinitMode::VisualEffectControlClip_ReinitMode()   {
}
constexpr ::GlobalNamespace::VisualEffectControlClip_ReinitMode  GlobalNamespace::VisualEffectControlClip_ReinitMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VisualEffectControlClip_ReinitMode  GlobalNamespace::VisualEffectControlClip_ReinitMode::OnExitClip{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VisualEffectControlClip_ReinitMode  GlobalNamespace::VisualEffectControlClip_ReinitMode::OnEnterClip{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::VisualEffectControlClip_ReinitMode  GlobalNamespace::VisualEffectControlClip_ReinitMode::OnEnterOrExitClip{static_cast<int32_t>(0x3)};
