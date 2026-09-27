#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BoundaryGeometry.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoundaryType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoundaryGeometry_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
// Ctor Parameters [CppParam { name: "BoundaryType", ty: "::GlobalNamespace::OVRPlugin_BoundaryType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Points", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PointsCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_BoundaryGeometry::OVRPlugin_BoundaryGeometry(::GlobalNamespace::OVRPlugin_BoundaryType  BoundaryType, ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  Points, int32_t  PointsCount) noexcept  {
this->BoundaryType = BoundaryType;
this->Points = Points;
this->PointsCount = PointsCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_BoundaryGeometry::OVRPlugin_BoundaryGeometry()   {
}
