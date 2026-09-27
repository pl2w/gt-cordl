#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDROutputUtils_Operation.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_Operation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HDROutputUtils_Operation::HDROutputUtils_Operation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HDROutputUtils_Operation::HDROutputUtils_Operation()   {
}
constexpr ::GlobalNamespace::HDROutputUtils_Operation  GlobalNamespace::HDROutputUtils_Operation::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HDROutputUtils_Operation  GlobalNamespace::HDROutputUtils_Operation::ColorConversion{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HDROutputUtils_Operation  GlobalNamespace::HDROutputUtils_Operation::ColorEncoding{static_cast<int32_t>(0x2)};
