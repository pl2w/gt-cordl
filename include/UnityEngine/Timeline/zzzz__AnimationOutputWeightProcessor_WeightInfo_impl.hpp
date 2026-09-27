#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AnimationOutputWeightProcessor_WeightInfo.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationOutputWeightProcessor_WeightInfo_def.hpp"
// Ctor Parameters [CppParam { name: "mixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentMixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnimationOutputWeightProcessor_WeightInfo::AnimationOutputWeightProcessor_WeightInfo(::UnityEngine::Playables::Playable  mixer, ::UnityEngine::Playables::Playable  parentMixer, int32_t  port) noexcept  {
this->mixer = mixer;
this->parentMixer = parentMixer;
this->port = port;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationOutputWeightProcessor_WeightInfo::AnimationOutputWeightProcessor_WeightInfo()   {
}
