#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxis_RestrictionFlags.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RestrictionFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputAxis_RestrictionFlags::InputAxis_RestrictionFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputAxis_RestrictionFlags::InputAxis_RestrictionFlags()   {
}
constexpr ::GlobalNamespace::InputAxis_RestrictionFlags  GlobalNamespace::InputAxis_RestrictionFlags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InputAxis_RestrictionFlags  GlobalNamespace::InputAxis_RestrictionFlags::RangeIsDriven{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputAxis_RestrictionFlags  GlobalNamespace::InputAxis_RestrictionFlags::NoRecentering{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputAxis_RestrictionFlags  GlobalNamespace::InputAxis_RestrictionFlags::Momentary{static_cast<int32_t>(0x4)};
