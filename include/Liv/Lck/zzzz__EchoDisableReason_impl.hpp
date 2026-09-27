#pragma once
// IWYU pragma private; include "Liv/Lck/EchoDisableReason.hpp"
#include "Liv/Lck/zzzz__EchoDisableReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::EchoDisableReason::EchoDisableReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::EchoDisableReason::EchoDisableReason()   {
}
constexpr ::Liv::Lck::EchoDisableReason  Liv::Lck::EchoDisableReason::User{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::EchoDisableReason  Liv::Lck::EchoDisableReason::LowStorage{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::EchoDisableReason  Liv::Lck::EchoDisableReason::Error{static_cast<int32_t>(0x2)};
