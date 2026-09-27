#pragma once
// IWYU pragma private; include "System/Net/DefaultPorts.hpp"
#include "System/Net/zzzz__DefaultPorts_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::DefaultPorts::DefaultPorts(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::DefaultPorts::DefaultPorts()   {
}
constexpr ::System::Net::DefaultPorts  System::Net::DefaultPorts::DEFAULT_FTP_PORT{static_cast<int32_t>(0x15)};
constexpr ::System::Net::DefaultPorts  System::Net::DefaultPorts::DEFAULT_GOPHER_PORT{static_cast<int32_t>(0x46)};
constexpr ::System::Net::DefaultPorts  System::Net::DefaultPorts::DEFAULT_HTTP_PORT{static_cast<int32_t>(0x50)};
constexpr ::System::Net::DefaultPorts  System::Net::DefaultPorts::DEFAULT_HTTPS_PORT{static_cast<int32_t>(0x1bb)};
constexpr ::System::Net::DefaultPorts  System::Net::DefaultPorts::DEFAULT_NNTP_PORT{static_cast<int32_t>(0x77)};
constexpr ::System::Net::DefaultPorts  System::Net::DefaultPorts::DEFAULT_SMTP_PORT{static_cast<int32_t>(0x19)};
constexpr ::System::Net::DefaultPorts  System::Net::DefaultPorts::DEFAULT_TELNET_PORT{static_cast<int32_t>(0x17)};
