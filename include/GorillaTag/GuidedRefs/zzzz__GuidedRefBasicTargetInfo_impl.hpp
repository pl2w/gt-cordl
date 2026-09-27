#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefBasicTargetInfo.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefHubIdSO_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefBasicTargetInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefHubIdSO_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTargetIdSO_def.hpp"
// Ctor Parameters [CppParam { name: "targetId", ty: "::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hubIds", ty: "::ArrayW<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hackIgnoreDuplicateRegistration", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo::GuidedRefBasicTargetInfo(::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>  targetId, ::ArrayW<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>>  hubIds, bool  hackIgnoreDuplicateRegistration) noexcept  {
this->targetId = targetId;
this->hubIds = hubIds;
this->hackIgnoreDuplicateRegistration = hackIgnoreDuplicateRegistration;
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo::GuidedRefBasicTargetInfo()   {
}
