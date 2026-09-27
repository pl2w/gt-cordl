#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceDoor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__FloatSpring_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceDoor_DoorState_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallHandTrigger_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallMonkeTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceDoor)
namespace GlobalNamespace {
struct BuilderPieceDoor_DoorState;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
class IBuilderPieceFunctional;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderPieceDoor;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderPieceDoor*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderPieceDoor*, "GorillaTagScripts.Builder", "BuilderPieceDoor");
// Dependencies BoingKit.FloatSpring, GorillaTagScripts.Builder.BuilderPieceDoor::DoorState, GorillaTagScripts.Builder.BuilderSmallHandTrigger, GorillaTagScripts.Builder.BuilderSmallMonkeTrigger, UnityEngine.Collider, UnityEngine.LineRenderer, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderPieceDoor
class CORDL_TYPE BuilderPieceDoor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DoorState = ::GlobalNamespace::BuilderPieceDoor_DoorState;

/// @brief Field CheckHoldTriggersTime, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_CheckHoldTriggersTime, put=__cordl_internal_set_CheckHoldTriggersTime)) double_t  CheckHoldTriggersTime;

/// @brief Field IsToggled, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsToggled, put=__cordl_internal_set_IsToggled)) bool  IsToggled;

/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field checkHoldTriggersDelay, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkHoldTriggersDelay, put=__cordl_internal_set_checkHoldTriggersDelay)) float_t  checkHoldTriggersDelay;

/// @brief Field closeSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeSound, put=__cordl_internal_set_closeSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  closeSound;

/// @brief Field currentState, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::BuilderPieceDoor_DoorState  currentState;

/// @brief Field doorButtonTriggers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorButtonTriggers, put=__cordl_internal_set_doorButtonTriggers)) ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  doorButtonTriggers;

/// @brief Field doorCloseSpeed, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorCloseSpeed, put=__cordl_internal_set_doorCloseSpeed)) float_t  doorCloseSpeed;

/// @brief Field doorHoldTriggers, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorHoldTriggers, put=__cordl_internal_set_doorHoldTriggers)) ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  doorHoldTriggers;

/// @brief Field doorOpenSpeed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorOpenSpeed, put=__cordl_internal_set_doorOpenSpeed)) float_t  doorOpenSpeed;

/// @brief Field doorSpring, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorSpring, put=__cordl_internal_set_doorSpring)) ::BoingKit::FloatSpring  doorSpring;

/// @brief Field doorTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorTransform, put=__cordl_internal_set_doorTransform)) ::UnityW<::UnityEngine::Transform>  doorTransform;

/// @brief Field doorTransformB, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorTransformB, put=__cordl_internal_set_doorTransformB)) ::UnityW<::UnityEngine::Transform>  doorTransformB;

/// @brief Field isAutomatic, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAutomatic, put=__cordl_internal_set_isAutomatic)) bool  isAutomatic;

/// @brief Field isDoubleDoor, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDoubleDoor, put=__cordl_internal_set_isDoubleDoor)) bool  isDoubleDoor;

/// @brief Field lineRenderers, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderers, put=__cordl_internal_set_lineRenderers)) ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  lineRenderers;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field openSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_openSound, put=__cordl_internal_set_openSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  openSound;

/// @brief Field peopleInHoldOpenVolume, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_peopleInHoldOpenVolume, put=__cordl_internal_set_peopleInHoldOpenVolume)) bool  peopleInHoldOpenVolume;

/// @brief Field rotateAxis, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotateAxis, put=__cordl_internal_set_rotateAxis)) ::UnityEngine::Vector3  rotateAxis;

/// @brief Field rotateAxisB, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotateAxisB, put=__cordl_internal_set_rotateAxisB)) ::UnityEngine::Vector3  rotateAxisB;

/// @brief Field tLastOpened, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_tLastOpened, put=__cordl_internal_set_tLastOpened)) float_t  tLastOpened;

/// @brief Field timeUntilDoorCloses, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeUntilDoorCloses, put=__cordl_internal_set_timeUntilDoorCloses)) float_t  timeUntilDoorCloses;

/// @brief Field triggerVolumes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerVolumes, put=__cordl_internal_set_triggerVolumes)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  triggerVolumes;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr operator  ::GlobalNamespace::IBuilderPieceFunctional*() noexcept;

/// @brief Method Awake, addr 0x5c25ee8, size 0x1ac, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseDoor, addr 0x5c26d00, size 0x88, virtual false, abstract: false, final false
inline void CloseDoor() ;

/// @brief Method FunctionalPieceUpdate, addr 0x5c27b50, size 0x12c, virtual true, abstract: false, final true
inline void FunctionalPieceUpdate() ;

/// @brief Method IsStateValid, addr 0x5c27a9c, size 0x10, virtual true, abstract: false, final true
inline bool IsStateValid(uint8_t  state) ;

static inline ::GorillaTagScripts::Builder::BuilderPieceDoor* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c26094, size 0x1ac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDoorButtonTriggered, addr 0x5c26fd4, size 0x24c, virtual false, abstract: false, final false
inline void OnDoorButtonTriggered() ;

/// @brief Method OnHoldTriggerEntered, addr 0x5c27220, size 0x1e4, virtual false, abstract: false, final false
inline void OnHoldTriggerEntered() ;

/// @brief Method OnHoldTriggerExited, addr 0x5c27404, size 0x1a0, virtual false, abstract: false, final false
inline void OnHoldTriggerExited() ;

/// @brief Method OnPieceActivate, addr 0x5c27790, size 0x64, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c275a4, size 0x1e4, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c277f4, size 0x1a8, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c27788, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c2778c, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnStateChanged, addr 0x5c27aac, size 0xa4, virtual true, abstract: false, final true
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x5c2799c, size 0x100, virtual true, abstract: false, final true
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OpenDoor, addr 0x5c26d88, size 0x88, virtual false, abstract: false, final false
inline void OpenDoor() ;

/// @brief Method SetDoorState, addr 0x5c26240, size 0xb4, virtual false, abstract: false, final false
inline void SetDoorState(::GlobalNamespace::BuilderPieceDoor_DoorState  value) ;

/// @brief Method UpdateDoorAnimation, addr 0x5c26e10, size 0x1c4, virtual false, abstract: false, final false
inline void UpdateDoorAnimation() ;

/// @brief Method UpdateDoorState, addr 0x5c26b6c, size 0x194, virtual false, abstract: false, final false
inline void UpdateDoorState() ;

/// @brief Method UpdateDoorStateMaster, addr 0x5c262f4, size 0x444, virtual false, abstract: false, final false
inline void UpdateDoorStateMaster() ;

constexpr double_t const& __cordl_internal_get_CheckHoldTriggersTime() const;

constexpr double_t& __cordl_internal_get_CheckHoldTriggersTime() ;

constexpr bool const& __cordl_internal_get_IsToggled() const;

constexpr bool& __cordl_internal_get_IsToggled() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_checkHoldTriggersDelay() const;

constexpr float_t& __cordl_internal_get_checkHoldTriggersDelay() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_closeSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_closeSound() ;

constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState& __cordl_internal_get_currentState() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>> const& __cordl_internal_get_doorButtonTriggers() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>& __cordl_internal_get_doorButtonTriggers() ;

constexpr float_t const& __cordl_internal_get_doorCloseSpeed() const;

constexpr float_t& __cordl_internal_get_doorCloseSpeed() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>> const& __cordl_internal_get_doorHoldTriggers() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>& __cordl_internal_get_doorHoldTriggers() ;

constexpr float_t const& __cordl_internal_get_doorOpenSpeed() const;

constexpr float_t& __cordl_internal_get_doorOpenSpeed() ;

constexpr ::BoingKit::FloatSpring const& __cordl_internal_get_doorSpring() const;

constexpr ::BoingKit::FloatSpring& __cordl_internal_get_doorSpring() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_doorTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_doorTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_doorTransformB() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_doorTransformB() ;

constexpr bool const& __cordl_internal_get_isAutomatic() const;

constexpr bool& __cordl_internal_get_isAutomatic() ;

constexpr bool const& __cordl_internal_get_isDoubleDoor() const;

constexpr bool& __cordl_internal_get_isDoubleDoor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>> const& __cordl_internal_get_lineRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>& __cordl_internal_get_lineRenderers() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_openSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_openSound() ;

constexpr bool const& __cordl_internal_get_peopleInHoldOpenVolume() const;

constexpr bool& __cordl_internal_get_peopleInHoldOpenVolume() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotateAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotateAxis() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotateAxisB() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotateAxisB() ;

constexpr float_t const& __cordl_internal_get_tLastOpened() const;

constexpr float_t& __cordl_internal_get_tLastOpened() ;

constexpr float_t const& __cordl_internal_get_timeUntilDoorCloses() const;

constexpr float_t& __cordl_internal_get_timeUntilDoorCloses() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_triggerVolumes() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_triggerVolumes() ;

constexpr void __cordl_internal_set_CheckHoldTriggersTime(double_t  value) ;

constexpr void __cordl_internal_set_IsToggled(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_checkHoldTriggersDelay(float_t  value) ;

constexpr void __cordl_internal_set_closeSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::BuilderPieceDoor_DoorState  value) ;

constexpr void __cordl_internal_set_doorButtonTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  value) ;

constexpr void __cordl_internal_set_doorCloseSpeed(float_t  value) ;

constexpr void __cordl_internal_set_doorHoldTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  value) ;

constexpr void __cordl_internal_set_doorOpenSpeed(float_t  value) ;

constexpr void __cordl_internal_set_doorSpring(::BoingKit::FloatSpring  value) ;

constexpr void __cordl_internal_set_doorTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_doorTransformB(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_isAutomatic(bool  value) ;

constexpr void __cordl_internal_set_isDoubleDoor(bool  value) ;

constexpr void __cordl_internal_set_lineRenderers(::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_openSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_peopleInHoldOpenVolume(bool  value) ;

constexpr void __cordl_internal_set_rotateAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotateAxisB(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tLastOpened(float_t  value) ;

constexpr void __cordl_internal_set_timeUntilDoorCloses(float_t  value) ;

constexpr void __cordl_internal_set_triggerVolumes(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

/// @brief Method .ctor, addr 0x5c27c7c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* i___GlobalNamespace__IBuilderPieceFunctional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceDoor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceDoor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceDoor(BuilderPieceDoor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceDoor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceDoor(BuilderPieceDoor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4154};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field rotateAxis, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotateAxis;

/// [Tooltip("True if the door stays open until the button is triggered again")]
/// [SerializeField]
/// @brief Field IsToggled, offset: 0x34, size: 0x1, def value: None
 bool  ___IsToggled;

/// [Tooltip("True if the door opens when players enter the Keep Open Trigger")]
/// [SerializeField]
/// @brief Field isAutomatic, offset: 0x35, size: 0x1, def value: None
 bool  ___isAutomatic;

/// [SerializeField]
/// @brief Field doorTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___doorTransform;

/// [SerializeField]
/// @brief Field triggerVolumes, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___triggerVolumes;

/// [SerializeField]
/// @brief Field doorButtonTriggers, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  ___doorButtonTriggers;

/// [SerializeField]
/// @brief Field doorHoldTriggers, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  ___doorHoldTriggers;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field openSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___openSound;

/// [SerializeField]
/// @brief Field closeSound, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___closeSound;

/// [SerializeField]
/// @brief Field doorOpenSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  ___doorOpenSpeed;

/// [SerializeField]
/// @brief Field doorCloseSpeed, offset: 0x74, size: 0x4, def value: None
 float_t  ___doorCloseSpeed;

/// [SerializeField]
/// [Range(1.5, 10)]
/// @brief Field timeUntilDoorCloses, offset: 0x78, size: 0x4, def value: None
 float_t  ___timeUntilDoorCloses;

/// [Header("Double Door Settings")]
/// [SerializeField]
/// @brief Field isDoubleDoor, offset: 0x7c, size: 0x1, def value: None
 bool  ___isDoubleDoor;

/// [SerializeField]
/// @brief Field rotateAxisB, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotateAxisB;

/// [SerializeField]
/// @brief Field doorTransformB, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___doorTransformB;

/// [SerializeField]
/// @brief Field lineRenderers, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  ___lineRenderers;

/// @brief Field currentState, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPieceDoor_DoorState  ___currentState;

/// @brief Field tLastOpened, offset: 0xa4, size: 0x4, def value: None
 float_t  ___tLastOpened;

/// @brief Field doorSpring, offset: 0xa8, size: 0x8, def value: None
 ::BoingKit::FloatSpring  ___doorSpring;

/// @brief Field peopleInHoldOpenVolume, offset: 0xb0, size: 0x1, def value: None
 bool  ___peopleInHoldOpenVolume;

/// @brief Field CheckHoldTriggersTime, offset: 0xb8, size: 0x8, def value: None
 double_t  ___CheckHoldTriggersTime;

/// @brief Field checkHoldTriggersDelay, offset: 0xc0, size: 0x4, def value: None
 float_t  ___checkHoldTriggersDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___rotateAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___IsToggled) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___isAutomatic) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___doorTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___triggerVolumes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___doorButtonTriggers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___doorHoldTriggers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___openSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___closeSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___doorOpenSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___doorCloseSpeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___timeUntilDoorCloses) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___isDoubleDoor) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___rotateAxisB) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___doorTransformB) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___lineRenderers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___currentState) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___tLastOpened) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___doorSpring) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___peopleInHoldOpenVolume) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___CheckHoldTriggersTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoor, ___checkHoldTriggersDelay) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderPieceDoor) == 0xc8, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
