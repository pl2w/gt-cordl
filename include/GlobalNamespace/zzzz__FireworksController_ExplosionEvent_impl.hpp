#pragma once
// IWYU pragma private; include "GlobalNamespace/FireworksController_ExplosionEvent.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "GlobalNamespace/zzzz__FireworksController_ExplosionEvent_def.hpp"
#include "GlobalNamespace/zzzz__Firework_def.hpp"
// Ctor Parameters [CppParam { name: "timeSince", ty: "::GlobalNamespace::TimeSince", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "delay", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "explosionIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "burstIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firework", ty: "::UnityW<::GlobalNamespace::Firework>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FireworksController_ExplosionEvent::FireworksController_ExplosionEvent(::GlobalNamespace::TimeSince  timeSince, double_t  delay, int32_t  explosionIndex, int32_t  burstIndex, bool  active, ::UnityW<::GlobalNamespace::Firework>  firework) noexcept  {
this->timeSince = timeSince;
this->delay = delay;
this->explosionIndex = explosionIndex;
this->burstIndex = burstIndex;
this->active = active;
this->firework = firework;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireworksController_ExplosionEvent::FireworksController_ExplosionEvent()   {
}
