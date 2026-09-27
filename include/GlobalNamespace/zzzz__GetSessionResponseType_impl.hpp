#pragma once
// IWYU pragma private; include "GlobalNamespace/GetSessionResponseType.hpp"
#include "GlobalNamespace/zzzz__GetSessionResponseType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GetSessionResponseType::GetSessionResponseType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetSessionResponseType::GetSessionResponseType()   {
}
constexpr ::GlobalNamespace::GetSessionResponseType  GlobalNamespace::GetSessionResponseType::OK{static_cast<int32_t>(0xc8)};
constexpr ::GlobalNamespace::GetSessionResponseType  GlobalNamespace::GetSessionResponseType::NOT_FOUND{static_cast<int32_t>(0xcc)};
constexpr ::GlobalNamespace::GetSessionResponseType  GlobalNamespace::GetSessionResponseType::LOST{static_cast<int32_t>(0x194)};
constexpr ::GlobalNamespace::GetSessionResponseType  GlobalNamespace::GetSessionResponseType::ERROR{static_cast<int32_t>(0x0)};
