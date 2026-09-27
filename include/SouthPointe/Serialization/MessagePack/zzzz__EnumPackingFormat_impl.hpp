#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/EnumPackingFormat.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__EnumPackingFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::SouthPointe::Serialization::MessagePack::EnumPackingFormat::EnumPackingFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::EnumPackingFormat::EnumPackingFormat()   {
}
constexpr ::SouthPointe::Serialization::MessagePack::EnumPackingFormat  SouthPointe::Serialization::MessagePack::EnumPackingFormat::Integer{static_cast<int32_t>(0x0)};
constexpr ::SouthPointe::Serialization::MessagePack::EnumPackingFormat  SouthPointe::Serialization::MessagePack::EnumPackingFormat::String{static_cast<int32_t>(0x1)};
