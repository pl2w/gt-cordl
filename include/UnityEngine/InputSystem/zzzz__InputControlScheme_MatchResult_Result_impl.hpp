#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_MatchResult_Result.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_Result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MatchResult_InputControlScheme_Result::MatchResult_InputControlScheme_Result(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MatchResult_InputControlScheme_Result::MatchResult_InputControlScheme_Result()   {
}
constexpr ::GlobalNamespace::MatchResult_InputControlScheme_Result  GlobalNamespace::MatchResult_InputControlScheme_Result::AllSatisfied{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MatchResult_InputControlScheme_Result  GlobalNamespace::MatchResult_InputControlScheme_Result::MissingRequired{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MatchResult_InputControlScheme_Result  GlobalNamespace::MatchResult_InputControlScheme_Result::MissingOptional{static_cast<int32_t>(0x2)};
