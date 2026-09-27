#pragma once
// IWYU pragma private; include "System/GenericUriParserOptions.hpp"
#include "System/zzzz__GenericUriParserOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::GenericUriParserOptions::GenericUriParserOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::GenericUriParserOptions::GenericUriParserOptions()   {
}
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::Default{static_cast<int32_t>(0x0)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::GenericAuthority{static_cast<int32_t>(0x1)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::AllowEmptyAuthority{static_cast<int32_t>(0x2)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::NoUserInfo{static_cast<int32_t>(0x4)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::NoPort{static_cast<int32_t>(0x8)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::NoQuery{static_cast<int32_t>(0x10)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::NoFragment{static_cast<int32_t>(0x20)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::DontConvertPathBackslashes{static_cast<int32_t>(0x40)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::DontCompressPath{static_cast<int32_t>(0x80)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::DontUnescapePathDotsAndSlashes{static_cast<int32_t>(0x100)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::Idn{static_cast<int32_t>(0x200)};
constexpr ::System::GenericUriParserOptions  System::GenericUriParserOptions::IriParsing{static_cast<int32_t>(0x400)};
