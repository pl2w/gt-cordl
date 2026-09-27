#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaComputer_NameCheckResult.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_NameCheckResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaComputer_NameCheckResult::GorillaComputer_NameCheckResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaComputer_NameCheckResult::GorillaComputer_NameCheckResult()   {
}
constexpr ::GlobalNamespace::GorillaComputer_NameCheckResult  GlobalNamespace::GorillaComputer_NameCheckResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GorillaComputer_NameCheckResult  GlobalNamespace::GorillaComputer_NameCheckResult::Warning{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GorillaComputer_NameCheckResult  GlobalNamespace::GorillaComputer_NameCheckResult::Ban{static_cast<int32_t>(0x2)};
