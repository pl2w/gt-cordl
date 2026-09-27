#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/SimpleCollator_ExtenderType.hpp"
#include "Mono/Globalization/Unicode/zzzz__SimpleCollator_ExtenderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimpleCollator_ExtenderType::SimpleCollator_ExtenderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleCollator_ExtenderType::SimpleCollator_ExtenderType()   {
}
constexpr ::GlobalNamespace::SimpleCollator_ExtenderType  GlobalNamespace::SimpleCollator_ExtenderType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SimpleCollator_ExtenderType  GlobalNamespace::SimpleCollator_ExtenderType::Simple{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SimpleCollator_ExtenderType  GlobalNamespace::SimpleCollator_ExtenderType::Voiced{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SimpleCollator_ExtenderType  GlobalNamespace::SimpleCollator_ExtenderType::Conditional{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SimpleCollator_ExtenderType  GlobalNamespace::SimpleCollator_ExtenderType::Buggy{static_cast<int32_t>(0x4)};
