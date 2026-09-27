#pragma once
// IWYU pragma private; include "KID/Model/TestVerificationWebhookRequest_EventTypeEnum.hpp"
#include "KID/Model/zzzz__TestVerificationWebhookRequest_EventTypeEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum::TestVerificationWebhookRequest_EventTypeEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum::TestVerificationWebhookRequest_EventTypeEnum()   {
}
constexpr ::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum  GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum::AdultVerificationResult{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum  GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum::AgeAssuranceVerificationResult{static_cast<int32_t>(0x2)};
