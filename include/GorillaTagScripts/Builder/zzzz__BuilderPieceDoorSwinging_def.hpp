#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceDoorSwinging.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__FloatSpring_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceDoorSwinging_SwingingDoorState_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallMonkeTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceDoorSwinging)
namespace GlobalNamespace {
struct BuilderPieceDoorSwinging_SwingingDoorState;
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
namespace GorillaTagScripts::Builder {
class BuilderSmallHandTrigger;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderPieceDoorSwinging;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*, "GorillaTagScripts.Builder", "BuilderPieceDoorSwinging");
// Dependencies BoingKit.FloatSpring, GorillaTagScripts.Builder.BuilderPieceDoorSwinging::SwingingDoorState, GorillaTagScripts.Builder.BuilderSmallMonkeTrigger, UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderPieceDoorSwinging
class CORDL_TYPE BuilderPieceDoorSwinging : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SwingingDoorState = ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState;

/// @brief Field audioSource, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field backTrigger, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_backTrigger, put=__cordl_internal_set_backTrigger)) ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  backTrigger;

/// @brief Field checkHoldTriggersDelay, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkHoldTriggersDelay, put=__cordl_internal_set_checkHoldTriggersDelay)) float_t  checkHoldTriggersDelay;

/// @brief Field checkHoldTriggersTime, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkHoldTriggersTime, put=__cordl_internal_set_checkHoldTriggersTime)) double_t  checkHoldTriggersTime;

/// @brief Field closeSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeSound, put=__cordl_internal_set_closeSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  closeSound;

/// @brief Field currentState, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  currentState;

/// @brief Field dampingRatio, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampingRatio, put=__cordl_internal_set_dampingRatio)) float_t  dampingRatio;

/// @brief Field doorCloseSpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorCloseSpeed, put=__cordl_internal_set_doorCloseSpeed)) float_t  doorCloseSpeed;

/// @brief Field doorClosedVelocityMag, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorClosedVelocityMag, put=__cordl_internal_set_doorClosedVelocityMag)) float_t  doorClosedVelocityMag;

/// @brief Field doorHoldTriggers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorHoldTriggers, put=__cordl_internal_set_doorHoldTriggers)) ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  doorHoldTriggers;

/// @brief Field doorOpenSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorOpenSpeed, put=__cordl_internal_set_doorOpenSpeed)) float_t  doorOpenSpeed;

/// @brief Field doorSpring, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorSpring, put=__cordl_internal_set_doorSpring)) ::BoingKit::FloatSpring  doorSpring;

/// @brief Field doorTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorTransform, put=__cordl_internal_set_doorTransform)) ::UnityW<::UnityEngine::Transform>  doorTransform;

/// @brief Field doorTransformB, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorTransformB, put=__cordl_internal_set_doorTransformB)) ::UnityW<::UnityEngine::Transform>  doorTransformB;

/// @brief Field frontTrigger, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontTrigger, put=__cordl_internal_set_frontTrigger)) ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  frontTrigger;

/// @brief Field isDoubleDoor, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDoubleDoor, put=__cordl_internal_set_isDoubleDoor)) bool  isDoubleDoor;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field openSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_openSound, put=__cordl_internal_set_openSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  openSound;

/// @brief Field peopleInHoldOpenVolume, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_peopleInHoldOpenVolume, put=__cordl_internal_set_peopleInHoldOpenVolume)) bool  peopleInHoldOpenVolume;

/// @brief Field pushDirection, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_pushDirection, put=__cordl_internal_set_pushDirection)) int32_t  pushDirection;

/// @brief Field rotateAxis, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotateAxis, put=__cordl_internal_set_rotateAxis)) ::UnityEngine::Vector3  rotateAxis;

/// @brief Field rotateAxisB, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotateAxisB, put=__cordl_internal_set_rotateAxisB)) ::UnityEngine::Vector3  rotateAxisB;

/// @brief Field tLastOpened, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_tLastOpened, put=__cordl_internal_set_tLastOpened)) float_t  tLastOpened;

/// @brief Field timeUntilDoorCloses, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeUntilDoorCloses, put=__cordl_internal_set_timeUntilDoorCloses)) float_t  timeUntilDoorCloses;

/// @brief Field triggerVolumes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerVolumes, put=__cordl_internal_set_triggerVolumes)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  triggerVolumes;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr operator  ::GlobalNamespace::IBuilderPieceFunctional*() noexcept;

/// @brief Method Awake, addr 0x5c27d2c, size 0x1c4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseDoor, addr 0x5c28cc8, size 0x80, virtual false, abstract: false, final false
inline void CloseDoor() ;

/// @brief Method FunctionalPieceUpdate, addr 0x5c294dc, size 0x12c, virtual true, abstract: false, final true
inline void FunctionalPieceUpdate() ;

/// @brief Method IsStateValid, addr 0x5c293c0, size 0x10, virtual true, abstract: false, final true
inline bool IsStateValid(uint8_t  state) ;

static inline ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging* New_ctor() ;

/// @brief Method OnBackTriggerEntered, addr 0x5c28210, size 0x15c, virtual false, abstract: false, final false
inline void OnBackTriggerEntered() ;

/// @brief Method OnDestroy, addr 0x5c27ef0, size 0x1c4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnFrontTriggerEntered, addr 0x5c280b4, size 0x15c, virtual false, abstract: false, final false
inline void OnFrontTriggerEntered() ;

/// @brief Method OnHoldTriggerEntered, addr 0x5c2836c, size 0x1e8, virtual false, abstract: false, final false
inline void OnHoldTriggerEntered() ;

/// @brief Method OnHoldTriggerExited, addr 0x5c28554, size 0x238, virtual false, abstract: false, final false
inline void OnHoldTriggerExited() ;

/// @brief Method OnPieceActivate, addr 0x5c29098, size 0x64, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c28fd4, size 0xbc, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c290fc, size 0x1c0, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c29090, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c29094, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnStateChanged, addr 0x5c292bc, size 0x104, virtual true, abstract: false, final true
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x5c293d0, size 0x10c, virtual true, abstract: false, final true
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OpenDoor, addr 0x5c28d48, size 0x64, virtual false, abstract: false, final false
inline void OpenDoor(bool  openIn) ;

/// @brief Method SetDoorState, addr 0x5c2878c, size 0xc4, virtual false, abstract: false, final false
inline void SetDoorState(::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  value) ;

/// @brief Method UpdateDoorAnimation, addr 0x5c28dac, size 0x228, virtual false, abstract: false, final false
inline void UpdateDoorAnimation() ;

/// @brief Method UpdateDoorState, addr 0x5c28c28, size 0xa0, virtual false, abstract: false, final false
inline void UpdateDoorState() ;

/// @brief Method UpdateDoorStateMaster, addr 0x5c28850, size 0x3d8, virtual false, abstract: false, final false
inline void UpdateDoorStateMaster() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger> const& __cordl_internal_get_backTrigger() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>& __cordl_internal_get_backTrigger() ;

constexpr float_t const& __cordl_internal_get_checkHoldTriggersDelay() const;

constexpr float_t& __cordl_internal_get_checkHoldTriggersDelay() ;

constexpr double_t const& __cordl_internal_get_checkHoldTriggersTime() const;

constexpr double_t& __cordl_internal_get_checkHoldTriggersTime() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_closeSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_closeSound() ;

constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_dampingRatio() const;

constexpr float_t& __cordl_internal_get_dampingRatio() ;

constexpr float_t const& __cordl_internal_get_doorCloseSpeed() const;

constexpr float_t& __cordl_internal_get_doorCloseSpeed() ;

constexpr float_t const& __cordl_internal_get_doorClosedVelocityMag() const;

constexpr float_t& __cordl_internal_get_doorClosedVelocityMag() ;

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

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger> const& __cordl_internal_get_frontTrigger() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>& __cordl_internal_get_frontTrigger() ;

constexpr bool const& __cordl_internal_get_isDoubleDoor() const;

constexpr bool& __cordl_internal_get_isDoubleDoor() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_openSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_openSound() ;

constexpr bool const& __cordl_internal_get_peopleInHoldOpenVolume() const;

constexpr bool& __cordl_internal_get_peopleInHoldOpenVolume() ;

constexpr int32_t const& __cordl_internal_get_pushDirection() const;

constexpr int32_t& __cordl_internal_get_pushDirection() ;

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

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_backTrigger(::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  value) ;

constexpr void __cordl_internal_set_checkHoldTriggersDelay(float_t  value) ;

constexpr void __cordl_internal_set_checkHoldTriggersTime(double_t  value) ;

constexpr void __cordl_internal_set_closeSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  value) ;

constexpr void __cordl_internal_set_dampingRatio(float_t  value) ;

constexpr void __cordl_internal_set_doorCloseSpeed(float_t  value) ;

constexpr void __cordl_internal_set_doorClosedVelocityMag(float_t  value) ;

constexpr void __cordl_internal_set_doorHoldTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  value) ;

constexpr void __cordl_internal_set_doorOpenSpeed(float_t  value) ;

constexpr void __cordl_internal_set_doorSpring(::BoingKit::FloatSpring  value) ;

constexpr void __cordl_internal_set_doorTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_doorTransformB(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_frontTrigger(::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  value) ;

constexpr void __cordl_internal_set_isDoubleDoor(bool  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_openSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_peopleInHoldOpenVolume(bool  value) ;

constexpr void __cordl_internal_set_pushDirection(int32_t  value) ;

constexpr void __cordl_internal_set_rotateAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotateAxisB(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tLastOpened(float_t  value) ;

constexpr void __cordl_internal_set_timeUntilDoorCloses(float_t  value) ;

constexpr void __cordl_internal_set_triggerVolumes(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

/// @brief Method .ctor, addr 0x5c29608, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* i___GlobalNamespace__IBuilderPieceFunctional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceDoorSwinging() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceDoorSwinging", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceDoorSwinging(BuilderPieceDoorSwinging && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceDoorSwinging", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceDoorSwinging(BuilderPieceDoorSwinging const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4156};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field rotateAxis, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotateAxis;

/// [SerializeField]
/// @brief Field doorTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___doorTransform;

/// [SerializeField]
/// @brief Field triggerVolumes, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___triggerVolumes;

/// [SerializeField]
/// @brief Field doorHoldTriggers, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  ___doorHoldTriggers;

/// [SerializeField]
/// @brief Field frontTrigger, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  ___frontTrigger;

/// [SerializeField]
/// @brief Field backTrigger, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  ___backTrigger;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field openSound, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___openSound;

/// [SerializeField]
/// @brief Field closeSound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___closeSound;

/// [SerializeField]
/// @brief Field doorOpenSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___doorOpenSpeed;

/// [SerializeField]
/// @brief Field doorCloseSpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ___doorCloseSpeed;

/// [SerializeField]
/// [Range(1.5, 10)]
/// @brief Field timeUntilDoorCloses, offset: 0x80, size: 0x4, def value: None
 float_t  ___timeUntilDoorCloses;

/// [SerializeField]
/// @brief Field doorClosedVelocityMag, offset: 0x84, size: 0x4, def value: None
 float_t  ___doorClosedVelocityMag;

/// [SerializeField]
/// @brief Field dampingRatio, offset: 0x88, size: 0x4, def value: None
 float_t  ___dampingRatio;

/// [Header("Double Door Settings")]
/// [SerializeField]
/// @brief Field isDoubleDoor, offset: 0x8c, size: 0x1, def value: None
 bool  ___isDoubleDoor;

/// [SerializeField]
/// @brief Field rotateAxisB, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotateAxisB;

/// [SerializeField]
/// @brief Field doorTransformB, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___doorTransformB;

/// @brief Field currentState, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  ___currentState;

/// @brief Field tLastOpened, offset: 0xac, size: 0x4, def value: None
 float_t  ___tLastOpened;

/// @brief Field doorSpring, offset: 0xb0, size: 0x8, def value: None
 ::BoingKit::FloatSpring  ___doorSpring;

/// @brief Field peopleInHoldOpenVolume, offset: 0xb8, size: 0x1, def value: None
 bool  ___peopleInHoldOpenVolume;

/// @brief Field checkHoldTriggersTime, offset: 0xc0, size: 0x8, def value: None
 double_t  ___checkHoldTriggersTime;

/// @brief Field checkHoldTriggersDelay, offset: 0xc8, size: 0x4, def value: None
 float_t  ___checkHoldTriggersDelay;

/// @brief Field pushDirection, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___pushDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___rotateAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___doorTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___triggerVolumes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___doorHoldTriggers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___frontTrigger) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___backTrigger) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___audioSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___openSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___closeSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___doorOpenSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___doorCloseSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___timeUntilDoorCloses) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___doorClosedVelocityMag) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___dampingRatio) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___isDoubleDoor) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___rotateAxisB) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___doorTransformB) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___currentState) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___tLastOpened) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___doorSpring) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___peopleInHoldOpenVolume) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___checkHoldTriggersTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___checkHoldTriggersDelay) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging, ___pushDirection) == 0xcc, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderPieceDoorSwinging) == 0xd0, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
