#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_MaterialData.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_MaterialData_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
// Ctor Parameters [CppParam { name: "matName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overrideAudio", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audio", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overrideSlidePercent", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "slidePercent", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfaceEffectIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTPlayer_MaterialData::GTPlayer_MaterialData(::StringW  matName, bool  overrideAudio, ::UnityW<::UnityEngine::AudioClip>  audio, bool  overrideSlidePercent, float_t  slidePercent, int32_t  surfaceEffectIndex) noexcept  {
this->matName = matName;
this->overrideAudio = overrideAudio;
this->audio = audio;
this->overrideSlidePercent = overrideSlidePercent;
this->slidePercent = slidePercent;
this->surfaceEffectIndex = surfaceEffectIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTPlayer_MaterialData::GTPlayer_MaterialData()   {
}
