#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagForLighting_TimeOfDay.hpp"
#include "GlobalNamespace/zzzz__FlagForLighting_TimeOfDay_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay::FlagForLighting_TimeOfDay(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay::FlagForLighting_TimeOfDay()   {
}
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay  GlobalNamespace::FlagForLighting_TimeOfDay::Sunrise{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay  GlobalNamespace::FlagForLighting_TimeOfDay::TenAM{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay  GlobalNamespace::FlagForLighting_TimeOfDay::Noon{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay  GlobalNamespace::FlagForLighting_TimeOfDay::ThreePM{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay  GlobalNamespace::FlagForLighting_TimeOfDay::Sunset{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay  GlobalNamespace::FlagForLighting_TimeOfDay::Night{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay  GlobalNamespace::FlagForLighting_TimeOfDay::RainingDay{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay  GlobalNamespace::FlagForLighting_TimeOfDay::RainingNight{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay  GlobalNamespace::FlagForLighting_TimeOfDay::None{static_cast<int32_t>(0x8)};
