#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/AudioEncoding_Endian.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_Endian_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AudioEncoding_Endian::AudioEncoding_Endian(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioEncoding_Endian::AudioEncoding_Endian()   {
}
constexpr ::GlobalNamespace::AudioEncoding_Endian  GlobalNamespace::AudioEncoding_Endian::Big{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioEncoding_Endian  GlobalNamespace::AudioEncoding_Endian::Little{static_cast<int32_t>(0x1)};
