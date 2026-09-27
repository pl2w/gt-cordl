#pragma once
// IWYU pragma private; include "System/Net/Endianness.hpp"
#include "System/Net/zzzz__Endianness_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::Endianness::Endianness(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Endianness::Endianness()   {
}
constexpr ::System::Net::Endianness  System::Net::Endianness::Network{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Endianness  System::Net::Endianness::Native{static_cast<int32_t>(0x10)};
