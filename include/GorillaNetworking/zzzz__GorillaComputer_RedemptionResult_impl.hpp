#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaComputer_RedemptionResult.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_RedemptionResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult::GorillaComputer_RedemptionResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult::GorillaComputer_RedemptionResult()   {
}
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult  GlobalNamespace::GorillaComputer_RedemptionResult::Empty{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult  GlobalNamespace::GorillaComputer_RedemptionResult::Invalid{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult  GlobalNamespace::GorillaComputer_RedemptionResult::Checking{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult  GlobalNamespace::GorillaComputer_RedemptionResult::AlreadyUsed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult  GlobalNamespace::GorillaComputer_RedemptionResult::TooEarly{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult  GlobalNamespace::GorillaComputer_RedemptionResult::TooLate{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult  GlobalNamespace::GorillaComputer_RedemptionResult::AlreadyGranted{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult  GlobalNamespace::GorillaComputer_RedemptionResult::Success{static_cast<int32_t>(0x7)};
