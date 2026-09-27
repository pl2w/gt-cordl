#pragma once
// IWYU pragma private; include "LitJson/JsonType.hpp"
#include "LitJson/zzzz__JsonType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::LitJson::JsonType::JsonType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LitJson::JsonType::JsonType()   {
}
constexpr ::LitJson::JsonType  LitJson::JsonType::None{static_cast<int32_t>(0x0)};
constexpr ::LitJson::JsonType  LitJson::JsonType::Object{static_cast<int32_t>(0x1)};
constexpr ::LitJson::JsonType  LitJson::JsonType::Array{static_cast<int32_t>(0x2)};
constexpr ::LitJson::JsonType  LitJson::JsonType::String{static_cast<int32_t>(0x3)};
constexpr ::LitJson::JsonType  LitJson::JsonType::Int{static_cast<int32_t>(0x4)};
constexpr ::LitJson::JsonType  LitJson::JsonType::Long{static_cast<int32_t>(0x5)};
constexpr ::LitJson::JsonType  LitJson::JsonType::Double{static_cast<int32_t>(0x6)};
constexpr ::LitJson::JsonType  LitJson::JsonType::Boolean{static_cast<int32_t>(0x7)};
