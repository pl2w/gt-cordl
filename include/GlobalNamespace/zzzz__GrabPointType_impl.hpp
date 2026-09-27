#pragma once
// IWYU pragma private; include "GlobalNamespace/GrabPointType.hpp"
#include "GlobalNamespace/zzzz__GrabPointType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GrabPointType::GrabPointType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GrabPointType::GrabPointType()   {
}
constexpr ::GlobalNamespace::GrabPointType  GlobalNamespace::GrabPointType::SinglePoint{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GrabPointType  GlobalNamespace::GrabPointType::Line{static_cast<int32_t>(0x1)};
