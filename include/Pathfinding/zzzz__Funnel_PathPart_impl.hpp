#pragma once
// IWYU pragma private; include "Pathfinding/Funnel_PathPart.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__Funnel_PathPart_def.hpp"
// Ctor Parameters [CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLink", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Funnel_PathPart::Funnel_PathPart(int32_t  startIndex, int32_t  endIndex, ::UnityEngine::Vector3  startPoint, ::UnityEngine::Vector3  endPoint, bool  isLink) noexcept  {
this->startIndex = startIndex;
this->endIndex = endIndex;
this->startPoint = startPoint;
this->endPoint = endPoint;
this->isLink = isLink;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Funnel_PathPart::Funnel_PathPart()   {
}
