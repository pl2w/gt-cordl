#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr_IKInput.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKInput_def.hpp"
// Ctor Parameters [CppParam { name: "usingNewIK", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elbowDir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bodyRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaIKMgr_IKInput::GorillaIKMgr_IKInput(bool  usingNewIK, ::UnityEngine::Vector3  targetPos, ::UnityEngine::Vector3  elbowDir, ::UnityEngine::Quaternion  bodyRot) noexcept  {
this->usingNewIK = usingNewIK;
this->targetPos = targetPos;
this->elbowDir = elbowDir;
this->bodyRot = bodyRot;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIKMgr_IKInput::GorillaIKMgr_IKInput()   {
}
