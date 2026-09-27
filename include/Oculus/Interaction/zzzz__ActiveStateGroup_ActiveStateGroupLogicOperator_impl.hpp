#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateGroup_ActiveStateGroupLogicOperator.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateGroup_ActiveStateGroupLogicOperator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator::ActiveStateGroup_ActiveStateGroupLogicOperator(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator::ActiveStateGroup_ActiveStateGroupLogicOperator()   {
}
constexpr ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator  GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator::AND{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator  GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator::OR{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator  GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator::XOR{static_cast<int32_t>(0x2)};
