#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryChargerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BatteryChargerState_CrankSyncState_def.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_FusionCrankData_def.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_FusionSyncState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BatteryChargerState)
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
namespace GlobalNamespace {
struct BatteryChargerState_BatteryMsg;
}
namespace GlobalNamespace {
struct BatteryChargerState_CrankSyncState;
}
namespace GlobalNamespace {
struct BatteryChargerState_FusionCrankData;
}
namespace GlobalNamespace {
struct BatteryChargerState_FusionSyncState;
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
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class BatteryChargerState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BatteryChargerState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BatteryChargerState*, "", "BatteryChargerState");
// [RequireComponent(typeof(XSceneRefTarget))]
// [NetworkBehaviourWeaved(62)]
// Dependencies BatteryChargerState::CrankSyncState, BatteryChargerState::FusionCrankData, BatteryChargerState::FusionSyncState, NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: BatteryChargerState
class CORDL_TYPE BatteryChargerState : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using BatteryMsg = ::GlobalNamespace::BatteryChargerState_BatteryMsg;

using CrankSyncState = ::GlobalNamespace::BatteryChargerState_CrankSyncState;

using FusionCrankData = ::GlobalNamespace::BatteryChargerState_FusionCrankData;

using FusionSyncState = ::GlobalNamespace::BatteryChargerState_FusionSyncState;

 __declspec(property(get=get_ChargePerCrankDegree)) float_t  ChargePerCrankDegree;

 __declspec(property(get=get_ChargePercent)) float_t  ChargePercent;

 __declspec(property(get=get_CurrentCharge)) float_t  CurrentCharge;

 __declspec(property(get=get_EventPhase)) int32_t  EventPhase;

/// [Networked]
/// [Capacity(20)]
/// [NetworkedWeaved(2, 60)]
/// @brief [NetworkedWeavedArray(20, 3, typeof(Fusion.CodeGen.ReaderWriter@BatteryChargerState__FusionCrankData))]
 __declspec(property(get=get_FusionCranks)) ::Fusion::NetworkArray_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>  FusionCranks;

/// [Networked]
/// @brief [NetworkedWeaved(0, 2)]
 __declspec(property(get=get_FusionData, put=set_FusionData)) ::GlobalNamespace::BatteryChargerState_FusionSyncState  FusionData;

 __declspec(property(get=get_LocalActorNr)) int32_t  LocalActorNr;

 __declspec(property(get=get_MaxCharge)) float_t  MaxCharge;

/// @brief Field _FusionCranks, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__FusionCranks, put=__cordl_internal_set__FusionCranks)) ::ArrayW<::GlobalNamespace::BatteryChargerState_FusionCrankData>  _FusionCranks;

/// @brief Field _FusionData, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__FusionData, put=__cordl_internal_set__FusionData)) ::GlobalNamespace::BatteryChargerState_FusionSyncState  _FusionData;

/// @brief Field activeCrankerCount, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeCrankerCount, put=__cordl_internal_set_activeCrankerCount)) int32_t  activeCrankerCount;

/// @brief Field chargePerCrankDegree, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargePerCrankDegree, put=__cordl_internal_set_chargePerCrankDegree)) float_t  chargePerCrankDegree;

/// @brief Field crankSyncs, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_crankSyncs, put=__cordl_internal_set_crankSyncs)) ::ArrayW<::GlobalNamespace::BatteryChargerState_CrankSyncState>  crankSyncs;

/// @brief Field currentCharge, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentCharge, put=__cordl_internal_set_currentCharge)) float_t  currentCharge;

/// @brief Field drainPerSecond, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_drainPerSecond, put=__cordl_internal_set_drainPerSecond)) float_t  drainPerSecond;

/// @brief Field eventPhase, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventPhase, put=__cordl_internal_set_eventPhase)) int32_t  eventPhase;

/// @brief Field m_disableNetworking, offset 0xec, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_disableNetworking, put=__cordl_internal_set_m_disableNetworking)) bool  m_disableNetworking;

/// @brief Field maxCharge, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCharge, put=__cordl_internal_set_maxCharge)) float_t  maxCharge;

/// @brief Field nextCrankRPCTimestamp, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextCrankRPCTimestamp, put=__cordl_internal_set_nextCrankRPCTimestamp)) float_t  nextCrankRPCTimestamp;

/// @brief Field onChargeChanged, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChargeChanged, put=__cordl_internal_set_onChargeChanged)) ::System::Action*  onChargeChanged;

/// @brief Field onEventPhaseChanged, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEventPhaseChanged, put=__cordl_internal_set_onEventPhaseChanged)) ::System::Action_1<int32_t>*  onEventPhaseChanged;

/// @brief Field onFullyCharged, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFullyCharged, put=__cordl_internal_set_onFullyCharged)) ::System::Action*  onFullyCharged;

/// @brief Field pendingCrankCharge, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_pendingCrankCharge, put=__cordl_internal_set_pendingCrankCharge)) float_t  pendingCrankCharge;

/// @brief Field pendingCrankIndex, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_pendingCrankIndex, put=__cordl_internal_set_pendingCrankIndex)) int32_t  pendingCrankIndex;

/// @brief Field pendingGrabTime, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingGrabTime, put=__cordl_internal_set_pendingGrabTime)) ::ArrayW<float_t>  pendingGrabTime;

/// @brief Method Awake, addr 0x5bfeb38, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5bffb2c, size 0xdc, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5bffc08, size 0xb0, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method DisableNetworking, addr 0x5bfee0c, size 0xc, virtual false, abstract: false, final false
inline void DisableNetworking() ;

/// @brief Method EnableNetworking, addr 0x5bfee18, size 0x8, virtual false, abstract: false, final false
inline void EnableNetworking() ;

/// @brief Method FindRigForActor, addr 0x5bfcd5c, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::VRRig> FindRigForActor(int32_t  actorNr) ;

/// @brief Method FlushCrankRPC, addr 0x5bfec50, size 0x1bc, virtual false, abstract: false, final false
inline void FlushCrankRPC() ;

static inline ::GlobalNamespace::BatteryChargerState* New_ctor() ;

/// @brief Method NotifyCrankGrabbed, addr 0x5bfd2c0, size 0x23c, virtual false, abstract: false, final false
inline bool NotifyCrankGrabbed(int32_t  crankIndex, bool  isLeftHand) ;

/// @brief Method NotifyCrankInput, addr 0x5bfd750, size 0x124, virtual false, abstract: false, final false
inline void NotifyCrankInput(int32_t  crankIndex, float_t  degrees) ;

/// @brief Method NotifyCrankReleased, addr 0x5bfd510, size 0x21c, virtual false, abstract: false, final false
inline void NotifyCrankReleased(int32_t  crankIndex, float_t  finalAngle) ;

/// [PunRPC]
/// @brief Method RPC_BatteryMessage, addr 0x5bfee20, size 0x338, virtual false, abstract: false, final false
inline void RPC_BatteryMessage(uint8_t  msgType, uint8_t  crankIndex, float_t  floatParam, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataFusion, addr 0x5bff814, size 0x25c, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5bff2b4, size 0x2f0, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetChargePerCrankDegree, addr 0x5bfeb30, size 0x8, virtual false, abstract: false, final false
inline void SetChargePerCrankDegree(float_t  chargeRate) ;

/// @brief Method SetEventPhase, addr 0x5bfd1d4, size 0xbc, virtual false, abstract: false, final false
inline void SetEventPhase(int32_t  phase) ;

/// @brief Method Update, addr 0x5bfeb90, size 0xc0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateLocalCrankState, addr 0x5bfcbc8, size 0x88, virtual false, abstract: false, final false
inline void UpdateLocalCrankState(int32_t  crankIndex, bool  isLeftHand, float_t  angle) ;

/// @brief Method WriteDataFusion, addr 0x5bff714, size 0x100, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5bff158, size 0x15c, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::ArrayW<::GlobalNamespace::BatteryChargerState_FusionCrankData> const& __cordl_internal_get__FusionCranks() const;

constexpr ::ArrayW<::GlobalNamespace::BatteryChargerState_FusionCrankData>& __cordl_internal_get__FusionCranks() ;

constexpr ::GlobalNamespace::BatteryChargerState_FusionSyncState const& __cordl_internal_get__FusionData() const;

constexpr ::GlobalNamespace::BatteryChargerState_FusionSyncState& __cordl_internal_get__FusionData() ;

constexpr int32_t const& __cordl_internal_get_activeCrankerCount() const;

constexpr int32_t& __cordl_internal_get_activeCrankerCount() ;

constexpr float_t const& __cordl_internal_get_chargePerCrankDegree() const;

constexpr float_t& __cordl_internal_get_chargePerCrankDegree() ;

constexpr ::ArrayW<::GlobalNamespace::BatteryChargerState_CrankSyncState> const& __cordl_internal_get_crankSyncs() const;

constexpr ::ArrayW<::GlobalNamespace::BatteryChargerState_CrankSyncState>& __cordl_internal_get_crankSyncs() ;

constexpr float_t const& __cordl_internal_get_currentCharge() const;

constexpr float_t& __cordl_internal_get_currentCharge() ;

constexpr float_t const& __cordl_internal_get_drainPerSecond() const;

constexpr float_t& __cordl_internal_get_drainPerSecond() ;

constexpr int32_t const& __cordl_internal_get_eventPhase() const;

constexpr int32_t& __cordl_internal_get_eventPhase() ;

constexpr bool const& __cordl_internal_get_m_disableNetworking() const;

constexpr bool& __cordl_internal_get_m_disableNetworking() ;

constexpr float_t const& __cordl_internal_get_maxCharge() const;

constexpr float_t& __cordl_internal_get_maxCharge() ;

constexpr float_t const& __cordl_internal_get_nextCrankRPCTimestamp() const;

constexpr float_t& __cordl_internal_get_nextCrankRPCTimestamp() ;

constexpr ::System::Action* const& __cordl_internal_get_onChargeChanged() const;

constexpr ::System::Action*& __cordl_internal_get_onChargeChanged() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_onEventPhaseChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_onEventPhaseChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_onFullyCharged() const;

constexpr ::System::Action*& __cordl_internal_get_onFullyCharged() ;

constexpr float_t const& __cordl_internal_get_pendingCrankCharge() const;

constexpr float_t& __cordl_internal_get_pendingCrankCharge() ;

constexpr int32_t const& __cordl_internal_get_pendingCrankIndex() const;

constexpr int32_t& __cordl_internal_get_pendingCrankIndex() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_pendingGrabTime() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_pendingGrabTime() ;

constexpr void __cordl_internal_set__FusionCranks(::ArrayW<::GlobalNamespace::BatteryChargerState_FusionCrankData>  value) ;

constexpr void __cordl_internal_set__FusionData(::GlobalNamespace::BatteryChargerState_FusionSyncState  value) ;

constexpr void __cordl_internal_set_activeCrankerCount(int32_t  value) ;

constexpr void __cordl_internal_set_chargePerCrankDegree(float_t  value) ;

constexpr void __cordl_internal_set_crankSyncs(::ArrayW<::GlobalNamespace::BatteryChargerState_CrankSyncState>  value) ;

constexpr void __cordl_internal_set_currentCharge(float_t  value) ;

constexpr void __cordl_internal_set_drainPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_eventPhase(int32_t  value) ;

constexpr void __cordl_internal_set_m_disableNetworking(bool  value) ;

constexpr void __cordl_internal_set_maxCharge(float_t  value) ;

constexpr void __cordl_internal_set_nextCrankRPCTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_onChargeChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_onEventPhaseChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onFullyCharged(::System::Action*  value) ;

constexpr void __cordl_internal_set_pendingCrankCharge(float_t  value) ;

constexpr void __cordl_internal_set_pendingCrankIndex(int32_t  value) ;

constexpr void __cordl_internal_set_pendingGrabTime(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x5bffa70, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onChargeChanged, addr 0x5bfc294, size 0x9c, virtual false, abstract: false, final false
inline void add_onChargeChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onEventPhaseChanged, addr 0x5bfc3cc, size 0xb0, virtual false, abstract: false, final false
inline void add_onEventPhaseChanged(::System::Action_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onFullyCharged, addr 0x5bfc330, size 0x9c, virtual false, abstract: false, final false
inline void add_onFullyCharged(::System::Action*  value) ;

/// @brief Method get_ChargePerCrankDegree, addr 0x5bfea9c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ChargePerCrankDegree() ;

/// @brief Method get_ChargePercent, addr 0x5bfd9dc, size 0x1c, virtual false, abstract: false, final false
inline float_t get_ChargePercent() ;

/// @brief Method get_CurrentCharge, addr 0x5bfea8c, size 0x8, virtual false, abstract: false, final false
inline float_t get_CurrentCharge() ;

/// @brief Method get_EventPhase, addr 0x5bfeaa4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_EventPhase() ;

/// @brief Method get_FusionCranks, addr 0x5bff65c, size 0xb8, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<::GlobalNamespace::BatteryChargerState_FusionCrankData> get_FusionCranks() ;

/// @brief Method get_FusionData, addr 0x5bff5a4, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::BatteryChargerState_FusionSyncState get_FusionData() ;

/// @brief Method get_LocalActorNr, addr 0x5bfeaac, size 0x84, virtual false, abstract: false, final false
inline int32_t get_LocalActorNr() ;

/// @brief Method get_MaxCharge, addr 0x5bfea94, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxCharge() ;

/// [CompilerGenerated]
/// @brief Method remove_onChargeChanged, addr 0x5bfc75c, size 0x9c, virtual false, abstract: false, final false
inline void remove_onChargeChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onEventPhaseChanged, addr 0x5bfc894, size 0xb0, virtual false, abstract: false, final false
inline void remove_onEventPhaseChanged(::System::Action_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onFullyCharged, addr 0x5bfc7f8, size 0x9c, virtual false, abstract: false, final false
inline void remove_onFullyCharged(::System::Action*  value) ;

/// @brief Method set_FusionData, addr 0x5bff600, size 0x5c, virtual false, abstract: false, final false
inline void set_FusionData(::GlobalNamespace::BatteryChargerState_FusionSyncState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BatteryChargerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BatteryChargerState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BatteryChargerState(BatteryChargerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatteryChargerState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatteryChargerState(BatteryChargerState const& ) = delete;

/// @brief Field CRANK_RPC_INTERVAL offset 0xffffffff size 0x4
static constexpr float_t  CRANK_RPC_INTERVAL{static_cast<float_t>(1.0f)};

/// @brief Field GRAB_GRACE_PERIOD offset 0xffffffff size 0x4
static constexpr float_t  GRAB_GRACE_PERIOD{static_cast<float_t>(1.0f)};

/// @brief Field MAX_CRANKS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_CRANKS{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{413};

/// [Header("Charging")]
/// [Tooltip("Charge added per degree of crank rotation (across all cranks)")]
/// [SerializeField]
/// @brief Field chargePerCrankDegree, offset: 0x9c, size: 0x4, def value: None
 float_t  ___chargePerCrankDegree;

/// [Tooltip("Charge drains at this rate per second when no one is cranking")]
/// [SerializeField]
/// @brief Field drainPerSecond, offset: 0xa0, size: 0x4, def value: None
 float_t  ___drainPerSecond;

/// [Tooltip("Maximum charge level (0 to 1)")]
/// [SerializeField]
/// @brief Field maxCharge, offset: 0xa4, size: 0x4, def value: None
 float_t  ___maxCharge;

/// @brief Field currentCharge, offset: 0xa8, size: 0x4, def value: None
 float_t  ___currentCharge;

/// @brief Field activeCrankerCount, offset: 0xac, size: 0x4, def value: None
 int32_t  ___activeCrankerCount;

/// @brief Field eventPhase, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___eventPhase;

/// @brief Field crankSyncs, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BatteryChargerState_CrankSyncState>  ___crankSyncs;

/// @brief Field pendingGrabTime, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<float_t>  ___pendingGrabTime;

/// [CompilerGenerated]
/// @brief Field onChargeChanged, offset: 0xc8, size: 0x8, def value: None
 ::System::Action*  ___onChargeChanged;

/// [CompilerGenerated]
/// @brief Field onFullyCharged, offset: 0xd0, size: 0x8, def value: None
 ::System::Action*  ___onFullyCharged;

/// [CompilerGenerated]
/// @brief Field onEventPhaseChanged, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___onEventPhaseChanged;

/// @brief Field nextCrankRPCTimestamp, offset: 0xe0, size: 0x4, def value: None
 float_t  ___nextCrankRPCTimestamp;

/// @brief Field pendingCrankCharge, offset: 0xe4, size: 0x4, def value: None
 float_t  ___pendingCrankCharge;

/// @brief Field pendingCrankIndex, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___pendingCrankIndex;

/// @brief Field m_disableNetworking, offset: 0xec, size: 0x1, def value: None
 bool  ___m_disableNetworking;

/// [WeaverGenerated]
/// [DefaultForProperty("FusionData", 0, 2)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _FusionData, offset: 0xf0, size: 0x8, def value: None
 ::GlobalNamespace::BatteryChargerState_FusionSyncState  ____FusionData;

/// [WeaverGenerated]
/// [DefaultForProperty("FusionCranks", 2, 60)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _FusionCranks, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BatteryChargerState_FusionCrankData>  ____FusionCranks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___chargePerCrankDegree) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___drainPerSecond) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___maxCharge) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___currentCharge) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___activeCrankerCount) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___eventPhase) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___crankSyncs) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___pendingGrabTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___onChargeChanged) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___onFullyCharged) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___onEventPhaseChanged) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___nextCrankRPCTimestamp) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___pendingCrankCharge) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___pendingCrankIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ___m_disableNetworking) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ____FusionData) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerState, ____FusionCranks) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BatteryChargerState) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
