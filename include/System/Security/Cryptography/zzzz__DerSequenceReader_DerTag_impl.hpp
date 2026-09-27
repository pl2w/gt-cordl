#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DerSequenceReader_DerTag.hpp"
#include "System/Security/Cryptography/zzzz__DerSequenceReader_DerTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DerSequenceReader_DerTag::DerSequenceReader_DerTag(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DerSequenceReader_DerTag::DerSequenceReader_DerTag()   {
}
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::Boolean{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::Integer{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::BitString{static_cast<uint8_t>(0x3u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::OctetString{static_cast<uint8_t>(0x4u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::Null{static_cast<uint8_t>(0x5u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::ObjectIdentifier{static_cast<uint8_t>(0x6u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::UTF8String{static_cast<uint8_t>(0xcu)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::Sequence{static_cast<uint8_t>(0x10u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::Set{static_cast<uint8_t>(0x11u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::PrintableString{static_cast<uint8_t>(0x13u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::T61String{static_cast<uint8_t>(0x14u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::IA5String{static_cast<uint8_t>(0x16u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::UTCTime{static_cast<uint8_t>(0x17u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::GeneralizedTime{static_cast<uint8_t>(0x18u)};
constexpr ::GlobalNamespace::DerSequenceReader_DerTag  GlobalNamespace::DerSequenceReader_DerTag::BMPString{static_cast<uint8_t>(0x1eu)};
