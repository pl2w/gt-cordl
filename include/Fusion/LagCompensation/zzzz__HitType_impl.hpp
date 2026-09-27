#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/HitType.hpp"
#include "Fusion/LagCompensation/zzzz__HitType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LagCompensation::HitType::HitType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::HitType::HitType()   {
}
constexpr ::Fusion::LagCompensation::HitType  Fusion::LagCompensation::HitType::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::LagCompensation::HitType  Fusion::LagCompensation::HitType::Hitbox{static_cast<int32_t>(0x1)};
constexpr ::Fusion::LagCompensation::HitType  Fusion::LagCompensation::HitType::PhysX{static_cast<int32_t>(0x2)};
constexpr ::Fusion::LagCompensation::HitType  Fusion::LagCompensation::HitType::Box2D{static_cast<int32_t>(0x3)};
