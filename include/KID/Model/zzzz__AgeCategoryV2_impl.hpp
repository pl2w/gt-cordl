#pragma once
// IWYU pragma private; include "KID/Model/AgeCategoryV2.hpp"
#include "KID/Model/zzzz__AgeCategoryV2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::KID::Model::AgeCategoryV2::AgeCategoryV2(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::KID::Model::AgeCategoryV2::AgeCategoryV2()   {
}
constexpr ::KID::Model::AgeCategoryV2  KID::Model::AgeCategoryV2::DigitalMinor{static_cast<int32_t>(0x1)};
constexpr ::KID::Model::AgeCategoryV2  KID::Model::AgeCategoryV2::DigitalYouth{static_cast<int32_t>(0x2)};
constexpr ::KID::Model::AgeCategoryV2  KID::Model::AgeCategoryV2::Adult{static_cast<int32_t>(0x3)};
