#pragma once
// IWYU pragma private; include "GlobalNamespace/GTZoneEventType.hpp"
#include "GlobalNamespace/zzzz__GTZoneEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTZoneEventType::GTZoneEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTZoneEventType::GTZoneEventType()   {
}
constexpr ::GlobalNamespace::GTZoneEventType  GlobalNamespace::GTZoneEventType::zone_enter{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTZoneEventType  GlobalNamespace::GTZoneEventType::zone_exit{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTZoneEventType  GlobalNamespace::GTZoneEventType::zone_stay{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTZoneEventType  GlobalNamespace::GTZoneEventType::none{static_cast<int32_t>(0x3)};
