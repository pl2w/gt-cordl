#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDoor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__FloatSpring_def.hpp"
#include "GlobalNamespace/zzzz__GTDoorTrigger_def.hpp"
#include "GlobalNamespace/zzzz__GTDoor_DoorState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSceneObject_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTDoor)
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
struct GTDoor_DoorState;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
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
class GTDoor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTDoor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTDoor*, "", "GTDoor");
// Dependencies BoingKit.FloatSpring, GTDoor::DoorState, GTDoorTrigger, NetworkSceneObject, UnityEngine.Collider
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTDoor
class CORDL_TYPE GTDoor : public ::GlobalNamespace::NetworkSceneObject {
public:
// Declarations
using DoorState = ::GlobalNamespace::GTDoor_DoorState;

/// @brief Field GTDoorID, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_GTDoorID, put=__cordl_internal_set_GTDoorID)) int32_t  GTDoorID;

/// @brief Field audioSource, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field buttonTriggeredThisFrame, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_buttonTriggeredThisFrame, put=__cordl_internal_set_buttonTriggeredThisFrame)) bool  buttonTriggeredThisFrame;

/// @brief Field closeSound, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeSound, put=__cordl_internal_set_closeSound)) ::UnityW<::UnityEngine::AudioClip>  closeSound;

/// @brief Field currentState, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::GTDoor_DoorState  currentState;

/// @brief Field doorButtonTriggers, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorButtonTriggers, put=__cordl_internal_set_doorButtonTriggers)) ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>  doorButtonTriggers;

/// @brief Field doorCloseSpeed, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorCloseSpeed, put=__cordl_internal_set_doorCloseSpeed)) float_t  doorCloseSpeed;

/// @brief Field doorColliders, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorColliders, put=__cordl_internal_set_doorColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  doorColliders;

/// @brief Field doorHoldOpenTriggers, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorHoldOpenTriggers, put=__cordl_internal_set_doorHoldOpenTriggers)) ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>  doorHoldOpenTriggers;

/// @brief Field doorOpenSpeed, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorOpenSpeed, put=__cordl_internal_set_doorOpenSpeed)) float_t  doorOpenSpeed;

/// @brief Field doorSpring, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorSpring, put=__cordl_internal_set_doorSpring)) ::BoingKit::FloatSpring  doorSpring;

/// @brief Field doorTransform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorTransform, put=__cordl_internal_set_doorTransform)) ::UnityW<::UnityEngine::Transform>  doorTransform;

/// @brief Field lastChecked, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastChecked, put=__cordl_internal_set_lastChecked)) float_t  lastChecked;

/// @brief Field openSound, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_openSound, put=__cordl_internal_set_openSound)) ::UnityW<::UnityEngine::AudioClip>  openSound;

/// @brief Field peopleInHoldOpenVolume, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_peopleInHoldOpenVolume, put=__cordl_internal_set_peopleInHoldOpenVolume)) bool  peopleInHoldOpenVolume;

/// @brief Field secondsCheck, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_secondsCheck, put=__cordl_internal_set_secondsCheck)) float_t  secondsCheck;

/// @brief Field tLastOpened, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tLastOpened, put=__cordl_internal_set_tLastOpened)) float_t  tLastOpened;

/// @brief Field timeUntilDoorCloses, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeUntilDoorCloses, put=__cordl_internal_set_timeUntilDoorCloses)) float_t  timeUntilDoorCloses;

/// [PunRPC]
/// @brief Method ChangeDoorState, addr 0x5677f30, size 0xb8, virtual false, abstract: false, final false
inline void ChangeDoorState(::GlobalNamespace::GTDoor_DoorState  shouldOpenState, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ChangeDoorStateShared, addr 0x5677fe8, size 0xb4, virtual false, abstract: false, final false
inline void ChangeDoorStateShared(::GlobalNamespace::GTDoor_DoorState  shouldOpenState) ;

/// @brief Method CloseDoor, addr 0x5677ddc, size 0x88, virtual false, abstract: false, final false
inline void CloseDoor() ;

/// @brief Method DoorButtonTriggered, addr 0x5677ef8, size 0x1c, virtual false, abstract: false, final false
inline void DoorButtonTriggered() ;

static inline ::GlobalNamespace::GTDoor* New_ctor() ;

/// @brief Method OpenDoor, addr 0x5677e64, size 0x94, virtual false, abstract: false, final false
inline void OpenDoor() ;

/// [Rpc]
/// @brief Method RPC_ChangeDoorState, addr 0x567809c, size 0x224, virtual false, abstract: false, final false
static inline void RPC_ChangeDoorState(::Fusion::NetworkRunner*  runner, ::GlobalNamespace::GTDoor_DoorState  shouldOpenState, int32_t  doorId) ;

/// [NetworkRpcStaticWeavedInvoker("System.Void GTDoor::RPC_ChangeDoorState(Fusion.NetworkRunner,GTDoor/DoorState,System.Int32)")]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_ChangeDoorState@Invoker, addr 0x5678394, size 0x7c, virtual false, abstract: false, final false
static inline void RPC_ChangeDoorState@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message) ;

/// @brief Method ResetDoorOpenedTime, addr 0x5677f14, size 0x1c, virtual false, abstract: false, final false
inline void ResetDoorOpenedTime() ;

/// @brief Method SetupDoorIDs, addr 0x56782c0, size 0xb4, virtual false, abstract: false, final false
inline void SetupDoorIDs() ;

/// @brief Method Start, addr 0x56773a4, size 0x13c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x56774e0, size 0xfc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDoorAnimation, addr 0x5677b28, size 0x11c, virtual false, abstract: false, final false
inline void UpdateDoorAnimation() ;

/// @brief Method UpdateDoorState, addr 0x56775dc, size 0x54c, virtual false, abstract: false, final false
inline void UpdateDoorState() ;

constexpr int32_t const& __cordl_internal_get_GTDoorID() const;

constexpr int32_t& __cordl_internal_get_GTDoorID() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr bool const& __cordl_internal_get_buttonTriggeredThisFrame() const;

constexpr bool& __cordl_internal_get_buttonTriggeredThisFrame() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_closeSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_closeSound() ;

constexpr ::GlobalNamespace::GTDoor_DoorState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::GTDoor_DoorState& __cordl_internal_get_currentState() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>> const& __cordl_internal_get_doorButtonTriggers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>& __cordl_internal_get_doorButtonTriggers() ;

constexpr float_t const& __cordl_internal_get_doorCloseSpeed() const;

constexpr float_t& __cordl_internal_get_doorCloseSpeed() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_doorColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_doorColliders() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>> const& __cordl_internal_get_doorHoldOpenTriggers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>& __cordl_internal_get_doorHoldOpenTriggers() ;

constexpr float_t const& __cordl_internal_get_doorOpenSpeed() const;

constexpr float_t& __cordl_internal_get_doorOpenSpeed() ;

constexpr ::BoingKit::FloatSpring const& __cordl_internal_get_doorSpring() const;

constexpr ::BoingKit::FloatSpring& __cordl_internal_get_doorSpring() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_doorTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_doorTransform() ;

constexpr float_t const& __cordl_internal_get_lastChecked() const;

constexpr float_t& __cordl_internal_get_lastChecked() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_openSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_openSound() ;

constexpr bool const& __cordl_internal_get_peopleInHoldOpenVolume() const;

constexpr bool& __cordl_internal_get_peopleInHoldOpenVolume() ;

constexpr float_t const& __cordl_internal_get_secondsCheck() const;

constexpr float_t& __cordl_internal_get_secondsCheck() ;

constexpr float_t const& __cordl_internal_get_tLastOpened() const;

constexpr float_t& __cordl_internal_get_tLastOpened() ;

constexpr float_t const& __cordl_internal_get_timeUntilDoorCloses() const;

constexpr float_t& __cordl_internal_get_timeUntilDoorCloses() ;

constexpr void __cordl_internal_set_GTDoorID(int32_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_buttonTriggeredThisFrame(bool  value) ;

constexpr void __cordl_internal_set_closeSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::GTDoor_DoorState  value) ;

constexpr void __cordl_internal_set_doorButtonTriggers(::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>  value) ;

constexpr void __cordl_internal_set_doorCloseSpeed(float_t  value) ;

constexpr void __cordl_internal_set_doorColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_doorHoldOpenTriggers(::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>  value) ;

constexpr void __cordl_internal_set_doorOpenSpeed(float_t  value) ;

constexpr void __cordl_internal_set_doorSpring(::BoingKit::FloatSpring  value) ;

constexpr void __cordl_internal_set_doorTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lastChecked(float_t  value) ;

constexpr void __cordl_internal_set_openSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_peopleInHoldOpenVolume(bool  value) ;

constexpr void __cordl_internal_set_secondsCheck(float_t  value) ;

constexpr void __cordl_internal_set_tLastOpened(float_t  value) ;

constexpr void __cordl_internal_set_timeUntilDoorCloses(float_t  value) ;

/// @brief Method .ctor, addr 0x5678374, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTDoor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTDoor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTDoor(GTDoor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTDoor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTDoor(GTDoor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{844};

/// [SerializeField]
/// @brief Field doorTransform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___doorTransform;

/// [SerializeField]
/// @brief Field doorColliders, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___doorColliders;

/// [SerializeField]
/// @brief Field doorButtonTriggers, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>  ___doorButtonTriggers;

/// [SerializeField]
/// @brief Field doorHoldOpenTriggers, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>  ___doorHoldOpenTriggers;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field openSound, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___openSound;

/// [SerializeField]
/// @brief Field closeSound, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___closeSound;

/// [SerializeField]
/// @brief Field doorOpenSpeed, offset: 0x88, size: 0x4, def value: None
 float_t  ___doorOpenSpeed;

/// [SerializeField]
/// @brief Field doorCloseSpeed, offset: 0x8c, size: 0x4, def value: None
 float_t  ___doorCloseSpeed;

/// [SerializeField]
/// [Range(1.5, 10)]
/// @brief Field timeUntilDoorCloses, offset: 0x90, size: 0x4, def value: None
 float_t  ___timeUntilDoorCloses;

/// @brief Field GTDoorID, offset: 0x94, size: 0x4, def value: None
 int32_t  ___GTDoorID;

/// [DebugOption]
/// @brief Field currentState, offset: 0x98, size: 0x4, def value: None
 ::GlobalNamespace::GTDoor_DoorState  ___currentState;

/// @brief Field tLastOpened, offset: 0x9c, size: 0x4, def value: None
 float_t  ___tLastOpened;

/// @brief Field doorSpring, offset: 0xa0, size: 0x8, def value: None
 ::BoingKit::FloatSpring  ___doorSpring;

/// [DebugOption]
/// @brief Field peopleInHoldOpenVolume, offset: 0xa8, size: 0x1, def value: None
 bool  ___peopleInHoldOpenVolume;

/// [DebugOption]
/// @brief Field buttonTriggeredThisFrame, offset: 0xa9, size: 0x1, def value: None
 bool  ___buttonTriggeredThisFrame;

/// @brief Field lastChecked, offset: 0xac, size: 0x4, def value: None
 float_t  ___lastChecked;

/// @brief Field secondsCheck, offset: 0xb0, size: 0x4, def value: None
 float_t  ___secondsCheck;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTDoor, ___doorTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___doorColliders) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___doorButtonTriggers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___doorHoldOpenTriggers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___audioSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___openSound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___closeSound) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___doorOpenSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___doorCloseSpeed) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___timeUntilDoorCloses) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___GTDoorID) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___currentState) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___tLastOpened) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___doorSpring) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___peopleInHoldOpenVolume) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___buttonTriggeredThisFrame) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___lastChecked) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoor, ___secondsCheck) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTDoor) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
