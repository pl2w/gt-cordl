#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/BoxFitMethod.hpp"
#include "Technie/PhysicsCreator/zzzz__BoxFitMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::BoxFitMethod::BoxFitMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::BoxFitMethod::BoxFitMethod()   {
}
constexpr ::Technie::PhysicsCreator::BoxFitMethod  Technie::PhysicsCreator::BoxFitMethod::AxisAligned{static_cast<int32_t>(0x0)};
constexpr ::Technie::PhysicsCreator::BoxFitMethod  Technie::PhysicsCreator::BoxFitMethod::MinimumVolume{static_cast<int32_t>(0x1)};
constexpr ::Technie::PhysicsCreator::BoxFitMethod  Technie::PhysicsCreator::BoxFitMethod::AlignFaces{static_cast<int32_t>(0x2)};
