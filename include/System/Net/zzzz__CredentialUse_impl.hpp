#pragma once
// IWYU pragma private; include "System/Net/CredentialUse.hpp"
#include "System/Net/zzzz__CredentialUse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::CredentialUse::CredentialUse(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::CredentialUse::CredentialUse()   {
}
constexpr ::System::Net::CredentialUse  System::Net::CredentialUse::Inbound{static_cast<int32_t>(0x1)};
constexpr ::System::Net::CredentialUse  System::Net::CredentialUse::Outbound{static_cast<int32_t>(0x2)};
constexpr ::System::Net::CredentialUse  System::Net::CredentialUse::Both{static_cast<int32_t>(0x3)};
