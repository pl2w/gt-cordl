#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_DamageOverlayValues.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_DamageOverlayValues_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
// Ctor Parameters [CppParam { name: "tint", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "effectDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "effectCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRPlayer_DamageOverlayValues::GRPlayer_DamageOverlayValues(::UnityEngine::Color  tint, float_t  effectDuration, ::UnityEngine::AnimationCurve*  effectCurve) noexcept  {
this->tint = tint;
this->effectDuration = effectDuration;
this->effectCurve = effectCurve;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRPlayer_DamageOverlayValues::GRPlayer_DamageOverlayValues()   {
}
