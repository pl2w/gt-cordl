#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Step.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Step_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Step::OVRPlugin_Step(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Step::OVRPlugin_Step()   {
}
constexpr ::GlobalNamespace::OVRPlugin_Step  GlobalNamespace::OVRPlugin_Step::Render{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::OVRPlugin_Step  GlobalNamespace::OVRPlugin_Step::Physics{static_cast<int32_t>(0x0)};
