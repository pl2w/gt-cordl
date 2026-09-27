#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx_SoundEntry.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_SoundEntry_EOptions_impl.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_SoundEntry_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_SoundEntry_EOptions_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioResource_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
// Ctor Parameters [CppParam { name: "options", ty: "::GlobalNamespace::SoundEntry_GameStateFx_EOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "source", ty: "::UnityW<::UnityEngine::AudioSource>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sound", ty: "::UnityW<::UnityEngine::Audio::AudioResource>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pitch", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameStateFx_SoundEntry::GameStateFx_SoundEntry(::GlobalNamespace::SoundEntry_GameStateFx_EOptions  options, ::UnityW<::UnityEngine::AudioSource>  source, ::UnityW<::UnityEngine::Audio::AudioResource>  sound, float_t  volume, float_t  pitch) noexcept  {
this->options = options;
this->source = source;
this->sound = sound;
this->volume = volume;
this->pitch = pitch;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameStateFx_SoundEntry::GameStateFx_SoundEntry()   {
}
