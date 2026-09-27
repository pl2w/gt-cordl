#pragma once
// IWYU pragma private; include "KID/Model/VerificationMethod.hpp"
#include "KID/Model/zzzz__VerificationMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::KID::Model::VerificationMethod::VerificationMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::KID::Model::VerificationMethod::VerificationMethod()   {
}
constexpr ::KID::Model::VerificationMethod  KID::Model::VerificationMethod::AgeEstimation{static_cast<int32_t>(0x1)};
constexpr ::KID::Model::VerificationMethod  KID::Model::VerificationMethod::IdDocument{static_cast<int32_t>(0x2)};
constexpr ::KID::Model::VerificationMethod  KID::Model::VerificationMethod::CreditCard{static_cast<int32_t>(0x3)};
constexpr ::KID::Model::VerificationMethod  KID::Model::VerificationMethod::PersonalDetails{static_cast<int32_t>(0x4)};
constexpr ::KID::Model::VerificationMethod  KID::Model::VerificationMethod::Kws{static_cast<int32_t>(0x5)};
constexpr ::KID::Model::VerificationMethod  KID::Model::VerificationMethod::AgeAttestation{static_cast<int32_t>(0x6)};
