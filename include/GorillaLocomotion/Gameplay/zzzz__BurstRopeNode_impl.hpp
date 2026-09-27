#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/BurstRopeNode.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__BurstRopeNode_def.hpp"
// Ctor Parameters [CppParam { name: "lastPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "curPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaLocomotion::Gameplay::BurstRopeNode::BurstRopeNode(::UnityEngine::Vector3  lastPos, ::UnityEngine::Vector3  curPos) noexcept  {
this->lastPos = lastPos;
this->curPos = curPos;
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::BurstRopeNode::BurstRopeNode()   {
}
