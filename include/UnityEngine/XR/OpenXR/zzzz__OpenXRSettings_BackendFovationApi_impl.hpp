#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings_BackendFovationApi.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_BackendFovationApi_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRSettings_BackendFovationApi::OpenXRSettings_BackendFovationApi(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRSettings_BackendFovationApi::OpenXRSettings_BackendFovationApi()   {
}
constexpr ::GlobalNamespace::OpenXRSettings_BackendFovationApi  GlobalNamespace::OpenXRSettings_BackendFovationApi::Legacy{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::OpenXRSettings_BackendFovationApi  GlobalNamespace::OpenXRSettings_BackendFovationApi::SRPFoveation{static_cast<uint8_t>(0x1u)};
