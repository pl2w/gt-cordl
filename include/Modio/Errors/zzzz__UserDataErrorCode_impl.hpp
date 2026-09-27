#pragma once
// IWYU pragma private; include "Modio/Errors/UserDataErrorCode.hpp"
#include "Modio/Errors/zzzz__UserDataErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::UserDataErrorCode::UserDataErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::UserDataErrorCode::UserDataErrorCode()   {
}
constexpr ::Modio::Errors::UserDataErrorCode  Modio::Errors::UserDataErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::UserDataErrorCode  Modio::Errors::UserDataErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::UserDataErrorCode  Modio::Errors::UserDataErrorCode::INVALID_USER{static_cast<int64_t>(0xffffffff8000002e)};
constexpr ::Modio::Errors::UserDataErrorCode  Modio::Errors::UserDataErrorCode::BLOB_MISSING{static_cast<int64_t>(0xffffffff8000002f)};
