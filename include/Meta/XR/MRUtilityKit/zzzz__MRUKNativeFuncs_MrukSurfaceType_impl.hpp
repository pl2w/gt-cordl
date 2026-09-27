#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukSurfaceType.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukSurfaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType::MRUKNativeFuncs_MrukSurfaceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType::MRUKNativeFuncs_MrukSurfaceType()   {
}
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType  GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType  GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType::Plane{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType  GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType::Volume{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType  GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType::Mesh{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType  GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType::All{static_cast<int32_t>(0x7)};
