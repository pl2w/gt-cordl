#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSnappable_SnapJointOffset.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameSnappable_SnapJointOffset_def.hpp"
// Ctor Parameters [CppParam { name: "jointType", ty: "::GlobalNamespace::SnapJointType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "positionOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameSnappable_SnapJointOffset::GameSnappable_SnapJointOffset(::GlobalNamespace::SnapJointType  jointType, ::UnityEngine::Vector3  positionOffset, ::UnityEngine::Vector3  rotationOffset) noexcept  {
this->jointType = jointType;
this->positionOffset = positionOffset;
this->rotationOffset = rotationOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSnappable_SnapJointOffset::GameSnappable_SnapJointOffset()   {
}
