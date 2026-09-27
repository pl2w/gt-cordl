#pragma once
// IWYU pragma private; include "GlobalNamespace/GTAnimator_AnimClipAndGObjs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GTAnimator_AnimClipAndGObjs)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTAnimator_AnimClipAndGObjs;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTAnimator_AnimClipAndGObjs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTAnimator_AnimClipAndGObjs, "", "GTAnimator/AnimClipAndGObjs");
// Dependencies UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTAnimator/AnimClipAndGObjs
struct CORDL_TYPE GTAnimator_AnimClipAndGObjs {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GTAnimator_AnimClipAndGObjs() ;

// Ctor Parameters [CppParam { name: "animClip", ty: "::UnityW<::UnityEngine::AnimationClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "soundBankToPlayOnStart", ty: "::UnityW<::GlobalNamespace::SoundBankPlayer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "endStaticGameObjects", ty: "::ArrayW<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None, comment: None }]
constexpr GTAnimator_AnimClipAndGObjs(::UnityW<::UnityEngine::AnimationClip>  animClip, ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankToPlayOnStart, ::ArrayW<::UnityW<::UnityEngine::GameObject>>  endStaticGameObjects) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{672};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field animClip, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  animClip;

/// @brief Field soundBankToPlayOnStart, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankToPlayOnStart;

/// [Tooltip("These GameObjects will be activated when the animation clip finishes playing.")]
/// @brief Field endStaticGameObjects, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  endStaticGameObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTAnimator_AnimClipAndGObjs, animClip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator_AnimClipAndGObjs, soundBankToPlayOnStart) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator_AnimClipAndGObjs, endStaticGameObjects) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTAnimator_AnimClipAndGObjs) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
