#pragma once
// IWYU pragma private; include "System/Net/HttpWriteMode.hpp"
#include "System/Net/zzzz__HttpWriteMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::HttpWriteMode::HttpWriteMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::HttpWriteMode::HttpWriteMode()   {
}
constexpr ::System::Net::HttpWriteMode  System::Net::HttpWriteMode::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::Net::HttpWriteMode  System::Net::HttpWriteMode::ContentLength{static_cast<int32_t>(0x1)};
constexpr ::System::Net::HttpWriteMode  System::Net::HttpWriteMode::Chunked{static_cast<int32_t>(0x2)};
constexpr ::System::Net::HttpWriteMode  System::Net::HttpWriteMode::Buffer{static_cast<int32_t>(0x3)};
constexpr ::System::Net::HttpWriteMode  System::Net::HttpWriteMode::None{static_cast<int32_t>(0x4)};
