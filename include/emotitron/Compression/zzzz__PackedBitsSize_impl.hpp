#pragma once
// IWYU pragma private; include "emotitron/Compression/PackedBitsSize.hpp"
#include "emotitron/Compression/zzzz__PackedBitsSize_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::emotitron::Compression::PackedBitsSize::PackedBitsSize(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::emotitron::Compression::PackedBitsSize::PackedBitsSize()   {
}
constexpr ::emotitron::Compression::PackedBitsSize  emotitron::Compression::PackedBitsSize::UInt8{static_cast<int32_t>(0x4)};
constexpr ::emotitron::Compression::PackedBitsSize  emotitron::Compression::PackedBitsSize::UInt16{static_cast<int32_t>(0x5)};
constexpr ::emotitron::Compression::PackedBitsSize  emotitron::Compression::PackedBitsSize::UInt32{static_cast<int32_t>(0x6)};
constexpr ::emotitron::Compression::PackedBitsSize  emotitron::Compression::PackedBitsSize::UInt64{static_cast<int32_t>(0x7)};
