#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_TableState.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_TableState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderTable_TableState::BuilderTable_TableState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTable_TableState::BuilderTable_TableState()   {
}
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::WaitingForZoneAndRoom{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::WaitingForInitalBuild{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::ReceivingInitialBuild{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::WaitForInitialBuildMaster{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::WaitForMasterResync{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::ReceivingMasterResync{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::InitialBuild{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::ExecuteQueuedCommands{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::Ready{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::BadData{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::BuilderTable_TableState  GlobalNamespace::BuilderTable_TableState::WaitingForSharedMapLoad{static_cast<int32_t>(0xa)};
