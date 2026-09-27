#pragma once
// IWYU pragma private; include "Fusion/Status.hpp"
#include "Fusion/zzzz__Status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Status::Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Status::Status()   {
}
constexpr ::Fusion::Status  Fusion::Status::Good{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Status  Fusion::Status::Ahead{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Status  Fusion::Status::Behind{static_cast<int32_t>(0x2)};
