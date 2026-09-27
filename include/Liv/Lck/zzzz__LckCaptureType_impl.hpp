#pragma once
// IWYU pragma private; include "Liv/Lck/LckCaptureType.hpp"
#include "Liv/Lck/zzzz__LckCaptureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::LckCaptureType::LckCaptureType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckCaptureType::LckCaptureType()   {
}
constexpr ::Liv::Lck::LckCaptureType  Liv::Lck::LckCaptureType::Recording{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::LckCaptureType  Liv::Lck::LckCaptureType::Streaming{static_cast<int32_t>(0x1)};
