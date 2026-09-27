#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceLocationf.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceLocationFlags_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceLocationf_def.hpp"
// Ctor Parameters [CppParam { name: "locationFlags", ty: "::GlobalNamespace::OVRPlugin_SpaceLocationFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceLocationf::OVRPlugin_SpaceLocationf(::GlobalNamespace::OVRPlugin_SpaceLocationFlags  locationFlags, ::GlobalNamespace::OVRPlugin_Posef  pose) noexcept  {
this->locationFlags = locationFlags;
this->pose = pose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceLocationf::OVRPlugin_SpaceLocationf()   {
}
