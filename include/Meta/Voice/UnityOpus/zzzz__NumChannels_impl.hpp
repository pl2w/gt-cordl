#pragma once
// IWYU pragma private; include "Meta/Voice/UnityOpus/NumChannels.hpp"
#include "Meta/Voice/UnityOpus/zzzz__NumChannels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::UnityOpus::NumChannels::NumChannels(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::UnityOpus::NumChannels::NumChannels()   {
}
constexpr ::Meta::Voice::UnityOpus::NumChannels  Meta::Voice::UnityOpus::NumChannels::Mono{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::UnityOpus::NumChannels  Meta::Voice::UnityOpus::NumChannels::Stereo{static_cast<int32_t>(0x2)};
