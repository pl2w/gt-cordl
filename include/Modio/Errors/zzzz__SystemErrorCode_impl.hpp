#pragma once
// IWYU pragma private; include "Modio/Errors/SystemErrorCode.hpp"
#include "Modio/Errors/zzzz__SystemErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::SystemErrorCode::SystemErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::SystemErrorCode::SystemErrorCode()   {
}
constexpr ::Modio::Errors::SystemErrorCode  Modio::Errors::SystemErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::SystemErrorCode  Modio::Errors::SystemErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::SystemErrorCode  Modio::Errors::SystemErrorCode::UNKNOWN_SYSTEM_ERROR{static_cast<int64_t>(0xffffffff8000003e)};
