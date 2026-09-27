#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/Parser_ParsingError.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Parser_ParsingError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Parser_ParsingError::Parser_ParsingError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Parser_ParsingError::Parser_ParsingError()   {
}
constexpr ::GlobalNamespace::Parser_ParsingError  GlobalNamespace::Parser_ParsingError::TooManyClosingBraces{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Parser_ParsingError  GlobalNamespace::Parser_ParsingError::TrailingOperatorsInSelector{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Parser_ParsingError  GlobalNamespace::Parser_ParsingError::InvalidCharactersInSelector{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Parser_ParsingError  GlobalNamespace::Parser_ParsingError::MissingClosingBrace{static_cast<int32_t>(0x4)};
