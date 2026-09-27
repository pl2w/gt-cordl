#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableGuardianIdol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TappableGuardianIdol_IdolActivationSound_def.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol_StageActivatedObject_def.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol___c__DisplayClass54_0_def.hpp"
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TappableGuardianIdol)
namespace GlobalNamespace {
class GorillaGuardianZoneManager;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
struct TappableGuardianIdol_IdolActivationSound;
}
namespace GlobalNamespace {
struct TappableGuardianIdol_StageActivatedObject;
}
namespace GlobalNamespace {
class TappableGuardianIdol__DoLookingAround_d__54;
}
namespace GlobalNamespace {
class TappableGuardianIdol__ShowActivationEffect_d__56;
}
namespace GlobalNamespace {
class TappableGuardianIdol__TransitionToNextIdol_d__57;
}
namespace GlobalNamespace {
class TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d;
}
namespace GlobalNamespace {
struct TappableGuardianIdol___c__DisplayClass54_0;
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
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TappableGuardianIdol;
}
namespace GlobalNamespace {
class TappableGuardianIdol__DoLookingAround_d__54;
}
namespace GlobalNamespace {
class TappableGuardianIdol__ShowActivationEffect_d__56;
}
namespace GlobalNamespace {
class TappableGuardianIdol__TransitionToNextIdol_d__57;
}
namespace GlobalNamespace {
class TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TappableGuardianIdol*);
MARK_REF_T(::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*);
MARK_REF_T(::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*);
MARK_REF_T(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*);
MARK_REF_T(::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableGuardianIdol*, "", "TappableGuardianIdol");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*, "", "TappableGuardianIdol/<DoLookingAround>d__54");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*, "", "TappableGuardianIdol/<ShowActivationEffect>d__56");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*, "", "TappableGuardianIdol/<TransitionToNextIdol>d__57");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*, "", "TappableGuardianIdol/<<SetPosition>g__Unshrink|49_0>d");
// [DisallowMultipleComponent]
// Dependencies Tappable, TappableGuardianIdol::IdolActivationSound, TappableGuardianIdol::StageActivatedObject, UnityEngine.AudioClip, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TappableGuardianIdol
class CORDL_TYPE TappableGuardianIdol : public ::GlobalNamespace::Tappable {
public:
// Declarations
using IdolActivationSound = ::GlobalNamespace::TappableGuardianIdol_IdolActivationSound;

using StageActivatedObject = ::GlobalNamespace::TappableGuardianIdol_StageActivatedObject;

using _DoLookingAround_d__54 = ::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54;

using _ShowActivationEffect_d__56 = ::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56;

using _TransitionToNextIdol_d__57 = ::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57;

using __SetPosition_g__Unshrink_49_0_d = ::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d;

using __c__DisplayClass54_0 = ::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0;

/// @brief Field _activateSound, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__activateSound, put=__cordl_internal_set__activateSound)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  _activateSound;

/// @brief Field _activationRoutine, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__activationRoutine, put=__cordl_internal_set__activationRoutine)) ::UnityEngine::Coroutine*  _activationRoutine;

/// @brief Field _activationStageSounds, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__activationStageSounds, put=__cordl_internal_set__activationStageSounds)) ::ArrayW<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound>  _activationStageSounds;

/// @brief Field _activationState, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get__activationState, put=__cordl_internal_set__activationState)) int32_t  _activationState;

/// @brief Field _audio, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__audio, put=__cordl_internal_set__audio)) ::UnityW<::UnityEngine::AudioSource>  _audio;

/// @brief Field _baseLookRate, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseLookRate, put=__cordl_internal_set__baseLookRate)) float_t  _baseLookRate;

/// @brief Field _colliderBaseRadius, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__colliderBaseRadius, put=__cordl_internal_set__colliderBaseRadius)) float_t  _colliderBaseRadius;

/// @brief Field _descentSound, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__descentSound, put=__cordl_internal_set__descentSound)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  _descentSound;

/// @brief Field <isChangingPositions>k__BackingField, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get__isChangingPositions_k__BackingField, put=__cordl_internal_set__isChangingPositions_k__BackingField)) bool  _isChangingPositions_k__BackingField;

/// @brief Field _lookInterval, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__lookInterval, put=__cordl_internal_set__lookInterval)) float_t  _lookInterval;

/// @brief Field _lookRoot, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__lookRoot, put=__cordl_internal_set__lookRoot)) ::UnityW<::UnityEngine::Transform>  _lookRoot;

/// @brief Field _lookRoutine, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__lookRoutine, put=__cordl_internal_set__lookRoutine)) ::UnityEngine::Coroutine*  _lookRoutine;

/// @brief Field _randomLookChance, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__randomLookChance, put=__cordl_internal_set__randomLookChance)) float_t  _randomLookChance;

/// @brief Field _stageActivatedObjects, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__stageActivatedObjects, put=__cordl_internal_set__stageActivatedObjects)) ::ArrayW<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>  _stageActivatedObjects;

/// @brief Field _zoneIsActive, offset 0x144, size 0x1 
 __declspec(property(get=__cordl_internal_get__zoneIsActive, put=__cordl_internal_set__zoneIsActive)) bool  _zoneIsActive;

/// @brief Field activatedFX, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_activatedFX, put=__cordl_internal_set_activatedFX)) ::UnityW<::UnityEngine::GameObject>  activatedFX;

/// @brief Field activationDuration, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationDuration, put=__cordl_internal_set_activationDuration)) float_t  activationDuration;

/// @brief Field activeHeight, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeHeight, put=__cordl_internal_set_activeHeight)) float_t  activeHeight;

/// @brief Field bulgeCurve, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bulgeCurve, put=__cordl_internal_set_bulgeCurve)) ::UnityEngine::AnimationCurve*  bulgeCurve;

/// @brief Field bulgeScale, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_bulgeScale, put=__cordl_internal_set_bulgeScale)) float_t  bulgeScale;

/// @brief Field explodeFX, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_explodeFX, put=__cordl_internal_set_explodeFX)) ::UnityW<::UnityEngine::GameObject>  explodeFX;

/// @brief Field fallDuration, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_fallDuration, put=__cordl_internal_set_fallDuration)) float_t  fallDuration;

/// @brief Field fallStartOffset, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_fallStartOffset, put=__cordl_internal_set_fallStartOffset)) ::UnityEngine::Vector3  fallStartOffset;

/// @brief Field finalPos, offset 0x128, size 0xc 
 __declspec(property(get=__cordl_internal_get_finalPos, put=__cordl_internal_set_finalPos)) ::UnityEngine::Vector3  finalPos;

/// @brief Field floatDuration, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_floatDuration, put=__cordl_internal_set_floatDuration)) float_t  floatDuration;

/// @brief Field idolMeshRoot, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_idolMeshRoot, put=__cordl_internal_set_idolMeshRoot)) ::UnityW<::UnityEngine::GameObject>  idolMeshRoot;

/// @brief Field idolVisualRoot, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_idolVisualRoot, put=__cordl_internal_set_idolVisualRoot)) ::UnityW<::UnityEngine::GameObject>  idolVisualRoot;

/// @brief Field inactiveDuration, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_inactiveDuration, put=__cordl_internal_set_inactiveDuration)) float_t  inactiveDuration;

/// @brief Field isActivationReady, offset 0x145, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActivationReady, put=__cordl_internal_set_isActivationReady)) bool  isActivationReady;

 __declspec(property(get=get_isChangingPositions, put=set_isChangingPositions)) bool  isChangingPositions;

/// @brief Field knockbackOnActivate, offset 0x66, size 0x1 
 __declspec(property(get=__cordl_internal_get_knockbackOnActivate, put=__cordl_internal_set_knockbackOnActivate)) bool  knockbackOnActivate;

/// @brief Field knockbackOnLand, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get_knockbackOnLand, put=__cordl_internal_set_knockbackOnLand)) bool  knockbackOnLand;

/// @brief Field knockbackOnTrigger, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_knockbackOnTrigger, put=__cordl_internal_set_knockbackOnTrigger)) bool  knockbackOnTrigger;

/// @brief Field landedFX, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_landedFX, put=__cordl_internal_set_landedFX)) ::UnityW<::UnityEngine::GameObject>  landedFX;

/// @brief Field requiredTapDistance, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_requiredTapDistance, put=__cordl_internal_set_requiredTapDistance)) float_t  requiredTapDistance;

/// @brief Field startFallFX, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_startFallFX, put=__cordl_internal_set_startFallFX)) ::UnityW<::UnityEngine::GameObject>  startFallFX;

/// @brief Field tapCollision, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tapCollision, put=__cordl_internal_set_tapCollision)) ::UnityW<::UnityEngine::SphereCollider>  tapCollision;

/// @brief Field tapFX, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_tapFX, put=__cordl_internal_set_tapFX)) ::UnityW<::UnityEngine::ParticleSystem>  tapFX;

/// @brief Field trailFX, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_trailFX, put=__cordl_internal_set_trailFX)) ::UnityW<::UnityEngine::ParticleSystem>  trailFX;

/// @brief Field transitionPos, offset 0x11c, size 0xc 
 __declspec(property(get=__cordl_internal_get_transitionPos, put=__cordl_internal_set_transitionPos)) ::UnityEngine::Vector3  transitionPos;

/// @brief Field zoneManager, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneManager, put=__cordl_internal_set_zoneManager)) ::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>  zoneManager;

/// [IteratorStateMachine(typeof(TappableGuardianIdol::<DoLookingAround>d__54))]
/// @brief Method DoLookingAround, addr 0x598df2c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoLookingAround() ;

/// @brief Method EaseInOut, addr 0x598e12c, size 0x50, virtual false, abstract: false, final false
inline float_t EaseInOut(float_t  input) ;

/// @brief Method MovePositions, addr 0x598dbbc, size 0x58, virtual false, abstract: false, final false
inline void MovePositions(::UnityEngine::Vector3  finalPosition) ;

static inline ::GlobalNamespace::TappableGuardianIdol* New_ctor() ;

/// @brief Method OnDisable, addr 0x598d748, size 0x40, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x598d718, size 0x30, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTapLocal, addr 0x598d7ac, size 0x280, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnZoneActiveStateChanged, addr 0x598d788, size 0x24, virtual false, abstract: false, final false
inline void OnZoneActiveStateChanged(bool  zoneActive) ;

/// @brief Method SetPosition, addr 0x598da2c, size 0xa4, virtual false, abstract: false, final false
inline void SetPosition(::UnityEngine::Vector3  position) ;

/// [IteratorStateMachine(typeof(TappableGuardianIdol::<ShowActivationEffect>d__56))]
/// @brief Method ShowActivationEffect, addr 0x598de78, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ShowActivationEffect() ;

/// @brief Method StartLookingAround, addr 0x598dee4, size 0x48, virtual false, abstract: false, final false
inline void StartLookingAround() ;

/// @brief Method StopLookingAround, addr 0x598df98, size 0x90, virtual false, abstract: false, final false
inline void StopLookingAround() ;

/// [IteratorStateMachine(typeof(TappableGuardianIdol::<TransitionToNextIdol>d__57))]
/// @brief Method TransitionToNextIdol, addr 0x598dc14, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TransitionToNextIdol() ;

/// @brief Method UpdateActivationProgress, addr 0x598dc80, size 0x1f8, virtual false, abstract: false, final false
inline void UpdateActivationProgress(float_t  rawProgress, bool  progressing) ;

/// @brief Method UpdateStageActivatedObjects, addr 0x598dad0, size 0x80, virtual false, abstract: false, final false
inline void UpdateStageActivatedObjects() ;

/// [CompilerGenerated]
/// @brief Method <DoLookingAround>g__GetClosestPlayerPosition|54_2, addr 0x598e514, size 0x458, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> _DoLookingAround_g__GetClosestPlayerPosition_54_2(::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <DoLookingAround>g__PickLookTarget|54_0, addr 0x598e378, size 0x19c, virtual false, abstract: false, final false
inline void _DoLookingAround_g__PickLookTarget_54_0(::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <DoLookingAround>g__SetLookTime|54_1, addr 0x598e96c, size 0x64, virtual false, abstract: false, final false
inline void _DoLookingAround_g__SetLookTime_54_1(::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>  _cordl_fixed_empty_name_whitespace) ;

/// [IteratorStateMachine(typeof(TappableGuardianIdol::<<SetPosition>g__Unshrink|49_0>d))]
/// [CompilerGenerated]
/// @brief Method <SetPosition>g__Unshrink|49_0, addr 0x598db50, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _SetPosition_g__Unshrink_49_0() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__activateSound() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__activateSound() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__activationRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__activationRoutine() ;

constexpr ::ArrayW<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound> const& __cordl_internal_get__activationStageSounds() const;

constexpr ::ArrayW<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound>& __cordl_internal_get__activationStageSounds() ;

constexpr int32_t const& __cordl_internal_get__activationState() const;

constexpr int32_t& __cordl_internal_get__activationState() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audio() ;

constexpr float_t const& __cordl_internal_get__baseLookRate() const;

constexpr float_t& __cordl_internal_get__baseLookRate() ;

constexpr float_t const& __cordl_internal_get__colliderBaseRadius() const;

constexpr float_t& __cordl_internal_get__colliderBaseRadius() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__descentSound() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__descentSound() ;

constexpr bool const& __cordl_internal_get__isChangingPositions_k__BackingField() const;

constexpr bool& __cordl_internal_get__isChangingPositions_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__lookInterval() const;

constexpr float_t& __cordl_internal_get__lookInterval() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__lookRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__lookRoot() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__lookRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__lookRoutine() ;

constexpr float_t const& __cordl_internal_get__randomLookChance() const;

constexpr float_t& __cordl_internal_get__randomLookChance() ;

constexpr ::ArrayW<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject> const& __cordl_internal_get__stageActivatedObjects() const;

constexpr ::ArrayW<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>& __cordl_internal_get__stageActivatedObjects() ;

constexpr bool const& __cordl_internal_get__zoneIsActive() const;

constexpr bool& __cordl_internal_get__zoneIsActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activatedFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activatedFX() ;

constexpr float_t const& __cordl_internal_get_activationDuration() const;

constexpr float_t& __cordl_internal_get_activationDuration() ;

constexpr float_t const& __cordl_internal_get_activeHeight() const;

constexpr float_t& __cordl_internal_get_activeHeight() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_bulgeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_bulgeCurve() ;

constexpr float_t const& __cordl_internal_get_bulgeScale() const;

constexpr float_t& __cordl_internal_get_bulgeScale() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_explodeFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_explodeFX() ;

constexpr float_t const& __cordl_internal_get_fallDuration() const;

constexpr float_t& __cordl_internal_get_fallDuration() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_fallStartOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_fallStartOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_finalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_finalPos() ;

constexpr float_t const& __cordl_internal_get_floatDuration() const;

constexpr float_t& __cordl_internal_get_floatDuration() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_idolMeshRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_idolMeshRoot() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_idolVisualRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_idolVisualRoot() ;

constexpr float_t const& __cordl_internal_get_inactiveDuration() const;

constexpr float_t& __cordl_internal_get_inactiveDuration() ;

constexpr bool const& __cordl_internal_get_isActivationReady() const;

constexpr bool& __cordl_internal_get_isActivationReady() ;

constexpr bool const& __cordl_internal_get_knockbackOnActivate() const;

constexpr bool& __cordl_internal_get_knockbackOnActivate() ;

constexpr bool const& __cordl_internal_get_knockbackOnLand() const;

constexpr bool& __cordl_internal_get_knockbackOnLand() ;

constexpr bool const& __cordl_internal_get_knockbackOnTrigger() const;

constexpr bool& __cordl_internal_get_knockbackOnTrigger() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_landedFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_landedFX() ;

constexpr float_t const& __cordl_internal_get_requiredTapDistance() const;

constexpr float_t& __cordl_internal_get_requiredTapDistance() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_startFallFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_startFallFX() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_tapCollision() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_tapCollision() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_tapFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_tapFX() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_trailFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_trailFX() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_transitionPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_transitionPos() ;

constexpr ::UnityW<::GlobalNamespace::GorillaGuardianZoneManager> const& __cordl_internal_get_zoneManager() const;

constexpr ::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>& __cordl_internal_get_zoneManager() ;

constexpr void __cordl_internal_set__activateSound(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set__activationRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__activationStageSounds(::ArrayW<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound>  value) ;

constexpr void __cordl_internal_set__activationState(int32_t  value) ;

constexpr void __cordl_internal_set__audio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__baseLookRate(float_t  value) ;

constexpr void __cordl_internal_set__colliderBaseRadius(float_t  value) ;

constexpr void __cordl_internal_set__descentSound(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set__isChangingPositions_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__lookInterval(float_t  value) ;

constexpr void __cordl_internal_set__lookRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__lookRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__randomLookChance(float_t  value) ;

constexpr void __cordl_internal_set__stageActivatedObjects(::ArrayW<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>  value) ;

constexpr void __cordl_internal_set__zoneIsActive(bool  value) ;

constexpr void __cordl_internal_set_activatedFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_activationDuration(float_t  value) ;

constexpr void __cordl_internal_set_activeHeight(float_t  value) ;

constexpr void __cordl_internal_set_bulgeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_bulgeScale(float_t  value) ;

constexpr void __cordl_internal_set_explodeFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_fallDuration(float_t  value) ;

constexpr void __cordl_internal_set_fallStartOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_finalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_floatDuration(float_t  value) ;

constexpr void __cordl_internal_set_idolMeshRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_idolVisualRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_inactiveDuration(float_t  value) ;

constexpr void __cordl_internal_set_isActivationReady(bool  value) ;

constexpr void __cordl_internal_set_knockbackOnActivate(bool  value) ;

constexpr void __cordl_internal_set_knockbackOnLand(bool  value) ;

constexpr void __cordl_internal_set_knockbackOnTrigger(bool  value) ;

constexpr void __cordl_internal_set_landedFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_requiredTapDistance(float_t  value) ;

constexpr void __cordl_internal_set_startFallFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_tapCollision(::UnityW<::UnityEngine::SphereCollider>  value) ;

constexpr void __cordl_internal_set_tapFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_trailFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_transitionPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_zoneManager(::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>  value) ;

/// @brief Method .ctor, addr 0x598e17c, size 0x1d4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_isChangingPositions, addr 0x598d708, size 0x8, virtual false, abstract: false, final false
inline bool get_isChangingPositions() ;

/// [CompilerGenerated]
/// @brief Method set_isChangingPositions, addr 0x598d710, size 0x8, virtual false, abstract: false, final false
inline void set_isChangingPositions(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TappableGuardianIdol() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableGuardianIdol", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableGuardianIdol(TappableGuardianIdol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableGuardianIdol", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableGuardianIdol(TappableGuardianIdol const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2572};

/// [SerializeField]
/// @brief Field zoneManager, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>  ___zoneManager;

/// [SerializeField]
/// @brief Field floatDuration, offset: 0x50, size: 0x4, def value: None
 float_t  ___floatDuration;

/// [SerializeField]
/// @brief Field fallDuration, offset: 0x54, size: 0x4, def value: None
 float_t  ___fallDuration;

/// [SerializeField]
/// @brief Field inactiveDuration, offset: 0x58, size: 0x4, def value: None
 float_t  ___inactiveDuration;

/// [SerializeField]
/// @brief Field activationDuration, offset: 0x5c, size: 0x4, def value: None
 float_t  ___activationDuration;

/// [SerializeField]
/// @brief Field activeHeight, offset: 0x60, size: 0x4, def value: None
 float_t  ___activeHeight;

/// [SerializeField]
/// @brief Field knockbackOnTrigger, offset: 0x64, size: 0x1, def value: None
 bool  ___knockbackOnTrigger;

/// [SerializeField]
/// @brief Field knockbackOnLand, offset: 0x65, size: 0x1, def value: None
 bool  ___knockbackOnLand;

/// [SerializeField]
/// @brief Field knockbackOnActivate, offset: 0x66, size: 0x1, def value: None
 bool  ___knockbackOnActivate;

/// [SerializeField]
/// @brief Field fallStartOffset, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___fallStartOffset;

/// [SerializeField]
/// @brief Field trailFX, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___trailFX;

/// [SerializeField]
/// @brief Field tapFX, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___tapFX;

/// [SerializeField]
/// @brief Field explodeFX, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___explodeFX;

/// [SerializeField]
/// @brief Field startFallFX, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___startFallFX;

/// [SerializeField]
/// @brief Field landedFX, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___landedFX;

/// [SerializeField]
/// @brief Field activatedFX, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___activatedFX;

/// [SerializeField]
/// @brief Field tapCollision, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ___tapCollision;

/// [SerializeField]
/// @brief Field idolVisualRoot, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___idolVisualRoot;

/// [SerializeField]
/// @brief Field idolMeshRoot, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___idolMeshRoot;

/// [SerializeField]
/// @brief Field bulgeCurve, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___bulgeCurve;

/// [SerializeField]
/// @brief Field bulgeScale, offset: 0xc8, size: 0x4, def value: None
 float_t  ___bulgeScale;

/// [SerializeField]
/// @brief Field _audio, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audio;

/// [SerializeField]
/// @brief Field _descentSound, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ____descentSound;

/// [SerializeField]
/// @brief Field _activateSound, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ____activateSound;

/// [SerializeField]
/// @brief Field _activationStageSounds, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound>  ____activationStageSounds;

/// [SerializeField]
/// @brief Field _stageActivatedObjects, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>  ____stageActivatedObjects;

/// [Header("Look Around")]
/// [SerializeField]
/// @brief Field _lookRoot, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____lookRoot;

/// [SerializeField]
/// @brief Field _lookInterval, offset: 0x100, size: 0x4, def value: None
 float_t  ____lookInterval;

/// [SerializeField]
/// @brief Field _baseLookRate, offset: 0x104, size: 0x4, def value: None
 float_t  ____baseLookRate;

/// [SerializeField]
/// @brief Field _randomLookChance, offset: 0x108, size: 0x4, def value: None
 float_t  ____randomLookChance;

/// @brief Field _lookRoutine, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____lookRoutine;

/// [CompilerGenerated]
/// @brief Field <isChangingPositions>k__BackingField, offset: 0x118, size: 0x1, def value: None
 bool  ____isChangingPositions_k__BackingField;

/// @brief Field transitionPos, offset: 0x11c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___transitionPos;

/// @brief Field finalPos, offset: 0x128, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___finalPos;

/// @brief Field _activationState, offset: 0x134, size: 0x4, def value: None
 int32_t  ____activationState;

/// @brief Field _activationRoutine, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____activationRoutine;

/// @brief Field _colliderBaseRadius, offset: 0x140, size: 0x4, def value: None
 float_t  ____colliderBaseRadius;

/// @brief Field _zoneIsActive, offset: 0x144, size: 0x1, def value: None
 bool  ____zoneIsActive;

/// @brief Field isActivationReady, offset: 0x145, size: 0x1, def value: None
 bool  ___isActivationReady;

/// @brief Field requiredTapDistance, offset: 0x148, size: 0x4, def value: None
 float_t  ___requiredTapDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___zoneManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___floatDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___fallDuration) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___inactiveDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___activationDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___activeHeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___knockbackOnTrigger) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___knockbackOnLand) == 0x65, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___knockbackOnActivate) == 0x66, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___fallStartOffset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___trailFX) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___tapFX) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___explodeFX) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___startFallFX) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___landedFX) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___activatedFX) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___tapCollision) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___idolVisualRoot) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___idolMeshRoot) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___bulgeCurve) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___bulgeScale) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____audio) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____descentSound) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____activateSound) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____activationStageSounds) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____stageActivatedObjects) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____lookRoot) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____lookInterval) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____baseLookRate) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____randomLookChance) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____lookRoutine) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____isChangingPositions_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___transitionPos) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___finalPos) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____activationState) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____activationRoutine) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____colliderBaseRadius) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ____zoneIsActive) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___isActivationReady) == 0x145, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol, ___requiredTapDistance) == 0x148, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableGuardianIdol) == 0x150, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TappableGuardianIdol/<TransitionToNextIdol>d__57
class CORDL_TYPE TappableGuardianIdol__TransitionToNextIdol_d__57 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TappableGuardianIdol>  __4__this;

/// @brief Field <activateLerp>5__5, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__activateLerp_5__5, put=__cordl_internal_set__activateLerp_5__5)) float_t  _activateLerp_5__5;

/// @brief Field <animCurve>5__6, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__animCurve_5__6, put=__cordl_internal_set__animCurve_5__6)) ::UnityEngine::AnimationCurve*  _animCurve_5__6;

/// @brief Field <destinationPos>5__4, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__destinationPos_5__4, put=__cordl_internal_set__destinationPos_5__4)) ::UnityEngine::Vector3  _destinationPos_5__4;

/// @brief Field <fall>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__fall_5__2, put=__cordl_internal_set__fall_5__2)) float_t  _fall_5__2;

/// @brief Field <startPos>5__3, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPos_5__3, put=__cordl_internal_set__startPos_5__3)) ::UnityEngine::Vector3  _startPos_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x598ef68, size 0x6cc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x598f634, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x598f63c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x598f674, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x598ef64, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__activateLerp_5__5() const;

constexpr float_t& __cordl_internal_get__activateLerp_5__5() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animCurve_5__6() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animCurve_5__6() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__destinationPos_5__4() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__destinationPos_5__4() ;

constexpr float_t const& __cordl_internal_get__fall_5__2() const;

constexpr float_t& __cordl_internal_get__fall_5__2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPos_5__3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPos_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TappableGuardianIdol>  value) ;

constexpr void __cordl_internal_set__activateLerp_5__5(float_t  value) ;

constexpr void __cordl_internal_set__animCurve_5__6(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__destinationPos_5__4(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__fall_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startPos_5__3(::UnityEngine::Vector3  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x598e104, size 0x28, virtual false, abstract: false, final false
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
constexpr TappableGuardianIdol__TransitionToNextIdol_d__57() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableGuardianIdol__TransitionToNextIdol_d__57", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableGuardianIdol__TransitionToNextIdol_d__57(TappableGuardianIdol__TransitionToNextIdol_d__57 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableGuardianIdol__TransitionToNextIdol_d__57", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableGuardianIdol__TransitionToNextIdol_d__57(TappableGuardianIdol__TransitionToNextIdol_d__57 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2571};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TappableGuardianIdol>  _____4__this;

/// @brief Field <fall>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____fall_5__2;

/// @brief Field <startPos>5__3, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPos_5__3;

/// @brief Field <destinationPos>5__4, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____destinationPos_5__4;

/// @brief Field <activateLerp>5__5, offset: 0x44, size: 0x4, def value: None
 float_t  ____activateLerp_5__5;

/// @brief Field <animCurve>5__6, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animCurve_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57, ____fall_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57, ____startPos_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57, ____destinationPos_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57, ____activateLerp_5__5) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57, ____animCurve_5__6) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TappableGuardianIdol/<ShowActivationEffect>d__56
class CORDL_TYPE TappableGuardianIdol__ShowActivationEffect_d__56 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TappableGuardianIdol>  __4__this;

/// @brief Field <bulgeDuration>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__bulgeDuration_5__2, put=__cordl_internal_set__bulgeDuration_5__2)) float_t  _bulgeDuration_5__2;

/// @brief Field <lerpVal>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerpVal_5__3, put=__cordl_internal_set__lerpVal_5__3)) float_t  _lerpVal_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x598ed94, size 0x188, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x598ef1c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x598ef24, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x598ef5c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x598ed90, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__bulgeDuration_5__2() const;

constexpr float_t& __cordl_internal_get__bulgeDuration_5__2() ;

constexpr float_t const& __cordl_internal_get__lerpVal_5__3() const;

constexpr float_t& __cordl_internal_get__lerpVal_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TappableGuardianIdol>  value) ;

constexpr void __cordl_internal_set__bulgeDuration_5__2(float_t  value) ;

constexpr void __cordl_internal_set__lerpVal_5__3(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x598e0dc, size 0x28, virtual false, abstract: false, final false
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
constexpr TappableGuardianIdol__ShowActivationEffect_d__56() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableGuardianIdol__ShowActivationEffect_d__56", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableGuardianIdol__ShowActivationEffect_d__56(TappableGuardianIdol__ShowActivationEffect_d__56 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableGuardianIdol__ShowActivationEffect_d__56", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableGuardianIdol__ShowActivationEffect_d__56(TappableGuardianIdol__ShowActivationEffect_d__56 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2570};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TappableGuardianIdol>  _____4__this;

/// @brief Field <bulgeDuration>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____bulgeDuration_5__2;

/// @brief Field <lerpVal>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____lerpVal_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56, ____bulgeDuration_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56, ____lerpVal_5__3) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, TappableGuardianIdol::<>c__DisplayClass54_0
namespace GlobalNamespace {
// Is value type: false
// CS Name: TappableGuardianIdol/<DoLookingAround>d__54
class CORDL_TYPE TappableGuardianIdol__DoLookingAround_d__54 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TappableGuardianIdol>  __4__this;

/// @brief Field <>8__1, offset 0x28, size 0x20 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0  __8__1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x598ebbc, size 0x18c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x598ed48, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x598ed50, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x598ed88, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x598ebb8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0 const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0& __cordl_internal_get___8__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TappableGuardianIdol>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x598e028, size 0x28, virtual false, abstract: false, final false
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
constexpr TappableGuardianIdol__DoLookingAround_d__54() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableGuardianIdol__DoLookingAround_d__54", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableGuardianIdol__DoLookingAround_d__54(TappableGuardianIdol__DoLookingAround_d__54 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableGuardianIdol__DoLookingAround_d__54", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableGuardianIdol__DoLookingAround_d__54(TappableGuardianIdol__DoLookingAround_d__54 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2569};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TappableGuardianIdol>  _____4__this;

/// @brief Field <>8__1, offset: 0x28, size: 0x20, def value: None
 ::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54, _____8__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TappableGuardianIdol/<<SetPosition>g__Unshrink|49_0>d
class CORDL_TYPE TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TappableGuardianIdol>  __4__this;

/// @brief Field <growDuration>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__growDuration_5__3, put=__cordl_internal_set__growDuration_5__3)) float_t  _growDuration_5__3;

/// @brief Field <lerpVal>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerpVal_5__2, put=__cordl_internal_set__lerpVal_5__2)) float_t  _lerpVal_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x598e9d4, size 0x19c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x598eb70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x598eb78, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x598ebb0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x598e9d0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__growDuration_5__3() const;

constexpr float_t& __cordl_internal_get__growDuration_5__3() ;

constexpr float_t const& __cordl_internal_get__lerpVal_5__2() const;

constexpr float_t& __cordl_internal_get__lerpVal_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TappableGuardianIdol>  value) ;

constexpr void __cordl_internal_set__growDuration_5__3(float_t  value) ;

constexpr void __cordl_internal_set__lerpVal_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x598e350, size 0x28, virtual false, abstract: false, final false
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
constexpr TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d(TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d(TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2567};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TappableGuardianIdol>  _____4__this;

/// @brief Field <lerpVal>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____lerpVal_5__2;

/// @brief Field <growDuration>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____growDuration_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d, ____lerpVal_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d, ____growDuration_5__3) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
