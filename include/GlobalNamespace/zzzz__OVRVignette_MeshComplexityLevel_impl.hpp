#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVignette_MeshComplexityLevel.hpp"
#include "GlobalNamespace/zzzz__OVRVignette_MeshComplexityLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel::OVRVignette_MeshComplexityLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel::OVRVignette_MeshComplexityLevel()   {
}
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel  GlobalNamespace::OVRVignette_MeshComplexityLevel::VerySimple{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel  GlobalNamespace::OVRVignette_MeshComplexityLevel::Simple{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel  GlobalNamespace::OVRVignette_MeshComplexityLevel::Normal{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel  GlobalNamespace::OVRVignette_MeshComplexityLevel::Detailed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel  GlobalNamespace::OVRVignette_MeshComplexityLevel::VeryDetailed{static_cast<int32_t>(0x4)};
