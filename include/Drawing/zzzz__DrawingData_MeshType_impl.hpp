#pragma once
// IWYU pragma private; include "Drawing/DrawingData_MeshType.hpp"
#include "Drawing/zzzz__DrawingData_MeshType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DrawingData_MeshType::DrawingData_MeshType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawingData_MeshType::DrawingData_MeshType()   {
}
constexpr ::GlobalNamespace::DrawingData_MeshType  GlobalNamespace::DrawingData_MeshType::Solid{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DrawingData_MeshType  GlobalNamespace::DrawingData_MeshType::Lines{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DrawingData_MeshType  GlobalNamespace::DrawingData_MeshType::Text{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::DrawingData_MeshType  GlobalNamespace::DrawingData_MeshType::Custom{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::DrawingData_MeshType  GlobalNamespace::DrawingData_MeshType::Pool{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::DrawingData_MeshType  GlobalNamespace::DrawingData_MeshType::BaseType{static_cast<int32_t>(0x7)};
