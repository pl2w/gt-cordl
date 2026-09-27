#pragma once
// IWYU pragma private; include "POpusCodec/Enums/SignalHint.hpp"
#include "POpusCodec/Enums/zzzz__SignalHint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::POpusCodec::Enums::SignalHint::SignalHint(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::POpusCodec::Enums::SignalHint::SignalHint()   {
}
constexpr ::POpusCodec::Enums::SignalHint  POpusCodec::Enums::SignalHint::Auto{static_cast<int32_t>(0xfffffc18)};
constexpr ::POpusCodec::Enums::SignalHint  POpusCodec::Enums::SignalHint::Voice{static_cast<int32_t>(0xbb9)};
constexpr ::POpusCodec::Enums::SignalHint  POpusCodec::Enums::SignalHint::Music{static_cast<int32_t>(0xbba)};
