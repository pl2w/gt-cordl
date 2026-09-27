#pragma once
// IWYU pragma private; include "GorillaLocomotion/StiltID.hpp"
#include "GorillaLocomotion/zzzz__StiltID_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaLocomotion::StiltID::StiltID(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::StiltID::StiltID()   {
}
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Held_Left{static_cast<int32_t>(0x0)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Held_Right{static_cast<int32_t>(0x1)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Snapped_Left{static_cast<int32_t>(0x2)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Snapped_Right{static_cast<int32_t>(0x3)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Held_Left2{static_cast<int32_t>(0x4)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Held_Left3{static_cast<int32_t>(0x5)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Snapped_Left2{static_cast<int32_t>(0x6)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Snapped_Left3{static_cast<int32_t>(0x7)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Held_Right2{static_cast<int32_t>(0x8)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Held_Right3{static_cast<int32_t>(0x9)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Snapped_Right2{static_cast<int32_t>(0xa)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::Snapped_Right3{static_cast<int32_t>(0xb)};
constexpr ::GorillaLocomotion::StiltID  GorillaLocomotion::StiltID::_COUNT{static_cast<int32_t>(0xc)};
