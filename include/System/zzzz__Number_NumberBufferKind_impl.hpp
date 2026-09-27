#pragma once
// IWYU pragma private; include "System/Number_NumberBufferKind.hpp"
#include "System/zzzz__Number_NumberBufferKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Number_NumberBufferKind::Number_NumberBufferKind(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Number_NumberBufferKind::Number_NumberBufferKind()   {
}
constexpr ::GlobalNamespace::Number_NumberBufferKind  GlobalNamespace::Number_NumberBufferKind::Unknown{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::Number_NumberBufferKind  GlobalNamespace::Number_NumberBufferKind::Integer{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::Number_NumberBufferKind  GlobalNamespace::Number_NumberBufferKind::Decimal{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::Number_NumberBufferKind  GlobalNamespace::Number_NumberBufferKind::FloatingPoint{static_cast<uint8_t>(0x3u)};
