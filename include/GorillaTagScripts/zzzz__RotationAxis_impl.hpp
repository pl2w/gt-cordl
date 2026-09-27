#pragma once
// IWYU pragma private; include "GorillaTagScripts/RotationAxis.hpp"
#include "GorillaTagScripts/zzzz__RotationAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::RotationAxis::RotationAxis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::RotationAxis::RotationAxis()   {
}
constexpr ::GorillaTagScripts::RotationAxis  GorillaTagScripts::RotationAxis::X{static_cast<int32_t>(0x0)};
constexpr ::GorillaTagScripts::RotationAxis  GorillaTagScripts::RotationAxis::Y{static_cast<int32_t>(0x1)};
constexpr ::GorillaTagScripts::RotationAxis  GorillaTagScripts::RotationAxis::Z{static_cast<int32_t>(0x2)};
