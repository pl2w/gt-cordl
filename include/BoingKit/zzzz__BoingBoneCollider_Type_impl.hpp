#pragma once
// IWYU pragma private; include "BoingKit/BoingBoneCollider_Type.hpp"
#include "BoingKit/zzzz__BoingBoneCollider_Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoingBoneCollider_Type::BoingBoneCollider_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoingBoneCollider_Type::BoingBoneCollider_Type()   {
}
constexpr ::GlobalNamespace::BoingBoneCollider_Type  GlobalNamespace::BoingBoneCollider_Type::Sphere{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BoingBoneCollider_Type  GlobalNamespace::BoingBoneCollider_Type::Capsule{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BoingBoneCollider_Type  GlobalNamespace::BoingBoneCollider_Type::Box{static_cast<int32_t>(0x2)};
