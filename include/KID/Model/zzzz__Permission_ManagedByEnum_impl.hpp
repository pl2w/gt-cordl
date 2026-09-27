#pragma once
// IWYU pragma private; include "KID/Model/Permission_ManagedByEnum.hpp"
#include "KID/Model/zzzz__Permission_ManagedByEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Permission_ManagedByEnum::Permission_ManagedByEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Permission_ManagedByEnum::Permission_ManagedByEnum()   {
}
constexpr ::GlobalNamespace::Permission_ManagedByEnum  GlobalNamespace::Permission_ManagedByEnum::PLAYER{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Permission_ManagedByEnum  GlobalNamespace::Permission_ManagedByEnum::GUARDIAN{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Permission_ManagedByEnum  GlobalNamespace::Permission_ManagedByEnum::PROHIBITED{static_cast<int32_t>(0x3)};
