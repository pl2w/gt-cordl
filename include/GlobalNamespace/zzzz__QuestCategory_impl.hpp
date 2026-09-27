#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestCategory.hpp"
#include "GlobalNamespace/zzzz__QuestCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::QuestCategory::QuestCategory(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestCategory::QuestCategory()   {
}
constexpr ::GlobalNamespace::QuestCategory  GlobalNamespace::QuestCategory::NONE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::QuestCategory  GlobalNamespace::QuestCategory::Social{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::QuestCategory  GlobalNamespace::QuestCategory::Exploration{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::QuestCategory  GlobalNamespace::QuestCategory::Gameplay{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::QuestCategory  GlobalNamespace::QuestCategory::GameRound{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::QuestCategory  GlobalNamespace::QuestCategory::Tag{static_cast<int32_t>(0x5)};
