#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityDelayedReturn_Options.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedReturn_BeepPhase_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedReturn_Options_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedReturn_BeepPhase_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reappearDelay", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disappearSound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disappearVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pooledDisappearPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reappearSound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reappearVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pooledReappearPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beepSound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beepVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beepPhases", ty: "::ArrayW<::GlobalNamespace::GameEntityDelayedReturn_BeepPhase>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameEntityDelayedReturn_Options::GameEntityDelayedReturn_Options(float_t  delay, float_t  reappearDelay, ::UnityW<::UnityEngine::AudioClip>  disappearSound, float_t  disappearVolume, ::UnityW<::UnityEngine::GameObject>  pooledDisappearPrefab, ::UnityW<::UnityEngine::AudioClip>  reappearSound, float_t  reappearVolume, ::UnityW<::UnityEngine::GameObject>  pooledReappearPrefab, ::UnityW<::UnityEngine::AudioClip>  beepSound, float_t  beepVolume, ::ArrayW<::GlobalNamespace::GameEntityDelayedReturn_BeepPhase>  beepPhases) noexcept  {
this->delay = delay;
this->reappearDelay = reappearDelay;
this->disappearSound = disappearSound;
this->disappearVolume = disappearVolume;
this->pooledDisappearPrefab = pooledDisappearPrefab;
this->reappearSound = reappearSound;
this->reappearVolume = reappearVolume;
this->pooledReappearPrefab = pooledReappearPrefab;
this->beepSound = beepSound;
this->beepVolume = beepVolume;
this->beepPhases = beepPhases;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityDelayedReturn_Options::GameEntityDelayedReturn_Options()   {
}
