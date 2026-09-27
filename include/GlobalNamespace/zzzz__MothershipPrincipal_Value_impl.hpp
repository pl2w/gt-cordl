#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipPrincipal_Value.hpp"
#include "GlobalNamespace/zzzz__MothershipPrincipal_Value_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MothershipPrincipal_Value::MothershipPrincipal_Value(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipPrincipal_Value::MothershipPrincipal_Value()   {
}
constexpr ::GlobalNamespace::MothershipPrincipal_Value  GlobalNamespace::MothershipPrincipal_Value::CLIENT{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MothershipPrincipal_Value  GlobalNamespace::MothershipPrincipal_Value::SERVER{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MothershipPrincipal_Value  GlobalNamespace::MothershipPrincipal_Value::AUTOMATION{static_cast<int32_t>(0x2)};
