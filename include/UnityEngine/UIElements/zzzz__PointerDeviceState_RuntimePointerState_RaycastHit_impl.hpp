#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDeviceState_RuntimePointerState_RaycastHit.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_RuntimePointerState_RaycastHit_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
// Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "document", ty: "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit::RuntimePointerState_PointerDeviceState_RaycastHit(float_t  distance, ::UnityW<::UnityEngine::Collider>  collider, ::UnityW<::UnityEngine::UIElements::UIDocument>  document, ::UnityEngine::UIElements::VisualElement*  element) noexcept  {
this->distance = distance;
this->collider = collider;
this->document = document;
this->element = element;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit::RuntimePointerState_PointerDeviceState_RaycastHit()   {
}
