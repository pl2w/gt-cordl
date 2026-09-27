#pragma once
// IWYU pragma private; include "UnityEngine/Playables/FrameData_Flags.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FrameData_Flags::FrameData_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FrameData_Flags::FrameData_Flags()   {
}
constexpr ::GlobalNamespace::FrameData_Flags  GlobalNamespace::FrameData_Flags::Evaluate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FrameData_Flags  GlobalNamespace::FrameData_Flags::SeekOccured{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::FrameData_Flags  GlobalNamespace::FrameData_Flags::Loop{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::FrameData_Flags  GlobalNamespace::FrameData_Flags::Hold{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::FrameData_Flags  GlobalNamespace::FrameData_Flags::EffectivePlayStateDelayed{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::FrameData_Flags  GlobalNamespace::FrameData_Flags::EffectivePlayStatePlaying{static_cast<int32_t>(0x20)};
