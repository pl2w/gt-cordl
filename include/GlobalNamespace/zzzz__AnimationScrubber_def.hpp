#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationScrubber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimationScrubber)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimationScrubber;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimationScrubber*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationScrubber*, "", "AnimationScrubber");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimationScrubber
class CORDL_TYPE AnimationScrubber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animationPlaybackTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationPlaybackTime, put=__cordl_internal_set_animationPlaybackTime)) float_t  animationPlaybackTime;

/// @brief Field scrubberActive, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_scrubberActive, put=__cordl_internal_set_scrubberActive)) bool  scrubberActive;

/// @brief Field targetAnimator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetAnimator, put=__cordl_internal_set_targetAnimator)) ::UnityW<::UnityEngine::Animator>  targetAnimator;

/// @brief Method LateUpdate, addr 0x5641180, size 0xdc, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::AnimationScrubber* New_ctor() ;

constexpr float_t const& __cordl_internal_get_animationPlaybackTime() const;

constexpr float_t& __cordl_internal_get_animationPlaybackTime() ;

constexpr bool const& __cordl_internal_get_scrubberActive() const;

constexpr bool& __cordl_internal_get_scrubberActive() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_targetAnimator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_targetAnimator() ;

constexpr void __cordl_internal_set_animationPlaybackTime(float_t  value) ;

constexpr void __cordl_internal_set_scrubberActive(bool  value) ;

constexpr void __cordl_internal_set_targetAnimator(::UnityW<::UnityEngine::Animator>  value) ;

/// @brief Method .ctor, addr 0x564125c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationScrubber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationScrubber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationScrubber(AnimationScrubber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationScrubber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationScrubber(AnimationScrubber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{650};

/// @brief Field scrubberActive, offset: 0x20, size: 0x1, def value: None
 bool  ___scrubberActive;

/// @brief Field animationPlaybackTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___animationPlaybackTime;

/// @brief Field targetAnimator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___targetAnimator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationScrubber, ___scrubberActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationScrubber, ___animationPlaybackTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationScrubber, ___targetAnimator) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationScrubber) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
