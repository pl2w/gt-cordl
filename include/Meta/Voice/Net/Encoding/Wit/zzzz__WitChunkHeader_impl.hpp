#pragma once
// IWYU pragma private; include "Meta/Voice/Net/Encoding/Wit/WitChunkHeader.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunkHeader_def.hpp"
// Ctor Parameters [CppParam { name: "invalid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "jsonLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "binaryLength", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkHeader::WitChunkHeader(bool  invalid, int32_t  jsonLength, uint64_t  binaryLength) noexcept  {
this->invalid = invalid;
this->jsonLength = jsonLength;
this->binaryLength = binaryLength;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkHeader::WitChunkHeader()   {
}
