#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatedButterfly_TimedDestination.hpp"
#include "GlobalNamespace/zzzz__AnimatedButterfly_TimedDestination_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "syncTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "syncEndTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "destination", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnimatedButterfly_TimedDestination::AnimatedButterfly_TimedDestination(float_t  syncTime, float_t  syncEndTime, ::UnityW<::UnityEngine::GameObject>  destination) noexcept  {
this->syncTime = syncTime;
this->syncEndTime = syncEndTime;
this->destination = destination;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimatedButterfly_TimedDestination::AnimatedButterfly_TimedDestination()   {
}
