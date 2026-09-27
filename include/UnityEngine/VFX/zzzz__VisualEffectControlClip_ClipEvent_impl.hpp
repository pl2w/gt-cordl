#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlClip_ClipEvent.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectPlayableSerializedEventNoColor_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_ClipEvent_def.hpp"
inline void GlobalNamespace::VisualEffectControlClip_ClipEvent::setStaticF_defaultEditorColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "defaultEditorColor", ::GlobalNamespace::VisualEffectControlClip_ClipEvent>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color GlobalNamespace::VisualEffectControlClip_ClipEvent::getStaticF_defaultEditorColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "defaultEditorColor", ::GlobalNamespace::VisualEffectControlClip_ClipEvent>();
}
// Ctor Parameters [CppParam { name: "editorColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enter", ty: "::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "exit", ty: "::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualEffectControlClip_ClipEvent::VisualEffectControlClip_ClipEvent(::UnityEngine::Color  editorColor, ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor  enter, ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor  exit) noexcept  {
this->editorColor = editorColor;
this->enter = enter;
this->exit = exit;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectControlClip_ClipEvent::VisualEffectControlClip_ClipEvent()   {
}
