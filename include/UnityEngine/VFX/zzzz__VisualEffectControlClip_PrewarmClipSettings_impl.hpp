#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlClip_PrewarmClipSettings.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_PrewarmClipSettings_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
// Ctor Parameters [CppParam { name: "enable", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stepCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "eventName", ty: "::UnityEngine::VFX::Utility::ExposedProperty*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings::VisualEffectControlClip_PrewarmClipSettings(bool  enable, uint32_t  stepCount, float_t  deltaTime, ::UnityEngine::VFX::Utility::ExposedProperty*  eventName) noexcept  {
this->enable = enable;
this->stepCount = stepCount;
this->deltaTime = deltaTime;
this->eventName = eventName;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings::VisualEffectControlClip_PrewarmClipSettings()   {
}
