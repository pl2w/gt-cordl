#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/SurfaceMoverSettings_MoveType.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__SurfaceMoverSettings_MoveType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SurfaceMoverSettings_MoveType::SurfaceMoverSettings_MoveType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SurfaceMoverSettings_MoveType::SurfaceMoverSettings_MoveType()   {
}
constexpr ::GlobalNamespace::SurfaceMoverSettings_MoveType  GlobalNamespace::SurfaceMoverSettings_MoveType::Translation{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SurfaceMoverSettings_MoveType  GlobalNamespace::SurfaceMoverSettings_MoveType::Rotation{static_cast<int32_t>(0x1)};
