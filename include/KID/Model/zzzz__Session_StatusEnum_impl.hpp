#pragma once
// IWYU pragma private; include "KID/Model/Session_StatusEnum.hpp"
#include "KID/Model/zzzz__Session_StatusEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Session_StatusEnum::Session_StatusEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Session_StatusEnum::Session_StatusEnum()   {
}
constexpr ::GlobalNamespace::Session_StatusEnum  GlobalNamespace::Session_StatusEnum::ACTIVE{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Session_StatusEnum  GlobalNamespace::Session_StatusEnum::HOLD{static_cast<int32_t>(0x2)};
