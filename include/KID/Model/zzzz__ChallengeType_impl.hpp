#pragma once
// IWYU pragma private; include "KID/Model/ChallengeType.hpp"
#include "KID/Model/zzzz__ChallengeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::KID::Model::ChallengeType::ChallengeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::KID::Model::ChallengeType::ChallengeType()   {
}
constexpr ::KID::Model::ChallengeType  KID::Model::ChallengeType::PARENTALCONSENT{static_cast<int32_t>(0x1)};
constexpr ::KID::Model::ChallengeType  KID::Model::ChallengeType::SESSIONUPGRADE{static_cast<int32_t>(0x2)};
