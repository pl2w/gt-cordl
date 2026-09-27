#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBonusEntry_GRBonusType.hpp"
#include "GlobalNamespace/zzzz__GRBonusEntry_GRBonusType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRBonusEntry_GRBonusType::GRBonusEntry_GRBonusType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBonusEntry_GRBonusType::GRBonusEntry_GRBonusType()   {
}
constexpr ::GlobalNamespace::GRBonusEntry_GRBonusType  GlobalNamespace::GRBonusEntry_GRBonusType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRBonusEntry_GRBonusType  GlobalNamespace::GRBonusEntry_GRBonusType::Additive{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRBonusEntry_GRBonusType  GlobalNamespace::GRBonusEntry_GRBonusType::Multiplicative{static_cast<int32_t>(0x2)};
