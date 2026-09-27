#pragma once
// IWYU pragma private; include "TMPro/TMP_InputField_CharacterValidation.hpp"
#include "TMPro/zzzz__TMP_InputField_CharacterValidation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation::TMP_InputField_CharacterValidation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation::TMP_InputField_CharacterValidation()   {
}
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation  GlobalNamespace::TMP_InputField_CharacterValidation::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation  GlobalNamespace::TMP_InputField_CharacterValidation::Digit{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation  GlobalNamespace::TMP_InputField_CharacterValidation::Integer{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation  GlobalNamespace::TMP_InputField_CharacterValidation::Decimal{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation  GlobalNamespace::TMP_InputField_CharacterValidation::Alphanumeric{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation  GlobalNamespace::TMP_InputField_CharacterValidation::Name{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation  GlobalNamespace::TMP_InputField_CharacterValidation::Regex{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation  GlobalNamespace::TMP_InputField_CharacterValidation::EmailAddress{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::TMP_InputField_CharacterValidation  GlobalNamespace::TMP_InputField_CharacterValidation::CustomValidator{static_cast<int32_t>(0x8)};
