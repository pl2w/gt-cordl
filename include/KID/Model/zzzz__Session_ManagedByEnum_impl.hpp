#pragma once
// IWYU pragma private; include "KID/Model/Session_ManagedByEnum.hpp"
#include "KID/Model/zzzz__Session_ManagedByEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Session_ManagedByEnum::Session_ManagedByEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Session_ManagedByEnum::Session_ManagedByEnum()   {
}
constexpr ::GlobalNamespace::Session_ManagedByEnum  GlobalNamespace::Session_ManagedByEnum::PLAYER{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Session_ManagedByEnum  GlobalNamespace::Session_ManagedByEnum::GUARDIAN{static_cast<int32_t>(0x2)};
