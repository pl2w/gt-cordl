#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/RotationDirection.hpp"
#include "GorillaTag/Gravity/zzzz__RotationDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::Gravity::RotationDirection::RotationDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::RotationDirection::RotationDirection()   {
}
constexpr ::GorillaTag::Gravity::RotationDirection  GorillaTag::Gravity::RotationDirection::None{static_cast<int32_t>(0x0)};
constexpr ::GorillaTag::Gravity::RotationDirection  GorillaTag::Gravity::RotationDirection::Forward{static_cast<int32_t>(0x1)};
constexpr ::GorillaTag::Gravity::RotationDirection  GorillaTag::Gravity::RotationDirection::Backward{static_cast<int32_t>(0x2)};
constexpr ::GorillaTag::Gravity::RotationDirection  GorillaTag::Gravity::RotationDirection::Left{static_cast<int32_t>(0x3)};
constexpr ::GorillaTag::Gravity::RotationDirection  GorillaTag::Gravity::RotationDirection::Right{static_cast<int32_t>(0x4)};
