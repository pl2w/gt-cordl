#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/EncoderConsumer.hpp"
#include "Liv/Lck/Encoding/zzzz__EncoderConsumer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Encoding::EncoderConsumer::EncoderConsumer(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Encoding::EncoderConsumer::EncoderConsumer()   {
}
constexpr ::Liv::Lck::Encoding::EncoderConsumer  Liv::Lck::Encoding::EncoderConsumer::Recording{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::Encoding::EncoderConsumer  Liv::Lck::Encoding::EncoderConsumer::Streaming{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::Encoding::EncoderConsumer  Liv::Lck::Encoding::EncoderConsumer::Echo{static_cast<int32_t>(0x2)};
