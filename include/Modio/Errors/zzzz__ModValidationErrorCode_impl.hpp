#pragma once
// IWYU pragma private; include "Modio/Errors/ModValidationErrorCode.hpp"
#include "Modio/Errors/zzzz__ModValidationErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::ModValidationErrorCode::ModValidationErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::ModValidationErrorCode::ModValidationErrorCode()   {
}
constexpr ::Modio::Errors::ModValidationErrorCode  Modio::Errors::ModValidationErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::ModValidationErrorCode  Modio::Errors::ModValidationErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::ModValidationErrorCode  Modio::Errors::ModValidationErrorCode::NO_FILES_FOUND_FOR_MOD{static_cast<int64_t>(0xffffffff80000055)};
constexpr ::Modio::Errors::ModValidationErrorCode  Modio::Errors::ModValidationErrorCode::MOD_DIRECTORY_NOT_FOUND{static_cast<int64_t>(0xffffffff80000056)};
constexpr ::Modio::Errors::ModValidationErrorCode  Modio::Errors::ModValidationErrorCode::MD5DOES_NOT_MATCH{static_cast<int64_t>(0xffffffff80000057)};
