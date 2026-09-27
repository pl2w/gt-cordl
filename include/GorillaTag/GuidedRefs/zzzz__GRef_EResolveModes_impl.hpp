#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GRef_EResolveModes.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GRef_EResolveModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRef_EResolveModes::GRef_EResolveModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRef_EResolveModes::GRef_EResolveModes()   {
}
constexpr ::GlobalNamespace::GRef_EResolveModes  GlobalNamespace::GRef_EResolveModes::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRef_EResolveModes  GlobalNamespace::GRef_EResolveModes::Runtime{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRef_EResolveModes  GlobalNamespace::GRef_EResolveModes::SceneProcessing{static_cast<int32_t>(0x2)};
