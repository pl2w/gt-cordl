#pragma once
// IWYU pragma private; include "Modio/Errors/ModManagementErrorCode.hpp"
#include "Modio/Errors/zzzz__ModManagementErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::ModManagementErrorCode::ModManagementErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::ModManagementErrorCode::ModManagementErrorCode()   {
}
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::ALREADY_SUBSCRIBED{static_cast<int64_t>(0x3a9c)};
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::NO_PENDING_WORK{static_cast<int64_t>(0xffffffff8000004d)};
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::INSTALL_OR_UPDATE_CANCELLED{static_cast<int64_t>(0xffffffff8000004e)};
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::MOD_MANAGEMENT_DISABLED{static_cast<int64_t>(0xffffffff8000004f)};
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::MOD_MANAGEMENT_ALREADY_ENABLED{static_cast<int64_t>(0xffffffff80000050)};
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::UPLOAD_CANCELLED{static_cast<int64_t>(0xffffffff80000051)};
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::MOD_BEING_PROCESSED{static_cast<int64_t>(0xffffffff80000052)};
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::TEMP_MOD_SET_NOT_INITIALIZED{static_cast<int64_t>(0xffffffff80000053)};
constexpr ::Modio::Errors::ModManagementErrorCode  Modio::Errors::ModManagementErrorCode::INCOMPATIBLE_DEPENDENCIES{static_cast<int64_t>(0xffffffff80000054)};
