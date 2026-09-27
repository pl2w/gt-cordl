#pragma once
// IWYU pragma private; include "Meta/Voice/TelemetryUtilities/TerminationReason.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__TerminationReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::TelemetryUtilities::TerminationReason::TerminationReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::TelemetryUtilities::TerminationReason::TerminationReason()   {
}
constexpr ::Meta::Voice::TelemetryUtilities::TerminationReason  Meta::Voice::TelemetryUtilities::TerminationReason::Undetermined{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::TelemetryUtilities::TerminationReason  Meta::Voice::TelemetryUtilities::TerminationReason::Successful{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::TelemetryUtilities::TerminationReason  Meta::Voice::TelemetryUtilities::TerminationReason::Failed{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::TelemetryUtilities::TerminationReason  Meta::Voice::TelemetryUtilities::TerminationReason::Canceled{static_cast<int32_t>(0x3)};
