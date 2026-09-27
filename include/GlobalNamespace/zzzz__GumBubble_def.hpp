#pragma once
// IWYU pragma private; include "GlobalNamespace/GumBubble.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LerpComponent_def.hpp"
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GumBubble)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GumBubble;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GumBubble*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GumBubble*, "", "GumBubble");
// Dependencies LerpComponent, TimeSince, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GumBubble
class CORDL_TYPE GumBubble : public ::GlobalNamespace::LerpComponent {
public:
// Declarations
/// @brief Field _animating, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__animating, put=__cordl_internal_set__animating)) bool  _animating;

/// @brief Field _delayInflate, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayInflate, put=__cordl_internal_set__delayInflate)) float_t  _delayInflate;

/// @brief Field _delayPop, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayPop, put=__cordl_internal_set__delayPop)) float_t  _delayPop;

/// @brief Field _done, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__done, put=__cordl_internal_set__done)) bool  _done;

/// @brief Field _lerpCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__lerpCurve, put=__cordl_internal_set__lerpCurve)) ::UnityEngine::AnimationCurve*  _lerpCurve;

/// @brief Field _sfxInflate, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__sfxInflate, put=__cordl_internal_set__sfxInflate)) ::UnityW<::UnityEngine::AudioClip>  _sfxInflate;

/// @brief Field _sfxPop, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__sfxPop, put=__cordl_internal_set__sfxPop)) ::UnityW<::UnityEngine::AudioClip>  _sfxPop;

/// @brief Field _sinceInflate, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__sinceInflate, put=__cordl_internal_set__sinceInflate)) ::GlobalNamespace::TimeSince  _sinceInflate;

/// @brief Field audioSource, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field onInflate, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_onInflate, put=__cordl_internal_set_onInflate)) ::UnityEngine::Events::UnityEvent*  onInflate;

/// @brief Field onPop, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPop, put=__cordl_internal_set_onPop)) ::UnityEngine::Events::UnityEvent*  onPop;

/// @brief Field target, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetScale, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetScale, put=__cordl_internal_set_targetScale)) ::UnityEngine::Vector3  targetScale;

/// @brief Method Awake, addr 0x5789c84, size 0x38, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Inflate, addr 0x5789d20, size 0x114, virtual false, abstract: false, final false
inline void Inflate() ;

/// @brief Method InflateDelayed, addr 0x5789a44, size 0x8, virtual false, abstract: false, final false
inline void InflateDelayed() ;

/// @brief Method InflateDelayed, addr 0x5789cbc, size 0x64, virtual false, abstract: false, final false
inline void InflateDelayed(float_t  delay) ;

static inline ::GlobalNamespace::GumBubble* New_ctor() ;

/// @brief Method OnLerp, addr 0x578a050, size 0x13c, virtual true, abstract: false, final false
inline void OnLerp(float_t  t) ;

/// @brief Method Pop, addr 0x5789e34, size 0xfc, virtual false, abstract: false, final false
inline void Pop() ;

/// @brief Method Update, addr 0x5789f30, size 0x120, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__animating() const;

constexpr bool& __cordl_internal_get__animating() ;

constexpr float_t const& __cordl_internal_get__delayInflate() const;

constexpr float_t& __cordl_internal_get__delayInflate() ;

constexpr float_t const& __cordl_internal_get__delayPop() const;

constexpr float_t& __cordl_internal_get__delayPop() ;

constexpr bool const& __cordl_internal_get__done() const;

constexpr bool& __cordl_internal_get__done() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__lerpCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__lerpCurve() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__sfxInflate() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__sfxInflate() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__sfxPop() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__sfxPop() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__sinceInflate() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__sinceInflate() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onInflate() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onInflate() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPop() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPop() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetScale() ;

constexpr void __cordl_internal_set__animating(bool  value) ;

constexpr void __cordl_internal_set__delayInflate(float_t  value) ;

constexpr void __cordl_internal_set__delayPop(float_t  value) ;

constexpr void __cordl_internal_set__done(bool  value) ;

constexpr void __cordl_internal_set__lerpCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__sfxInflate(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__sfxPop(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__sinceInflate(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_onInflate(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onPop(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x578a18c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GumBubble() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GumBubble", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GumBubble(GumBubble && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GumBubble", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GumBubble(GumBubble const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1428};

/// @brief Field target, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field targetScale, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetScale;

/// [SerializeField]
/// @brief Field _lerpCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____lerpCurve;

/// @brief Field audioSource, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field _sfxInflate, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____sfxInflate;

/// [SerializeField]
/// @brief Field _sfxPop, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____sfxPop;

/// [SerializeField]
/// @brief Field _delayInflate, offset: 0x78, size: 0x4, def value: None
 float_t  ____delayInflate;

/// [FormerlySerializedAs("_popDelay")]
/// [SerializeField]
/// @brief Field _delayPop, offset: 0x7c, size: 0x4, def value: None
 float_t  ____delayPop;

/// [SerializeField]
/// @brief Field _animating, offset: 0x80, size: 0x1, def value: None
 bool  ____animating;

/// @brief Field onPop, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPop;

/// @brief Field onInflate, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onInflate;

/// @brief Field _done, offset: 0x98, size: 0x1, def value: None
 bool  ____done;

/// @brief Field _sinceInflate, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____sinceInflate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GumBubble, ___target) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ___targetScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ____lerpCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ___audioSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ____sfxInflate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ____sfxPop) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ____delayInflate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ____delayPop) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ____animating) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ___onPop) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ___onInflate) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ____done) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GumBubble, ____sinceInflate) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GumBubble) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
