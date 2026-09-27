#pragma once
// IWYU pragma private; include "Photon/Voice/AudioSampleType.hpp"
#include "Photon/Voice/zzzz__AudioSampleType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::AudioSampleType::AudioSampleType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioSampleType::AudioSampleType()   {
}
constexpr ::Photon::Voice::AudioSampleType  Photon::Voice::AudioSampleType::Source{static_cast<int32_t>(0x0)};
constexpr ::Photon::Voice::AudioSampleType  Photon::Voice::AudioSampleType::Short{static_cast<int32_t>(0x1)};
constexpr ::Photon::Voice::AudioSampleType  Photon::Voice::AudioSampleType::Float{static_cast<int32_t>(0x2)};
