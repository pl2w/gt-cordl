#pragma once
// IWYU pragma private; include "LitJson/Condition.hpp"
#include "LitJson/zzzz__Condition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::LitJson::Condition::Condition(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LitJson::Condition::Condition()   {
}
constexpr ::LitJson::Condition  LitJson::Condition::InArray{static_cast<int32_t>(0x0)};
constexpr ::LitJson::Condition  LitJson::Condition::InObject{static_cast<int32_t>(0x1)};
constexpr ::LitJson::Condition  LitJson::Condition::NotAProperty{static_cast<int32_t>(0x2)};
constexpr ::LitJson::Condition  LitJson::Condition::Property{static_cast<int32_t>(0x3)};
constexpr ::LitJson::Condition  LitJson::Condition::Value{static_cast<int32_t>(0x4)};
