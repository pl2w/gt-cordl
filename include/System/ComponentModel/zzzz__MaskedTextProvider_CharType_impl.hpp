#pragma once
// IWYU pragma private; include "System/ComponentModel/MaskedTextProvider_CharType.hpp"
#include "System/ComponentModel/zzzz__MaskedTextProvider_CharType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MaskedTextProvider_CharType::MaskedTextProvider_CharType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaskedTextProvider_CharType::MaskedTextProvider_CharType()   {
}
constexpr ::GlobalNamespace::MaskedTextProvider_CharType  GlobalNamespace::MaskedTextProvider_CharType::EditOptional{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MaskedTextProvider_CharType  GlobalNamespace::MaskedTextProvider_CharType::EditRequired{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MaskedTextProvider_CharType  GlobalNamespace::MaskedTextProvider_CharType::Separator{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MaskedTextProvider_CharType  GlobalNamespace::MaskedTextProvider_CharType::Literal{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::MaskedTextProvider_CharType  GlobalNamespace::MaskedTextProvider_CharType::Modifier{static_cast<int32_t>(0x10)};
