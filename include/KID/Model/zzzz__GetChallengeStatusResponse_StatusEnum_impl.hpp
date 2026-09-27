#pragma once
// IWYU pragma private; include "KID/Model/GetChallengeStatusResponse_StatusEnum.hpp"
#include "KID/Model/zzzz__GetChallengeStatusResponse_StatusEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum::GetChallengeStatusResponse_StatusEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum::GetChallengeStatusResponse_StatusEnum()   {
}
constexpr ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum  GlobalNamespace::GetChallengeStatusResponse_StatusEnum::PASS{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum  GlobalNamespace::GetChallengeStatusResponse_StatusEnum::FAIL{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum  GlobalNamespace::GetChallengeStatusResponse_StatusEnum::PENDING{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum  GlobalNamespace::GetChallengeStatusResponse_StatusEnum::INPROGRESS{static_cast<int32_t>(0x4)};
