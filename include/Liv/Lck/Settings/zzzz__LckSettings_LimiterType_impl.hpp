#pragma once
// IWYU pragma private; include "Liv/Lck/Settings/LckSettings_LimiterType.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_LimiterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckSettings_LimiterType::LckSettings_LimiterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckSettings_LimiterType::LckSettings_LimiterType()   {
}
constexpr ::GlobalNamespace::LckSettings_LimiterType  GlobalNamespace::LckSettings_LimiterType::SoftClip{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckSettings_LimiterType  GlobalNamespace::LckSettings_LimiterType::None{static_cast<int32_t>(0x1)};
