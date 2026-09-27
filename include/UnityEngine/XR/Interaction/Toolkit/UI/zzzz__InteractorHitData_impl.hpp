#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/InteractorHitData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__InteractorHitData_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
// Ctor Parameters [CppParam { name: "closestPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactorOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactorDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitDocument", ty: "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData::InteractorHitData(::UnityEngine::Vector3  closestPoint, ::UnityEngine::Vector3  interactorOrigin, ::UnityEngine::Vector3  interactorDirection, ::UnityW<::UnityEngine::UIElements::UIDocument>  hitDocument) noexcept  {
this->closestPoint = closestPoint;
this->interactorOrigin = interactorOrigin;
this->interactorDirection = interactorDirection;
this->hitDocument = hitDocument;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData::InteractorHitData()   {
}
