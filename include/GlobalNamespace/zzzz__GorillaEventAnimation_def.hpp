#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEventAnimation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaEventAnimation)
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaEventAnimation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaEventAnimation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaEventAnimation*, "", "GorillaEventAnimation");
// Dependencies UnityEngine.AnimationClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaEventAnimation
class CORDL_TYPE GorillaEventAnimation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__animation, put=__cordl_internal_set__animation)) ::UnityW<::UnityEngine::Animation>  _animation;

/// @brief Field _clipIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__clipIndex, put=__cordl_internal_set__clipIndex)) int32_t  _clipIndex;

/// @brief Field animationClipIndex, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationClipIndex, put=__cordl_internal_set_animationClipIndex)) int32_t  animationClipIndex;

/// @brief Field clips, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clips, put=__cordl_internal_set_clips)) ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  clips;

/// @brief Field offsetTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_offsetTime, put=__cordl_internal_set_offsetTime)) float_t  offsetTime;

/// @brief Method Awake, addr 0x57f5220, size 0xfc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaEventAnimation* New_ctor() ;

/// @brief Method OnDisable, addr 0x57f531c, size 0x1c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method PlayClipByIndex, addr 0x57f5338, size 0x194, virtual false, abstract: false, final false
inline void PlayClipByIndex(int32_t  index, float_t  startTime) ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get__animation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get__animation() ;

constexpr int32_t const& __cordl_internal_get__clipIndex() const;

constexpr int32_t& __cordl_internal_get__clipIndex() ;

constexpr int32_t const& __cordl_internal_get_animationClipIndex() const;

constexpr int32_t& __cordl_internal_get_animationClipIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>> const& __cordl_internal_get_clips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>& __cordl_internal_get_clips() ;

constexpr float_t const& __cordl_internal_get_offsetTime() const;

constexpr float_t& __cordl_internal_get_offsetTime() ;

constexpr void __cordl_internal_set__animation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set__clipIndex(int32_t  value) ;

constexpr void __cordl_internal_set_animationClipIndex(int32_t  value) ;

constexpr void __cordl_internal_set_clips(::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  value) ;

constexpr void __cordl_internal_set_offsetTime(float_t  value) ;

/// @brief Method .ctor, addr 0x57f54cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaEventAnimation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaEventAnimation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaEventAnimation(GorillaEventAnimation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaEventAnimation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaEventAnimation(GorillaEventAnimation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{209};

/// @brief Field _animation, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ____animation;

/// @brief Field offsetTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___offsetTime;

/// @brief Field animationClipIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___animationClipIndex;

/// @brief Field clips, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  ___clips;

/// @brief Field _clipIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ____clipIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaEventAnimation, ____animation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimation, ___offsetTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimation, ___animationClipIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimation, ___clips) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimation, ____clipIndex) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaEventAnimation) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
