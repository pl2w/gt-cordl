#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpatialAnchorCreateInfo.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingOrigin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpatialAnchorCreateInfo_def.hpp"
// Ctor Parameters [CppParam { name: "BaseTracking", ty: "::GlobalNamespace::OVRPlugin_TrackingOrigin", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PoseInSpace", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo::OVRPlugin_SpatialAnchorCreateInfo(::GlobalNamespace::OVRPlugin_TrackingOrigin  BaseTracking, ::GlobalNamespace::OVRPlugin_Posef  PoseInSpace, double_t  Time) noexcept  {
this->BaseTracking = BaseTracking;
this->PoseInSpace = PoseInSpace;
this->Time = Time;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo::OVRPlugin_SpatialAnchorCreateInfo()   {
}
