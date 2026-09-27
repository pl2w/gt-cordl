#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRLoaderBase_LoaderState.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_LoaderState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRLoaderBase_LoaderState::OpenXRLoaderBase_LoaderState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRLoaderBase_LoaderState::OpenXRLoaderBase_LoaderState()   {
}
constexpr ::GlobalNamespace::OpenXRLoaderBase_LoaderState  GlobalNamespace::OpenXRLoaderBase_LoaderState::Uninitialized{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OpenXRLoaderBase_LoaderState  GlobalNamespace::OpenXRLoaderBase_LoaderState::InitializeAttempted{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OpenXRLoaderBase_LoaderState  GlobalNamespace::OpenXRLoaderBase_LoaderState::Initialized{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OpenXRLoaderBase_LoaderState  GlobalNamespace::OpenXRLoaderBase_LoaderState::StartAttempted{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OpenXRLoaderBase_LoaderState  GlobalNamespace::OpenXRLoaderBase_LoaderState::Started{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OpenXRLoaderBase_LoaderState  GlobalNamespace::OpenXRLoaderBase_LoaderState::StopAttempted{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::OpenXRLoaderBase_LoaderState  GlobalNamespace::OpenXRLoaderBase_LoaderState::Stopped{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::OpenXRLoaderBase_LoaderState  GlobalNamespace::OpenXRLoaderBase_LoaderState::DeinitializeAttempted{static_cast<int32_t>(0x7)};
