#pragma once
// IWYU pragma private; include "System/Net/DataParseStatus.hpp"
#include "System/Net/zzzz__DataParseStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::DataParseStatus::DataParseStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::DataParseStatus::DataParseStatus()   {
}
constexpr ::System::Net::DataParseStatus  System::Net::DataParseStatus::NeedMoreData{static_cast<int32_t>(0x0)};
constexpr ::System::Net::DataParseStatus  System::Net::DataParseStatus::ContinueParsing{static_cast<int32_t>(0x1)};
constexpr ::System::Net::DataParseStatus  System::Net::DataParseStatus::Done{static_cast<int32_t>(0x2)};
constexpr ::System::Net::DataParseStatus  System::Net::DataParseStatus::Invalid{static_cast<int32_t>(0x3)};
constexpr ::System::Net::DataParseStatus  System::Net::DataParseStatus::DataTooBig{static_cast<int32_t>(0x4)};
