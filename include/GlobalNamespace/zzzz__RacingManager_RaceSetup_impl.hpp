#pragma once
// IWYU pragma private; include "GlobalNamespace/RacingManager_RaceSetup.hpp"
#include "GlobalNamespace/zzzz__RacingManager_RaceSetup_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
// Ctor Parameters [CppParam { name: "startVolume", ty: "::UnityW<::UnityEngine::BoxCollider>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numCheckpoints", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dqBaseDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dqInterval", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RacingManager_RaceSetup::RacingManager_RaceSetup(::UnityW<::UnityEngine::BoxCollider>  startVolume, int32_t  numCheckpoints, float_t  dqBaseDuration, float_t  dqInterval) noexcept  {
this->startVolume = startVolume;
this->numCheckpoints = numCheckpoints;
this->dqBaseDuration = dqBaseDuration;
this->dqInterval = dqInterval;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RacingManager_RaceSetup::RacingManager_RaceSetup()   {
}
