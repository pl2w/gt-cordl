#pragma once
// IWYU pragma private; include "Liv/Lck/Core/SerializationType.hpp"
#include "Liv/Lck/Core/zzzz__SerializationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::SerializationType::SerializationType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::SerializationType::SerializationType()   {
}
constexpr ::Liv::Lck::Core::SerializationType  Liv::Lck::Core::SerializationType::MsgPack{static_cast<uint32_t>(0x0u)};
constexpr ::Liv::Lck::Core::SerializationType  Liv::Lck::Core::SerializationType::JsonUTF8{static_cast<uint32_t>(0x1u)};
