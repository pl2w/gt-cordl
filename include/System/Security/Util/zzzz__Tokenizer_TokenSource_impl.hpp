#pragma once
// IWYU pragma private; include "System/Security/Util/Tokenizer_TokenSource.hpp"
#include "System/Security/Util/zzzz__Tokenizer_TokenSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Tokenizer_TokenSource::Tokenizer_TokenSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tokenizer_TokenSource::Tokenizer_TokenSource()   {
}
constexpr ::GlobalNamespace::Tokenizer_TokenSource  GlobalNamespace::Tokenizer_TokenSource::UnicodeByteArray{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Tokenizer_TokenSource  GlobalNamespace::Tokenizer_TokenSource::UTF8ByteArray{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Tokenizer_TokenSource  GlobalNamespace::Tokenizer_TokenSource::ASCIIByteArray{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Tokenizer_TokenSource  GlobalNamespace::Tokenizer_TokenSource::CharArray{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Tokenizer_TokenSource  GlobalNamespace::Tokenizer_TokenSource::String{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Tokenizer_TokenSource  GlobalNamespace::Tokenizer_TokenSource::NestedStrings{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::Tokenizer_TokenSource  GlobalNamespace::Tokenizer_TokenSource::Other{static_cast<int32_t>(0x6)};
