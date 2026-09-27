#pragma once
// IWYU pragma private; include "System/Net/HttpProcessingResult.hpp"
#include "System/Net/zzzz__HttpProcessingResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::HttpProcessingResult::HttpProcessingResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::HttpProcessingResult::HttpProcessingResult()   {
}
constexpr ::System::Net::HttpProcessingResult  System::Net::HttpProcessingResult::Continue{static_cast<int32_t>(0x0)};
constexpr ::System::Net::HttpProcessingResult  System::Net::HttpProcessingResult::ReadWait{static_cast<int32_t>(0x1)};
constexpr ::System::Net::HttpProcessingResult  System::Net::HttpProcessingResult::WriteWait{static_cast<int32_t>(0x2)};
