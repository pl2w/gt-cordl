#pragma once
// IWYU pragma private; include "UnityEngine/UI/InputField_LineType.hpp"
#include "UnityEngine/UI/zzzz__InputField_LineType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputField_LineType::InputField_LineType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputField_LineType::InputField_LineType()   {
}
constexpr ::GlobalNamespace::InputField_LineType  GlobalNamespace::InputField_LineType::SingleLine{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InputField_LineType  GlobalNamespace::InputField_LineType::MultiLineSubmit{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputField_LineType  GlobalNamespace::InputField_LineType::MultiLineNewline{static_cast<int32_t>(0x2)};
