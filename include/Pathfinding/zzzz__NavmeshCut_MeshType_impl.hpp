#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshCut_MeshType.hpp"
#include "Pathfinding/zzzz__NavmeshCut_MeshType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NavmeshCut_MeshType::NavmeshCut_MeshType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NavmeshCut_MeshType::NavmeshCut_MeshType()   {
}
constexpr ::GlobalNamespace::NavmeshCut_MeshType  GlobalNamespace::NavmeshCut_MeshType::Rectangle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NavmeshCut_MeshType  GlobalNamespace::NavmeshCut_MeshType::Circle{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NavmeshCut_MeshType  GlobalNamespace::NavmeshCut_MeshType::CustomMesh{static_cast<int32_t>(0x2)};
