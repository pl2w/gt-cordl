#pragma once
// IWYU pragma private; include "UniLabs/Time/TimeUnit.hpp"
#include "UniLabs/Time/zzzz__TimeUnit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UniLabs::Time::TimeUnit::TimeUnit(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UniLabs::Time::TimeUnit::TimeUnit()   {
}
constexpr ::UniLabs::Time::TimeUnit  UniLabs::Time::TimeUnit::None{static_cast<int32_t>(0x0)};
constexpr ::UniLabs::Time::TimeUnit  UniLabs::Time::TimeUnit::Milliseconds{static_cast<int32_t>(0x1)};
constexpr ::UniLabs::Time::TimeUnit  UniLabs::Time::TimeUnit::Seconds{static_cast<int32_t>(0x2)};
constexpr ::UniLabs::Time::TimeUnit  UniLabs::Time::TimeUnit::Minutes{static_cast<int32_t>(0x3)};
constexpr ::UniLabs::Time::TimeUnit  UniLabs::Time::TimeUnit::Hours{static_cast<int32_t>(0x4)};
constexpr ::UniLabs::Time::TimeUnit  UniLabs::Time::TimeUnit::Days{static_cast<int32_t>(0x5)};
