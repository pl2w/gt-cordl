#pragma once
// IWYU pragma private; include "Mono/Math/BigInteger_Sign.hpp"
#include "Mono/Math/zzzz__BigInteger_Sign_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BigInteger_Sign::BigInteger_Sign(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BigInteger_Sign::BigInteger_Sign()   {
}
constexpr ::GlobalNamespace::BigInteger_Sign  GlobalNamespace::BigInteger_Sign::Negative{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::BigInteger_Sign  GlobalNamespace::BigInteger_Sign::Zero{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BigInteger_Sign  GlobalNamespace::BigInteger_Sign::Positive{static_cast<int32_t>(0x1)};
