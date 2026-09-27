#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ScaleAudioEvents_Direction.hpp"
#include "Oculus/Interaction/Samples/zzzz__ScaleAudioEvents_Direction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScaleAudioEvents_Direction::ScaleAudioEvents_Direction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScaleAudioEvents_Direction::ScaleAudioEvents_Direction()   {
}
constexpr ::GlobalNamespace::ScaleAudioEvents_Direction  GlobalNamespace::ScaleAudioEvents_Direction::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ScaleAudioEvents_Direction  GlobalNamespace::ScaleAudioEvents_Direction::ScaleUp{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ScaleAudioEvents_Direction  GlobalNamespace::ScaleAudioEvents_Direction::ScaleDown{static_cast<int32_t>(0x2)};
