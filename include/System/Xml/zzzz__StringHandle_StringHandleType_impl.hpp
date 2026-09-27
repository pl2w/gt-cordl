#pragma once
// IWYU pragma private; include "System/Xml/StringHandle_StringHandleType.hpp"
#include "System/Xml/zzzz__StringHandle_StringHandleType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StringHandle_StringHandleType::StringHandle_StringHandleType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringHandle_StringHandleType::StringHandle_StringHandleType()   {
}
constexpr ::GlobalNamespace::StringHandle_StringHandleType  GlobalNamespace::StringHandle_StringHandleType::Dictionary{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::StringHandle_StringHandleType  GlobalNamespace::StringHandle_StringHandleType::UTF8{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StringHandle_StringHandleType  GlobalNamespace::StringHandle_StringHandleType::EscapedUTF8{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::StringHandle_StringHandleType  GlobalNamespace::StringHandle_StringHandleType::ConstString{static_cast<int32_t>(0x3)};
