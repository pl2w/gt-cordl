#pragma once
// IWYU pragma private; include "KID/Model/VerificationStatus.hpp"
#include "KID/Model/zzzz__VerificationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::KID::Model::VerificationStatus::VerificationStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::KID::Model::VerificationStatus::VerificationStatus()   {
}
constexpr ::KID::Model::VerificationStatus  KID::Model::VerificationStatus::PASS{static_cast<int32_t>(0x1)};
constexpr ::KID::Model::VerificationStatus  KID::Model::VerificationStatus::FAIL{static_cast<int32_t>(0x2)};
constexpr ::KID::Model::VerificationStatus  KID::Model::VerificationStatus::PENDING{static_cast<int32_t>(0x3)};
constexpr ::KID::Model::VerificationStatus  KID::Model::VerificationStatus::INCONCLUSIVE{static_cast<int32_t>(0x4)};
constexpr ::KID::Model::VerificationStatus  KID::Model::VerificationStatus::TIMEDOUT{static_cast<int32_t>(0x5)};
