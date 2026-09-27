#pragma once
// IWYU pragma private; include "System/Net/CertUsage.hpp"
#include "System/Net/zzzz__CertUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::CertUsage::CertUsage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::CertUsage::CertUsage()   {
}
constexpr ::System::Net::CertUsage  System::Net::CertUsage::MatchTypeAnd{static_cast<int32_t>(0x0)};
constexpr ::System::Net::CertUsage  System::Net::CertUsage::MatchTypeOr{static_cast<int32_t>(0x1)};
