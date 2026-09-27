#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Bone.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoneId_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bone_def.hpp"
// Ctor Parameters [CppParam { name: "Id", ty: "::GlobalNamespace::OVRPlugin_BoneId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ParentBoneIndex", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Bone::OVRPlugin_Bone(::GlobalNamespace::OVRPlugin_BoneId  Id, int16_t  ParentBoneIndex, ::GlobalNamespace::OVRPlugin_Posef  Pose) noexcept  {
this->Id = Id;
this->ParentBoneIndex = ParentBoneIndex;
this->Pose = Pose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Bone::OVRPlugin_Bone()   {
}
