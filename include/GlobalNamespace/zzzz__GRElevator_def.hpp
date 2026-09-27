#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRElevatorManager_ElevatorLocation_def.hpp"
#include "GlobalNamespace/zzzz__GRElevator_ElevatorState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRElevator)
namespace GlobalNamespace {
class GRElevatorButton;
}
namespace GlobalNamespace {
struct GRElevator_ButtonType;
}
namespace GlobalNamespace {
struct GRElevator_ElevatorState;
}
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshPro;
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
class GRElevator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRElevator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRElevator*, "", "GRElevator");
// Dependencies GRElevator::ElevatorState, GRElevatorManager::ElevatorLocation, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRElevator
class CORDL_TYPE GRElevator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ButtonType = ::GlobalNamespace::GRElevator_ButtonType;

using ElevatorState = ::GlobalNamespace::GRElevator_ElevatorState;

/// @brief Field adjustedOffsetTime, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_adjustedOffsetTime, put=__cordl_internal_set_adjustedOffsetTime)) float_t  adjustedOffsetTime;

/// @brief Field ambientAudio, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientAudio, put=__cordl_internal_set_ambientAudio)) ::UnityW<::UnityEngine::AudioSource>  ambientAudio;

/// @brief Field ambientLoopClip, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientLoopClip, put=__cordl_internal_set_ambientLoopClip)) ::UnityW<::UnityEngine::AudioClip>  ambientLoopClip;

/// @brief Field buttonBank, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonBank, put=__cordl_internal_set_buttonBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  buttonBank;

/// @brief Field closeBeginDuration, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_closeBeginDuration, put=__cordl_internal_set_closeBeginDuration)) float_t  closeBeginDuration;

/// @brief Field closeEndDuration, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_closeEndDuration, put=__cordl_internal_set_closeEndDuration)) float_t  closeEndDuration;

/// @brief Field closeTravelDuration, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_closeTravelDuration, put=__cordl_internal_set_closeTravelDuration)) float_t  closeTravelDuration;

/// @brief Field closedTargetBottom, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_closedTargetBottom, put=__cordl_internal_set_closedTargetBottom)) ::UnityW<::UnityEngine::Transform>  closedTargetBottom;

/// @brief Field closedTargetTop, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_closedTargetTop, put=__cordl_internal_set_closedTargetTop)) ::UnityW<::UnityEngine::Transform>  closedTargetTop;

/// @brief Field collidersAndVisuals, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersAndVisuals, put=__cordl_internal_set_collidersAndVisuals)) ::UnityW<::UnityEngine::GameObject>  collidersAndVisuals;

/// @brief Field dingClip, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_dingClip, put=__cordl_internal_set_dingClip)) ::UnityW<::UnityEngine::AudioClip>  dingClip;

/// @brief Field doorAudio, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorAudio, put=__cordl_internal_set_doorAudio)) ::UnityW<::UnityEngine::AudioSource>  doorAudio;

/// @brief Field doorCloseClip, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorCloseClip, put=__cordl_internal_set_doorCloseClip)) ::UnityW<::UnityEngine::AudioClip>  doorCloseClip;

/// @brief Field doorCloseSpeed, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorCloseSpeed, put=__cordl_internal_set_doorCloseSpeed)) float_t  doorCloseSpeed;

/// @brief Field doorMoveBeginTime, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorMoveBeginTime, put=__cordl_internal_set_doorMoveBeginTime)) float_t  doorMoveBeginTime;

/// @brief Field doorOpenClip, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorOpenClip, put=__cordl_internal_set_doorOpenClip)) ::UnityW<::UnityEngine::AudioClip>  doorOpenClip;

/// @brief Field doorOpenSpeed, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorOpenSpeed, put=__cordl_internal_set_doorOpenSpeed)) float_t  doorOpenSpeed;

/// @brief Field elevatorButtons, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_elevatorButtons, put=__cordl_internal_set_elevatorButtons)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevatorButton>>*  elevatorButtons;

/// @brief Field friendCollider, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendCollider, put=__cordl_internal_set_friendCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  friendCollider;

/// @brief Field innerText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_innerText, put=__cordl_internal_set_innerText)) ::UnityW<::TMPro::TextMeshPro>  innerText;

/// @brief Field joinTrigger, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinTrigger, put=__cordl_internal_set_joinTrigger)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  joinTrigger;

/// @brief Field location, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_location, put=__cordl_internal_set_location)) ::GlobalNamespace::GRElevatorManager_ElevatorLocation  location;

/// @brief Field lowerDoor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lowerDoor, put=__cordl_internal_set_lowerDoor)) ::UnityW<::UnityEngine::Transform>  lowerDoor;

/// @brief Field musicAudio, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicAudio, put=__cordl_internal_set_musicAudio)) ::UnityW<::UnityEngine::AudioSource>  musicAudio;

/// @brief Field openBeginDuration, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_openBeginDuration, put=__cordl_internal_set_openBeginDuration)) float_t  openBeginDuration;

/// @brief Field openEndDuration, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_openEndDuration, put=__cordl_internal_set_openEndDuration)) float_t  openEndDuration;

/// @brief Field openTargetBottom, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_openTargetBottom, put=__cordl_internal_set_openTargetBottom)) ::UnityW<::UnityEngine::Transform>  openTargetBottom;

/// @brief Field openTargetTop, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_openTargetTop, put=__cordl_internal_set_openTargetTop)) ::UnityW<::UnityEngine::Transform>  openTargetTop;

/// @brief Field openTravelDuration, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_openTravelDuration, put=__cordl_internal_set_openTravelDuration)) float_t  openTravelDuration;

/// @brief Field outerText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_outerText, put=__cordl_internal_set_outerText)) ::UnityW<::TMPro::TextMeshPro>  outerText;

/// @brief Field state, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRElevator_ElevatorState  state;

/// @brief Field travelDistance, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_travelDistance, put=__cordl_internal_set_travelDistance)) float_t  travelDistance;

/// @brief Field travellingLoopClip, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_travellingLoopClip, put=__cordl_internal_set_travellingLoopClip)) ::UnityW<::UnityEngine::AudioClip>  travellingLoopClip;

/// @brief Field typeButtonDict, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeButtonDict, put=__cordl_internal_set_typeButtonDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevator_ButtonType,::UnityW<::GlobalNamespace::GRElevatorButton>>*  typeButtonDict;

/// @brief Field upperDoor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_upperDoor, put=__cordl_internal_set_upperDoor)) ::UnityW<::UnityEngine::Transform>  upperDoor;

/// @brief Field videoAudio, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_videoAudio, put=__cordl_internal_set_videoAudio)) ::UnityW<::UnityEngine::AudioSource>  videoAudio;

/// @brief Field videoDisplay, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_videoDisplay, put=__cordl_internal_set_videoDisplay)) ::UnityW<::UnityEngine::GameObject>  videoDisplay;

/// @brief Method Awake, addr 0x5877eac, size 0x204, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoorIsClosing, addr 0x5878b9c, size 0x10, virtual false, abstract: false, final false
inline bool DoorIsClosing() ;

/// @brief Method DoorIsOpening, addr 0x5878b88, size 0x14, virtual false, abstract: false, final false
inline bool DoorIsOpening() ;

/// @brief Method DoorsFullyClosed, addr 0x5878850, size 0x80, virtual false, abstract: false, final false
inline bool DoorsFullyClosed() ;

/// @brief Method DoorsFullyOpen, addr 0x58788d0, size 0x80, virtual false, abstract: false, final false
inline bool DoorsFullyOpen() ;

static inline ::GlobalNamespace::GRElevator* New_ctor() ;

/// @brief Method OnDisable, addr 0x5877dcc, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5877cb8, size 0x38, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PhysicalElevatorUpdate, addr 0x5878bac, size 0x414, virtual false, abstract: false, final false
inline void PhysicalElevatorUpdate() ;

/// @brief Method PlayButtonPress, addr 0x5878520, size 0x18, virtual false, abstract: false, final false
inline void PlayButtonPress() ;

/// @brief Method PlayDing, addr 0x5878500, size 0x20, virtual false, abstract: false, final false
inline void PlayDing() ;

/// @brief Method PlayDoorCloseBegin, addr 0x58787b8, size 0x48, virtual false, abstract: false, final false
inline void PlayDoorCloseBegin() ;

/// @brief Method PlayDoorCloseTravel, addr 0x5878828, size 0x28, virtual false, abstract: false, final false
inline void PlayDoorCloseTravel() ;

/// @brief Method PlayDoorOpenBegin, addr 0x5878770, size 0x48, virtual false, abstract: false, final false
inline void PlayDoorOpenBegin() ;

/// @brief Method PlayDoorOpenTravel, addr 0x5878800, size 0x28, virtual false, abstract: false, final false
inline void PlayDoorOpenTravel() ;

/// @brief Method PlayElevatorMoving, addr 0x5878538, size 0xec, virtual false, abstract: false, final false
inline void PlayElevatorMoving() ;

/// @brief Method PlayElevatorMusic, addr 0x5878710, size 0x60, virtual false, abstract: false, final false
inline void PlayElevatorMusic(float_t  time) ;

/// @brief Method PlayElevatorStopped, addr 0x5878624, size 0xec, virtual false, abstract: false, final false
inline void PlayElevatorStopped() ;

/// @brief Method PressButton, addr 0x587822c, size 0x10, virtual false, abstract: false, final false
inline void PressButton(int32_t  type) ;

/// @brief Method PressButtonVisuals, addr 0x5878468, size 0x7c, virtual false, abstract: false, final false
inline void PressButtonVisuals(::GlobalNamespace::GRElevator_ButtonType  type) ;

/// @brief Method SetDoorClosedBeginTime, addr 0x5878950, size 0xec, virtual false, abstract: false, final false
inline void SetDoorClosedBeginTime() ;

/// @brief Method SetDoorOpenBeginTime, addr 0x5878a3c, size 0xec, virtual false, abstract: false, final false
inline void SetDoorOpenBeginTime() ;

/// @brief Method StateIsClosingState, addr 0x5878b7c, size 0xc, virtual false, abstract: false, final false
static inline bool StateIsClosingState(::GlobalNamespace::GRElevator_ElevatorState  checkState) ;

/// @brief Method StateIsOpeningState, addr 0x5878b6c, size 0x10, virtual false, abstract: false, final false
static inline bool StateIsOpeningState(::GlobalNamespace::GRElevator_ElevatorState  checkState) ;

/// @brief Method UpdateLocalState, addr 0x58780b0, size 0x17c, virtual false, abstract: false, final false
inline void UpdateLocalState(::GlobalNamespace::GRElevator_ElevatorState  newState) ;

/// @brief Method UpdateRemoteState, addr 0x5878b28, size 0x44, virtual false, abstract: false, final false
inline void UpdateRemoteState(::GlobalNamespace::GRElevator_ElevatorState  remoteNewState) ;

constexpr float_t const& __cordl_internal_get_adjustedOffsetTime() const;

constexpr float_t& __cordl_internal_get_adjustedOffsetTime() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_ambientAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_ambientAudio() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_ambientLoopClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_ambientLoopClip() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_buttonBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_buttonBank() ;

constexpr float_t const& __cordl_internal_get_closeBeginDuration() const;

constexpr float_t& __cordl_internal_get_closeBeginDuration() ;

constexpr float_t const& __cordl_internal_get_closeEndDuration() const;

constexpr float_t& __cordl_internal_get_closeEndDuration() ;

constexpr float_t const& __cordl_internal_get_closeTravelDuration() const;

constexpr float_t& __cordl_internal_get_closeTravelDuration() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_closedTargetBottom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_closedTargetBottom() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_closedTargetTop() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_closedTargetTop() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_collidersAndVisuals() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_collidersAndVisuals() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_dingClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_dingClip() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_doorAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_doorAudio() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_doorCloseClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_doorCloseClip() ;

constexpr float_t const& __cordl_internal_get_doorCloseSpeed() const;

constexpr float_t& __cordl_internal_get_doorCloseSpeed() ;

constexpr float_t const& __cordl_internal_get_doorMoveBeginTime() const;

constexpr float_t& __cordl_internal_get_doorMoveBeginTime() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_doorOpenClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_doorOpenClip() ;

constexpr float_t const& __cordl_internal_get_doorOpenSpeed() const;

constexpr float_t& __cordl_internal_get_doorOpenSpeed() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevatorButton>>* const& __cordl_internal_get_elevatorButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevatorButton>>*& __cordl_internal_get_elevatorButtons() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_friendCollider() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_friendCollider() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_innerText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_innerText() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get_joinTrigger() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get_joinTrigger() ;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& __cordl_internal_get_location() const;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& __cordl_internal_get_location() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lowerDoor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lowerDoor() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_musicAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_musicAudio() ;

constexpr float_t const& __cordl_internal_get_openBeginDuration() const;

constexpr float_t& __cordl_internal_get_openBeginDuration() ;

constexpr float_t const& __cordl_internal_get_openEndDuration() const;

constexpr float_t& __cordl_internal_get_openEndDuration() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_openTargetBottom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_openTargetBottom() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_openTargetTop() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_openTargetTop() ;

constexpr float_t const& __cordl_internal_get_openTravelDuration() const;

constexpr float_t& __cordl_internal_get_openTravelDuration() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_outerText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_outerText() ;

constexpr ::GlobalNamespace::GRElevator_ElevatorState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRElevator_ElevatorState& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_travelDistance() const;

constexpr float_t& __cordl_internal_get_travelDistance() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_travellingLoopClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_travellingLoopClip() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevator_ButtonType,::UnityW<::GlobalNamespace::GRElevatorButton>>* const& __cordl_internal_get_typeButtonDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevator_ButtonType,::UnityW<::GlobalNamespace::GRElevatorButton>>*& __cordl_internal_get_typeButtonDict() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_upperDoor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_upperDoor() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_videoAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_videoAudio() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_videoDisplay() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_videoDisplay() ;

constexpr void __cordl_internal_set_adjustedOffsetTime(float_t  value) ;

constexpr void __cordl_internal_set_ambientAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_ambientLoopClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_buttonBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_closeBeginDuration(float_t  value) ;

constexpr void __cordl_internal_set_closeEndDuration(float_t  value) ;

constexpr void __cordl_internal_set_closeTravelDuration(float_t  value) ;

constexpr void __cordl_internal_set_closedTargetBottom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_closedTargetTop(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_collidersAndVisuals(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_dingClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_doorAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_doorCloseClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_doorCloseSpeed(float_t  value) ;

constexpr void __cordl_internal_set_doorMoveBeginTime(float_t  value) ;

constexpr void __cordl_internal_set_doorOpenClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_doorOpenSpeed(float_t  value) ;

constexpr void __cordl_internal_set_elevatorButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevatorButton>>*  value) ;

constexpr void __cordl_internal_set_friendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_innerText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_joinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_location(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value) ;

constexpr void __cordl_internal_set_lowerDoor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_musicAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_openBeginDuration(float_t  value) ;

constexpr void __cordl_internal_set_openEndDuration(float_t  value) ;

constexpr void __cordl_internal_set_openTargetBottom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_openTargetTop(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_openTravelDuration(float_t  value) ;

constexpr void __cordl_internal_set_outerText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRElevator_ElevatorState  value) ;

constexpr void __cordl_internal_set_travelDistance(float_t  value) ;

constexpr void __cordl_internal_set_travellingLoopClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_typeButtonDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevator_ButtonType,::UnityW<::GlobalNamespace::GRElevatorButton>>*  value) ;

constexpr void __cordl_internal_set_upperDoor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_videoAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_videoDisplay(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5878fc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRElevator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRElevator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRElevator(GRElevator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRElevator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRElevator(GRElevator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1914};

/// @brief Field location, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GRElevatorManager_ElevatorLocation  ___location;

/// @brief Field upperDoor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___upperDoor;

/// @brief Field lowerDoor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lowerDoor;

/// @brief Field closedTargetTop, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___closedTargetTop;

/// @brief Field closedTargetBottom, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___closedTargetBottom;

/// @brief Field openTargetTop, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___openTargetTop;

/// @brief Field openTargetBottom, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___openTargetBottom;

/// @brief Field outerText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___outerText;

/// @brief Field innerText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___innerText;

/// @brief Field elevatorButtons, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevatorButton>>*  ___elevatorButtons;

/// @brief Field typeButtonDict, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevator_ButtonType,::UnityW<::GlobalNamespace::GRElevatorButton>>*  ___typeButtonDict;

/// @brief Field friendCollider, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___friendCollider;

/// @brief Field joinTrigger, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ___joinTrigger;

/// @brief Field buttonBank, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___buttonBank;

/// @brief Field doorAudio, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___doorAudio;

/// @brief Field ambientAudio, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___ambientAudio;

/// @brief Field musicAudio, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___musicAudio;

/// @brief Field travellingLoopClip, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___travellingLoopClip;

/// @brief Field ambientLoopClip, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___ambientLoopClip;

/// @brief Field dingClip, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___dingClip;

/// @brief Field doorOpenClip, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___doorOpenClip;

/// @brief Field doorCloseClip, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___doorCloseClip;

/// @brief Field adjustedOffsetTime, offset: 0xd0, size: 0x4, def value: None
 float_t  ___adjustedOffsetTime;

/// @brief Field doorMoveBeginTime, offset: 0xd4, size: 0x4, def value: None
 float_t  ___doorMoveBeginTime;

/// @brief Field doorOpenSpeed, offset: 0xd8, size: 0x4, def value: None
 float_t  ___doorOpenSpeed;

/// @brief Field doorCloseSpeed, offset: 0xdc, size: 0x4, def value: None
 float_t  ___doorCloseSpeed;

/// @brief Field closeBeginDuration, offset: 0xe0, size: 0x4, def value: None
 float_t  ___closeBeginDuration;

/// @brief Field closeTravelDuration, offset: 0xe4, size: 0x4, def value: None
 float_t  ___closeTravelDuration;

/// @brief Field closeEndDuration, offset: 0xe8, size: 0x4, def value: None
 float_t  ___closeEndDuration;

/// @brief Field openBeginDuration, offset: 0xec, size: 0x4, def value: None
 float_t  ___openBeginDuration;

/// @brief Field openTravelDuration, offset: 0xf0, size: 0x4, def value: None
 float_t  ___openTravelDuration;

/// @brief Field openEndDuration, offset: 0xf4, size: 0x4, def value: None
 float_t  ___openEndDuration;

/// @brief Field travelDistance, offset: 0xf8, size: 0x4, def value: None
 float_t  ___travelDistance;

/// @brief Field state, offset: 0xfc, size: 0x4, def value: None
 ::GlobalNamespace::GRElevator_ElevatorState  ___state;

/// @brief Field collidersAndVisuals, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___collidersAndVisuals;

/// @brief Field videoDisplay, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___videoDisplay;

/// @brief Field videoAudio, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___videoAudio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRElevator, ___location) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___upperDoor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___lowerDoor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___closedTargetTop) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___closedTargetBottom) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___openTargetTop) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___openTargetBottom) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___outerText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___innerText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___elevatorButtons) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___typeButtonDict) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___friendCollider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___joinTrigger) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___buttonBank) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___doorAudio) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___ambientAudio) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___musicAudio) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___travellingLoopClip) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___ambientLoopClip) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___dingClip) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___doorOpenClip) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___doorCloseClip) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___adjustedOffsetTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___doorMoveBeginTime) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___doorOpenSpeed) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___doorCloseSpeed) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___closeBeginDuration) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___closeTravelDuration) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___closeEndDuration) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___openBeginDuration) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___openTravelDuration) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___openEndDuration) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___travelDistance) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___state) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___collidersAndVisuals) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___videoDisplay) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevator, ___videoAudio) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRElevator) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
