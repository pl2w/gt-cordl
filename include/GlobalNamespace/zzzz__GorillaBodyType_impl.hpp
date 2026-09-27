#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaBodyType.hpp"
#include "GlobalNamespace/zzzz__GorillaBodyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaBodyType::GorillaBodyType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaBodyType::GorillaBodyType()   {
}
constexpr ::GlobalNamespace::GorillaBodyType  GlobalNamespace::GorillaBodyType::Invisible{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::GorillaBodyType  GlobalNamespace::GorillaBodyType::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GorillaBodyType  GlobalNamespace::GorillaBodyType::NoHead{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GorillaBodyType  GlobalNamespace::GorillaBodyType::Skeleton{static_cast<int32_t>(0x2)};
