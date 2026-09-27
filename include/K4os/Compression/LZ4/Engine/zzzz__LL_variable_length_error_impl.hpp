#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_variable_length_error.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_variable_length_error_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_variable_length_error::LL_variable_length_error(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_variable_length_error::LL_variable_length_error()   {
}
constexpr ::GlobalNamespace::LL_variable_length_error  GlobalNamespace::LL_variable_length_error::loop_error{static_cast<int32_t>(0xfffffffe)};
constexpr ::GlobalNamespace::LL_variable_length_error  GlobalNamespace::LL_variable_length_error::initial_error{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::LL_variable_length_error  GlobalNamespace::LL_variable_length_error::ok{static_cast<int32_t>(0x0)};
