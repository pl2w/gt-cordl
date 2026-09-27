#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/GravityZoneRule.hpp"
#include "GorillaTag/Gravity/zzzz__GravityZoneRule_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::Gravity::GravityZoneRule::GravityZoneRule(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::GravityZoneRule::GravityZoneRule()   {
}
constexpr ::GorillaTag::Gravity::GravityZoneRule  GorillaTag::Gravity::GravityZoneRule::Newest{static_cast<int32_t>(0x0)};
constexpr ::GorillaTag::Gravity::GravityZoneRule  GorillaTag::Gravity::GravityZoneRule::Closest{static_cast<int32_t>(0x1)};
constexpr ::GorillaTag::Gravity::GravityZoneRule  GorillaTag::Gravity::GravityZoneRule::Additive{static_cast<int32_t>(0x2)};
