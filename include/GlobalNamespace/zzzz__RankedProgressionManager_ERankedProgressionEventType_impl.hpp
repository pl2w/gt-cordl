#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedProgressionManager_ERankedProgressionEventType.hpp"
#include "GlobalNamespace/zzzz__RankedProgressionManager_ERankedProgressionEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType::RankedProgressionManager_ERankedProgressionEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType::RankedProgressionManager_ERankedProgressionEventType()   {
}
constexpr ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType  GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType  GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType::Progress{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType  GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType::Promotion{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType  GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType::Relegation{static_cast<int32_t>(0x3)};
