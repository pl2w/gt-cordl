#pragma once
// IWYU pragma private; include "System/Net/SecurityProtocol.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__SecurityProtocol_def.hpp"
// Ctor Parameters []
constexpr ::System::Net::SecurityProtocol::SecurityProtocol()   {
}
constexpr ::System::Security::Authentication::SslProtocols  System::Net::SecurityProtocol::DefaultSecurityProtocols{static_cast<int32_t>(0xfc0)};
constexpr ::System::Security::Authentication::SslProtocols  System::Net::SecurityProtocol::SystemDefaultSecurityProtocols{static_cast<int32_t>(0x0)};
