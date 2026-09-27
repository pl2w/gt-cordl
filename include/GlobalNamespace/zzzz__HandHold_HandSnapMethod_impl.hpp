#pragma once
// IWYU pragma private; include "GlobalNamespace/HandHold_HandSnapMethod.hpp"
#include "GlobalNamespace/zzzz__HandHold_HandSnapMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandHold_HandSnapMethod::HandHold_HandSnapMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandHold_HandSnapMethod::HandHold_HandSnapMethod()   {
}
constexpr ::GlobalNamespace::HandHold_HandSnapMethod  GlobalNamespace::HandHold_HandSnapMethod::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HandHold_HandSnapMethod  GlobalNamespace::HandHold_HandSnapMethod::SnapToCenterPoint{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HandHold_HandSnapMethod  GlobalNamespace::HandHold_HandSnapMethod::SnapToNearestEdge{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HandHold_HandSnapMethod  GlobalNamespace::HandHold_HandSnapMethod::SnapToXAxisPoint{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::HandHold_HandSnapMethod  GlobalNamespace::HandHold_HandSnapMethod::SnapToYAxisPoint{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::HandHold_HandSnapMethod  GlobalNamespace::HandHold_HandSnapMethod::SnapToZAxisPoint{static_cast<int32_t>(0x5)};
