#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SuperInfectionManager)
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class GameEntityManager;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IFactoryItemProvider;
}
namespace GlobalNamespace {
class IGameEntityZoneComponent;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace GlobalNamespace {
class SIProgression;
}
namespace GlobalNamespace {
class SITechTreeSO;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
namespace GlobalNamespace {
struct SnapJointType;
}
namespace GlobalNamespace {
struct SuperInfectionManager_AuthorityToClientRPC;
}
namespace GlobalNamespace {
struct SuperInfectionManager_ClientToAuthorityRPC;
}
namespace GlobalNamespace {
struct SuperInfectionManager_ClientToClientRPC;
}
namespace GlobalNamespace {
struct SuperInfectionManager_RoomFXType;
}
namespace GlobalNamespace {
class SuperInfectionManager__GetPoints_d__54;
}
namespace GlobalNamespace {
class SuperInfectionSnapPoint;
}
namespace GlobalNamespace {
class SuperInfection;
}
namespace GlobalNamespace {
class TestSpawnGadget;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
struct ZoneClearReason;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SuperInfectionManager;
}
namespace GlobalNamespace {
class SuperInfectionManager__GetPoints_d__54;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SuperInfectionManager*);
MARK_REF_T(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfectionManager*, "", "SuperInfectionManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*, "", "SuperInfectionManager/<GetPoints>d__54");
// [DefaultExecutionOrder(0)]
// Dependencies UnityEngine.MonoBehaviour, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SuperInfectionManager
class CORDL_TYPE SuperInfectionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AuthorityToClientRPC = ::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC;

using ClientToAuthorityRPC = ::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC;

using ClientToClientRPC = ::GlobalNamespace::SuperInfectionManager_ClientToClientRPC;

using RoomFXType = ::GlobalNamespace::SuperInfectionManager_RoomFXType;

using _GetPoints_d__54 = ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54;

 __declspec(property(get=get_HasActiveTryOnDispenser)) bool  HasActiveTryOnDispenser;

 __declspec(property(get=get_HasSIZonePlatform)) bool  HasSIZonePlatform;

 __declspec(property(get=get_IsSupercharged)) bool  IsSupercharged;

/// @brief Field PendingZoneInit, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_PendingZoneInit, put=__cordl_internal_set_PendingZoneInit)) bool  PendingZoneInit;

/// @brief Field activeSuperInfectionManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeSuperInfectionManager, put=setStaticF_activeSuperInfectionManager)) ::UnityW<::GlobalNamespace::SuperInfectionManager>  activeSuperInfectionManager;

/// @brief Field allSnapPoints, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_allSnapPoints, put=__cordl_internal_set_allSnapPoints)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>*  allSnapPoints;

/// @brief Field gameEntityManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntityManager, put=__cordl_internal_set_gameEntityManager)) ::UnityW<::GlobalNamespace::GameEntityManager>  gameEntityManager;

/// @brief Field hasInitialized, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasInitialized, put=__cordl_internal_set_hasInitialized)) bool  hasInitialized;

/// @brief Field photonView, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field progression, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_progression, put=__cordl_internal_set_progression)) ::UnityW<::GlobalNamespace::SIProgression>  progression;

/// @brief Field siManagerByZone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_siManagerByZone, put=setStaticF_siManagerByZone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::SuperInfectionManager>>*  siManagerByZone;

/// @brief Field techTreeSO, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_techTreeSO, put=__cordl_internal_set_techTreeSO)) ::UnityW<::GlobalNamespace::SITechTreeSO>  techTreeSO;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field tempRigs2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs2, put=setStaticF_tempRigs2)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs2;

/// @brief Field testSpawner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_testSpawner, put=__cordl_internal_set_testSpawner)) ::UnityW<::GlobalNamespace::TestSpawnGadget>  testSpawner;

/// @brief Field tryOnDispenserCount, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_tryOnDispenserCount, put=__cordl_internal_set_tryOnDispenserCount)) int32_t  tryOnDispenserCount;

/// @brief Field zoneSuperInfection, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneSuperInfection, put=__cordl_internal_set_zoneSuperInfection)) ::UnityW<::GlobalNamespace::SuperInfection>  zoneSuperInfection;

/// @brief Field zoneSuperInfectionRef, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_zoneSuperInfectionRef, put=__cordl_internal_set_zoneSuperInfectionRef)) ::GlobalNamespace::XSceneRef  zoneSuperInfectionRef;

/// @brief Convert operator to "::GlobalNamespace::IFactoryItemProvider"
constexpr operator  ::GlobalNamespace::IFactoryItemProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr operator  ::GlobalNamespace::IGameEntityZoneComponent*() noexcept;

/// @brief Method Awake, addr 0x5afcc90, size 0xe4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CallRPC, addr 0x5aff4a8, size 0x1c0, virtual false, abstract: false, final false
inline void CallRPC(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC  authorityToClientRPC, int32_t  actorNr, ::ArrayW<::System::Object*>  data) ;

/// @brief Method CallRPC, addr 0x5aff32c, size 0x17c, virtual false, abstract: false, final false
inline void CallRPC(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC  authorityToClientRPC, ::ArrayW<::System::Object*>  data) ;

/// @brief Method CallRPC, addr 0x5aecf20, size 0x194, virtual false, abstract: false, final false
inline void CallRPC(::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC  clientToAuthorityRPC, ::ArrayW<::System::Object*>  data) ;

/// @brief Method CallRPC, addr 0x5aff1b0, size 0x17c, virtual false, abstract: false, final false
inline void CallRPC(::GlobalNamespace::SuperInfectionManager_ClientToClientRPC  clientToClientRPC, ::ArrayW<::System::Object*>  data) ;

/// @brief Method ClearPlayerGadgets, addr 0x5b01a98, size 0x19c, virtual false, abstract: false, final false
inline void ClearPlayerGadgets(::GlobalNamespace::SIPlayer*  siPlayer) ;

/// @brief Method DeserializeZoneEntityData, addr 0x5afdf14, size 0x4, virtual true, abstract: false, final true
inline void DeserializeZoneEntityData(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method FindNearestSnapPoint, addr 0x5afede8, size 0x3c8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> FindNearestSnapPoint(::GlobalNamespace::SnapJointType  jointType, ::UnityEngine::Vector3  origin, float_t  maxDist, bool  includeOccupied) ;

/// @brief Method GetFactoryItems, addr 0x5b011b0, size 0x2c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* GetFactoryItems() ;

/// [IteratorStateMachine(typeof(SuperInfectionManager::<GetPoints>d__54))]
/// @brief Method GetPoints, addr 0x5afed64, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* GetPoints(::GlobalNamespace::SnapJointType  jointType) ;

/// @brief Method GetSIManagerForZone, addr 0x5af9030, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SuperInfectionManager> GetSIManagerForZone(::GlobalNamespace::GTZone  targetZone) ;

/// @brief Method IGameEntityZoneComponent.DeserializeZoneData, addr 0x5afde48, size 0xc8, virtual true, abstract: false, final true
inline void IGameEntityZoneComponent_DeserializeZoneData(::System::IO::BinaryReader*  reader) ;

/// @brief Method IGameEntityZoneComponent.DeserializeZonePlayerData, addr 0x5afdfa4, size 0x7c, virtual true, abstract: false, final true
inline void IGameEntityZoneComponent_DeserializeZonePlayerData(::System::IO::BinaryReader*  reader, int32_t  actorNumber) ;

/// @brief Method IGameEntityZoneComponent.SerializeZoneData, addr 0x5afdd80, size 0xc8, virtual true, abstract: false, final true
inline void IGameEntityZoneComponent_SerializeZoneData(::System::IO::BinaryWriter*  writer) ;

/// @brief Method IGameEntityZoneComponent.SerializeZonePlayerData, addr 0x5afdf18, size 0x8c, virtual true, abstract: false, final true
inline void IGameEntityZoneComponent_SerializeZonePlayerData(::System::IO::BinaryWriter*  writer, int32_t  actorNumber) ;

/// @brief Method IsSuperGameMode, addr 0x5afb7d8, size 0xe4, virtual false, abstract: false, final false
static inline bool IsSuperGameMode() ;

/// @brief Method IsZoneReady, addr 0x5afe020, size 0x2c4, virtual true, abstract: false, final true
inline bool IsZoneReady() ;

static inline ::GlobalNamespace::SuperInfectionManager* New_ctor() ;

/// @brief Method OnCreateGameEntity, addr 0x5afe428, size 0x5fc, virtual true, abstract: false, final true
inline void OnCreateGameEntity(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnDisable, addr 0x5afd5e8, size 0x104, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5afd3ac, size 0x23c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnableZoneSuperInfection, addr 0x5af90d0, size 0x1c0, virtual false, abstract: false, final false
inline void OnEnableZoneSuperInfection(::GlobalNamespace::SuperInfection*  zone) ;

/// @brief Method OnEntityRemoved, addr 0x5b011dc, size 0x1dc, virtual false, abstract: false, final false
inline void OnEntityRemoved(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnZoneClear, addr 0x5afeb84, size 0xb4, virtual true, abstract: false, final true
inline void OnZoneClear(::GlobalNamespace::ZoneClearReason  reason) ;

/// @brief Method OnZoneCreate, addr 0x5afdad0, size 0x4, virtual true, abstract: false, final true
inline void OnZoneCreate() ;

/// @brief Method OnZoneInit, addr 0x5afcd74, size 0x638, virtual true, abstract: false, final true
inline void OnZoneInit() ;

/// @brief Method ProcessAuthorityToClientRPC, addr 0x5b0029c, size 0x438, virtual false, abstract: false, final false
inline void ProcessAuthorityToClientRPC(int32_t  authorityToClientRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ProcessClientToAuthorityRPC, addr 0x5aff794, size 0x9d4, virtual false, abstract: false, final false
inline void ProcessClientToAuthorityRPC(int32_t  clientToAuthorityRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ProcessClientToClientRPC, addr 0x5b007f0, size 0x9c0, virtual false, abstract: false, final false
inline void ProcessClientToClientRPC(int32_t  clientToClientRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ProcessMigratedGameEntityCreateData, addr 0x5b013b8, size 0xe0, virtual true, abstract: false, final true
inline int64_t ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity*  entity, int64_t  createData) ;

/// @brief Method ReadDataPUN, addr 0x5afdc2c, size 0x154, virtual false, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RegisterSnapPoint, addr 0x5afea24, size 0x160, virtual false, abstract: false, final false
inline void RegisterSnapPoint(::GlobalNamespace::SuperInfectionSnapPoint*  snapPoint) ;

/// @brief Method RegisterTryOnDispenser, addr 0x5afa418, size 0x10, virtual false, abstract: false, final false
inline void RegisterTryOnDispenser() ;

/// [PunRPC]
/// @brief Method SIAuthorityToClientRPC, addr 0x5b00168, size 0x134, virtual false, abstract: false, final false
inline void SIAuthorityToClientRPC(int32_t  authorityToClientRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method SIClientToAuthorityRPC, addr 0x5aff668, size 0x12c, virtual false, abstract: false, final false
inline void SIClientToAuthorityRPC(int32_t  clientToAuthorityRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method SIClientToClientRPC, addr 0x5b006d4, size 0x11c, virtual false, abstract: false, final false
inline void SIClientToClientRPC(int32_t  clientToClientRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SerializeZoneEntityData, addr 0x5afdf10, size 0x4, virtual true, abstract: false, final true
inline void SerializeZoneEntityData(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method ShouldClearZone, addr 0x5afe2e4, size 0x144, virtual true, abstract: false, final true
inline bool ShouldClearZone() ;

/// [ContextMenu("Spawn Debug Object")]
/// @brief Method TestSpawnGadget, addr 0x5afec38, size 0x20, virtual false, abstract: false, final false
inline void TestSpawnGadget() ;

/// @brief Method UnregisterSnapPoint, addr 0x5afec58, size 0x10c, virtual false, abstract: false, final false
inline void UnregisterSnapPoint(::GlobalNamespace::SuperInfectionSnapPoint*  snapPoint) ;

/// @brief Method UnregisterTryOnDispenser, addr 0x5afa428, size 0x14, virtual false, abstract: false, final false
inline void UnregisterTryOnDispenser() ;

/// @brief Method ValidateCreateItem, addr 0x5b01898, size 0x1f8, virtual true, abstract: false, final true
inline bool ValidateCreateItem(int32_t  nedId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityNetId) ;

/// @brief Method ValidateCreateItemBatchSize, addr 0x5b01a90, size 0x8, virtual true, abstract: false, final true
inline bool ValidateCreateItemBatchSize(int32_t  size) ;

/// @brief Method ValidateCreateMultipleItems, addr 0x5b01890, size 0x8, virtual true, abstract: false, final true
inline bool ValidateCreateMultipleItems(int32_t  zoneId, ::ArrayW<uint8_t>  compressedStateData, int32_t  EntityCount) ;

/// @brief Method ValidateMigratedGameEntity, addr 0x5b01498, size 0x3a8, virtual true, abstract: false, final true
inline bool ValidateMigratedGameEntity(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  actorNr) ;

/// @brief Method WriteDataPUN, addr 0x5afdad4, size 0x158, virtual false, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method _OnStartGameMode, addr 0x5afd6ec, size 0x3dc, virtual false, abstract: false, final false
inline void _OnStartGameMode(::GorillaGameModes::GameModeType  newGameModeType) ;

/// [CompilerGenerated]
/// @brief Method <OnZoneInit>g__WhenReady|51_0, addr 0x5b01dd4, size 0x2dc, virtual false, abstract: false, final false
inline void _OnZoneInit_g__WhenReady_51_0() ;

/// @brief Method _ValidatePlayerHasGadgetUpgrades, addr 0x5b01840, size 0x50, virtual false, abstract: false, final false
static inline bool _ValidatePlayerHasGadgetUpgrades(int64_t  createData, ::GlobalNamespace::SIPlayer*  siPlayer, ::GlobalNamespace::SIUpgradeType  upgradeType) ;

constexpr bool const& __cordl_internal_get_PendingZoneInit() const;

constexpr bool& __cordl_internal_get_PendingZoneInit() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>* const& __cordl_internal_get_allSnapPoints() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>*& __cordl_internal_get_allSnapPoints() ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get_gameEntityManager() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get_gameEntityManager() ;

constexpr bool const& __cordl_internal_get_hasInitialized() const;

constexpr bool& __cordl_internal_get_hasInitialized() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr ::UnityW<::GlobalNamespace::SIProgression> const& __cordl_internal_get_progression() const;

constexpr ::UnityW<::GlobalNamespace::SIProgression>& __cordl_internal_get_progression() ;

constexpr ::UnityW<::GlobalNamespace::SITechTreeSO> const& __cordl_internal_get_techTreeSO() const;

constexpr ::UnityW<::GlobalNamespace::SITechTreeSO>& __cordl_internal_get_techTreeSO() ;

constexpr ::UnityW<::GlobalNamespace::TestSpawnGadget> const& __cordl_internal_get_testSpawner() const;

constexpr ::UnityW<::GlobalNamespace::TestSpawnGadget>& __cordl_internal_get_testSpawner() ;

constexpr int32_t const& __cordl_internal_get_tryOnDispenserCount() const;

constexpr int32_t& __cordl_internal_get_tryOnDispenserCount() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfection> const& __cordl_internal_get_zoneSuperInfection() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfection>& __cordl_internal_get_zoneSuperInfection() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_zoneSuperInfectionRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_zoneSuperInfectionRef() ;

constexpr void __cordl_internal_set_PendingZoneInit(bool  value) ;

constexpr void __cordl_internal_set_allSnapPoints(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>*  value) ;

constexpr void __cordl_internal_set_gameEntityManager(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

constexpr void __cordl_internal_set_hasInitialized(bool  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_progression(::UnityW<::GlobalNamespace::SIProgression>  value) ;

constexpr void __cordl_internal_set_techTreeSO(::UnityW<::GlobalNamespace::SITechTreeSO>  value) ;

constexpr void __cordl_internal_set_testSpawner(::UnityW<::GlobalNamespace::TestSpawnGadget>  value) ;

constexpr void __cordl_internal_set_tryOnDispenserCount(int32_t  value) ;

constexpr void __cordl_internal_set_zoneSuperInfection(::UnityW<::GlobalNamespace::SuperInfection>  value) ;

constexpr void __cordl_internal_set_zoneSuperInfectionRef(::GlobalNamespace::XSceneRef  value) ;

/// @brief Method .ctor, addr 0x5b01c34, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::SuperInfectionManager> getStaticF_activeSuperInfectionManager() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::SuperInfectionManager>>* getStaticF_siManagerByZone() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs2() ;

/// @brief Method get_HasActiveTryOnDispenser, addr 0x5afcc80, size 0x10, virtual false, abstract: false, final false
inline bool get_HasActiveTryOnDispenser() ;

/// @brief Method get_HasSIZonePlatform, addr 0x5afcc70, size 0x10, virtual false, abstract: false, final false
inline bool get_HasSIZonePlatform() ;

/// @brief Method get_IsSupercharged, addr 0x5afdac8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSupercharged() ;

/// @brief Convert to "::GlobalNamespace::IFactoryItemProvider"
constexpr ::GlobalNamespace::IFactoryItemProvider* i___GlobalNamespace__IFactoryItemProvider() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr ::GlobalNamespace::IGameEntityZoneComponent* i___GlobalNamespace__IGameEntityZoneComponent() noexcept;

static inline void setStaticF_activeSuperInfectionManager(::UnityW<::GlobalNamespace::SuperInfectionManager>  value) ;

static inline void setStaticF_siManagerByZone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::SuperInfectionManager>>*  value) ;

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

static inline void setStaticF_tempRigs2(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SuperInfectionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SuperInfectionManager(SuperInfectionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SuperInfectionManager(SuperInfectionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{392};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GT/SuperInfectionManager]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/SuperInfectionManager]  "};

/// @brief Field roomFXTypeCount offset 0xffffffff size 0x4
static constexpr int32_t  roomFXTypeCount{static_cast<int32_t>(0x5)};

/// @brief Field rpcProximityCheckRange offset 0xffffffff size 0x4
static constexpr float_t  rpcProximityCheckRange{static_cast<float_t>(3.0f)};

/// @brief Field gameEntityManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  ___gameEntityManager;

/// @brief Field testSpawner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TestSpawnGadget>  ___testSpawner;

/// @brief Field photonView, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// @brief Field zoneSuperInfectionRef, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___zoneSuperInfectionRef;

/// @brief Field zoneSuperInfection, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfection>  ___zoneSuperInfection;

/// [SerializeField]
/// @brief Field techTreeSO, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITechTreeSO>  ___techTreeSO;

/// [SerializeField]
/// @brief Field progression, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIProgression>  ___progression;

/// @brief Field allSnapPoints, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>*  ___allSnapPoints;

/// @brief Field PendingZoneInit, offset: 0x70, size: 0x1, def value: None
 bool  ___PendingZoneInit;

/// @brief Field tryOnDispenserCount, offset: 0x74, size: 0x4, def value: None
 int32_t  ___tryOnDispenserCount;

/// @brief Field hasInitialized, offset: 0x78, size: 0x1, def value: None
 bool  ___hasInitialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___gameEntityManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___testSpawner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___photonView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___zoneSuperInfectionRef) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___zoneSuperInfection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___techTreeSO) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___progression) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___allSnapPoints) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___PendingZoneInit) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___tryOnDispenserCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager, ___hasInitialized) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SuperInfectionManager) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies SnapJointType, System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SuperInfectionManager/<GetPoints>d__54
class CORDL_TYPE SuperInfectionManager__GetPoints_d__54 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_SuperInfectionSnapPoint__get_Current)) ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>  System_Collections_Generic_IEnumerator_SuperInfectionSnapPoint__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>  __2__current;

/// @brief Field <>3__jointType, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get___3__jointType, put=__cordl_internal_set___3__jointType)) ::GlobalNamespace::SnapJointType  __3__jointType;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SuperInfectionManager>  __4__this;

/// @brief Field <>7__wrap1, offset 0x38, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::Dictionary_2_Enumerator<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field jointType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_jointType, put=__cordl_internal_set_jointType)) ::GlobalNamespace::SnapJointType  jointType;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5bf7d0c, size 0x2a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<SuperInfectionSnapPoint>.GetEnumerator, addr 0x5bf8098, size 0xac, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* System_Collections_Generic_IEnumerable_SuperInfectionSnapPoint__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<SuperInfectionSnapPoint>.get_Current, addr 0x5bf8050, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> System_Collections_Generic_IEnumerator_SuperInfectionSnapPoint__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5bf8144, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bf8058, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bf8090, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5bf7c60, size 0xac, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::SnapJointType const& __cordl_internal_get___3__jointType() const;

constexpr ::GlobalNamespace::SnapJointType& __cordl_internal_get___3__jointType() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>& __cordl_internal_get___7__wrap1() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>> const& __cordl_internal_get___7__wrap2() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::SnapJointType const& __cordl_internal_get_jointType() const;

constexpr ::GlobalNamespace::SnapJointType& __cordl_internal_get_jointType() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>  value) ;

constexpr void __cordl_internal_set___3__jointType(::GlobalNamespace::SnapJointType  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SuperInfectionManager>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>  value) ;

constexpr void __cordl_internal_set___7__wrap2(::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_jointType(::GlobalNamespace::SnapJointType  value) ;

/// @brief Method <>m__Finally1, addr 0x5bf8000, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0x5bf7fb0, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5bf7c2c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__SuperInfectionSnapPoint__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__SuperInfectionSnapPoint__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SuperInfectionManager__GetPoints_d__54() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionManager__GetPoints_d__54", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SuperInfectionManager__GetPoints_d__54(SuperInfectionManager__GetPoints_d__54 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionManager__GetPoints_d__54", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SuperInfectionManager__GetPoints_d__54(SuperInfectionManager__GetPoints_d__54 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{391};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfectionManager>  _____4__this;

/// @brief Field jointType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::SnapJointType  ___jointType;

/// @brief Field <>3__jointType, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::SnapJointType  _____3__jointType;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54, ___jointType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54, _____3__jointType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54, _____7__wrap2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SuperInfectionManager__GetPoints_d__54) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
