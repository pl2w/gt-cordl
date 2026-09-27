#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/Dreidel_Variation.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_Variation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Dreidel_Variation::Dreidel_Variation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Dreidel_Variation::Dreidel_Variation()   {
}
constexpr ::GlobalNamespace::Dreidel_Variation  GlobalNamespace::Dreidel_Variation::Tumble{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Dreidel_Variation  GlobalNamespace::Dreidel_Variation::Smooth{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Dreidel_Variation  GlobalNamespace::Dreidel_Variation::Bounce{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Dreidel_Variation  GlobalNamespace::Dreidel_Variation::SlowTurn{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Dreidel_Variation  GlobalNamespace::Dreidel_Variation::FalseSlowTurn{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Dreidel_Variation  GlobalNamespace::Dreidel_Variation::Count{static_cast<int32_t>(0x5)};
