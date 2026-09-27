#pragma once
// IWYU pragma private; include "UnityEngine/UI/InputField_CharacterValidation.hpp"
#include "UnityEngine/UI/zzzz__InputField_CharacterValidation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputField_CharacterValidation::InputField_CharacterValidation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputField_CharacterValidation::InputField_CharacterValidation()   {
}
constexpr ::GlobalNamespace::InputField_CharacterValidation  GlobalNamespace::InputField_CharacterValidation::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InputField_CharacterValidation  GlobalNamespace::InputField_CharacterValidation::Integer{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputField_CharacterValidation  GlobalNamespace::InputField_CharacterValidation::Decimal{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputField_CharacterValidation  GlobalNamespace::InputField_CharacterValidation::Alphanumeric{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::InputField_CharacterValidation  GlobalNamespace::InputField_CharacterValidation::Name{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InputField_CharacterValidation  GlobalNamespace::InputField_CharacterValidation::EmailAddress{static_cast<int32_t>(0x5)};
