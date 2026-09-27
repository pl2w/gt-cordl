#pragma once
// IWYU pragma private; include "System/Net/ContextAttribute.hpp"
#include "System/Net/zzzz__ContextAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::ContextAttribute::ContextAttribute(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::ContextAttribute::ContextAttribute()   {
}
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::Sizes{static_cast<int32_t>(0x0)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::Names{static_cast<int32_t>(0x1)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::Lifespan{static_cast<int32_t>(0x2)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::DceInfo{static_cast<int32_t>(0x3)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::StreamSizes{static_cast<int32_t>(0x4)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::Authority{static_cast<int32_t>(0x6)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::PackageInfo{static_cast<int32_t>(0xa)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::NegotiationInfo{static_cast<int32_t>(0xc)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::UniqueBindings{static_cast<int32_t>(0x19)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::EndpointBindings{static_cast<int32_t>(0x1a)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::ClientSpecifiedSpn{static_cast<int32_t>(0x1b)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::RemoteCertificate{static_cast<int32_t>(0x53)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::LocalCertificate{static_cast<int32_t>(0x54)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::RootStore{static_cast<int32_t>(0x55)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::IssuerListInfoEx{static_cast<int32_t>(0x59)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::ConnectionInfo{static_cast<int32_t>(0x5a)};
constexpr ::System::Net::ContextAttribute  System::Net::ContextAttribute::UiInfo{static_cast<int32_t>(0x68)};
