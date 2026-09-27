#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_SceneDataSource.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SceneDataSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK_SceneDataSource::MRUK_SceneDataSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK_SceneDataSource::MRUK_SceneDataSource()   {
}
constexpr ::GlobalNamespace::MRUK_SceneDataSource  GlobalNamespace::MRUK_SceneDataSource::Device{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MRUK_SceneDataSource  GlobalNamespace::MRUK_SceneDataSource::Prefab{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUK_SceneDataSource  GlobalNamespace::MRUK_SceneDataSource::DeviceWithPrefabFallback{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MRUK_SceneDataSource  GlobalNamespace::MRUK_SceneDataSource::Json{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MRUK_SceneDataSource  GlobalNamespace::MRUK_SceneDataSource::DeviceWithJsonFallback{static_cast<int32_t>(0x4)};
