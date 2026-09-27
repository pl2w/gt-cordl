#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteIntCompressType.hpp"
#include "emotitron/Compression/zzzz__LiteIntCompressType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::emotitron::Compression::LiteIntCompressType::LiteIntCompressType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::emotitron::Compression::LiteIntCompressType::LiteIntCompressType()   {
}
constexpr ::emotitron::Compression::LiteIntCompressType  emotitron::Compression::LiteIntCompressType::PackSigned{static_cast<int32_t>(0x0)};
constexpr ::emotitron::Compression::LiteIntCompressType  emotitron::Compression::LiteIntCompressType::PackUnsigned{static_cast<int32_t>(0x1)};
constexpr ::emotitron::Compression::LiteIntCompressType  emotitron::Compression::LiteIntCompressType::Range{static_cast<int32_t>(0x2)};
