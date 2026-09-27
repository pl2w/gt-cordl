#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/GorillaMaterialReaction_ReactionEntry.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_GameObjectStates_impl.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_ReactionEntry_def.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_GameObjectStates_def.hpp"
// Ctor Parameters [CppParam { name: "statusMaterialIndexes", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameObjectStates", ty: "::ArrayW<::GlobalNamespace::GorillaMaterialReaction_GameObjectStates>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaMaterialReaction_ReactionEntry::GorillaMaterialReaction_ReactionEntry(::ArrayW<int32_t>  statusMaterialIndexes, ::ArrayW<::GlobalNamespace::GorillaMaterialReaction_GameObjectStates>  gameObjectStates) noexcept  {
this->statusMaterialIndexes = statusMaterialIndexes;
this->gameObjectStates = gameObjectStates;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaMaterialReaction_ReactionEntry::GorillaMaterialReaction_ReactionEntry()   {
}
