#pragma once
// IWYU pragma private; include "KID/Model/AwaitChallengeResponse_StatusEnum.hpp"
#include "KID/Model/zzzz__AwaitChallengeResponse_StatusEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AwaitChallengeResponse_StatusEnum::AwaitChallengeResponse_StatusEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AwaitChallengeResponse_StatusEnum::AwaitChallengeResponse_StatusEnum()   {
}
constexpr ::GlobalNamespace::AwaitChallengeResponse_StatusEnum  GlobalNamespace::AwaitChallengeResponse_StatusEnum::PASS{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AwaitChallengeResponse_StatusEnum  GlobalNamespace::AwaitChallengeResponse_StatusEnum::FAIL{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AwaitChallengeResponse_StatusEnum  GlobalNamespace::AwaitChallengeResponse_StatusEnum::POLLTIMEOUT{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::AwaitChallengeResponse_StatusEnum  GlobalNamespace::AwaitChallengeResponse_StatusEnum::INPROGRESS{static_cast<int32_t>(0x4)};
