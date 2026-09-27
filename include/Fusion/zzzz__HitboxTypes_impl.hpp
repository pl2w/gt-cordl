#pragma once
// IWYU pragma private; include "Fusion/HitboxTypes.hpp"
#include "Fusion/zzzz__HitboxTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::HitboxTypes::HitboxTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::HitboxTypes::HitboxTypes()   {
}
constexpr ::Fusion::HitboxTypes  Fusion::HitboxTypes::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::HitboxTypes  Fusion::HitboxTypes::Box{static_cast<int32_t>(0x1)};
constexpr ::Fusion::HitboxTypes  Fusion::HitboxTypes::Sphere{static_cast<int32_t>(0x2)};
constexpr ::Fusion::HitboxTypes  Fusion::HitboxTypes::Capsule{static_cast<int32_t>(0x3)};
