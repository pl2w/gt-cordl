#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ShareSpacesGroupRecipientInfo.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ShareSpacesGroupRecipientInfo_def.hpp"
#include "System/zzzz__Guid_def.hpp"
// Ctor Parameters [CppParam { name: "GroupCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GroupUuids", ty: "::System::Guid*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_ShareSpacesGroupRecipientInfo::OVRPlugin_ShareSpacesGroupRecipientInfo(uint32_t  GroupCount, ::System::Guid*  GroupUuids) noexcept  {
this->GroupCount = GroupCount;
this->GroupUuids = GroupUuids;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_ShareSpacesGroupRecipientInfo::OVRPlugin_ShareSpacesGroupRecipientInfo()   {
}
