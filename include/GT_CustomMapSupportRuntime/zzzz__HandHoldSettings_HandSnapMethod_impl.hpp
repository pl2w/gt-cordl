#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/HandHoldSettings_HandSnapMethod.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__HandHoldSettings_HandSnapMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod::HandHoldSettings_HandSnapMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod::HandHoldSettings_HandSnapMethod()   {
}
constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod  GlobalNamespace::HandHoldSettings_HandSnapMethod::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod  GlobalNamespace::HandHoldSettings_HandSnapMethod::SnapToCenterPoint{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod  GlobalNamespace::HandHoldSettings_HandSnapMethod::SnapToNearestEdge{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod  GlobalNamespace::HandHoldSettings_HandSnapMethod::SnapToXAxisPoint{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod  GlobalNamespace::HandHoldSettings_HandSnapMethod::SnapToYAxisPoint{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod  GlobalNamespace::HandHoldSettings_HandSnapMethod::SnapToZAxisPoint{static_cast<int32_t>(0x5)};
