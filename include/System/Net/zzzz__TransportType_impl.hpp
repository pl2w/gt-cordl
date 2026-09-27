#pragma once
// IWYU pragma private; include "System/Net/TransportType.hpp"
#include "System/Net/zzzz__TransportType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::TransportType::TransportType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::TransportType::TransportType()   {
}
constexpr ::System::Net::TransportType  System::Net::TransportType::Udp{static_cast<int32_t>(0x1)};
constexpr ::System::Net::TransportType  System::Net::TransportType::Connectionless{static_cast<int32_t>(0x1)};
constexpr ::System::Net::TransportType  System::Net::TransportType::Tcp{static_cast<int32_t>(0x2)};
constexpr ::System::Net::TransportType  System::Net::TransportType::ConnectionOriented{static_cast<int32_t>(0x2)};
constexpr ::System::Net::TransportType  System::Net::TransportType::All{static_cast<int32_t>(0x3)};
