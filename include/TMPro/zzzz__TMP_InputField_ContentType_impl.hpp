#pragma once
// IWYU pragma private; include "TMPro/TMP_InputField_ContentType.hpp"
#include "TMPro/zzzz__TMP_InputField_ContentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TMP_InputField_ContentType::TMP_InputField_ContentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMP_InputField_ContentType::TMP_InputField_ContentType()   {
}
constexpr ::GlobalNamespace::TMP_InputField_ContentType  GlobalNamespace::TMP_InputField_ContentType::Standard{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TMP_InputField_ContentType  GlobalNamespace::TMP_InputField_ContentType::Autocorrected{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TMP_InputField_ContentType  GlobalNamespace::TMP_InputField_ContentType::IntegerNumber{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TMP_InputField_ContentType  GlobalNamespace::TMP_InputField_ContentType::DecimalNumber{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::TMP_InputField_ContentType  GlobalNamespace::TMP_InputField_ContentType::Alphanumeric{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::TMP_InputField_ContentType  GlobalNamespace::TMP_InputField_ContentType::Name{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::TMP_InputField_ContentType  GlobalNamespace::TMP_InputField_ContentType::EmailAddress{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::TMP_InputField_ContentType  GlobalNamespace::TMP_InputField_ContentType::Password{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::TMP_InputField_ContentType  GlobalNamespace::TMP_InputField_ContentType::Pin{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::TMP_InputField_ContentType  GlobalNamespace::TMP_InputField_ContentType::Custom{static_cast<int32_t>(0x9)};
