#pragma once
// IWYU pragma private; include "Modio/Errors/GenericErrorCode.hpp"
#include "Modio/Errors/zzzz__GenericErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::GenericErrorCode::GenericErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::GenericErrorCode::GenericErrorCode()   {
}
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::OPERATION_CANCELLED{static_cast<int64_t>(0xffffffff80000032)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::OPERATION_ERROR{static_cast<int64_t>(0xffffffff80000033)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::COULD_NOT_CREATE_HANDLE{static_cast<int64_t>(0xffffffff80000034)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::NO_DATA_AVAILABLE{static_cast<int64_t>(0xffffffff80000035)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::END_OF_FILE{static_cast<int64_t>(0xffffffff80000036)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::QUEUE_CLOSED{static_cast<int64_t>(0xffffffff80000037)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::SDKALREADY_INITIALIZED{static_cast<int64_t>(0xffffffff80000038)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::SDKNOT_INITIALIZED{static_cast<int64_t>(0xffffffff80000039)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::INDEX_OUT_OF_RANGE{static_cast<int64_t>(0xffffffff8000003a)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::BAD_PARAMETER{static_cast<int64_t>(0xffffffff8000003b)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::SHUTTING_DOWN{static_cast<int64_t>(0xffffffff8000003c)};
constexpr ::Modio::Errors::GenericErrorCode  Modio::Errors::GenericErrorCode::MISSING_COMPONENTS{static_cast<int64_t>(0xffffffff8000003d)};
