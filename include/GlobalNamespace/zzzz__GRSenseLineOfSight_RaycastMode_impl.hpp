#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSenseLineOfSight_RaycastMode.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_RaycastMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRSenseLineOfSight_RaycastMode::GRSenseLineOfSight_RaycastMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSenseLineOfSight_RaycastMode::GRSenseLineOfSight_RaycastMode()   {
}
constexpr ::GlobalNamespace::GRSenseLineOfSight_RaycastMode  GlobalNamespace::GRSenseLineOfSight_RaycastMode::Geometry{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRSenseLineOfSight_RaycastMode  GlobalNamespace::GRSenseLineOfSight_RaycastMode::Navmesh{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRSenseLineOfSight_RaycastMode  GlobalNamespace::GRSenseLineOfSight_RaycastMode::GeometryAndNavMesh{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRSenseLineOfSight_RaycastMode  GlobalNamespace::GRSenseLineOfSight_RaycastMode::GeometryOrNavMesh{static_cast<int32_t>(0x3)};
