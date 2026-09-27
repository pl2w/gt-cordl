#pragma once
// IWYU pragma private; include "TMPro/TMP_InputField_LineType.hpp"
#include "TMPro/zzzz__TMP_InputField_LineType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TMP_InputField_LineType::TMP_InputField_LineType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMP_InputField_LineType::TMP_InputField_LineType()   {
}
constexpr ::GlobalNamespace::TMP_InputField_LineType  GlobalNamespace::TMP_InputField_LineType::SingleLine{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TMP_InputField_LineType  GlobalNamespace::TMP_InputField_LineType::MultiLineSubmit{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TMP_InputField_LineType  GlobalNamespace::TMP_InputField_LineType::MultiLineNewline{static_cast<int32_t>(0x2)};
