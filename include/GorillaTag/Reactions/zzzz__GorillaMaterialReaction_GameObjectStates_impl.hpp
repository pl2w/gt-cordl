#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/GorillaMaterialReaction_GameObjectStates.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_MomentInStateActiveOption_impl.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_GameObjectStates_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onEnter", ty: "::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onStay", ty: "::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onExit", ty: "::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaMaterialReaction_GameObjectStates::GorillaMaterialReaction_GameObjectStates(::UnityW<::UnityEngine::GameObject>  gameObject, ::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption  onEnter, ::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption  onStay, ::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption  onExit) noexcept  {
this->gameObject = gameObject;
this->onEnter = onEnter;
this->onStay = onStay;
this->onExit = onExit;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaMaterialReaction_GameObjectStates::GorillaMaterialReaction_GameObjectStates()   {
}
