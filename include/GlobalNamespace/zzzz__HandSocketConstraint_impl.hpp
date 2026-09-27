#pragma once
// IWYU pragma private; include "GlobalNamespace/HandSocketConstraint.hpp"
#include "GlobalNamespace/zzzz__HandSocketConstraint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandSocketConstraint::HandSocketConstraint(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandSocketConstraint::HandSocketConstraint()   {
}
constexpr ::GlobalNamespace::HandSocketConstraint  GlobalNamespace::HandSocketConstraint::None{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::HandSocketConstraint  GlobalNamespace::HandSocketConstraint::LeftHandOnly{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::HandSocketConstraint  GlobalNamespace::HandSocketConstraint::RightHandOnly{static_cast<uint32_t>(0x2u)};
