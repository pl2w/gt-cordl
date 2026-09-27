#pragma once
// IWYU pragma private; include "KID/Model/AgeCategory.hpp"
#include "KID/Model/zzzz__AgeCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::KID::Model::AgeCategory::AgeCategory(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::KID::Model::AgeCategory::AgeCategory()   {
}
constexpr ::KID::Model::AgeCategory  KID::Model::AgeCategory::DIGITALYOUTHORADULT{static_cast<int32_t>(0x1)};
constexpr ::KID::Model::AgeCategory  KID::Model::AgeCategory::ADULT{static_cast<int32_t>(0x2)};
