#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DateTimePackingFormat.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__DateTimePackingFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat::DateTimePackingFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat::DateTimePackingFormat()   {
}
constexpr ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat  SouthPointe::Serialization::MessagePack::DateTimePackingFormat::Extension{static_cast<int32_t>(0x0)};
constexpr ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat  SouthPointe::Serialization::MessagePack::DateTimePackingFormat::String{static_cast<int32_t>(0x1)};
constexpr ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat  SouthPointe::Serialization::MessagePack::DateTimePackingFormat::Epoch{static_cast<int32_t>(0x2)};
