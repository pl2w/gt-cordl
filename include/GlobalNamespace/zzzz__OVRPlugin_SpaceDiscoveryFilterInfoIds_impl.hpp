#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceDiscoveryFilterInfoIds.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterInfoIds_def.hpp"
#include "System/zzzz__Guid_def.hpp"
// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NumIds", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Ids", ty: "::System::Guid*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds::OVRPlugin_SpaceDiscoveryFilterInfoIds(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  Type, int32_t  NumIds, ::System::Guid*  Ids) noexcept  {
this->Type = Type;
this->NumIds = NumIds;
this->Ids = Ids;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds::OVRPlugin_SpaceDiscoveryFilterInfoIds()   {
}
