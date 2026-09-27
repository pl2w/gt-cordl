#pragma once
// IWYU pragma private; include "GlobalNamespace/AdvancedItemState_PointType.hpp"
#include "GlobalNamespace/zzzz__AdvancedItemState_PointType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AdvancedItemState_PointType::AdvancedItemState_PointType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AdvancedItemState_PointType::AdvancedItemState_PointType()   {
}
constexpr ::GlobalNamespace::AdvancedItemState_PointType  GlobalNamespace::AdvancedItemState_PointType::Standard{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AdvancedItemState_PointType  GlobalNamespace::AdvancedItemState_PointType::DistanceBased{static_cast<int32_t>(0x1)};
