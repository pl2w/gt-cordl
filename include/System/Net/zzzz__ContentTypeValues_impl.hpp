#pragma once
// IWYU pragma private; include "System/Net/ContentTypeValues.hpp"
#include "System/Net/zzzz__ContentTypeValues_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::ContentTypeValues::ContentTypeValues(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::ContentTypeValues::ContentTypeValues()   {
}
constexpr ::System::Net::ContentTypeValues  System::Net::ContentTypeValues::ChangeCipherSpec{static_cast<int32_t>(0x14)};
constexpr ::System::Net::ContentTypeValues  System::Net::ContentTypeValues::Alert{static_cast<int32_t>(0x15)};
constexpr ::System::Net::ContentTypeValues  System::Net::ContentTypeValues::HandShake{static_cast<int32_t>(0x16)};
constexpr ::System::Net::ContentTypeValues  System::Net::ContentTypeValues::AppData{static_cast<int32_t>(0x17)};
constexpr ::System::Net::ContentTypeValues  System::Net::ContentTypeValues::Unrecognized{static_cast<int32_t>(0xff)};
