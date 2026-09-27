#pragma once
// IWYU pragma private; include "GlobalNamespace/MouthFlapLevel.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__MouthFlapLevel_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "faces", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cycleDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minRequiredVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxRequiredVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MouthFlapLevel::MouthFlapLevel(::ArrayW<::UnityEngine::Vector2>  faces, float_t  cycleDuration, float_t  minRequiredVolume, float_t  maxRequiredVolume) noexcept  {
this->faces = faces;
this->cycleDuration = cycleDuration;
this->minRequiredVolume = minRequiredVolume;
this->maxRequiredVolume = maxRequiredVolume;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MouthFlapLevel::MouthFlapLevel()   {
}
