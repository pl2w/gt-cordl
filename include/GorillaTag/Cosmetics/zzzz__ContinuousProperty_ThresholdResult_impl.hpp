#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_ThresholdResult.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_ThresholdResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ContinuousProperty_ThresholdResult::ContinuousProperty_ThresholdResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContinuousProperty_ThresholdResult::ContinuousProperty_ThresholdResult()   {
}
constexpr ::GlobalNamespace::ContinuousProperty_ThresholdResult  GlobalNamespace::ContinuousProperty_ThresholdResult::Null{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ContinuousProperty_ThresholdResult  GlobalNamespace::ContinuousProperty_ThresholdResult::RisingEdge{static_cast<int32_t>(0x100000)};
constexpr ::GlobalNamespace::ContinuousProperty_ThresholdResult  GlobalNamespace::ContinuousProperty_ThresholdResult::FallingEdge{static_cast<int32_t>(0x200000)};
constexpr ::GlobalNamespace::ContinuousProperty_ThresholdResult  GlobalNamespace::ContinuousProperty_ThresholdResult::Unchanged{static_cast<int32_t>(0x300000)};
