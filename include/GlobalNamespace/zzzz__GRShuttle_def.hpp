#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShuttle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRShuttleGroupLoc_def.hpp"
#include "GlobalNamespace/zzzz__GRShuttleState_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRShuttle)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GRBay;
}
namespace GlobalNamespace {
class GRDoor;
}
namespace GlobalNamespace {
struct GRPlayer_ShuttleState;
}
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
struct GRShuttleGroupLoc;
}
namespace GlobalNamespace {
struct GRShuttleState;
}
namespace GlobalNamespace {
class GRShuttleUI;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
class IDCardScanner;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class GRShuttle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRShuttle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRShuttle*, "", "GRShuttle");
// Dependencies GRShuttleGroupLoc, GRShuttleState, GTZone, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRShuttle
class CORDL_TYPE GRShuttle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field departCardScanner, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_departCardScanner, put=__cordl_internal_set_departCardScanner)) ::UnityW<::GlobalNamespace::IDCardScanner>  departCardScanner;

/// @brief Field employeeIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_employeeIndex, put=__cordl_internal_set_employeeIndex)) int32_t  employeeIndex;

/// @brief Field entryCardScanner, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryCardScanner, put=__cordl_internal_set_entryCardScanner)) ::UnityW<::GlobalNamespace::IDCardScanner>  entryCardScanner;

/// @brief Field entryDoor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryDoor, put=__cordl_internal_set_entryDoor)) ::GlobalNamespace::GRDoor*  entryDoor;

/// @brief Field friendCollider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendCollider, put=__cordl_internal_set_friendCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  friendCollider;

/// @brief Field hideOnMove, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_hideOnMove, put=__cordl_internal_set_hideOnMove)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  hideOnMove;

/// @brief Field inShuttleVolume, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_inShuttleVolume, put=__cordl_internal_set_inShuttleVolume)) ::UnityW<::UnityEngine::BoxCollider>  inShuttleVolume;

/// @brief Field joinTrigger, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinTrigger, put=__cordl_internal_set_joinTrigger)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  joinTrigger;

/// @brief Field landSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_landSound, put=__cordl_internal_set_landSound)) ::GlobalNamespace::AbilitySound*  landSound;

/// @brief Field lastCloseTime, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastCloseTime, put=__cordl_internal_set_lastCloseTime)) double_t  lastCloseTime;

/// @brief Field location, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_location, put=__cordl_internal_set_location)) ::GlobalNamespace::GRShuttleGroupLoc  location;

/// @brief Field moveSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_moveSound, put=__cordl_internal_set_moveSound)) ::GlobalNamespace::AbilitySound*  moveSound;

/// @brief Field reactor, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field sectionFloors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sectionFloors, put=setStaticF_sectionFloors)) ::ArrayW<int32_t>  sectionFloors;

/// @brief Field showOnMove, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_showOnMove, put=__cordl_internal_set_showOnMove)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  showOnMove;

/// @brief Field shuttleBay, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shuttleBay, put=__cordl_internal_set_shuttleBay)) ::UnityW<::GlobalNamespace::GRBay>  shuttleBay;

/// @brief Field shuttleId, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_shuttleId, put=__cordl_internal_set_shuttleId)) int32_t  shuttleId;

/// @brief Field shuttleOwner, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_shuttleOwner, put=__cordl_internal_set_shuttleOwner)) ::GlobalNamespace::NetPlayer*  shuttleOwner;

/// @brief Field shuttleUI, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_shuttleUI, put=__cordl_internal_set_shuttleUI)) ::GlobalNamespace::GRShuttleUI*  shuttleUI;

/// @brief Field specificDestinationShuttle, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_specificDestinationShuttle, put=__cordl_internal_set_specificDestinationShuttle)) ::UnityW<::GlobalNamespace::GRShuttle>  specificDestinationShuttle;

/// @brief Field specificFloor, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_specificFloor, put=__cordl_internal_set_specificFloor)) int32_t  specificFloor;

/// @brief Field state, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRShuttleState  state;

/// @brief Field stateStartTime, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) double_t  stateStartTime;

/// @brief Field takeOffSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_takeOffSound, put=__cordl_internal_set_takeOffSound)) ::GlobalNamespace::AbilitySound*  takeOffSound;

/// @brief Field targetSection, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetSection, put=__cordl_internal_set_targetSection)) int32_t  targetSection;

/// @brief Field windowFx, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_windowFx, put=__cordl_internal_set_windowFx)) ::UnityW<::UnityEngine::ParticleSystem>  windowFx;

/// @brief Field zone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x58b4dec, size 0xe8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalcTargetShuttleId, addr 0x58b71d8, size 0x14c, virtual false, abstract: false, final false
static inline int32_t CalcTargetShuttleId(int32_t  currShuttleId, ::StringW  ownerUserId) ;

/// @brief Method CancelPlayerShuttle, addr 0x58b70b8, size 0x120, virtual false, abstract: false, final false
static inline void CancelPlayerShuttle(::GlobalNamespace::GRPlayer*  player) ;

/// @brief Method ClampTargetSection, addr 0x58b5048, size 0x90, virtual false, abstract: false, final false
inline int32_t ClampTargetSection(int32_t  newTargetSection) ;

/// @brief Method CloseDoorLocal, addr 0x58b5b08, size 0x20, virtual false, abstract: false, final false
inline void CloseDoorLocal() ;

/// @brief Method EmergencyOpenDoor, addr 0x58b663c, size 0xa4, virtual false, abstract: false, final false
inline void EmergencyOpenDoor() ;

/// @brief Method GetMaxDropFloor, addr 0x58b4d20, size 0xc4, virtual false, abstract: false, final false
inline int32_t GetMaxDropFloor() ;

/// @brief Method GetOwner, addr 0x58b5200, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetOwner() ;

/// @brief Method GetState, addr 0x58b51f8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRShuttleState GetState() ;

/// @brief Method GetTargetFloor, addr 0x58b4c1c, size 0x104, virtual false, abstract: false, final false
inline int32_t GetTargetFloor() ;

/// @brief Method GetTargetShuttle, addr 0x58b6144, size 0x104, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRShuttle> GetTargetShuttle() ;

/// @brief Method Init, addr 0x58b4eec, size 0x8, virtual false, abstract: false, final false
inline void Init(int32_t  shuttleId) ;

/// @brief Method IsPlayerOwner, addr 0x58b6248, size 0xa4, virtual false, abstract: false, final false
inline bool IsPlayerOwner(::GlobalNamespace::GRPlayer*  player) ;

/// @brief Method IsPlayerOwner, addr 0x58b64ac, size 0x10, virtual false, abstract: false, final false
inline bool IsPlayerOwner(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method IsPodUnlocked, addr 0x58b5ecc, size 0xf4, virtual false, abstract: false, final false
inline bool IsPodUnlocked() ;

/// @brief Method IsShuttleInteractableByPlayer, addr 0x58b62ec, size 0x1c0, virtual false, abstract: false, final false
inline bool IsShuttleInteractableByPlayer(::GlobalNamespace::GRPlayer*  player, bool  ignoreOwnership) ;

/// @brief Method JoinShuttleRoomLocalPlayer, addr 0x58b52e8, size 0x4, virtual false, abstract: false, final false
inline void JoinShuttleRoomLocalPlayer(::GlobalNamespace::GRShuttle*  sourceShuttle, ::GlobalNamespace::GRShuttle*  destShuttle) ;

static inline ::GlobalNamespace::GRShuttle* New_ctor() ;

/// @brief Method OnArrive, addr 0x58b68ec, size 0xc, virtual false, abstract: false, final false
inline void OnArrive() ;

/// @brief Method OnCloseDoor, addr 0x58b6778, size 0xbc, virtual false, abstract: false, final false
inline void OnCloseDoor() ;

/// @brief Method OnDisable, addr 0x58b4ee0, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58b4ed4, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLaunch, addr 0x58b6834, size 0xb8, virtual false, abstract: false, final false
inline void OnLaunch() ;

/// @brief Method OnOpenDoor, addr 0x58b66e0, size 0x98, virtual false, abstract: false, final false
inline void OnOpenDoor() ;

/// @brief Method OnShuttleMove, addr 0x58b5fc0, size 0x44, virtual false, abstract: false, final false
inline void OnShuttleMove() ;

/// @brief Method OnShuttleMoveActorNr, addr 0x58b6004, size 0xb8, virtual false, abstract: false, final false
inline void OnShuttleMoveActorNr(int32_t  actorNr) ;

/// @brief Method OnTargetLevelDown, addr 0x58b692c, size 0x34, virtual false, abstract: false, final false
inline void OnTargetLevelDown() ;

/// @brief Method OnTargetLevelUp, addr 0x58b68f8, size 0x34, virtual false, abstract: false, final false
inline void OnTargetLevelUp() ;

/// @brief Method OpenDoorLocal, addr 0x58b5a68, size 0xa0, virtual false, abstract: false, final false
inline void OpenDoorLocal() ;

/// @brief Method Refresh, addr 0x58b52d4, size 0x14, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method RequestArrival, addr 0x58b5e9c, size 0x30, virtual false, abstract: false, final false
inline void RequestArrival() ;

/// @brief Method SetBay, addr 0x58b5014, size 0x8, virtual false, abstract: false, final false
inline void SetBay(::GlobalNamespace::GRBay*  bay) ;

/// @brief Method SetLocation, addr 0x58b5024, size 0x24, virtual false, abstract: false, final false
inline void SetLocation(::GlobalNamespace::GRShuttleGroupLoc  location) ;

/// @brief Method SetOwner, addr 0x58b5120, size 0xd8, virtual false, abstract: false, final false
inline void SetOwner(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SetPlayerShuttleState, addr 0x58b6960, size 0x2e0, virtual false, abstract: false, final false
static inline void SetPlayerShuttleState(::GlobalNamespace::GRPlayer*  player, ::GlobalNamespace::GRPlayer_ShuttleState  newState) ;

/// @brief Method SetReactor, addr 0x58b501c, size 0x8, virtual false, abstract: false, final false
inline void SetReactor(::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method SetState, addr 0x58b5758, size 0x310, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRShuttleState  newState, bool  force) ;

/// @brief Method Setup, addr 0x58b50d8, size 0x48, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::GhostReactor*  reactor, ::GlobalNamespace::GRShuttleGroupLoc  location, int32_t  employeeIndex) ;

/// @brief Method SliceUpdate, addr 0x58b5208, size 0x4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method StartMoveFx, addr 0x58b5d7c, size 0x120, virtual false, abstract: false, final false
inline void StartMoveFx() ;

/// @brief Method StopMoveFx, addr 0x58b4ef4, size 0x120, virtual false, abstract: false, final false
inline void StopMoveFx() ;

/// @brief Method TargetLevelDown, addr 0x58b6100, size 0x44, virtual false, abstract: false, final false
inline void TargetLevelDown() ;

/// @brief Method TargetLevelUp, addr 0x58b60bc, size 0x44, virtual false, abstract: false, final false
inline void TargetLevelUp() ;

/// @brief Method TeleportLocalPlayer, addr 0x58b52ec, size 0x46c, virtual false, abstract: false, final false
static inline void TeleportLocalPlayer(::GlobalNamespace::GRShuttle*  sourceShuttle, ::GlobalNamespace::GRShuttle*  destShuttle) ;

/// @brief Method ToggleDoor, addr 0x58b64bc, size 0x98, virtual false, abstract: false, final false
inline void ToggleDoor() ;

/// @brief Method ToggleDoorActorNr, addr 0x58b6554, size 0xe8, virtual false, abstract: false, final false
inline void ToggleDoorActorNr(int32_t  actorNr) ;

/// @brief Method TryStartLocalPlayerShuttleMove, addr 0x58b5b28, size 0x254, virtual false, abstract: false, final false
static inline void TryStartLocalPlayerShuttleMove(int32_t  currShuttleId, ::GlobalNamespace::NetPlayer*  shuttleOwner) ;

/// @brief Method UpdateGRPlayerShuttle, addr 0x58b6c40, size 0x478, virtual false, abstract: false, final false
static inline void UpdateGRPlayerShuttle(::GlobalNamespace::GRPlayer*  player) ;

/// @brief Method UpdateState, addr 0x58b520c, size 0xc8, virtual false, abstract: false, final false
inline void UpdateState() ;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& __cordl_internal_get_departCardScanner() const;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& __cordl_internal_get_departCardScanner() ;

constexpr int32_t const& __cordl_internal_get_employeeIndex() const;

constexpr int32_t& __cordl_internal_get_employeeIndex() ;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& __cordl_internal_get_entryCardScanner() const;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& __cordl_internal_get_entryCardScanner() ;

constexpr ::GlobalNamespace::GRDoor* const& __cordl_internal_get_entryDoor() const;

constexpr ::GlobalNamespace::GRDoor*& __cordl_internal_get_entryDoor() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_friendCollider() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_friendCollider() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_hideOnMove() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_hideOnMove() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_inShuttleVolume() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_inShuttleVolume() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get_joinTrigger() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get_joinTrigger() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_landSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_landSound() ;

constexpr double_t const& __cordl_internal_get_lastCloseTime() const;

constexpr double_t& __cordl_internal_get_lastCloseTime() ;

constexpr ::GlobalNamespace::GRShuttleGroupLoc const& __cordl_internal_get_location() const;

constexpr ::GlobalNamespace::GRShuttleGroupLoc& __cordl_internal_get_location() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_moveSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_moveSound() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_showOnMove() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_showOnMove() ;

constexpr ::UnityW<::GlobalNamespace::GRBay> const& __cordl_internal_get_shuttleBay() const;

constexpr ::UnityW<::GlobalNamespace::GRBay>& __cordl_internal_get_shuttleBay() ;

constexpr int32_t const& __cordl_internal_get_shuttleId() const;

constexpr int32_t& __cordl_internal_get_shuttleId() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_shuttleOwner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_shuttleOwner() ;

constexpr ::GlobalNamespace::GRShuttleUI* const& __cordl_internal_get_shuttleUI() const;

constexpr ::GlobalNamespace::GRShuttleUI*& __cordl_internal_get_shuttleUI() ;

constexpr ::UnityW<::GlobalNamespace::GRShuttle> const& __cordl_internal_get_specificDestinationShuttle() const;

constexpr ::UnityW<::GlobalNamespace::GRShuttle>& __cordl_internal_get_specificDestinationShuttle() ;

constexpr int32_t const& __cordl_internal_get_specificFloor() const;

constexpr int32_t& __cordl_internal_get_specificFloor() ;

constexpr ::GlobalNamespace::GRShuttleState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRShuttleState& __cordl_internal_get_state() ;

constexpr double_t const& __cordl_internal_get_stateStartTime() const;

constexpr double_t& __cordl_internal_get_stateStartTime() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_takeOffSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_takeOffSound() ;

constexpr int32_t const& __cordl_internal_get_targetSection() const;

constexpr int32_t& __cordl_internal_get_targetSection() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_windowFx() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_windowFx() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_departCardScanner(::UnityW<::GlobalNamespace::IDCardScanner>  value) ;

constexpr void __cordl_internal_set_employeeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_entryCardScanner(::UnityW<::GlobalNamespace::IDCardScanner>  value) ;

constexpr void __cordl_internal_set_entryDoor(::GlobalNamespace::GRDoor*  value) ;

constexpr void __cordl_internal_set_friendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_hideOnMove(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_inShuttleVolume(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_joinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_landSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_lastCloseTime(double_t  value) ;

constexpr void __cordl_internal_set_location(::GlobalNamespace::GRShuttleGroupLoc  value) ;

constexpr void __cordl_internal_set_moveSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_showOnMove(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_shuttleBay(::UnityW<::GlobalNamespace::GRBay>  value) ;

constexpr void __cordl_internal_set_shuttleId(int32_t  value) ;

constexpr void __cordl_internal_set_shuttleOwner(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_shuttleUI(::GlobalNamespace::GRShuttleUI*  value) ;

constexpr void __cordl_internal_set_specificDestinationShuttle(::UnityW<::GlobalNamespace::GRShuttle>  value) ;

constexpr void __cordl_internal_set_specificFloor(int32_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRShuttleState  value) ;

constexpr void __cordl_internal_set_stateStartTime(double_t  value) ;

constexpr void __cordl_internal_set_takeOffSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_targetSection(int32_t  value) ;

constexpr void __cordl_internal_set_windowFx(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x58b7324, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<int32_t> getStaticF_sectionFloors() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_sectionFloors(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRShuttle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRShuttle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRShuttle(GRShuttle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRShuttle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRShuttle(GRShuttle const& ) = delete;

/// @brief Field InvalidId offset 0xffffffff size 0x4
static constexpr int32_t  InvalidId{static_cast<int32_t>(0xffffffff)};

/// @brief Field MAX_DEPTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DEPTH{static_cast<int32_t>(0x1d)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2044};

/// @brief Field zone, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// @brief Field shuttleUI, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::GRShuttleUI*  ___shuttleUI;

/// @brief Field entryDoor, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::GRDoor*  ___entryDoor;

/// @brief Field location, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::GRShuttleGroupLoc  ___location;

/// @brief Field employeeIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___employeeIndex;

/// @brief Field takeOffSound, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___takeOffSound;

/// @brief Field moveSound, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___moveSound;

/// @brief Field landSound, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___landSound;

/// @brief Field friendCollider, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___friendCollider;

/// @brief Field joinTrigger, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ___joinTrigger;

/// @brief Field specificDestinationShuttle, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRShuttle>  ___specificDestinationShuttle;

/// @brief Field specificFloor, offset: 0x70, size: 0x4, def value: None
 int32_t  ___specificFloor;

/// @brief Field windowFx, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___windowFx;

/// @brief Field hideOnMove, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___hideOnMove;

/// @brief Field showOnMove, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___showOnMove;

/// @brief Field inShuttleVolume, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___inShuttleVolume;

/// @brief Field entryCardScanner, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::IDCardScanner>  ___entryCardScanner;

/// @brief Field departCardScanner, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::IDCardScanner>  ___departCardScanner;

/// @brief Field shuttleId, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___shuttleId;

/// @brief Field reactor, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field targetSection, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___targetSection;

/// @brief Field state, offset: 0xbc, size: 0x4, def value: None
 ::GlobalNamespace::GRShuttleState  ___state;

/// @brief Field stateStartTime, offset: 0xc0, size: 0x8, def value: None
 double_t  ___stateStartTime;

/// @brief Field shuttleBay, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBay>  ___shuttleBay;

/// @brief Field shuttleOwner, offset: 0xd0, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___shuttleOwner;

/// @brief Field lastCloseTime, offset: 0xd8, size: 0x8, def value: None
 double_t  ___lastCloseTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRShuttle, ___zone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___shuttleUI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___entryDoor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___location) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___employeeIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___takeOffSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___moveSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___landSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___friendCollider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___joinTrigger) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___specificDestinationShuttle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___specificFloor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___windowFx) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___hideOnMove) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___showOnMove) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___inShuttleVolume) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___entryCardScanner) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___departCardScanner) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___shuttleId) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___reactor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___targetSection) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___state) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___stateStartTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___shuttleBay) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___shuttleOwner) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttle, ___lastCloseTime) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRShuttle) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
