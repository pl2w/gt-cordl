#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/RuntimeSettings_DistanceOption.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__RuntimeSettings_DistanceOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RuntimeSettings_DistanceOption::RuntimeSettings_DistanceOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeSettings_DistanceOption::RuntimeSettings_DistanceOption()   {
}
constexpr ::GlobalNamespace::RuntimeSettings_DistanceOption  GlobalNamespace::RuntimeSettings_DistanceOption::Close{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RuntimeSettings_DistanceOption  GlobalNamespace::RuntimeSettings_DistanceOption::Default{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RuntimeSettings_DistanceOption  GlobalNamespace::RuntimeSettings_DistanceOption::Far{static_cast<int32_t>(0x2)};
