#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_DataFlags.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_DataFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags::ContinuousProperty_DataFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags::ContinuousProperty_DataFlags()   {
}
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags  GlobalNamespace::ContinuousProperty_DataFlags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags  GlobalNamespace::ContinuousProperty_DataFlags::HasCurve{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags  GlobalNamespace::ContinuousProperty_DataFlags::HasColor{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags  GlobalNamespace::ContinuousProperty_DataFlags::HasAxis{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags  GlobalNamespace::ContinuousProperty_DataFlags::HasInteger{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags  GlobalNamespace::ContinuousProperty_DataFlags::HasInterpolation{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags  GlobalNamespace::ContinuousProperty_DataFlags::IsShaderProperty{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags  GlobalNamespace::ContinuousProperty_DataFlags::IsAnimatorParameter{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags  GlobalNamespace::ContinuousProperty_DataFlags::HasThreshold{static_cast<int32_t>(0x80)};
