#pragma once
// IWYU pragma private; include "emotitron/Compression/PackedBytesSize.hpp"
#include "emotitron/Compression/zzzz__PackedBytesSize_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::emotitron::Compression::PackedBytesSize::PackedBytesSize(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::emotitron::Compression::PackedBytesSize::PackedBytesSize()   {
}
constexpr ::emotitron::Compression::PackedBytesSize  emotitron::Compression::PackedBytesSize::UInt8{static_cast<int32_t>(0x1)};
constexpr ::emotitron::Compression::PackedBytesSize  emotitron::Compression::PackedBytesSize::UInt16{static_cast<int32_t>(0x2)};
constexpr ::emotitron::Compression::PackedBytesSize  emotitron::Compression::PackedBytesSize::UInt32{static_cast<int32_t>(0x3)};
constexpr ::emotitron::Compression::PackedBytesSize  emotitron::Compression::PackedBytesSize::UInt64{static_cast<int32_t>(0x4)};
