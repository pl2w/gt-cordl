#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseManager_ImpulseEvent_DissipationModes.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DissipationModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes::ImpulseEvent_CinemachineImpulseManager_DissipationModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes::ImpulseEvent_CinemachineImpulseManager_DissipationModes()   {
}
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes::LinearDecay{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes::SoftDecay{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes::ExponentialDecay{static_cast<int32_t>(0x2)};
