#pragma once
// IWYU pragma private; include "System/Net/NetworkAccess.hpp"
#include "System/Net/zzzz__NetworkAccess_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::NetworkAccess::NetworkAccess(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkAccess::NetworkAccess()   {
}
constexpr ::System::Net::NetworkAccess  System::Net::NetworkAccess::Accept{static_cast<int32_t>(0x80)};
constexpr ::System::Net::NetworkAccess  System::Net::NetworkAccess::Connect{static_cast<int32_t>(0x40)};
