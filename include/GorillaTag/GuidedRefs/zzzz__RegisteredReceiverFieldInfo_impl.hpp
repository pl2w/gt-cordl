#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/RegisteredReceiverFieldInfo.hpp"
#include "GorillaTag/GuidedRefs/zzzz__RegisteredReceiverFieldInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefReceiverMono_def.hpp"
// Ctor Parameters [CppParam { name: "receiverMono", ty: "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fieldId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo::RegisteredReceiverFieldInfo(::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*  receiverMono, int32_t  fieldId, int32_t  index) noexcept  {
this->receiverMono = receiverMono;
this->fieldId = fieldId;
this->index = index;
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo::RegisteredReceiverFieldInfo()   {
}
