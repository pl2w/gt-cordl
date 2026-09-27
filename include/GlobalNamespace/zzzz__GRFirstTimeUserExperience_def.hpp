#pragma once
// IWYU pragma private; include "GlobalNamespace/GRFirstTimeUserExperience.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRFirstTimeUserExperience_TransitionState_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRFirstTimeUserExperience)
namespace GlobalNamespace {
class DisableGameObjectDelayed;
}
namespace GlobalNamespace {
struct GRFirstTimeUserExperience_TransitionState;
}
namespace GlobalNamespace {
class GameLight;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRFirstTimeUserExperience;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRFirstTimeUserExperience*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRFirstTimeUserExperience*, "", "GRFirstTimeUserExperience");
// Dependencies GRFirstTimeUserExperience::TransitionState, GTZone, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRFirstTimeUserExperience
class CORDL_TYPE GRFirstTimeUserExperience : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TransitionState = ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState;

/// @brief Field audioSource, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field delayObjects, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_delayObjects, put=__cordl_internal_set_delayObjects)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DisableGameObjectDelayed>>*  delayObjects;

/// @brief Field flickerAudio, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_flickerAudio, put=__cordl_internal_set_flickerAudio)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  flickerAudio;

/// @brief Field flickerAudioCount, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_flickerAudioCount, put=__cordl_internal_set_flickerAudioCount)) int32_t  flickerAudioCount;

/// @brief Field flickerDuration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_flickerDuration, put=__cordl_internal_set_flickerDuration)) float_t  flickerDuration;

/// @brief Field flickerLightWasOff, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_flickerLightWasOff, put=__cordl_internal_set_flickerLightWasOff)) bool  flickerLightWasOff;

/// @brief Field flickerSphere, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_flickerSphere, put=__cordl_internal_set_flickerSphere)) ::UnityW<::UnityEngine::GameObject>  flickerSphere;

/// @brief Field flickerSphereOrigParent, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_flickerSphereOrigParent, put=__cordl_internal_set_flickerSphereOrigParent)) ::UnityW<::UnityEngine::Transform>  flickerSphereOrigParent;

/// @brief Field flickerTimeline, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_flickerTimeline, put=__cordl_internal_set_flickerTimeline)) ::UnityEngine::AnimationCurve*  flickerTimeline;

/// @brief Field joinRoomTrigger, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinRoomTrigger, put=__cordl_internal_set_joinRoomTrigger)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  joinRoomTrigger;

/// @brief Field logoDisplayTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_logoDisplayTime, put=__cordl_internal_set_logoDisplayTime)) float_t  logoDisplayTime;

/// @brief Field logoQuad, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_logoQuad, put=__cordl_internal_set_logoQuad)) ::UnityW<::UnityEngine::GameObject>  logoQuad;

/// @brief Field playerLight, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerLight, put=__cordl_internal_set_playerLight)) ::UnityW<::GlobalNamespace::GameLight>  playerLight;

/// @brief Field rootObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rootObject, put=__cordl_internal_set_rootObject)) ::UnityW<::UnityEngine::GameObject>  rootObject;

/// @brief Field spawnPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPoint, put=__cordl_internal_set_spawnPoint)) ::UnityW<::UnityEngine::Transform>  spawnPoint;

/// @brief Field stateStartTime, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) float_t  stateStartTime;

/// @brief Field teleportLocation, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportLocation, put=__cordl_internal_set_teleportLocation)) ::UnityW<::UnityEngine::Transform>  teleportLocation;

/// @brief Field teleportSettleTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_teleportSettleTime, put=__cordl_internal_set_teleportSettleTime)) float_t  teleportSettleTime;

/// @brief Field teleportZone, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_teleportZone, put=__cordl_internal_set_teleportZone)) ::GlobalNamespace::GTZone  teleportZone;

/// @brief Field transitionDelay, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_transitionDelay, put=__cordl_internal_set_transitionDelay)) float_t  transitionDelay;

/// @brief Field transitionState, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_transitionState, put=__cordl_internal_set_transitionState)) ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState  transitionState;

/// @brief Method ChangeState, addr 0x589ac00, size 0x4e0, virtual false, abstract: false, final false
inline void ChangeState(::GlobalNamespace::GRFirstTimeUserExperience_TransitionState  state) ;

/// @brief Method InterruptWaitingTimer, addr 0x589b1dc, size 0x98, virtual false, abstract: false, final false
inline void InterruptWaitingTimer() ;

static inline ::GlobalNamespace::GRFirstTimeUserExperience* New_ctor() ;

/// @brief Method OnEnable, addr 0x589aa38, size 0x1c8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnZoneLoadComplete, addr 0x589b0e0, size 0xfc, virtual false, abstract: false, final false
inline void OnZoneLoadComplete() ;

/// [ContextMenu("Set Player Pref")]
/// @brief Method RemovePlayerPref, addr 0x589a9d4, size 0x64, virtual false, abstract: false, final false
inline void RemovePlayerPref() ;

/// @brief Method Update, addr 0x589b274, size 0x2ac, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DisableGameObjectDelayed>>* const& __cordl_internal_get_delayObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DisableGameObjectDelayed>>*& __cordl_internal_get_delayObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_flickerAudio() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_flickerAudio() ;

constexpr int32_t const& __cordl_internal_get_flickerAudioCount() const;

constexpr int32_t& __cordl_internal_get_flickerAudioCount() ;

constexpr float_t const& __cordl_internal_get_flickerDuration() const;

constexpr float_t& __cordl_internal_get_flickerDuration() ;

constexpr bool const& __cordl_internal_get_flickerLightWasOff() const;

constexpr bool& __cordl_internal_get_flickerLightWasOff() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_flickerSphere() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_flickerSphere() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_flickerSphereOrigParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_flickerSphereOrigParent() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_flickerTimeline() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_flickerTimeline() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get_joinRoomTrigger() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get_joinRoomTrigger() ;

constexpr float_t const& __cordl_internal_get_logoDisplayTime() const;

constexpr float_t& __cordl_internal_get_logoDisplayTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_logoQuad() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_logoQuad() ;

constexpr ::UnityW<::GlobalNamespace::GameLight> const& __cordl_internal_get_playerLight() const;

constexpr ::UnityW<::GlobalNamespace::GameLight>& __cordl_internal_get_playerLight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rootObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rootObject() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnPoint() ;

constexpr float_t const& __cordl_internal_get_stateStartTime() const;

constexpr float_t& __cordl_internal_get_stateStartTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_teleportLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_teleportLocation() ;

constexpr float_t const& __cordl_internal_get_teleportSettleTime() const;

constexpr float_t& __cordl_internal_get_teleportSettleTime() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_teleportZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_teleportZone() ;

constexpr float_t const& __cordl_internal_get_transitionDelay() const;

constexpr float_t& __cordl_internal_get_transitionDelay() ;

constexpr ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState const& __cordl_internal_get_transitionState() const;

constexpr ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState& __cordl_internal_get_transitionState() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_delayObjects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DisableGameObjectDelayed>>*  value) ;

constexpr void __cordl_internal_set_flickerAudio(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_flickerAudioCount(int32_t  value) ;

constexpr void __cordl_internal_set_flickerDuration(float_t  value) ;

constexpr void __cordl_internal_set_flickerLightWasOff(bool  value) ;

constexpr void __cordl_internal_set_flickerSphere(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_flickerSphereOrigParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_flickerTimeline(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_joinRoomTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_logoDisplayTime(float_t  value) ;

constexpr void __cordl_internal_set_logoQuad(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_playerLight(::UnityW<::GlobalNamespace::GameLight>  value) ;

constexpr void __cordl_internal_set_rootObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spawnPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_stateStartTime(float_t  value) ;

constexpr void __cordl_internal_set_teleportLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_teleportSettleTime(float_t  value) ;

constexpr void __cordl_internal_set_teleportZone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_transitionDelay(float_t  value) ;

constexpr void __cordl_internal_set_transitionState(::GlobalNamespace::GRFirstTimeUserExperience_TransitionState  value) ;

/// @brief Method .ctor, addr 0x589b520, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRFirstTimeUserExperience() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRFirstTimeUserExperience", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRFirstTimeUserExperience(GRFirstTimeUserExperience && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRFirstTimeUserExperience", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRFirstTimeUserExperience(GRFirstTimeUserExperience const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1976};

/// @brief Field spawnPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnPoint;

/// @brief Field rootObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rootObject;

/// @brief Field flickerSphere, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___flickerSphere;

/// @brief Field logoQuad, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___logoQuad;

/// @brief Field flickerTimeline, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___flickerTimeline;

/// @brief Field flickerDuration, offset: 0x48, size: 0x4, def value: None
 float_t  ___flickerDuration;

/// @brief Field teleportZone, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___teleportZone;

/// @brief Field teleportLocation, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___teleportLocation;

/// @brief Field transitionDelay, offset: 0x58, size: 0x4, def value: None
 float_t  ___transitionDelay;

/// @brief Field logoDisplayTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ___logoDisplayTime;

/// @brief Field teleportSettleTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___teleportSettleTime;

/// @brief Field joinRoomTrigger, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ___joinRoomTrigger;

/// @brief Field flickerAudio, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___flickerAudio;

/// @brief Field delayObjects, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DisableGameObjectDelayed>>*  ___delayObjects;

/// @brief Field flickerSphereOrigParent, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___flickerSphereOrigParent;

/// @brief Field stateStartTime, offset: 0x88, size: 0x4, def value: None
 float_t  ___stateStartTime;

/// @brief Field flickerLightWasOff, offset: 0x8c, size: 0x1, def value: None
 bool  ___flickerLightWasOff;

/// @brief Field flickerAudioCount, offset: 0x90, size: 0x4, def value: None
 int32_t  ___flickerAudioCount;

/// @brief Field audioSource, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field transitionState, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState  ___transitionState;

/// @brief Field playerLight, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameLight>  ___playerLight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___spawnPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___rootObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___flickerSphere) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___logoQuad) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___flickerTimeline) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___flickerDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___teleportZone) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___teleportLocation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___transitionDelay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___logoDisplayTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___teleportSettleTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___joinRoomTrigger) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___flickerAudio) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___delayObjects) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___flickerSphereOrigParent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___stateStartTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___flickerLightWasOff) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___flickerAudioCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___audioSource) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___transitionState) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience, ___playerLight) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRFirstTimeUserExperience) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
