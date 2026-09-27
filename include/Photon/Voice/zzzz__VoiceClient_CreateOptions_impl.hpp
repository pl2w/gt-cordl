#pragma once
// IWYU pragma private; include "Photon/Voice/VoiceClient_CreateOptions.hpp"
#include "Photon/Voice/zzzz__VoiceClient_CreateOptions_def.hpp"
inline void GlobalNamespace::VoiceClient_CreateOptions::setStaticF_Default(::GlobalNamespace::VoiceClient_CreateOptions  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::VoiceClient_CreateOptions, "Default", ::GlobalNamespace::VoiceClient_CreateOptions>(std::forward<::GlobalNamespace::VoiceClient_CreateOptions>(value));
}
inline ::GlobalNamespace::VoiceClient_CreateOptions GlobalNamespace::VoiceClient_CreateOptions::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::VoiceClient_CreateOptions, "Default", ::GlobalNamespace::VoiceClient_CreateOptions>();
}
// Ctor Parameters [CppParam { name: "VoiceIDMin", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VoiceIDMax", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoiceClient_CreateOptions::VoiceClient_CreateOptions(uint8_t  VoiceIDMin, uint8_t  VoiceIDMax) noexcept  {
this->VoiceIDMin = VoiceIDMin;
this->VoiceIDMax = VoiceIDMax;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceClient_CreateOptions::VoiceClient_CreateOptions()   {
}
