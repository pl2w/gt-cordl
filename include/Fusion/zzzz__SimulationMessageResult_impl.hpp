#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageResult.hpp"
#include "Fusion/zzzz__SimulationMessageResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationMessageResult::SimulationMessageResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationMessageResult::SimulationMessageResult()   {
}
constexpr ::Fusion::SimulationMessageResult  Fusion::SimulationMessageResult::Handled{static_cast<int32_t>(0x0)};
constexpr ::Fusion::SimulationMessageResult  Fusion::SimulationMessageResult::Ignored{static_cast<int32_t>(0x1)};
constexpr ::Fusion::SimulationMessageResult  Fusion::SimulationMessageResult::Retry{static_cast<int32_t>(0x2)};
