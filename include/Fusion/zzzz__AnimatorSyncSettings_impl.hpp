#pragma once
// IWYU pragma private; include "Fusion/AnimatorSyncSettings.hpp"
#include "Fusion/zzzz__AnimatorSyncSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::AnimatorSyncSettings::AnimatorSyncSettings(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::AnimatorSyncSettings::AnimatorSyncSettings()   {
}
constexpr ::Fusion::AnimatorSyncSettings  Fusion::AnimatorSyncSettings::ParameterInts{static_cast<int32_t>(0x1)};
constexpr ::Fusion::AnimatorSyncSettings  Fusion::AnimatorSyncSettings::ParameterFloats{static_cast<int32_t>(0x2)};
constexpr ::Fusion::AnimatorSyncSettings  Fusion::AnimatorSyncSettings::ParameterBools{static_cast<int32_t>(0x4)};
constexpr ::Fusion::AnimatorSyncSettings  Fusion::AnimatorSyncSettings::ParameterTriggers{static_cast<int32_t>(0x8)};
constexpr ::Fusion::AnimatorSyncSettings  Fusion::AnimatorSyncSettings::StateRoot{static_cast<int32_t>(0x10)};
constexpr ::Fusion::AnimatorSyncSettings  Fusion::AnimatorSyncSettings::StateLayers{static_cast<int32_t>(0x20)};
constexpr ::Fusion::AnimatorSyncSettings  Fusion::AnimatorSyncSettings::LayerWeights{static_cast<int32_t>(0x40)};
