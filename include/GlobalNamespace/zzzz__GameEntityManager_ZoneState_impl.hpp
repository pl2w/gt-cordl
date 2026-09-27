#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager_ZoneState.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_ZoneState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameEntityManager_ZoneState::GameEntityManager_ZoneState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager_ZoneState::GameEntityManager_ZoneState()   {
}
constexpr ::GlobalNamespace::GameEntityManager_ZoneState  GlobalNamespace::GameEntityManager_ZoneState::WaitingToEnterZone{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GameEntityManager_ZoneState  GlobalNamespace::GameEntityManager_ZoneState::WaitingToRequestState{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GameEntityManager_ZoneState  GlobalNamespace::GameEntityManager_ZoneState::WaitingForState{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GameEntityManager_ZoneState  GlobalNamespace::GameEntityManager_ZoneState::Active{static_cast<int32_t>(0x3)};
