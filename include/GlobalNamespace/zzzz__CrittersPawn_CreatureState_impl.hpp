#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersPawn_CreatureState.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_CreatureState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CrittersPawn_CreatureState::CrittersPawn_CreatureState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersPawn_CreatureState::CrittersPawn_CreatureState()   {
}
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::Eating{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::AttractedTo{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::Running{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::Grabbed{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::Sleeping{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::SeekingFood{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::Captured{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::Stunned{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::WaitingToDespawn{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::Despawning{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::CrittersPawn_CreatureState  GlobalNamespace::CrittersPawn_CreatureState::Spawning{static_cast<int32_t>(0xb)};
