#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ActionTypes.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ActionTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes::OVRPlugin_ActionTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes::OVRPlugin_ActionTypes()   {
}
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes  GlobalNamespace::OVRPlugin_ActionTypes::Boolean{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes  GlobalNamespace::OVRPlugin_ActionTypes::Float{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes  GlobalNamespace::OVRPlugin_ActionTypes::Vector2{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes  GlobalNamespace::OVRPlugin_ActionTypes::Pose{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes  GlobalNamespace::OVRPlugin_ActionTypes::Vibration{static_cast<int32_t>(0x64)};
