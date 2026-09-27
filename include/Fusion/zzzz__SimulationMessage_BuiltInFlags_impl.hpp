#pragma once
// IWYU pragma private; include "Fusion/SimulationMessage_BuiltInFlags.hpp"
#include "Fusion/zzzz__SimulationMessage_BuiltInFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags::SimulationMessage_BuiltInFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags::SimulationMessage_BuiltInFlags()   {
}
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags  GlobalNamespace::SimulationMessage_BuiltInFlags::USER_MESSAGE{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags  GlobalNamespace::SimulationMessage_BuiltInFlags::REMOTE{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags  GlobalNamespace::SimulationMessage_BuiltInFlags::STATIC{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags  GlobalNamespace::SimulationMessage_BuiltInFlags::UNRELIABLE{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags  GlobalNamespace::SimulationMessage_BuiltInFlags::TARGET_PLAYER{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags  GlobalNamespace::SimulationMessage_BuiltInFlags::TARGET_SERVER{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags  GlobalNamespace::SimulationMessage_BuiltInFlags::INTERNAL{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags  GlobalNamespace::SimulationMessage_BuiltInFlags::NOT_TICK_ALIGNED{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::SimulationMessage_BuiltInFlags  GlobalNamespace::SimulationMessage_BuiltInFlags::DUMMY{static_cast<int32_t>(0x100)};
