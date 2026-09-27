#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPosRotConstraint.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPosRotConstraint_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "follower", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceGorillaBone", ty: "::GlobalNamespace::GTHardCodedBones_SturdyEBone", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "source", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceRelativePath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "positionOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaPosRotConstraint::GorillaPosRotConstraint(::UnityW<::UnityEngine::Transform>  follower, ::GlobalNamespace::GTHardCodedBones_SturdyEBone  sourceGorillaBone, ::UnityW<::UnityEngine::Transform>  source, ::StringW  sourceRelativePath, ::UnityEngine::Vector3  positionOffset, ::UnityEngine::Quaternion  rotationOffset) noexcept  {
this->follower = follower;
this->sourceGorillaBone = sourceGorillaBone;
this->source = source;
this->sourceRelativePath = sourceRelativePath;
this->positionOffset = positionOffset;
this->rotationOffset = rotationOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPosRotConstraint::GorillaPosRotConstraint()   {
}
