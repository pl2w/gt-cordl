#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeGateResponse_StatusEnum.hpp"
#include "KID/Model/zzzz__CheckAgeGateResponse_StatusEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CheckAgeGateResponse_StatusEnum::CheckAgeGateResponse_StatusEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CheckAgeGateResponse_StatusEnum::CheckAgeGateResponse_StatusEnum()   {
}
constexpr ::GlobalNamespace::CheckAgeGateResponse_StatusEnum  GlobalNamespace::CheckAgeGateResponse_StatusEnum::PASS{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CheckAgeGateResponse_StatusEnum  GlobalNamespace::CheckAgeGateResponse_StatusEnum::PROHIBITED{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CheckAgeGateResponse_StatusEnum  GlobalNamespace::CheckAgeGateResponse_StatusEnum::CHALLENGE{static_cast<int32_t>(0x3)};
