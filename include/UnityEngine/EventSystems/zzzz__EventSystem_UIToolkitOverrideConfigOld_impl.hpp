#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/EventSystem_UIToolkitOverrideConfigOld.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_UIToolkitOverrideConfigOld_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
// Ctor Parameters [CppParam { name: "activeEventSystem", ty: "::UnityW<::UnityEngine::EventSystems::EventSystem>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sendEvents", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "createPanelGameObjectsOnStart", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EventSystem_UIToolkitOverrideConfigOld::EventSystem_UIToolkitOverrideConfigOld(::UnityW<::UnityEngine::EventSystems::EventSystem>  activeEventSystem, bool  sendEvents, bool  createPanelGameObjectsOnStart) noexcept  {
this->activeEventSystem = activeEventSystem;
this->sendEvents = sendEvents;
this->createPanelGameObjectsOnStart = createPanelGameObjectsOnStart;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventSystem_UIToolkitOverrideConfigOld::EventSystem_UIToolkitOverrideConfigOld()   {
}
