#pragma once
// IWYU pragma private; include "System/Net/ChainPolicyType.hpp"
#include "System/Net/zzzz__ChainPolicyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::ChainPolicyType::ChainPolicyType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::ChainPolicyType::ChainPolicyType()   {
}
constexpr ::System::Net::ChainPolicyType  System::Net::ChainPolicyType::Base{static_cast<int32_t>(0x1)};
constexpr ::System::Net::ChainPolicyType  System::Net::ChainPolicyType::Authenticode{static_cast<int32_t>(0x2)};
constexpr ::System::Net::ChainPolicyType  System::Net::ChainPolicyType::Authenticode_TS{static_cast<int32_t>(0x3)};
constexpr ::System::Net::ChainPolicyType  System::Net::ChainPolicyType::SSL{static_cast<int32_t>(0x4)};
constexpr ::System::Net::ChainPolicyType  System::Net::ChainPolicyType::BasicConstraints{static_cast<int32_t>(0x5)};
constexpr ::System::Net::ChainPolicyType  System::Net::ChainPolicyType::NtAuth{static_cast<int32_t>(0x6)};
