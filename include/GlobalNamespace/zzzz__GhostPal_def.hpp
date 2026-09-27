#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostPal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostPal)
namespace GlobalNamespace {
class GhostPal__BounceOnTrigger_d__23;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostPal;
}
namespace GlobalNamespace {
class GhostPal__BounceOnTrigger_d__23;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostPal*);
MARK_REF_T(::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostPal*, "", "GhostPal");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*, "", "GhostPal/<BounceOnTrigger>d__23");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostPal
class CORDL_TYPE GhostPal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _BounceOnTrigger_d__23 = ::GlobalNamespace::GhostPal__BounceOnTrigger_d__23;

/// @brief Field animator, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field bounceCoroutine, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_bounceCoroutine, put=__cordl_internal_set_bounceCoroutine)) ::UnityEngine::Coroutine*  bounceCoroutine;

/// @brief Field bounceHeight, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_bounceHeight, put=__cordl_internal_set_bounceHeight)) float_t  bounceHeight;

/// @brief Field bounceOnTrigger, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_bounceOnTrigger, put=__cordl_internal_set_bounceOnTrigger)) ::UnityEngine::AnimationCurve*  bounceOnTrigger;

/// @brief Field faceMovementDirectionStrength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_faceMovementDirectionStrength, put=__cordl_internal_set_faceMovementDirectionStrength)) float_t  faceMovementDirectionStrength;

/// @brief Field friendlyAnimID, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_friendlyAnimID, put=__cordl_internal_set_friendlyAnimID)) int32_t  friendlyAnimID;

/// @brief Field hasTriggered, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasTriggered, put=__cordl_internal_set_hasTriggered)) bool  hasTriggered;

/// @brief Field lookAtDotProductMin, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookAtDotProductMin, put=__cordl_internal_set_lookAtDotProductMin)) float_t  lookAtDotProductMin;

/// @brief Field lookAtTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookAtTime, put=__cordl_internal_set_lookAtTime)) float_t  lookAtTime;

/// @brief Field minDistanceFromPlayer, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceFromPlayer, put=__cordl_internal_set_minDistanceFromPlayer)) float_t  minDistanceFromPlayer;

/// @brief Field minLookTimeToTrigger, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_minLookTimeToTrigger, put=__cordl_internal_set_minLookTimeToTrigger)) float_t  minLookTimeToTrigger;

/// @brief Field neutralAnimID, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_neutralAnimID, put=__cordl_internal_set_neutralAnimID)) int32_t  neutralAnimID;

/// @brief Field orbitHeight, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitHeight, put=__cordl_internal_set_orbitHeight)) float_t  orbitHeight;

/// @brief Field orbitRadius, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitRadius, put=__cordl_internal_set_orbitRadius)) float_t  orbitRadius;

/// @brief Field orbitSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitSpeed, put=__cordl_internal_set_orbitSpeed)) float_t  orbitSpeed;

/// @brief Field rig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field rotateTowardsPlayerFromLookTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotateTowardsPlayerFromLookTime, put=__cordl_internal_set_rotateTowardsPlayerFromLookTime)) ::UnityEngine::AnimationCurve*  rotateTowardsPlayerFromLookTime;

/// @brief Field trailingPosition, offset 0x8c, size 0xc 
 __declspec(property(get=__cordl_internal_get_trailingPosition, put=__cordl_internal_set_trailingPosition)) ::UnityEngine::Vector3  trailingPosition;

/// @brief Field triggerAudioClipIndex, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerAudioClipIndex, put=__cordl_internal_set_triggerAudioClipIndex)) int32_t  triggerAudioClipIndex;

/// @brief Field triggerAudioClips, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerAudioClips, put=__cordl_internal_set_triggerAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  triggerAudioClips;

/// @brief Field triggerAudioPitchMinMax, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerAudioPitchMinMax, put=__cordl_internal_set_triggerAudioPitchMinMax)) ::UnityEngine::Vector2  triggerAudioPitchMinMax;

/// @brief Field triggerAudioSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerAudioSource, put=__cordl_internal_set_triggerAudioSource)) ::UnityW<::UnityEngine::AudioSource>  triggerAudioSource;

/// @brief Method Awake, addr 0x57f4648, size 0x104, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(GhostPal::<BounceOnTrigger>d__23))]
/// @brief Method BounceOnTrigger, addr 0x57f474c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* BounceOnTrigger() ;

/// @brief Method LateUpdate, addr 0x57f47e0, size 0x81c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GhostPal* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_bounceCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_bounceCoroutine() ;

constexpr float_t const& __cordl_internal_get_bounceHeight() const;

constexpr float_t& __cordl_internal_get_bounceHeight() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_bounceOnTrigger() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_bounceOnTrigger() ;

constexpr float_t const& __cordl_internal_get_faceMovementDirectionStrength() const;

constexpr float_t& __cordl_internal_get_faceMovementDirectionStrength() ;

constexpr int32_t const& __cordl_internal_get_friendlyAnimID() const;

constexpr int32_t& __cordl_internal_get_friendlyAnimID() ;

constexpr bool const& __cordl_internal_get_hasTriggered() const;

constexpr bool& __cordl_internal_get_hasTriggered() ;

constexpr float_t const& __cordl_internal_get_lookAtDotProductMin() const;

constexpr float_t& __cordl_internal_get_lookAtDotProductMin() ;

constexpr float_t const& __cordl_internal_get_lookAtTime() const;

constexpr float_t& __cordl_internal_get_lookAtTime() ;

constexpr float_t const& __cordl_internal_get_minDistanceFromPlayer() const;

constexpr float_t& __cordl_internal_get_minDistanceFromPlayer() ;

constexpr float_t const& __cordl_internal_get_minLookTimeToTrigger() const;

constexpr float_t& __cordl_internal_get_minLookTimeToTrigger() ;

constexpr int32_t const& __cordl_internal_get_neutralAnimID() const;

constexpr int32_t& __cordl_internal_get_neutralAnimID() ;

constexpr float_t const& __cordl_internal_get_orbitHeight() const;

constexpr float_t& __cordl_internal_get_orbitHeight() ;

constexpr float_t const& __cordl_internal_get_orbitRadius() const;

constexpr float_t& __cordl_internal_get_orbitRadius() ;

constexpr float_t const& __cordl_internal_get_orbitSpeed() const;

constexpr float_t& __cordl_internal_get_orbitSpeed() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_rotateTowardsPlayerFromLookTime() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotateTowardsPlayerFromLookTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_trailingPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_trailingPosition() ;

constexpr int32_t const& __cordl_internal_get_triggerAudioClipIndex() const;

constexpr int32_t& __cordl_internal_get_triggerAudioClipIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_triggerAudioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_triggerAudioClips() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_triggerAudioPitchMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_triggerAudioPitchMinMax() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_triggerAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_triggerAudioSource() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_bounceCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_bounceHeight(float_t  value) ;

constexpr void __cordl_internal_set_bounceOnTrigger(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_faceMovementDirectionStrength(float_t  value) ;

constexpr void __cordl_internal_set_friendlyAnimID(int32_t  value) ;

constexpr void __cordl_internal_set_hasTriggered(bool  value) ;

constexpr void __cordl_internal_set_lookAtDotProductMin(float_t  value) ;

constexpr void __cordl_internal_set_lookAtTime(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceFromPlayer(float_t  value) ;

constexpr void __cordl_internal_set_minLookTimeToTrigger(float_t  value) ;

constexpr void __cordl_internal_set_neutralAnimID(int32_t  value) ;

constexpr void __cordl_internal_set_orbitHeight(float_t  value) ;

constexpr void __cordl_internal_set_orbitRadius(float_t  value) ;

constexpr void __cordl_internal_set_orbitSpeed(float_t  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rotateTowardsPlayerFromLookTime(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_trailingPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_triggerAudioClipIndex(int32_t  value) ;

constexpr void __cordl_internal_set_triggerAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_triggerAudioPitchMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_triggerAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x57f4ffc, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostPal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostPal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostPal(GhostPal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostPal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostPal(GhostPal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{208};

/// [SerializeField]
/// @brief Field minDistanceFromPlayer, offset: 0x20, size: 0x4, def value: None
 float_t  ___minDistanceFromPlayer;

/// [SerializeField]
/// @brief Field orbitRadius, offset: 0x24, size: 0x4, def value: None
 float_t  ___orbitRadius;

/// [SerializeField]
/// @brief Field orbitHeight, offset: 0x28, size: 0x4, def value: None
 float_t  ___orbitHeight;

/// [SerializeField]
/// @brief Field orbitSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___orbitSpeed;

/// [SerializeField]
/// @brief Field faceMovementDirectionStrength, offset: 0x30, size: 0x4, def value: None
 float_t  ___faceMovementDirectionStrength;

/// [Space]
/// [SerializeField]
/// @brief Field lookAtDotProductMin, offset: 0x34, size: 0x4, def value: None
 float_t  ___lookAtDotProductMin;

/// [SerializeField]
/// @brief Field rotateTowardsPlayerFromLookTime, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___rotateTowardsPlayerFromLookTime;

/// [SerializeField]
/// @brief Field minLookTimeToTrigger, offset: 0x40, size: 0x4, def value: None
 float_t  ___minLookTimeToTrigger;

/// [SerializeField]
/// @brief Field bounceOnTrigger, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___bounceOnTrigger;

/// [SerializeField]
/// @brief Field triggerAudioSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___triggerAudioSource;

/// [SerializeField]
/// @brief Field triggerAudioPitchMinMax, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___triggerAudioPitchMinMax;

/// [SerializeField]
/// @brief Field triggerAudioClips, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___triggerAudioClips;

/// @brief Field rig, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field animator, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field lookAtTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___lookAtTime;

/// @brief Field hasTriggered, offset: 0x7c, size: 0x1, def value: None
 bool  ___hasTriggered;

/// @brief Field bounceCoroutine, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___bounceCoroutine;

/// @brief Field bounceHeight, offset: 0x88, size: 0x4, def value: None
 float_t  ___bounceHeight;

/// @brief Field trailingPosition, offset: 0x8c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___trailingPosition;

/// @brief Field triggerAudioClipIndex, offset: 0x98, size: 0x4, def value: None
 int32_t  ___triggerAudioClipIndex;

/// @brief Field neutralAnimID, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___neutralAnimID;

/// @brief Field friendlyAnimID, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___friendlyAnimID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostPal, ___minDistanceFromPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___orbitRadius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___orbitHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___orbitSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___faceMovementDirectionStrength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___lookAtDotProductMin) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___rotateTowardsPlayerFromLookTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___minLookTimeToTrigger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___bounceOnTrigger) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___triggerAudioSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___triggerAudioPitchMinMax) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___triggerAudioClips) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___rig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___animator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___lookAtTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___hasTriggered) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___bounceCoroutine) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___bounceHeight) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___trailingPosition) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___triggerAudioClipIndex) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___neutralAnimID) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal, ___friendlyAnimID) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostPal) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostPal/<BounceOnTrigger>d__23
class CORDL_TYPE GhostPal__BounceOnTrigger_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GhostPal>  __4__this;

/// @brief Field <startTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57f50b8, size 0x120, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GhostPal__BounceOnTrigger_d__23* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57f51d8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57f51e0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57f5218, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57f50b4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GhostPal> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GhostPal>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GhostPal>  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x57f47b8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostPal__BounceOnTrigger_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostPal__BounceOnTrigger_d__23", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostPal__BounceOnTrigger_d__23(GhostPal__BounceOnTrigger_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostPal__BounceOnTrigger_d__23", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostPal__BounceOnTrigger_d__23(GhostPal__BounceOnTrigger_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{207};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostPal>  _____4__this;

/// @brief Field <startTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____startTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostPal__BounceOnTrigger_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal__BounceOnTrigger_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal__BounceOnTrigger_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostPal__BounceOnTrigger_d__23, ____startTime_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostPal__BounceOnTrigger_d__23) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
