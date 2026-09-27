#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKListenerBinding_StoppedListeningReason.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKListenerBinding_StoppedListeningReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason::VoiceSDKListenerBinding_StoppedListeningReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason::VoiceSDKListenerBinding_StoppedListeningReason()   {
}
constexpr ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason  GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason::NoReasonProvided{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason  GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason::Inactivity{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason  GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason::Timeout{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason  GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason::Deactivation{static_cast<int32_t>(0x3)};
