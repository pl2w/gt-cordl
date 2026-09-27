#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceDiscoveryInfo.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryInfo_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterInfoHeader_def.hpp"
// Ctor Parameters [CppParam { name: "NumFilters", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Filters", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoHeader*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryInfo::OVRPlugin_SpaceDiscoveryInfo(uint32_t  NumFilters, ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoHeader*  Filters) noexcept  {
this->NumFilters = NumFilters;
this->Filters = Filters;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryInfo::OVRPlugin_SpaceDiscoveryInfo()   {
}
