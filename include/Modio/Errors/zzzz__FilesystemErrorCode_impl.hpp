#pragma once
// IWYU pragma private; include "Modio/Errors/FilesystemErrorCode.hpp"
#include "Modio/Errors/zzzz__FilesystemErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::FilesystemErrorCode::FilesystemErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::FilesystemErrorCode::FilesystemErrorCode()   {
}
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::UNABLE_TO_CREATE_FOLDER{static_cast<int64_t>(0xffffffff80000020)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::UNABLE_TO_CREATE_FILE{static_cast<int64_t>(0xffffffff80000021)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::INSUFFICIENT_SPACE{static_cast<int64_t>(0x4fda)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::NO_PERMISSION{static_cast<int64_t>(0xffffffff80000022)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::FILE_LOCKED{static_cast<int64_t>(0xffffffff80000023)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::FILE_NOT_FOUND{static_cast<int64_t>(0xffffffff80000024)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::DIRECTORY_NOT_EMPTY{static_cast<int64_t>(0xffffffff80000025)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::READ_ERROR{static_cast<int64_t>(0xffffffff80000026)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::WRITE_ERROR{static_cast<int64_t>(0xffffffff80000027)};
constexpr ::Modio::Errors::FilesystemErrorCode  Modio::Errors::FilesystemErrorCode::DIRECTORY_NOT_FOUND{static_cast<int64_t>(0xffffffff80000028)};
