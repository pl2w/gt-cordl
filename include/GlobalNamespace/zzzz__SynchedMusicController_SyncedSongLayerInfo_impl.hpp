#pragma once
// IWYU pragma private; include "GlobalNamespace/SynchedMusicController_SyncedSongLayerInfo.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_AudioSourcePickMode_impl.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_SyncedSongLayerInfo_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
// Ctor Parameters [CppParam { name: "audioClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioSourcePickMode", ty: "::GlobalNamespace::SynchedMusicController_AudioSourcePickMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioSources", ty: "::ArrayW<::UnityW<::UnityEngine::AudioSource>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo::SynchedMusicController_SyncedSongLayerInfo(::UnityW<::UnityEngine::AudioClip>  audioClip, ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode  audioSourcePickMode, ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  audioSources) noexcept  {
this->audioClip = audioClip;
this->audioSourcePickMode = audioSourcePickMode;
this->audioSources = audioSources;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo::SynchedMusicController_SyncedSongLayerInfo()   {
}
