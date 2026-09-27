#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/ComparisonMethod.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ComparisonMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod::ComparisonMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod::ComparisonMethod()   {
}
constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod  Meta::WitAi::CallbackHandlers::ComparisonMethod::Equals{static_cast<int32_t>(0x0)};
constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod  Meta::WitAi::CallbackHandlers::ComparisonMethod::NotEquals{static_cast<int32_t>(0x1)};
constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod  Meta::WitAi::CallbackHandlers::ComparisonMethod::Greater{static_cast<int32_t>(0x2)};
constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod  Meta::WitAi::CallbackHandlers::ComparisonMethod::GreaterThanOrEqualTo{static_cast<int32_t>(0x3)};
constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod  Meta::WitAi::CallbackHandlers::ComparisonMethod::Less{static_cast<int32_t>(0x4)};
constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod  Meta::WitAi::CallbackHandlers::ComparisonMethod::LessThanOrEqualTo{static_cast<int32_t>(0x5)};
