#pragma once
// IWYU pragma private; include "POpusCodec/Enums/Bandwidth.hpp"
#include "POpusCodec/Enums/zzzz__Bandwidth_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::POpusCodec::Enums::Bandwidth::Bandwidth(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::POpusCodec::Enums::Bandwidth::Bandwidth()   {
}
constexpr ::POpusCodec::Enums::Bandwidth  POpusCodec::Enums::Bandwidth::Narrowband{static_cast<int32_t>(0x44d)};
constexpr ::POpusCodec::Enums::Bandwidth  POpusCodec::Enums::Bandwidth::Mediumband{static_cast<int32_t>(0x44e)};
constexpr ::POpusCodec::Enums::Bandwidth  POpusCodec::Enums::Bandwidth::Wideband{static_cast<int32_t>(0x44f)};
constexpr ::POpusCodec::Enums::Bandwidth  POpusCodec::Enums::Bandwidth::SuperWideband{static_cast<int32_t>(0x450)};
constexpr ::POpusCodec::Enums::Bandwidth  POpusCodec::Enums::Bandwidth::Fullband{static_cast<int32_t>(0x451)};
