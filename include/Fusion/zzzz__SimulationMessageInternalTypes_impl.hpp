#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageInternalTypes.hpp"
#include "Fusion/zzzz__SimulationMessageInternalTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationMessageInternalTypes::SimulationMessageInternalTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationMessageInternalTypes::SimulationMessageInternalTypes()   {
}
constexpr ::Fusion::SimulationMessageInternalTypes  Fusion::SimulationMessageInternalTypes::SharedModeSetAlwaysInterested{static_cast<int32_t>(0x3)};
constexpr ::Fusion::SimulationMessageInternalTypes  Fusion::SimulationMessageInternalTypes::SharedModeRequestStateAuthority{static_cast<int32_t>(0x4)};
constexpr ::Fusion::SimulationMessageInternalTypes  Fusion::SimulationMessageInternalTypes::SetPlayerObject{static_cast<int32_t>(0x6)};
constexpr ::Fusion::SimulationMessageInternalTypes  Fusion::SimulationMessageInternalTypes::SetAreaOfInterest{static_cast<int32_t>(0x7)};
