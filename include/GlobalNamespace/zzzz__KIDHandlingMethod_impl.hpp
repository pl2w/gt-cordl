#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDHandlingMethod.hpp"
#include "GlobalNamespace/zzzz__KIDHandlingMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KIDHandlingMethod::KIDHandlingMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDHandlingMethod::KIDHandlingMethod()   {
}
constexpr ::GlobalNamespace::KIDHandlingMethod  GlobalNamespace::KIDHandlingMethod::DEFAULT{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::KIDHandlingMethod  GlobalNamespace::KIDHandlingMethod::SKIP{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::KIDHandlingMethod  GlobalNamespace::KIDHandlingMethod::FORCE{static_cast<int32_t>(0x2)};
