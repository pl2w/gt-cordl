#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_NumberBufferKind.hpp"
#include "Unity/Burst/zzzz__BurstString_NumberBufferKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BurstString_NumberBufferKind::BurstString_NumberBufferKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstString_NumberBufferKind::BurstString_NumberBufferKind()   {
}
constexpr ::GlobalNamespace::BurstString_NumberBufferKind  GlobalNamespace::BurstString_NumberBufferKind::Integer{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BurstString_NumberBufferKind  GlobalNamespace::BurstString_NumberBufferKind::Float{static_cast<int32_t>(0x1)};
