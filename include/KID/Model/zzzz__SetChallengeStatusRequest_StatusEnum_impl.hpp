#pragma once
// IWYU pragma private; include "KID/Model/SetChallengeStatusRequest_StatusEnum.hpp"
#include "KID/Model/zzzz__SetChallengeStatusRequest_StatusEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum::SetChallengeStatusRequest_StatusEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum::SetChallengeStatusRequest_StatusEnum()   {
}
constexpr ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  GlobalNamespace::SetChallengeStatusRequest_StatusEnum::PASS{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  GlobalNamespace::SetChallengeStatusRequest_StatusEnum::FAIL{static_cast<int32_t>(0x2)};
