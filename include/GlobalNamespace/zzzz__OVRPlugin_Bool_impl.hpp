#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Bool.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Bool::OVRPlugin_Bool(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Bool::OVRPlugin_Bool()   {
}
constexpr ::GlobalNamespace::OVRPlugin_Bool  GlobalNamespace::OVRPlugin_Bool::False{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_Bool  GlobalNamespace::OVRPlugin_Bool::True{static_cast<int32_t>(0x1)};
