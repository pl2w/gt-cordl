#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatedBee_TimedDestination.hpp"
#include "GlobalNamespace/zzzz__AnimatedBee_TimedDestination_def.hpp"
#include "GlobalNamespace/zzzz__BeePerchPoint_def.hpp"
// Ctor Parameters [CppParam { name: "syncTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "syncEndTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "destination", ty: "::UnityW<::GlobalNamespace::BeePerchPoint>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnimatedBee_TimedDestination::AnimatedBee_TimedDestination(float_t  syncTime, float_t  syncEndTime, ::UnityW<::GlobalNamespace::BeePerchPoint>  destination) noexcept  {
this->syncTime = syncTime;
this->syncEndTime = syncEndTime;
this->destination = destination;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimatedBee_TimedDestination::AnimatedBee_TimedDestination()   {
}
