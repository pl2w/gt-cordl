#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticPlacementInfo.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_impl.hpp"
#include "GorillaTag/zzzz__XformOffset_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticPlacementInfo_def.hpp"
// Ctor Parameters [CppParam { name: "parentBone", ty: "::GlobalNamespace::GTHardCodedBones_SturdyEBone", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "::GorillaTag::XformOffset", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::CosmeticSystem::CosmeticPlacementInfo::CosmeticPlacementInfo(::GlobalNamespace::GTHardCodedBones_SturdyEBone  parentBone, ::GorillaTag::XformOffset  offset) noexcept  {
this->parentBone = parentBone;
this->offset = offset;
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::CosmeticPlacementInfo::CosmeticPlacementInfo()   {
}
