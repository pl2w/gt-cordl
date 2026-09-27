#pragma once
// IWYU pragma private; include "XNode/Node_TypeConstraint.hpp"
#include "XNode/zzzz__Node_TypeConstraint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Node_TypeConstraint::Node_TypeConstraint(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Node_TypeConstraint::Node_TypeConstraint()   {
}
constexpr ::GlobalNamespace::Node_TypeConstraint  GlobalNamespace::Node_TypeConstraint::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Node_TypeConstraint  GlobalNamespace::Node_TypeConstraint::Inherited{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Node_TypeConstraint  GlobalNamespace::Node_TypeConstraint::Strict{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Node_TypeConstraint  GlobalNamespace::Node_TypeConstraint::InheritedInverse{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Node_TypeConstraint  GlobalNamespace::Node_TypeConstraint::InheritedAny{static_cast<int32_t>(0x4)};
