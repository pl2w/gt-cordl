#pragma once
// IWYU pragma private; include "KID/Model/VerificationStatusV2.hpp"
#include "KID/Model/zzzz__VerificationStatusV2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::KID::Model::VerificationStatusV2::VerificationStatusV2(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::KID::Model::VerificationStatusV2::VerificationStatusV2()   {
}
constexpr ::KID::Model::VerificationStatusV2  KID::Model::VerificationStatusV2::PASS{static_cast<int32_t>(0x1)};
constexpr ::KID::Model::VerificationStatusV2  KID::Model::VerificationStatusV2::FAIL{static_cast<int32_t>(0x2)};
constexpr ::KID::Model::VerificationStatusV2  KID::Model::VerificationStatusV2::PENDING{static_cast<int32_t>(0x3)};
constexpr ::KID::Model::VerificationStatusV2  KID::Model::VerificationStatusV2::INPROGRESS{static_cast<int32_t>(0x4)};
