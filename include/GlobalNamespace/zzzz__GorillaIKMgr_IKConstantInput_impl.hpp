#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr_IKConstantInput.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKConstantInput_def.hpp"
// Ctor Parameters [CppParam { name: "initRotLower", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "initRotUpper", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shoulderPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bodyPivotPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bodyStartRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shoulderRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaIKMgr_IKConstantInput::GorillaIKMgr_IKConstantInput(::UnityEngine::Quaternion  initRotLower, ::UnityEngine::Quaternion  initRotUpper, ::UnityEngine::Vector3  shoulderPosition, ::UnityEngine::Vector3  bodyPivotPos, ::UnityEngine::Quaternion  bodyStartRot, ::UnityEngine::Quaternion  shoulderRot) noexcept  {
this->initRotLower = initRotLower;
this->initRotUpper = initRotUpper;
this->shoulderPosition = shoulderPosition;
this->bodyPivotPos = bodyPivotPos;
this->bodyStartRot = bodyStartRot;
this->shoulderRot = shoulderRot;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIKMgr_IKConstantInput::GorillaIKMgr_IKConstantInput()   {
}
