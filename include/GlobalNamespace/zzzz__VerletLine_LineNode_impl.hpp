#pragma once
// IWYU pragma private; include "GlobalNamespace/VerletLine_LineNode.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VerletLine_LineNode_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "acceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VerletLine_LineNode::VerletLine_LineNode(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  lastPosition, ::UnityEngine::Vector3  acceleration) noexcept  {
this->position = position;
this->lastPosition = lastPosition;
this->acceleration = acceleration;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VerletLine_LineNode::VerletLine_LineNode()   {
}
