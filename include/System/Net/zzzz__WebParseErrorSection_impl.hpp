#pragma once
// IWYU pragma private; include "System/Net/WebParseErrorSection.hpp"
#include "System/Net/zzzz__WebParseErrorSection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::WebParseErrorSection::WebParseErrorSection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebParseErrorSection::WebParseErrorSection()   {
}
constexpr ::System::Net::WebParseErrorSection  System::Net::WebParseErrorSection::Generic{static_cast<int32_t>(0x0)};
constexpr ::System::Net::WebParseErrorSection  System::Net::WebParseErrorSection::ResponseHeader{static_cast<int32_t>(0x1)};
constexpr ::System::Net::WebParseErrorSection  System::Net::WebParseErrorSection::ResponseStatusLine{static_cast<int32_t>(0x2)};
constexpr ::System::Net::WebParseErrorSection  System::Net::WebParseErrorSection::ResponseBody{static_cast<int32_t>(0x3)};
