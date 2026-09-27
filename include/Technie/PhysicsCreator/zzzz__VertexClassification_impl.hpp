#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/VertexClassification.hpp"
#include "Technie/PhysicsCreator/zzzz__VertexClassification_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::VertexClassification::VertexClassification(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::VertexClassification::VertexClassification()   {
}
constexpr ::Technie::PhysicsCreator::VertexClassification  Technie::PhysicsCreator::VertexClassification::Front{static_cast<int32_t>(0x1)};
constexpr ::Technie::PhysicsCreator::VertexClassification  Technie::PhysicsCreator::VertexClassification::Back{static_cast<int32_t>(0x2)};
constexpr ::Technie::PhysicsCreator::VertexClassification  Technie::PhysicsCreator::VertexClassification::OnPlane{static_cast<int32_t>(0x4)};
