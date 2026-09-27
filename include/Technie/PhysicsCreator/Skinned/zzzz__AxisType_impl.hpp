#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/AxisType.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__AxisType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::Skinned::AxisType::AxisType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Skinned::AxisType::AxisType()   {
}
constexpr ::Technie::PhysicsCreator::Skinned::AxisType  Technie::PhysicsCreator::Skinned::AxisType::XAxis{static_cast<int32_t>(0x0)};
constexpr ::Technie::PhysicsCreator::Skinned::AxisType  Technie::PhysicsCreator::Skinned::AxisType::YAxis{static_cast<int32_t>(0x1)};
constexpr ::Technie::PhysicsCreator::Skinned::AxisType  Technie::PhysicsCreator::Skinned::AxisType::ZAxis{static_cast<int32_t>(0x2)};
constexpr ::Technie::PhysicsCreator::Skinned::AxisType  Technie::PhysicsCreator::Skinned::AxisType::Custom{static_cast<int32_t>(0x3)};
