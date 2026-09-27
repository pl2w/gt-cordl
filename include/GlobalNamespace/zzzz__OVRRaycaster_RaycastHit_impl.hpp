#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRaycaster_RaycastHit.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRaycaster_RaycastHit_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
// Ctor Parameters [CppParam { name: "graphic", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "worldPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fromMouse", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRRaycaster_RaycastHit::OVRRaycaster_RaycastHit(::UnityW<::UnityEngine::UI::Graphic>  graphic, ::UnityEngine::Vector3  worldPos, bool  fromMouse) noexcept  {
this->graphic = graphic;
this->worldPos = worldPos;
this->fromMouse = fromMouse;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRaycaster_RaycastHit::OVRRaycaster_RaycastHit()   {
}
