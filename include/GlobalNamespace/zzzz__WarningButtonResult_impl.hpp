#pragma once
// IWYU pragma private; include "GlobalNamespace/WarningButtonResult.hpp"
#include "GlobalNamespace/zzzz__WarningButtonResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WarningButtonResult::WarningButtonResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WarningButtonResult::WarningButtonResult()   {
}
constexpr ::GlobalNamespace::WarningButtonResult  GlobalNamespace::WarningButtonResult::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::WarningButtonResult  GlobalNamespace::WarningButtonResult::CloseWarning{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::WarningButtonResult  GlobalNamespace::WarningButtonResult::Continue{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::WarningButtonResult  GlobalNamespace::WarningButtonResult::OptIn{static_cast<int32_t>(0x3)};
