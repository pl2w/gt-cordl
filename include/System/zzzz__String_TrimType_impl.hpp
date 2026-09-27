#pragma once
// IWYU pragma private; include "System/String_TrimType.hpp"
#include "System/zzzz__String_TrimType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::String_TrimType::String_TrimType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::String_TrimType::String_TrimType()   {
}
constexpr ::GlobalNamespace::String_TrimType  GlobalNamespace::String_TrimType::Head{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::String_TrimType  GlobalNamespace::String_TrimType::Tail{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::String_TrimType  GlobalNamespace::String_TrimType::Both{static_cast<int32_t>(0x2)};
