#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/GorillaMaterialReaction_GameObjectStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_MomentInStateActiveOption_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaMaterialReaction_GameObjectStates)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaMaterialReaction_GameObjectStates;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaMaterialReaction_GameObjectStates);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaMaterialReaction_GameObjectStates, "GorillaTag.Reactions", "GorillaMaterialReaction/GameObjectStates");
// Dependencies GorillaTag.Reactions.GorillaMaterialReaction::MomentInStateActiveOption
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Reactions.GorillaMaterialReaction/GameObjectStates
struct CORDL_TYPE GorillaMaterialReaction_GameObjectStates {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaMaterialReaction_GameObjectStates() ;

// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "onEnter", ty: "::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption", modifiers: "", def_value: None, comment: None }, CppParam { name: "onStay", ty: "::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption", modifiers: "", def_value: None, comment: None }, CppParam { name: "onExit", ty: "::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption", modifiers: "", def_value: None, comment: None }]
constexpr GorillaMaterialReaction_GameObjectStates(::UnityW<::UnityEngine::GameObject>  gameObject, ::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption  onEnter, ::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption  onStay, ::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption  onExit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field gameObject, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  gameObject;

/// [GorillaMaterialReaction::MomentInState]
/// @brief Field onEnter, offset: 0x8, size: 0x2, def value: None
 ::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption  onEnter;

/// [GorillaMaterialReaction::MomentInState]
/// @brief Field onStay, offset: 0xa, size: 0x2, def value: None
 ::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption  onStay;

/// [GorillaMaterialReaction::MomentInState]
/// @brief Field onExit, offset: 0xc, size: 0x2, def value: None
 ::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption  onExit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaMaterialReaction_GameObjectStates, gameObject) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMaterialReaction_GameObjectStates, onEnter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMaterialReaction_GameObjectStates, onStay) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMaterialReaction_GameObjectStates, onExit) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaMaterialReaction_GameObjectStates) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
