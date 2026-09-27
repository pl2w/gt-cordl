#pragma once
// IWYU pragma private; include "GorillaGameModes/GameModeType.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaGameModes::GameModeType::GameModeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GorillaGameModes::GameModeType::GameModeType()   {
}
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::Casual{static_cast<int32_t>(0x0)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::Infection{static_cast<int32_t>(0x1)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::HuntDown{static_cast<int32_t>(0x2)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::Paintbrawl{static_cast<int32_t>(0x3)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::Ambush{static_cast<int32_t>(0x4)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::FreezeTag{static_cast<int32_t>(0x5)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::Ghost{static_cast<int32_t>(0x6)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::Custom{static_cast<int32_t>(0x7)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::Guardian{static_cast<int32_t>(0x8)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::PropHunt{static_cast<int32_t>(0x9)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::InfectionCompetitive{static_cast<int32_t>(0xa)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::SuperInfect{static_cast<int32_t>(0xb)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::SuperCasual{static_cast<int32_t>(0xc)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::Count{static_cast<int32_t>(0xd)};
constexpr ::GorillaGameModes::GameModeType  GorillaGameModes::GameModeType::None{static_cast<int32_t>(0xffffffff)};
