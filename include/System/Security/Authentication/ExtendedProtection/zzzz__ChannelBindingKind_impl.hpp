#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/ChannelBindingKind.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ChannelBindingKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBindingKind::ChannelBindingKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBindingKind::ChannelBindingKind()   {
}
constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBindingKind  System::Security::Authentication::ExtendedProtection::ChannelBindingKind::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBindingKind  System::Security::Authentication::ExtendedProtection::ChannelBindingKind::Unique{static_cast<int32_t>(0x19)};
constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBindingKind  System::Security::Authentication::ExtendedProtection::ChannelBindingKind::Endpoint{static_cast<int32_t>(0x1a)};
