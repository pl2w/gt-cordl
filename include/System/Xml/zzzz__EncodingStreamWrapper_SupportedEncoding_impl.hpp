#pragma once
// IWYU pragma private; include "System/Xml/EncodingStreamWrapper_SupportedEncoding.hpp"
#include "System/Xml/zzzz__EncodingStreamWrapper_SupportedEncoding_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding::EncodingStreamWrapper_SupportedEncoding(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding::EncodingStreamWrapper_SupportedEncoding()   {
}
constexpr ::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding  GlobalNamespace::EncodingStreamWrapper_SupportedEncoding::UTF8{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding  GlobalNamespace::EncodingStreamWrapper_SupportedEncoding::UTF16LE{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding  GlobalNamespace::EncodingStreamWrapper_SupportedEncoding::UTF16BE{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding  GlobalNamespace::EncodingStreamWrapper_SupportedEncoding::None{static_cast<int32_t>(0x3)};
