#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Skeleton.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoneCapsule_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bone_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SkeletonType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Skeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoneCapsule_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bone_def.hpp"
// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SkeletonType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NumBones", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NumBoneCapsules", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Bones", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Bone>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BoneCapsules", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_BoneCapsule>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Skeleton::OVRPlugin_Skeleton(::GlobalNamespace::OVRPlugin_SkeletonType  Type, uint32_t  NumBones, uint32_t  NumBoneCapsules, ::ArrayW<::GlobalNamespace::OVRPlugin_Bone>  Bones, ::ArrayW<::GlobalNamespace::OVRPlugin_BoneCapsule>  BoneCapsules) noexcept  {
this->Type = Type;
this->NumBones = NumBones;
this->NumBoneCapsules = NumBoneCapsules;
this->Bones = Bones;
this->BoneCapsules = BoneCapsules;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Skeleton::OVRPlugin_Skeleton()   {
}
