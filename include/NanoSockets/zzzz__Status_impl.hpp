#pragma once
// IWYU pragma private; include "NanoSockets/Status.hpp"
#include "NanoSockets/zzzz__Status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::NanoSockets::Status::Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::NanoSockets::Status::Status()   {
}
constexpr ::NanoSockets::Status  NanoSockets::Status::Ok{static_cast<int32_t>(0x0)};
constexpr ::NanoSockets::Status  NanoSockets::Status::Error{static_cast<int32_t>(0xffffffff)};
