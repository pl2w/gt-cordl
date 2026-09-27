#pragma once
// IWYU pragma private; include "GlobalNamespace/SystemProperties.hpp"
#include "GlobalNamespace/zzzz__SystemProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SystemProperties::SystemProperties(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SystemProperties::SystemProperties()   {
}
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::SwapInterval{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::HalfRefreshRate{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::GPULevel{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::CPULevel{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::Headlock{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::HeadlockTranslationX{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::HeadlockTranslationY{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::HeadlockTranslationZ{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::PhaseSyncAdditionalPadding{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::PhaseSyncDelayOverride{static_cast<int32_t>(0x200)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::PhaseSyncPredictionTime{static_cast<int32_t>(0x400)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::PhaseSync{static_cast<int32_t>(0x800)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::RefreshRate{static_cast<int32_t>(0x1000)};
constexpr ::GlobalNamespace::SystemProperties  GlobalNamespace::SystemProperties::PredictionTime{static_cast<int32_t>(0x2000)};
