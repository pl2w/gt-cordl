#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/PointerHitData.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__PointerHitData_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
// Ctor Parameters [CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "worldOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitCollider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitDocument", ty: "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData::PointerHitData(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Quaternion  worldOrientation, float_t  hitDistance, ::UnityW<::UnityEngine::Collider>  hitCollider, ::UnityW<::UnityEngine::UIElements::UIDocument>  hitDocument, ::UnityEngine::UIElements::VisualElement*  hitElement) noexcept  {
this->worldPosition = worldPosition;
this->worldOrientation = worldOrientation;
this->hitDistance = hitDistance;
this->hitCollider = hitCollider;
this->hitDocument = hitDocument;
this->hitElement = hitElement;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData::PointerHitData()   {
}
