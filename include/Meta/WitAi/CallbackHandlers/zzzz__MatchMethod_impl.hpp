#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/MatchMethod.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__MatchMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod::MatchMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod::MatchMethod()   {
}
constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod  Meta::WitAi::CallbackHandlers::MatchMethod::None{static_cast<int32_t>(0x0)};
constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod  Meta::WitAi::CallbackHandlers::MatchMethod::Text{static_cast<int32_t>(0x1)};
constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod  Meta::WitAi::CallbackHandlers::MatchMethod::RegularExpression{static_cast<int32_t>(0x2)};
constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod  Meta::WitAi::CallbackHandlers::MatchMethod::IntegerComparison{static_cast<int32_t>(0x3)};
constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod  Meta::WitAi::CallbackHandlers::MatchMethod::FloatComparison{static_cast<int32_t>(0x4)};
constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod  Meta::WitAi::CallbackHandlers::MatchMethod::DoubleComparison{static_cast<int32_t>(0x5)};
