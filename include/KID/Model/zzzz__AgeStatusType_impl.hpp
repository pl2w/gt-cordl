#pragma once
// IWYU pragma private; include "KID/Model/AgeStatusType.hpp"
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::KID::Model::AgeStatusType::AgeStatusType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::KID::Model::AgeStatusType::AgeStatusType()   {
}
constexpr ::KID::Model::AgeStatusType  KID::Model::AgeStatusType::DIGITALMINOR{static_cast<int32_t>(0x1)};
constexpr ::KID::Model::AgeStatusType  KID::Model::AgeStatusType::DIGITALYOUTH{static_cast<int32_t>(0x2)};
constexpr ::KID::Model::AgeStatusType  KID::Model::AgeStatusType::LEGALADULT{static_cast<int32_t>(0x3)};
