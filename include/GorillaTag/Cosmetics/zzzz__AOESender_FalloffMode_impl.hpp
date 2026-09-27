#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/AOESender_FalloffMode.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOESender_FalloffMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AOESender_FalloffMode::AOESender_FalloffMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AOESender_FalloffMode::AOESender_FalloffMode()   {
}
constexpr ::GlobalNamespace::AOESender_FalloffMode  GlobalNamespace::AOESender_FalloffMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AOESender_FalloffMode  GlobalNamespace::AOESender_FalloffMode::Linear{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AOESender_FalloffMode  GlobalNamespace::AOESender_FalloffMode::AnimationCurve{static_cast<int32_t>(0x2)};
