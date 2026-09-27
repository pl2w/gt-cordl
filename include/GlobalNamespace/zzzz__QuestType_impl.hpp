#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestType.hpp"
#include "GlobalNamespace/zzzz__QuestType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::QuestType::QuestType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestType::QuestType()   {
}
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::none{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::gameModeObjective{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::gameModeRound{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::grabObject{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::dropObject{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::eatObject{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::tapObject{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::launchedProjectile{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::moveDistance{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::swimDistance{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::triggerHandEffect{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::enterLocation{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::misc{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::critter{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::fetchObject{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::QuestType  GlobalNamespace::QuestType::playerInteraction{static_cast<int32_t>(0xf)};
