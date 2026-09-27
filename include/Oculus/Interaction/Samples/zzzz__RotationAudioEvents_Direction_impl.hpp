#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/RotationAudioEvents_Direction.hpp"
#include "Oculus/Interaction/Samples/zzzz__RotationAudioEvents_Direction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RotationAudioEvents_Direction::RotationAudioEvents_Direction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotationAudioEvents_Direction::RotationAudioEvents_Direction()   {
}
constexpr ::GlobalNamespace::RotationAudioEvents_Direction  GlobalNamespace::RotationAudioEvents_Direction::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RotationAudioEvents_Direction  GlobalNamespace::RotationAudioEvents_Direction::Opening{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RotationAudioEvents_Direction  GlobalNamespace::RotationAudioEvents_Direction::Closing{static_cast<int32_t>(0x2)};
