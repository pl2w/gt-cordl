#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderSmallHandTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderSmallHandTrigger)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderSmallHandTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderSmallHandTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderSmallHandTrigger*, "GorillaTagScripts.Builder", "BuilderSmallHandTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderSmallHandTrigger
class CORDL_TYPE BuilderSmallHandTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TriggeredEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggeredEvent, put=__cordl_internal_set_TriggeredEvent)) ::UnityEngine::Events::UnityEvent*  TriggeredEvent;

 __declspec(property(get=get_TriggeredThisFrame)) bool  TriggeredThisFrame;

/// @brief Field animation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_animation, put=__cordl_internal_set_animation)) ::UnityW<::UnityEngine::Animation>  animation;

/// @brief Field hasCheckedZone, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCheckedZone, put=__cordl_internal_set_hasCheckedZone)) bool  hasCheckedZone;

/// @brief Field ignoreScale, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreScale, put=__cordl_internal_set_ignoreScale)) bool  ignoreScale;

/// @brief Field lastTriggeredFrame, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTriggeredFrame, put=__cordl_internal_set_lastTriggeredFrame)) int32_t  lastTriggeredFrame;

/// @brief Field minimumVelocityMagnitude, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumVelocityMagnitude, put=__cordl_internal_set_minimumVelocityMagnitude)) float_t  minimumVelocityMagnitude;

/// @brief Field myPiece, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field onlySmallHands, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlySmallHands, put=__cordl_internal_set_onlySmallHands)) bool  onlySmallHands;

/// @brief Field requireMinimumVelocity, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_requireMinimumVelocity, put=__cordl_internal_set_requireMinimumVelocity)) bool  requireMinimumVelocity;

/// @brief Field timeline, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeline, put=__cordl_internal_set_timeline)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  timeline;

static inline ::GorillaTagScripts::Builder::BuilderSmallHandTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5c3270c, size 0x57c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_TriggeredEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_TriggeredEvent() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_animation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_animation() ;

constexpr bool const& __cordl_internal_get_hasCheckedZone() const;

constexpr bool& __cordl_internal_get_hasCheckedZone() ;

constexpr bool const& __cordl_internal_get_ignoreScale() const;

constexpr bool& __cordl_internal_get_ignoreScale() ;

constexpr int32_t const& __cordl_internal_get_lastTriggeredFrame() const;

constexpr int32_t& __cordl_internal_get_lastTriggeredFrame() ;

constexpr float_t const& __cordl_internal_get_minimumVelocityMagnitude() const;

constexpr float_t& __cordl_internal_get_minimumVelocityMagnitude() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr bool const& __cordl_internal_get_onlySmallHands() const;

constexpr bool& __cordl_internal_get_onlySmallHands() ;

constexpr bool const& __cordl_internal_get_requireMinimumVelocity() const;

constexpr bool& __cordl_internal_get_requireMinimumVelocity() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get_timeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get_timeline() ;

constexpr void __cordl_internal_set_TriggeredEvent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_animation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_hasCheckedZone(bool  value) ;

constexpr void __cordl_internal_set_ignoreScale(bool  value) ;

constexpr void __cordl_internal_set_lastTriggeredFrame(int32_t  value) ;

constexpr void __cordl_internal_set_minimumVelocityMagnitude(float_t  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_onlySmallHands(bool  value) ;

constexpr void __cordl_internal_set_requireMinimumVelocity(bool  value) ;

constexpr void __cordl_internal_set_timeline(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

/// @brief Method .ctor, addr 0x5c32c88, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TriggeredThisFrame, addr 0x5c326ec, size 0x20, virtual false, abstract: false, final false
inline bool get_TriggeredThisFrame() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSmallHandTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSmallHandTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSmallHandTrigger(BuilderSmallHandTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSmallHandTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSmallHandTrigger(BuilderSmallHandTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4176};

/// [Tooltip("Optional timeline to play to animate the thing getting activated, play sound, particles, etc...")]
/// @brief Field timeline, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ___timeline;

/// [Tooltip("Optional animation to play")]
/// @brief Field animation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___animation;

/// @brief Field lastTriggeredFrame, offset: 0x30, size: 0x4, def value: None
 int32_t  ___lastTriggeredFrame;

/// @brief Field onlySmallHands, offset: 0x34, size: 0x1, def value: None
 bool  ___onlySmallHands;

/// [SerializeField]
/// @brief Field requireMinimumVelocity, offset: 0x35, size: 0x1, def value: None
 bool  ___requireMinimumVelocity;

/// [SerializeField]
/// @brief Field minimumVelocityMagnitude, offset: 0x38, size: 0x4, def value: None
 float_t  ___minimumVelocityMagnitude;

/// @brief Field hasCheckedZone, offset: 0x3c, size: 0x1, def value: None
 bool  ___hasCheckedZone;

/// @brief Field ignoreScale, offset: 0x3d, size: 0x1, def value: None
 bool  ___ignoreScale;

/// @brief Field TriggeredEvent, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___TriggeredEvent;

/// [SerializeField]
/// @brief Field myPiece, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger, ___timeline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger, ___animation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger, ___lastTriggeredFrame) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger, ___onlySmallHands) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger, ___requireMinimumVelocity) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger, ___minimumVelocityMagnitude) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger, ___hasCheckedZone) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger, ___ignoreScale) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger, ___TriggeredEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger, ___myPiece) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderSmallHandTrigger) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
