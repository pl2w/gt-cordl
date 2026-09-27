#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_TrackableState.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_TrackableState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK_TrackableState::MRUK_TrackableState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK_TrackableState::MRUK_TrackableState()   {
}
constexpr ::GlobalNamespace::MRUK_TrackableState  GlobalNamespace::MRUK_TrackableState::PendingLocalization{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MRUK_TrackableState  GlobalNamespace::MRUK_TrackableState::InstanceDestroyed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUK_TrackableState  GlobalNamespace::MRUK_TrackableState::Instantiated{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MRUK_TrackableState  GlobalNamespace::MRUK_TrackableState::LocalizationFailed{static_cast<int32_t>(0x3)};
