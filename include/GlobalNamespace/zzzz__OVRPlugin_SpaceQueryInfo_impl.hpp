#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceQueryInfo.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceFilterInfoComponents_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceFilterInfoIds_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryActionType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryFilterType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceStorageLocation_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryInfo_def.hpp"
// Ctor Parameters [CppParam { name: "QueryType", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxQuerySpaces", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Timeout", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Location", ty: "::GlobalNamespace::OVRPlugin_SpaceStorageLocation", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ActionType", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryActionType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FilterType", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryFilterType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IdInfo", ty: "::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComponentsInfo", ty: "::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo::OVRPlugin_SpaceQueryInfo(::GlobalNamespace::OVRPlugin_SpaceQueryType  QueryType, int32_t  MaxQuerySpaces, double_t  Timeout, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  Location, ::GlobalNamespace::OVRPlugin_SpaceQueryActionType  ActionType, ::GlobalNamespace::OVRPlugin_SpaceQueryFilterType  FilterType, ::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds  IdInfo, ::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents  ComponentsInfo) noexcept  {
this->QueryType = QueryType;
this->MaxQuerySpaces = MaxQuerySpaces;
this->Timeout = Timeout;
this->Location = Location;
this->ActionType = ActionType;
this->FilterType = FilterType;
this->IdInfo = IdInfo;
this->ComponentsInfo = ComponentsInfo;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo::OVRPlugin_SpaceQueryInfo()   {
}
