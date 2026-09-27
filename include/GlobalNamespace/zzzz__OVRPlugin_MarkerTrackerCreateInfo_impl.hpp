#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_MarkerTrackerCreateInfo.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_MarkerTrackerCreateInfo_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_MarkerType_def.hpp"
// Ctor Parameters [CppParam { name: "MarkerTypeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MarkerTypes", ty: "::GlobalNamespace::OVRPlugin_MarkerType*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_MarkerTrackerCreateInfo::OVRPlugin_MarkerTrackerCreateInfo(uint32_t  MarkerTypeCount, ::GlobalNamespace::OVRPlugin_MarkerType*  MarkerTypes) noexcept  {
this->MarkerTypeCount = MarkerTypeCount;
this->MarkerTypes = MarkerTypes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_MarkerTrackerCreateInfo::OVRPlugin_MarkerTrackerCreateInfo()   {
}
