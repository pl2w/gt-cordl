#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputDevice_DeviceFlags.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_DeviceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputDevice_DeviceFlags::InputDevice_DeviceFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputDevice_DeviceFlags::InputDevice_DeviceFlags()   {
}
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::UpdateBeforeRender{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::HasStateCallbacks{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::HasControlsWithDefaultState{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::HasDontResetControls{static_cast<int32_t>(0x400)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::HasEventMerger{static_cast<int32_t>(0x2000)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::HasEventPreProcessor{static_cast<int32_t>(0x4000)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::Remote{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::Native{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::DisabledInFrontend{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::DisabledInRuntime{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::DisabledWhileInBackground{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::DisabledStateHasBeenQueriedFromRuntime{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::CanRunInBackground{static_cast<int32_t>(0x800)};
constexpr ::GlobalNamespace::InputDevice_DeviceFlags  GlobalNamespace::InputDevice_DeviceFlags::CanRunInBackgroundHasBeenQueried{static_cast<int32_t>(0x1000)};
