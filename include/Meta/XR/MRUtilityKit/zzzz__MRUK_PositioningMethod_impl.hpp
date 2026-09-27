#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_PositioningMethod.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_PositioningMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK_PositioningMethod::MRUK_PositioningMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK_PositioningMethod::MRUK_PositioningMethod()   {
}
constexpr ::GlobalNamespace::MRUK_PositioningMethod  GlobalNamespace::MRUK_PositioningMethod::DEFAULT{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MRUK_PositioningMethod  GlobalNamespace::MRUK_PositioningMethod::CENTER{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUK_PositioningMethod  GlobalNamespace::MRUK_PositioningMethod::EDGE{static_cast<int32_t>(0x2)};
