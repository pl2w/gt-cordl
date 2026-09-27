#pragma once
// IWYU pragma private; include "Modio/Errors/ArchiveErrorCode.hpp"
#include "Modio/Errors/zzzz__ArchiveErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::ArchiveErrorCode::ArchiveErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::ArchiveErrorCode::ArchiveErrorCode()   {
}
constexpr ::Modio::Errors::ArchiveErrorCode  Modio::Errors::ArchiveErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::ArchiveErrorCode  Modio::Errors::ArchiveErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::ArchiveErrorCode  Modio::Errors::ArchiveErrorCode::INVALID_HEADER{static_cast<int64_t>(0xffffffff80000030)};
constexpr ::Modio::Errors::ArchiveErrorCode  Modio::Errors::ArchiveErrorCode::UNSUPPORTED_COMPRESSION{static_cast<int64_t>(0xffffffff80000031)};
