#pragma once
// IWYU pragma private; include "GlobalNamespace/KidAgeConfirmationResult.hpp"
#include "GlobalNamespace/zzzz__KidAgeConfirmationResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KidAgeConfirmationResult::KidAgeConfirmationResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KidAgeConfirmationResult::KidAgeConfirmationResult()   {
}
constexpr ::GlobalNamespace::KidAgeConfirmationResult  GlobalNamespace::KidAgeConfirmationResult::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::KidAgeConfirmationResult  GlobalNamespace::KidAgeConfirmationResult::Confirm{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::KidAgeConfirmationResult  GlobalNamespace::KidAgeConfirmationResult::Back{static_cast<int32_t>(0x2)};
