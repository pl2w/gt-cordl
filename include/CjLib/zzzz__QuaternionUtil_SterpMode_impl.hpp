#pragma once
// IWYU pragma private; include "CjLib/QuaternionUtil_SterpMode.hpp"
#include "CjLib/zzzz__QuaternionUtil_SterpMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::QuaternionUtil_SterpMode::QuaternionUtil_SterpMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuaternionUtil_SterpMode::QuaternionUtil_SterpMode()   {
}
constexpr ::GlobalNamespace::QuaternionUtil_SterpMode  GlobalNamespace::QuaternionUtil_SterpMode::Nlerp{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::QuaternionUtil_SterpMode  GlobalNamespace::QuaternionUtil_SterpMode::Slerp{static_cast<int32_t>(0x1)};
