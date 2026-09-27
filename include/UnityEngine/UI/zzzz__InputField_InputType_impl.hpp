#pragma once
// IWYU pragma private; include "UnityEngine/UI/InputField_InputType.hpp"
#include "UnityEngine/UI/zzzz__InputField_InputType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputField_InputType::InputField_InputType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputField_InputType::InputField_InputType()   {
}
constexpr ::GlobalNamespace::InputField_InputType  GlobalNamespace::InputField_InputType::Standard{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InputField_InputType  GlobalNamespace::InputField_InputType::AutoCorrect{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputField_InputType  GlobalNamespace::InputField_InputType::Password{static_cast<int32_t>(0x2)};
