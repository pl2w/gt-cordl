#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariableResolver_Result.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_Result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StyleVariableResolver_Result::StyleVariableResolver_Result(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StyleVariableResolver_Result::StyleVariableResolver_Result()   {
}
constexpr ::GlobalNamespace::StyleVariableResolver_Result  GlobalNamespace::StyleVariableResolver_Result::Valid{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::StyleVariableResolver_Result  GlobalNamespace::StyleVariableResolver_Result::Invalid{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StyleVariableResolver_Result  GlobalNamespace::StyleVariableResolver_Result::NotFound{static_cast<int32_t>(0x2)};
