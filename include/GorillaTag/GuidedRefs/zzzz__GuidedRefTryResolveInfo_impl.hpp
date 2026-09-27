#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefTryResolveInfo.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTryResolveInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefTargetMono_def.hpp"
// Ctor Parameters [CppParam { name: "fieldId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetMono", ty: "::GorillaTag::GuidedRefs::IGuidedRefTargetMono*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo::GuidedRefTryResolveInfo(int32_t  fieldId, int32_t  index, ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*  targetMono) noexcept  {
this->fieldId = fieldId;
this->index = index;
this->targetMono = targetMono;
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo::GuidedRefTryResolveInfo()   {
}
