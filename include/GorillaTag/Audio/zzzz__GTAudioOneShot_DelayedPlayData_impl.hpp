#pragma once
// IWYU pragma private; include "GorillaTag/Audio/GTAudioOneShot_DelayedPlayData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Audio/zzzz__GTAudioOneShot_DelayedPlayData_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "sound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pitch", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTAudioOneShot_DelayedPlayData::GTAudioOneShot_DelayedPlayData(::UnityW<::UnityEngine::AudioClip>  sound, ::UnityW<::UnityEngine::Transform>  xform, ::UnityEngine::Vector3  pos, float_t  volume, float_t  pitch) noexcept  {
this->sound = sound;
this->xform = xform;
this->pos = pos;
this->volume = volume;
this->pitch = pitch;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTAudioOneShot_DelayedPlayData::GTAudioOneShot_DelayedPlayData()   {
}
