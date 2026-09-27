#pragma once
// IWYU pragma private; include "GlobalNamespace/GTAgeStatusType.hpp"
#include "GlobalNamespace/zzzz__GTAgeStatusType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTAgeStatusType::GTAgeStatusType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTAgeStatusType::GTAgeStatusType()   {
}
constexpr ::GlobalNamespace::GTAgeStatusType  GlobalNamespace::GTAgeStatusType::PROHIBITED{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTAgeStatusType  GlobalNamespace::GTAgeStatusType::DIGITALMINOR{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTAgeStatusType  GlobalNamespace::GTAgeStatusType::DIGITALYOUTH{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTAgeStatusType  GlobalNamespace::GTAgeStatusType::LEGALADULT{static_cast<int32_t>(0x3)};
