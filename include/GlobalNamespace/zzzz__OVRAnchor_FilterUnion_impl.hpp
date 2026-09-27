#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_FilterUnion.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterInfoComponents_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterInfoIds_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FilterUnion_def.hpp"
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_Type()  {
return this->___Type;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType const& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_Type() const {
return this->___Type;
}
constexpr void GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_set_Type(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  value)  {
this->___Type = value;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_ComponentFilter()  {
return this->___ComponentFilter;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents const& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_ComponentFilter() const {
return this->___ComponentFilter;
}
constexpr void GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_set_ComponentFilter(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents  value)  {
this->___ComponentFilter = value;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_IdFilter()  {
return this->___IdFilter;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds const& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_IdFilter() const {
return this->___IdFilter;
}
constexpr void GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_set_IdFilter(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds  value)  {
this->___IdFilter = value;
}
// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComponentFilter", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IdFilter", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_FilterUnion::OVRAnchor_FilterUnion(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  Type, ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents  ComponentFilter, ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds  IdFilter) noexcept  {
this->Type = Type;
this->ComponentFilter = ComponentFilter;
this->IdFilter = IdFilter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_FilterUnion::OVRAnchor_FilterUnion()   {
}
