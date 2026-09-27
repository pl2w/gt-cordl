#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser_JsonValueType.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonValueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JsonParser_JsonValueType::JsonParser_JsonValueType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JsonParser_JsonValueType::JsonParser_JsonValueType()   {
}
constexpr ::GlobalNamespace::JsonParser_JsonValueType  GlobalNamespace::JsonParser_JsonValueType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::JsonParser_JsonValueType  GlobalNamespace::JsonParser_JsonValueType::Bool{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::JsonParser_JsonValueType  GlobalNamespace::JsonParser_JsonValueType::Real{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::JsonParser_JsonValueType  GlobalNamespace::JsonParser_JsonValueType::Integer{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::JsonParser_JsonValueType  GlobalNamespace::JsonParser_JsonValueType::String{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::JsonParser_JsonValueType  GlobalNamespace::JsonParser_JsonValueType::Array{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::JsonParser_JsonValueType  GlobalNamespace::JsonParser_JsonValueType::Object{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::JsonParser_JsonValueType  GlobalNamespace::JsonParser_JsonValueType::Any{static_cast<int32_t>(0x7)};
