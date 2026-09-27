#pragma once
// IWYU pragma private; include "System/Net/WebParseErrorCode.hpp"
#include "System/Net/zzzz__WebParseErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::WebParseErrorCode::WebParseErrorCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebParseErrorCode::WebParseErrorCode()   {
}
constexpr ::System::Net::WebParseErrorCode  System::Net::WebParseErrorCode::Generic{static_cast<int32_t>(0x0)};
constexpr ::System::Net::WebParseErrorCode  System::Net::WebParseErrorCode::InvalidHeaderName{static_cast<int32_t>(0x1)};
constexpr ::System::Net::WebParseErrorCode  System::Net::WebParseErrorCode::InvalidContentLength{static_cast<int32_t>(0x2)};
constexpr ::System::Net::WebParseErrorCode  System::Net::WebParseErrorCode::IncompleteHeaderLine{static_cast<int32_t>(0x3)};
constexpr ::System::Net::WebParseErrorCode  System::Net::WebParseErrorCode::CrLfError{static_cast<int32_t>(0x4)};
constexpr ::System::Net::WebParseErrorCode  System::Net::WebParseErrorCode::InvalidChunkFormat{static_cast<int32_t>(0x5)};
constexpr ::System::Net::WebParseErrorCode  System::Net::WebParseErrorCode::UnexpectedServerResponse{static_cast<int32_t>(0x6)};
