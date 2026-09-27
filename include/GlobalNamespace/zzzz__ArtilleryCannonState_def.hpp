#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCannonState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArtilleryCannonState_CrankSyncState_def.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_FusionSyncState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArtilleryCannonState)
namespace GlobalNamespace {
struct ArtilleryCannonState_ArtilleryMsg;
}
namespace GlobalNamespace {
struct ArtilleryCannonState_CrankSyncState;
}
namespace GlobalNamespace {
struct ArtilleryCannonState_FusionSyncState;
}
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ArtilleryCannonState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArtilleryCannonState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArtilleryCannonState*, "", "ArtilleryCannonState");
// [RequireComponent(typeof(XSceneRefTarget))]
// [NetworkBehaviourWeaved(8)]
// Dependencies ArtilleryCannonState::CrankSyncState, ArtilleryCannonState::FusionSyncState, NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArtilleryCannonState
class CORDL_TYPE ArtilleryCannonState : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using ArtilleryMsg = ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg;

using CrankSyncState = ::GlobalNamespace::ArtilleryCannonState_CrankSyncState;

using FusionSyncState = ::GlobalNamespace::ArtilleryCannonState_FusionSyncState;

 __declspec(property(get=get_CurrentPitch)) float_t  CurrentPitch;

 __declspec(property(get=get_CurrentYaw)) float_t  CurrentYaw;

 __declspec(property(get=get_DegreesPerCrankDegree)) float_t  DegreesPerCrankDegree;

/// [Networked]
/// @brief [NetworkedWeaved(0, 8)]
 __declspec(property(get=get_FusionData, put=set_FusionData)) ::GlobalNamespace::ArtilleryCannonState_FusionSyncState  FusionData;

 __declspec(property(get=get_LocalActorNr)) int32_t  LocalActorNr;

 __declspec(property(get=get_PitchMax)) float_t  PitchMax;

 __declspec(property(get=get_PitchMin)) float_t  PitchMin;

/// @brief Field _FusionData, offset 0xe8, size 0x20 
 __declspec(property(get=__cordl_internal_get__FusionData, put=__cordl_internal_set__FusionData)) ::GlobalNamespace::ArtilleryCannonState_FusionSyncState  _FusionData;

/// @brief Field currentPitch, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPitch, put=__cordl_internal_set_currentPitch)) float_t  currentPitch;

/// @brief Field currentYaw, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentYaw, put=__cordl_internal_set_currentYaw)) float_t  currentYaw;

/// @brief Field degreesPerCrankDegree, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_degreesPerCrankDegree, put=__cordl_internal_set_degreesPerCrankDegree)) float_t  degreesPerCrankDegree;

/// @brief Field fireCooldown, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireCooldown, put=__cordl_internal_set_fireCooldown)) float_t  fireCooldown;

/// @brief Field lastFireTime, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFireTime, put=__cordl_internal_set_lastFireTime)) float_t  lastFireTime;

/// @brief Field onFired, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFired, put=__cordl_internal_set_onFired)) ::System::Action*  onFired;

/// @brief Field onRotationChanged, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRotationChanged, put=__cordl_internal_set_onRotationChanged)) ::System::Action*  onRotationChanged;

/// @brief Field pitchCrankSync, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get_pitchCrankSync, put=__cordl_internal_set_pitchCrankSync)) ::GlobalNamespace::ArtilleryCannonState_CrankSyncState  pitchCrankSync;

/// @brief Field pitchMax, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchMax, put=__cordl_internal_set_pitchMax)) float_t  pitchMax;

/// @brief Field pitchMin, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchMin, put=__cordl_internal_set_pitchMin)) float_t  pitchMin;

/// @brief Field pitchPendingGrabTime, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchPendingGrabTime, put=__cordl_internal_set_pitchPendingGrabTime)) float_t  pitchPendingGrabTime;

/// @brief Field yawCrankSync, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_yawCrankSync, put=__cordl_internal_set_yawCrankSync)) ::GlobalNamespace::ArtilleryCannonState_CrankSyncState  yawCrankSync;

/// @brief Field yawPendingGrabTime, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_yawPendingGrabTime, put=__cordl_internal_set_yawPendingGrabTime)) float_t  yawPendingGrabTime;

/// @brief Method Awake, addr 0x5bfa46c, size 0x24, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5bfad64, size 0x60, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5bfadc4, size 0x64, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method FindRigForActor, addr 0x5bf94a0, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::VRRig> FindRigForActor(int32_t  actorNr) ;

static inline ::GlobalNamespace::ArtilleryCannonState* New_ctor() ;

/// @brief Method NotifyCrankGrabbed, addr 0x5bf97d8, size 0x218, virtual false, abstract: false, final false
inline bool NotifyCrankGrabbed(int32_t  crankIndex, bool  isLeftHand) ;

/// @brief Method NotifyCrankInput, addr 0x5bf9c24, size 0x22c, virtual false, abstract: false, final false
inline void NotifyCrankInput(int32_t  crankIndex, float_t  degrees) ;

/// @brief Method NotifyCrankReleased, addr 0x5bf9a04, size 0x1fc, virtual false, abstract: false, final false
inline void NotifyCrankReleased(int32_t  crankIndex, float_t  finalAngle) ;

/// [PunRPC]
/// @brief Method RPC_ArtilleryMessage, addr 0x5bfa490, size 0x200, virtual false, abstract: false, final false
inline void RPC_ArtilleryMessage(uint8_t  msgType, uint8_t  crankIndex, float_t  floatParam, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadCrankSyncFusion, addr 0x5bfacc0, size 0x90, virtual false, abstract: false, final false
inline void ReadCrankSyncFusion(::by_ref<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>  crank, ::by_ref<float_t>  pendingTime, int32_t  localActor, int32_t  incomingHolder, bool  incomingLeftHand, float_t  incomingAngle) ;

/// @brief Method ReadCrankSyncPUN, addr 0x5bfa8f0, size 0x134, virtual false, abstract: false, final false
inline void ReadCrankSyncPUN(::Photon::Pun::PhotonStream*  stream, ::by_ref<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>  crank, ::by_ref<float_t>  pendingTime, int32_t  localActor) ;

/// @brief Method ReadDataFusion, addr 0x5bfab88, size 0x138, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5bfa7e4, size 0x10c, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method TryFire, addr 0x5bf9ee0, size 0x1f0, virtual false, abstract: false, final false
inline bool TryFire() ;

/// @brief Method UpdateLocalCrankState, addr 0x5bf932c, size 0x68, virtual false, abstract: false, final false
inline void UpdateLocalCrankState(int32_t  crankIndex, bool  isLeftHand, float_t  angle) ;

/// @brief Method WriteDataFusion, addr 0x5bfaae4, size 0xa4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5bfa690, size 0x154, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::ArtilleryCannonState_FusionSyncState const& __cordl_internal_get__FusionData() const;

constexpr ::GlobalNamespace::ArtilleryCannonState_FusionSyncState& __cordl_internal_get__FusionData() ;

constexpr float_t const& __cordl_internal_get_currentPitch() const;

constexpr float_t& __cordl_internal_get_currentPitch() ;

constexpr float_t const& __cordl_internal_get_currentYaw() const;

constexpr float_t& __cordl_internal_get_currentYaw() ;

constexpr float_t const& __cordl_internal_get_degreesPerCrankDegree() const;

constexpr float_t& __cordl_internal_get_degreesPerCrankDegree() ;

constexpr float_t const& __cordl_internal_get_fireCooldown() const;

constexpr float_t& __cordl_internal_get_fireCooldown() ;

constexpr float_t const& __cordl_internal_get_lastFireTime() const;

constexpr float_t& __cordl_internal_get_lastFireTime() ;

constexpr ::System::Action* const& __cordl_internal_get_onFired() const;

constexpr ::System::Action*& __cordl_internal_get_onFired() ;

constexpr ::System::Action* const& __cordl_internal_get_onRotationChanged() const;

constexpr ::System::Action*& __cordl_internal_get_onRotationChanged() ;

constexpr ::GlobalNamespace::ArtilleryCannonState_CrankSyncState const& __cordl_internal_get_pitchCrankSync() const;

constexpr ::GlobalNamespace::ArtilleryCannonState_CrankSyncState& __cordl_internal_get_pitchCrankSync() ;

constexpr float_t const& __cordl_internal_get_pitchMax() const;

constexpr float_t& __cordl_internal_get_pitchMax() ;

constexpr float_t const& __cordl_internal_get_pitchMin() const;

constexpr float_t& __cordl_internal_get_pitchMin() ;

constexpr float_t const& __cordl_internal_get_pitchPendingGrabTime() const;

constexpr float_t& __cordl_internal_get_pitchPendingGrabTime() ;

constexpr ::GlobalNamespace::ArtilleryCannonState_CrankSyncState const& __cordl_internal_get_yawCrankSync() const;

constexpr ::GlobalNamespace::ArtilleryCannonState_CrankSyncState& __cordl_internal_get_yawCrankSync() ;

constexpr float_t const& __cordl_internal_get_yawPendingGrabTime() const;

constexpr float_t& __cordl_internal_get_yawPendingGrabTime() ;

constexpr void __cordl_internal_set__FusionData(::GlobalNamespace::ArtilleryCannonState_FusionSyncState  value) ;

constexpr void __cordl_internal_set_currentPitch(float_t  value) ;

constexpr void __cordl_internal_set_currentYaw(float_t  value) ;

constexpr void __cordl_internal_set_degreesPerCrankDegree(float_t  value) ;

constexpr void __cordl_internal_set_fireCooldown(float_t  value) ;

constexpr void __cordl_internal_set_lastFireTime(float_t  value) ;

constexpr void __cordl_internal_set_onFired(::System::Action*  value) ;

constexpr void __cordl_internal_set_onRotationChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_pitchCrankSync(::GlobalNamespace::ArtilleryCannonState_CrankSyncState  value) ;

constexpr void __cordl_internal_set_pitchMax(float_t  value) ;

constexpr void __cordl_internal_set_pitchMin(float_t  value) ;

constexpr void __cordl_internal_set_pitchPendingGrabTime(float_t  value) ;

constexpr void __cordl_internal_set_yawCrankSync(::GlobalNamespace::ArtilleryCannonState_CrankSyncState  value) ;

constexpr void __cordl_internal_set_yawPendingGrabTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5bfad50, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onFired, addr 0x5bf8e84, size 0x9c, virtual false, abstract: false, final false
inline void add_onFired(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onRotationChanged, addr 0x5bf8de8, size 0x9c, virtual false, abstract: false, final false
inline void add_onRotationChanged(::System::Action*  value) ;

/// @brief Method get_CurrentPitch, addr 0x5bfa3c0, size 0x8, virtual false, abstract: false, final false
inline float_t get_CurrentPitch() ;

/// @brief Method get_CurrentYaw, addr 0x5bfa3c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_CurrentYaw() ;

/// @brief Method get_DegreesPerCrankDegree, addr 0x5bfa3e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_DegreesPerCrankDegree() ;

/// @brief Method get_FusionData, addr 0x5bfaa24, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ArtilleryCannonState_FusionSyncState get_FusionData() ;

/// @brief Method get_LocalActorNr, addr 0x5bfa3e8, size 0x84, virtual false, abstract: false, final false
inline int32_t get_LocalActorNr() ;

/// @brief Method get_PitchMax, addr 0x5bfa3d8, size 0x8, virtual false, abstract: false, final false
inline float_t get_PitchMax() ;

/// @brief Method get_PitchMin, addr 0x5bfa3d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_PitchMin() ;

/// [CompilerGenerated]
/// @brief Method remove_onFired, addr 0x5bf90f8, size 0x9c, virtual false, abstract: false, final false
inline void remove_onFired(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onRotationChanged, addr 0x5bf905c, size 0x9c, virtual false, abstract: false, final false
inline void remove_onRotationChanged(::System::Action*  value) ;

/// @brief Method set_FusionData, addr 0x5bfaa84, size 0x60, virtual false, abstract: false, final false
inline void set_FusionData(::GlobalNamespace::ArtilleryCannonState_FusionSyncState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArtilleryCannonState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArtilleryCannonState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArtilleryCannonState(ArtilleryCannonState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArtilleryCannonState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArtilleryCannonState(ArtilleryCannonState const& ) = delete;

/// @brief Field CRANK_PITCH offset 0xffffffff size 0x4
static constexpr int32_t  CRANK_PITCH{static_cast<int32_t>(0x0)};

/// @brief Field CRANK_YAW offset 0xffffffff size 0x4
static constexpr int32_t  CRANK_YAW{static_cast<int32_t>(0x1)};

/// @brief Field GRAB_GRACE_PERIOD offset 0xffffffff size 0x4
static constexpr float_t  GRAB_GRACE_PERIOD{static_cast<float_t>(1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{401};

/// [Header("Rotation Limits")]
/// [SerializeField]
/// @brief Field pitchMin, offset: 0x9c, size: 0x4, def value: None
 float_t  ___pitchMin;

/// [SerializeField]
/// @brief Field pitchMax, offset: 0xa0, size: 0x4, def value: None
 float_t  ___pitchMax;

/// [Tooltip("How many degrees the cannon rotates per degree of crank rotation")]
/// [SerializeField]
/// @brief Field degreesPerCrankDegree, offset: 0xa4, size: 0x4, def value: None
 float_t  ___degreesPerCrankDegree;

/// [Header("Firing")]
/// [SerializeField]
/// @brief Field fireCooldown, offset: 0xa8, size: 0x4, def value: None
 float_t  ___fireCooldown;

/// @brief Field currentPitch, offset: 0xac, size: 0x4, def value: None
 float_t  ___currentPitch;

/// @brief Field currentYaw, offset: 0xb0, size: 0x4, def value: None
 float_t  ___currentYaw;

/// @brief Field lastFireTime, offset: 0xb4, size: 0x4, def value: None
 float_t  ___lastFireTime;

/// @brief Field pitchCrankSync, offset: 0xb8, size: 0xc, def value: None
 ::GlobalNamespace::ArtilleryCannonState_CrankSyncState  ___pitchCrankSync;

/// @brief Field yawCrankSync, offset: 0xc4, size: 0xc, def value: None
 ::GlobalNamespace::ArtilleryCannonState_CrankSyncState  ___yawCrankSync;

/// @brief Field pitchPendingGrabTime, offset: 0xd0, size: 0x4, def value: None
 float_t  ___pitchPendingGrabTime;

/// @brief Field yawPendingGrabTime, offset: 0xd4, size: 0x4, def value: None
 float_t  ___yawPendingGrabTime;

/// [CompilerGenerated]
/// @brief Field onRotationChanged, offset: 0xd8, size: 0x8, def value: None
 ::System::Action*  ___onRotationChanged;

/// [CompilerGenerated]
/// @brief Field onFired, offset: 0xe0, size: 0x8, def value: None
 ::System::Action*  ___onFired;

/// [WeaverGenerated]
/// [DefaultForProperty("FusionData", 0, 8)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _FusionData, offset: 0xe8, size: 0x20, def value: None
 ::GlobalNamespace::ArtilleryCannonState_FusionSyncState  ____FusionData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___pitchMin) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___pitchMax) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___degreesPerCrankDegree) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___fireCooldown) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___currentPitch) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___currentYaw) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___lastFireTime) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___pitchCrankSync) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___yawCrankSync) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___pitchPendingGrabTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___yawPendingGrabTime) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___onRotationChanged) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ___onFired) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState, ____FusionData) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArtilleryCannonState) == 0x108, "Size mismatch!");

} // namespace end def GlobalNamespace
