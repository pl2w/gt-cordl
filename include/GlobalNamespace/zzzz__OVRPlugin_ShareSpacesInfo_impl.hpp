#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ShareSpacesInfo.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ShareSpacesRecipientType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ShareSpacesInfo_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ShareSpacesRecipientInfoBase_def.hpp"
// Ctor Parameters [CppParam { name: "RecipientType", ty: "::GlobalNamespace::OVRPlugin_ShareSpacesRecipientType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RecipientInfo", ty: "::GlobalNamespace::OVRPlugin_ShareSpacesRecipientInfoBase*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SpaceCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Spaces", ty: "uint64_t*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_ShareSpacesInfo::OVRPlugin_ShareSpacesInfo(::GlobalNamespace::OVRPlugin_ShareSpacesRecipientType  RecipientType, ::GlobalNamespace::OVRPlugin_ShareSpacesRecipientInfoBase*  RecipientInfo, uint32_t  SpaceCount, uint64_t*  Spaces) noexcept  {
this->RecipientType = RecipientType;
this->RecipientInfo = RecipientInfo;
this->SpaceCount = SpaceCount;
this->Spaces = Spaces;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_ShareSpacesInfo::OVRPlugin_ShareSpacesInfo()   {
}
