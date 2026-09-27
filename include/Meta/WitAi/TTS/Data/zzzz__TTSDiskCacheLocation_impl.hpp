#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSDiskCacheLocation.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation::TTSDiskCacheLocation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation::TTSDiskCacheLocation()   {
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation  Meta::WitAi::TTS::Data::TTSDiskCacheLocation::Stream{static_cast<int32_t>(0x0)};
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation  Meta::WitAi::TTS::Data::TTSDiskCacheLocation::Preload{static_cast<int32_t>(0x1)};
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation  Meta::WitAi::TTS::Data::TTSDiskCacheLocation::Persistent{static_cast<int32_t>(0x2)};
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation  Meta::WitAi::TTS::Data::TTSDiskCacheLocation::Temporary{static_cast<int32_t>(0x3)};
