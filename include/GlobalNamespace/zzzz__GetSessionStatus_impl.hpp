#pragma once
// IWYU pragma private; include "GlobalNamespace/GetSessionStatus.hpp"
#include "GlobalNamespace/zzzz__GetSessionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GetSessionStatus::GetSessionStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetSessionStatus::GetSessionStatus()   {
}
constexpr ::GlobalNamespace::GetSessionStatus  GlobalNamespace::GetSessionStatus::PASS{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GetSessionStatus  GlobalNamespace::GetSessionStatus::CHALLENGE{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GetSessionStatus  GlobalNamespace::GetSessionStatus::PROHIBITED{static_cast<int32_t>(0x2)};
