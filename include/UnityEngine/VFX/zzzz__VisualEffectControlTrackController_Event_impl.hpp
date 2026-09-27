#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrackController_Event.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Event_ClipType_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Event_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Event_ClipType_def.hpp"
// Ctor Parameters [CppParam { name: "nameId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attribute", ty: "::UnityEngine::VFX::VFXEventAttribute*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clipIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clipType", ty: "::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualEffectControlTrackController_Event::VisualEffectControlTrackController_Event(int32_t  nameId, ::UnityEngine::VFX::VFXEventAttribute*  attribute, double_t  time, int32_t  clipIndex, ::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType  clipType) noexcept  {
this->nameId = nameId;
this->attribute = attribute;
this->time = time;
this->clipIndex = clipIndex;
this->clipType = clipType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectControlTrackController_Event::VisualEffectControlTrackController_Event()   {
}
