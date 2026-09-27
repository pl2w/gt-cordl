#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityDelayedDestroy_Options.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_BeepPhase_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_Options_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_BeepPhase_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioSource", ty: "::UnityW<::UnityEngine::AudioSource>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "explosionSound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "explosionVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pooledExplosionPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beepSound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beepVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beepPhases", ty: "::ArrayW<::GlobalNamespace::GameEntityDelayedDestroy_BeepPhase>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameEntityDelayedDestroy_Options::GameEntityDelayedDestroy_Options(float_t  delay, ::UnityW<::UnityEngine::AudioSource>  audioSource, ::UnityW<::UnityEngine::AudioClip>  explosionSound, float_t  explosionVolume, ::UnityW<::UnityEngine::GameObject>  pooledExplosionPrefab, ::UnityW<::UnityEngine::AudioClip>  beepSound, float_t  beepVolume, ::ArrayW<::GlobalNamespace::GameEntityDelayedDestroy_BeepPhase>  beepPhases) noexcept  {
this->delay = delay;
this->audioSource = audioSource;
this->explosionSound = explosionSound;
this->explosionVolume = explosionVolume;
this->pooledExplosionPrefab = pooledExplosionPrefab;
this->beepSound = beepSound;
this->beepVolume = beepVolume;
this->beepPhases = beepPhases;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityDelayedDestroy_Options::GameEntityDelayedDestroy_Options()   {
}
