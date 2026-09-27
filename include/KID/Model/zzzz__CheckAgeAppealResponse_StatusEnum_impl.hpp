#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeAppealResponse_StatusEnum.hpp"
#include "KID/Model/zzzz__CheckAgeAppealResponse_StatusEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum::CheckAgeAppealResponse_StatusEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum::CheckAgeAppealResponse_StatusEnum()   {
}
constexpr ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  GlobalNamespace::CheckAgeAppealResponse_StatusEnum::PASS{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  GlobalNamespace::CheckAgeAppealResponse_StatusEnum::FAIL{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  GlobalNamespace::CheckAgeAppealResponse_StatusEnum::CHALLENGE{static_cast<int32_t>(0x3)};
