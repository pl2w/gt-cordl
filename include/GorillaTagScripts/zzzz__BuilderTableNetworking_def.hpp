#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableNetworking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTableNetworking)
namespace GlobalNamespace {
struct BuilderDropZone_DropType;
}
namespace GlobalNamespace {
struct BuilderPiece_State;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
struct BuilderTableNetworking_RPC;
}
namespace GlobalNamespace {
struct BuilderTableNetworking_SharedTableEventTypes;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GorillaTagScripts {
class BuilderTableNetworking_PlayerTableInitState;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderTableNetworking;
}
namespace GorillaTagScripts {
class BuilderTableNetworking_PlayerTableInitState;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderTableNetworking*);
MARK_REF_T(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderTableNetworking*, "GorillaTagScripts", "BuilderTableNetworking");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*, "GorillaTagScripts", "BuilderTableNetworking/PlayerTableInitState");
// Dependencies CallLimiter, Photon.Pun.MonoBehaviourPunCallbacks
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderTableNetworking
class CORDL_TYPE BuilderTableNetworking : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
using RPC = ::GlobalNamespace::BuilderTableNetworking_RPC;

using SharedTableEventTypes = ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes;

using PlayerTableInitState = ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field armShelfRequests, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_armShelfRequests, put=__cordl_internal_set_armShelfRequests)) ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*  armShelfRequests;

/// @brief Field callLimiters, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiters, put=__cordl_internal_set_callLimiters)) ::ArrayW<::GlobalNamespace::CallLimiter*>  callLimiters;

/// @brief Field currTable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currTable, put=__cordl_internal_set_currTable)) ::UnityW<::GorillaTagScripts::BuilderTable>  currTable;

/// @brief Field localClientTableInit, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_localClientTableInit, put=__cordl_internal_set_localClientTableInit)) ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*  localClientTableInit;

/// @brief Field localValidationTable, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_localValidationTable, put=__cordl_internal_set_localValidationTable)) ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*  localValidationTable;

/// @brief Field masterClientTableInit, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_masterClientTableInit, put=__cordl_internal_set_masterClientTableInit)) ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*  masterClientTableInit;

/// @brief Field masterClientTableValidators, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_masterClientTableValidators, put=__cordl_internal_set_masterClientTableValidators)) ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*  masterClientTableValidators;

/// @brief Field nextLocalCommandId, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextLocalCommandId, put=__cordl_internal_set_nextLocalCommandId)) int32_t  nextLocalCommandId;

/// @brief Field tablePhotonView, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tablePhotonView, put=__cordl_internal_set_tablePhotonView)) ::UnityW<::Photon::Pun::PhotonView>  tablePhotonView;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// [PunRPC]
/// @brief Method ArmShelfCreatedRPC, addr 0x5bb3134, size 0x154, virtual false, abstract: false, final false
inline void ArmShelfCreatedRPC(int32_t  pieceIdLeft, int32_t  pieceIdRight, int32_t  pieceType, ::Photon::Realtime::Player*  owningPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Awake, addr 0x5bab580, size 0xb04, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckForFreedPlot, addr 0x5bb0d58, size 0x248, virtual false, abstract: false, final false
inline void CheckForFreedPlot(int32_t  pieceId, ::Photon::Realtime::Player*  grabbedByPlayer) ;

/// @brief Method CreateLocalCommandId, addr 0x5bac21c, size 0x14, virtual false, abstract: false, final false
inline int32_t CreateLocalCommandId() ;

/// @brief Method CreatePlayerTableInit, addr 0x5bae788, size 0x1bc, virtual false, abstract: false, final false
inline ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* CreatePlayerTableInit(::Photon::Realtime::Player*  player) ;

/// @brief Method CreateSerializedTableForNewPlayerInit, addr 0x5bad944, size 0x44, virtual false, abstract: false, final false
inline void CreateSerializedTableForNewPlayerInit(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method CreateShelfPiece, addr 0x5baebec, size 0x43c, virtual false, abstract: false, final false
inline void CreateShelfPiece(int32_t  pieceType, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType, ::GlobalNamespace::BuilderPiece_State  state, int32_t  shelfID) ;

/// @brief Method DestroyPlayerTableInit, addr 0x5bace50, size 0xd8, virtual false, abstract: false, final false
inline void DestroyPlayerTableInit(::Photon::Realtime::Player*  player) ;

/// @brief Method DoesTableInitExist, addr 0x5bae6d4, size 0xb4, virtual false, abstract: false, final false
inline bool DoesTableInitExist(::Photon::Realtime::Player*  player) ;

/// @brief Method FunctionalPieceStateChangeMaster, addr 0x5bb3cec, size 0x264, virtual false, abstract: false, final false
inline void FunctionalPieceStateChangeMaster(int32_t  pieceID, uint8_t  state, ::Photon::Realtime::Player*  instigator, int32_t  timeStamp) ;

/// [PunRPC]
/// @brief Method FunctionalPieceStateChangeRPC, addr 0x5bb3f50, size 0x21c, virtual false, abstract: false, final false
inline void FunctionalPieceStateChangeRPC(int32_t  pieceID, uint8_t  state, ::Photon::Realtime::Player*  caller, int32_t  timeStamp, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method GetLocalTableInit, addr 0x5bac230, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* GetLocalTableInit() ;

/// @brief Method GetPlayerTableInit, addr 0x5bae0b4, size 0xd0, virtual false, abstract: false, final false
inline ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* GetPlayerTableInit(::Photon::Realtime::Player*  player) ;

/// @brief Method GetTable, addr 0x5bac214, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTagScripts::BuilderTable> GetTable() ;

/// @brief Method IsPrivateMasterClient, addr 0x5bad888, size 0xbc, virtual false, abstract: false, final false
inline bool IsPrivateMasterClient() ;

/// @brief Method LoadSharedBlocksFailedMaster, addr 0x5bb4cd0, size 0x18c, virtual false, abstract: false, final false
inline void LoadSharedBlocksFailedMaster(::StringW  mapID) ;

/// [PunRPC]
/// @brief Method LoadSharedBlocksMapRPC, addr 0x5bb4910, size 0x3c0, virtual false, abstract: false, final false
inline void LoadSharedBlocksMapRPC(::StringW  mapID, ::Photon::Pun::PhotonMessageInfo  info) ;

static inline ::GorillaTagScripts::BuilderTableNetworking* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bac194, size 0x78, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bac11c, size 0x78, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnJoinedRoom, addr 0x5bacf28, size 0x40, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x5bacf68, size 0xa0, virtual true, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnLoadSharedBlocksFailed, addr 0x5bb513c, size 0x340, virtual false, abstract: false, final false
inline void OnLoadSharedBlocksFailed(::StringW  mapID) ;

/// @brief Method OnMasterClientSwitched, addr 0x5bac238, size 0x6b8, virtual true, abstract: false, final false
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5bacb98, size 0x2b8, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::Photon::Realtime::Player*  player) ;

/// @brief Method OnSharedBlocksLoadStarted, addr 0x5bb50a8, size 0x94, virtual false, abstract: false, final false
inline void OnSharedBlocksLoadStarted(::StringW  mapID) ;

/// @brief Method OnSharedBlocksOutOfBounds, addr 0x5bb547c, size 0x2d4, virtual false, abstract: false, final false
inline void OnSharedBlocksOutOfBounds(::StringW  mapID) ;

/// [PunRPC]
/// @brief Method PieceCreatedByShelfRPC, addr 0x5baf028, size 0x238, virtual false, abstract: false, final false
inline void PieceCreatedByShelfRPC(int32_t  pieceType, int32_t  pieceId, int64_t  packedPosition, int32_t  packedRotation, int32_t  materialType, uint8_t  state, int32_t  shelfID, ::Photon::Realtime::Player*  creatingPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PieceCreatedRPC, addr 0x5baebe8, size 0x4, virtual false, abstract: false, final false
inline void PieceCreatedRPC(int32_t  pieceType, int32_t  pieceId, int64_t  packedPosition, int32_t  packedRotation, int32_t  materialType, ::Photon::Realtime::Player*  creatingPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method PieceDestroyedRPC, addr 0x5baf6d8, size 0x370, virtual false, abstract: false, final false
inline void PieceDestroyedRPC(int32_t  pieceId, int64_t  packedPosition, int32_t  packedRotation, bool  playFX, int16_t  recyclerID, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method PieceDroppedRPC, addr 0x5bb2534, size 0x484, virtual false, abstract: false, final false
inline void PieceDroppedRPC(int32_t  localCommandId, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Realtime::Player*  droppedByPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PieceEnteredDropZone, addr 0x5bb29b8, size 0x2f4, virtual false, abstract: false, final false
inline void PieceEnteredDropZone(::GlobalNamespace::BuilderPiece*  piece, ::GlobalNamespace::BuilderDropZone_DropType  dropType, int32_t  dropZoneId) ;

/// [PunRPC]
/// @brief Method PieceEnteredDropZoneRPC, addr 0x5bb2cac, size 0x378, virtual false, abstract: false, final false
inline void PieceEnteredDropZoneRPC(int32_t  pieceId, int64_t  position, int32_t  rotation, int32_t  dropZoneId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method PieceGrabbedRPC, addr 0x5bb1484, size 0x1d8, virtual false, abstract: false, final false
inline void PieceGrabbedRPC(int32_t  localCommandId, int32_t  pieceId, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Realtime::Player*  grabbedByPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method PiecePlacedRPC, addr 0x5bb0660, size 0x2a4, virtual false, abstract: false, final false
inline void PiecePlacedRPC(int32_t  localCommandId, int32_t  pieceId, int32_t  attachPieceId, int32_t  placement, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::Photon::Realtime::Player*  placedByPlayer, int32_t  timeStamp, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlayerEnterBuilder, addr 0x5bac914, size 0x284, virtual false, abstract: false, final false
inline void PlayerEnterBuilder() ;

/// [PunRPC]
/// @brief Method PlayerEnterBuilderRPC, addr 0x5bad54c, size 0x2e0, virtual false, abstract: false, final false
inline void PlayerEnterBuilderRPC(::Photon::Realtime::Player*  player, bool  entered, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlayerExitBuilder, addr 0x5bad008, size 0x260, virtual false, abstract: false, final false
inline void PlayerExitBuilder() ;

/// [PunRPC]
/// @brief Method PlotClaimedRPC, addr 0x5bb3024, size 0x110, virtual false, abstract: false, final false
inline void PlotClaimedRPC(int32_t  pieceId, ::Photon::Realtime::Player*  claimingPlayer, bool  claimed, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestBlocksTerminalControl, addr 0x5bb416c, size 0x174, virtual false, abstract: false, final false
inline void RequestBlocksTerminalControl(bool  locked) ;

/// [PunRPC]
/// @brief Method RequestBlocksTerminalControlRPC, addr 0x5bb42e0, size 0x3c4, virtual false, abstract: false, final false
inline void RequestBlocksTerminalControlRPC(bool  lockedStatus, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestCreateArmShelfForPlayer, addr 0x5bad988, size 0x35c, virtual false, abstract: false, final false
inline void RequestCreateArmShelfForPlayer(::Photon::Realtime::Player*  player) ;

/// @brief Method RequestCreatePiece, addr 0x5baebe0, size 0x4, virtual false, abstract: false, final false
inline void RequestCreatePiece(int32_t  newPieceType, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType) ;

/// @brief Method RequestCreatePieceRPC, addr 0x5baebe4, size 0x4, virtual false, abstract: false, final false
inline void RequestCreatePieceRPC(int32_t  newPieceType, int64_t  packedPosition, int32_t  packedRotation, int32_t  materialType, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestDropPiece, addr 0x5bb165c, size 0x958, virtual false, abstract: false, final false
inline void RequestDropPiece(::GlobalNamespace::BuilderPiece*  piece, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity) ;

/// [PunRPC]
/// @brief Method RequestDropPieceRPC, addr 0x5bb1fb4, size 0x580, virtual false, abstract: false, final false
inline void RequestDropPieceRPC(int32_t  localCommandId, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Realtime::Player*  droppedByPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RequestFailedRPC, addr 0x5baeaf8, size 0xe8, virtual false, abstract: false, final false
inline void RequestFailedRPC(int32_t  localCommandId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestFunctionalPieceStateChange, addr 0x5bb3944, size 0x1c4, virtual false, abstract: false, final false
inline void RequestFunctionalPieceStateChange(int32_t  pieceID, uint8_t  state) ;

/// [PunRPC]
/// @brief Method RequestFunctionalPieceStateChangeRPC, addr 0x5bb3b08, size 0x1e4, virtual false, abstract: false, final false
inline void RequestFunctionalPieceStateChangeRPC(int32_t  pieceID, uint8_t  state, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestGrabPiece, addr 0x5bb0904, size 0x454, virtual false, abstract: false, final false
inline void RequestGrabPiece(::GlobalNamespace::BuilderPiece*  piece, bool  isLefHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// [PunRPC]
/// @brief Method RequestGrabPieceRPC, addr 0x5bb0fa0, size 0x4e4, virtual false, abstract: false, final false
inline void RequestGrabPieceRPC(int32_t  localCommandId, int32_t  pieceId, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Realtime::Player*  grabbedByPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestLoadSharedBlocksMap, addr 0x5bb482c, size 0xe4, virtual false, abstract: false, final false
inline void RequestLoadSharedBlocksMap(::StringW  mapID) ;

/// @brief Method RequestPaintPiece, addr 0x5bb5750, size 0x4, virtual false, abstract: false, final false
inline void RequestPaintPiece(int32_t  pieceID, int32_t  materialType) ;

/// @brief Method RequestPlacePiece, addr 0x5bafa48, size 0x560, virtual false, abstract: false, final false
inline void RequestPlacePiece(::GlobalNamespace::BuilderPiece*  piece, ::GlobalNamespace::BuilderPiece*  attachPiece, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, ::GlobalNamespace::BuilderPiece*  parentPiece, int32_t  attachIndex, int32_t  parentAttachIndex) ;

/// [PunRPC]
/// @brief Method RequestPlacePieceRPC, addr 0x5baffa8, size 0x6b8, virtual false, abstract: false, final false
inline void RequestPlacePieceRPC(int32_t  localCommandId, int32_t  pieceId, int32_t  attachPieceId, int32_t  placement, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::Photon::Realtime::Player*  placedByPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestRecyclePiece, addr 0x5baf260, size 0x478, virtual false, abstract: false, final false
inline void RequestRecyclePiece(int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  playFX, int32_t  recyclerID) ;

/// @brief Method RequestShelfSelection, addr 0x5bb3288, size 0x210, virtual false, abstract: false, final false
inline void RequestShelfSelection(int32_t  shelfID, int32_t  groupID, bool  isConveyor) ;

/// [PunRPC]
/// @brief Method RequestShelfSelectionRPC, addr 0x5bb3498, size 0x350, virtual false, abstract: false, final false
inline void RequestShelfSelectionRPC(int32_t  shelfId, int32_t  setId, bool  isConveyor, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ResetSerializedTableForAllPlayers, addr 0x5bae944, size 0xfc, virtual false, abstract: false, final false
inline void ResetSerializedTableForAllPlayers() ;

/// @brief Method SendNextTableData, addr 0x5bade74, size 0x240, virtual false, abstract: false, final false
inline void SendNextTableData(::Photon::Realtime::Player*  requestingPlayer) ;

/// [PunRPC]
/// @brief Method SendTableDataRPC, addr 0x5bae3dc, size 0x2f8, virtual false, abstract: false, final false
inline void SendTableDataRPC(int32_t  numBytes, ::ArrayW<uint8_t>  bytes, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method SetBlocksTerminalDriverRPC, addr 0x5bb46a4, size 0x188, virtual false, abstract: false, final false
inline void SetBlocksTerminalDriverRPC(int32_t  driver, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetTable, addr 0x5bac20c, size 0x8, virtual false, abstract: false, final false
inline void SetTable(::GorillaTagScripts::BuilderTable*  table) ;

/// @brief Method SharedBlocksOutOfBoundsMaster, addr 0x5ba98d8, size 0x18c, virtual false, abstract: false, final false
inline void SharedBlocksOutOfBoundsMaster(::StringW  mapID) ;

/// [PunRPC]
/// @brief Method SharedTableEventRPC, addr 0x5bb4e5c, size 0x24c, virtual false, abstract: false, final false
inline void SharedTableEventRPC(uint8_t  eventType, ::StringW  mapID, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ShelfSelectionChangedRPC, addr 0x5bb37e8, size 0x15c, virtual false, abstract: false, final false
inline void ShelfSelectionChangedRPC(int32_t  shelfId, int32_t  setId, bool  isConveyor, ::Photon::Realtime::Player*  caller, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method StartBuildTableRPC, addr 0x5bae184, size 0x258, virtual false, abstract: false, final false
inline void StartBuildTableRPC(int32_t  totalBytes, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method StartCreatingSerializedTable, addr 0x5badce4, size 0x190, virtual false, abstract: false, final false
inline void StartCreatingSerializedTable(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method Tick, addr 0x5bad268, size 0x6c, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateNewPlayerInit, addr 0x5bad2d4, size 0x278, virtual false, abstract: false, final false
inline void UpdateNewPlayerInit() ;

/// @brief Method ValidateCallLimits, addr 0x5bad82c, size 0x5c, virtual false, abstract: false, final false
inline bool ValidateCallLimits(::GlobalNamespace::BuilderTableNetworking_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ValidateMasterClientIsReady, addr 0x5baea40, size 0xb8, virtual false, abstract: false, final false
inline bool ValidateMasterClientIsReady(::Photon::Realtime::Player*  player) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>* const& __cordl_internal_get_armShelfRequests() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*& __cordl_internal_get_armShelfRequests() ;

constexpr ::ArrayW<::GlobalNamespace::CallLimiter*> const& __cordl_internal_get_callLimiters() const;

constexpr ::ArrayW<::GlobalNamespace::CallLimiter*>& __cordl_internal_get_callLimiters() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_currTable() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_currTable() ;

constexpr ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* const& __cordl_internal_get_localClientTableInit() const;

constexpr ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*& __cordl_internal_get_localClientTableInit() ;

constexpr ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* const& __cordl_internal_get_localValidationTable() const;

constexpr ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*& __cordl_internal_get_localValidationTable() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>* const& __cordl_internal_get_masterClientTableInit() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*& __cordl_internal_get_masterClientTableInit() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>* const& __cordl_internal_get_masterClientTableValidators() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*& __cordl_internal_get_masterClientTableValidators() ;

constexpr int32_t const& __cordl_internal_get_nextLocalCommandId() const;

constexpr int32_t& __cordl_internal_get_nextLocalCommandId() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_tablePhotonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_tablePhotonView() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_armShelfRequests(::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*  value) ;

constexpr void __cordl_internal_set_callLimiters(::ArrayW<::GlobalNamespace::CallLimiter*>  value) ;

constexpr void __cordl_internal_set_currTable(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_localClientTableInit(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*  value) ;

constexpr void __cordl_internal_set_localValidationTable(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*  value) ;

constexpr void __cordl_internal_set_masterClientTableInit(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*  value) ;

constexpr void __cordl_internal_set_masterClientTableValidators(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*  value) ;

constexpr void __cordl_internal_set_nextLocalCommandId(int32_t  value) ;

constexpr void __cordl_internal_set_tablePhotonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

/// @brief Method .ctor, addr 0x5bb5754, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5bab570, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5bab578, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableNetworking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableNetworking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTableNetworking(BuilderTableNetworking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableNetworking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTableNetworking(BuilderTableNetworking const& ) = delete;

/// @brief Field DELAY_CLIENT_TABLE_CREATION_TIME offset 0xffffffff size 0x4
static constexpr float_t  DELAY_CLIENT_TABLE_CREATION_TIME{static_cast<float_t>(1.0f)};

/// @brief Field MAX_TABLE_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_TABLE_BYTES{static_cast<int32_t>(0x100000)};

/// @brief Field MAX_TABLE_CHUNK_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_TABLE_CHUNK_BYTES{static_cast<int32_t>(0x3e8)};

/// @brief Field PIECE_SYNC_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  PIECE_SYNC_BYTES{static_cast<int32_t>(0x80)};

/// @brief Field SEND_INIT_DATA_COOLDOWN offset 0xffffffff size 0x4
static constexpr float_t  SEND_INIT_DATA_COOLDOWN{static_cast<float_t>(0.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3961};

/// @brief Field tablePhotonView, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___tablePhotonView;

/// @brief Field currTable, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___currTable;

/// @brief Field nextLocalCommandId, offset: 0x38, size: 0x4, def value: None
 int32_t  ___nextLocalCommandId;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x3c, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field masterClientTableInit, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*  ___masterClientTableInit;

/// @brief Field masterClientTableValidators, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*  ___masterClientTableValidators;

/// @brief Field localClientTableInit, offset: 0x50, size: 0x8, def value: None
 ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*  ___localClientTableInit;

/// @brief Field localValidationTable, offset: 0x58, size: 0x8, def value: None
 ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*  ___localValidationTable;

/// [HideInInspector]
/// @brief Field armShelfRequests, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*  ___armShelfRequests;

/// @brief Field callLimiters, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CallLimiter*>  ___callLimiters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking, ___tablePhotonView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking, ___currTable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking, ___nextLocalCommandId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking, ____TickRunning_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking, ___masterClientTableInit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking, ___masterClientTableValidators) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking, ___localClientTableInit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking, ___localValidationTable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking, ___armShelfRequests) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking, ___callLimiters) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderTableNetworking) == 0x70, "Size mismatch!");

} // namespace end def GorillaTagScripts
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderTableNetworking/PlayerTableInitState
class CORDL_TYPE BuilderTableNetworking_PlayerTableInitState : public ::System::Object {
public:
// Declarations
/// @brief Field chunk, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunk, put=__cordl_internal_set_chunk)) ::ArrayW<uint8_t>  chunk;

/// @brief Field numSerializedBytes, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_numSerializedBytes, put=__cordl_internal_set_numSerializedBytes)) int32_t  numSerializedBytes;

/// @brief Field player, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::Photon::Realtime::Player*  player;

/// @brief Field sendNextChunkTimeRemaining, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_sendNextChunkTimeRemaining, put=__cordl_internal_set_sendNextChunkTimeRemaining)) float_t  sendNextChunkTimeRemaining;

/// @brief Field serializedTableState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializedTableState, put=__cordl_internal_set_serializedTableState)) ::ArrayW<uint8_t>  serializedTableState;

/// @brief Field totalSerializedBytes, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalSerializedBytes, put=__cordl_internal_set_totalSerializedBytes)) int32_t  totalSerializedBytes;

/// @brief Field waitForInitTimeRemaining, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitForInitTimeRemaining, put=__cordl_internal_set_waitForInitTimeRemaining)) float_t  waitForInitTimeRemaining;

static inline ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* New_ctor() ;

/// @brief Method Reset, addr 0x5bac8f0, size 0x24, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_chunk() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_chunk() ;

constexpr int32_t const& __cordl_internal_get_numSerializedBytes() const;

constexpr int32_t& __cordl_internal_get_numSerializedBytes() ;

constexpr ::Photon::Realtime::Player* const& __cordl_internal_get_player() const;

constexpr ::Photon::Realtime::Player*& __cordl_internal_get_player() ;

constexpr float_t const& __cordl_internal_get_sendNextChunkTimeRemaining() const;

constexpr float_t& __cordl_internal_get_sendNextChunkTimeRemaining() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_serializedTableState() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_serializedTableState() ;

constexpr int32_t const& __cordl_internal_get_totalSerializedBytes() const;

constexpr int32_t& __cordl_internal_get_totalSerializedBytes() ;

constexpr float_t const& __cordl_internal_get_waitForInitTimeRemaining() const;

constexpr float_t& __cordl_internal_get_waitForInitTimeRemaining() ;

constexpr void __cordl_internal_set_chunk(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_numSerializedBytes(int32_t  value) ;

constexpr void __cordl_internal_set_player(::Photon::Realtime::Player*  value) ;

constexpr void __cordl_internal_set_sendNextChunkTimeRemaining(float_t  value) ;

constexpr void __cordl_internal_set_serializedTableState(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_totalSerializedBytes(int32_t  value) ;

constexpr void __cordl_internal_set_waitForInitTimeRemaining(float_t  value) ;

/// @brief Method .ctor, addr 0x5bac084, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableNetworking_PlayerTableInitState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableNetworking_PlayerTableInitState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTableNetworking_PlayerTableInitState(BuilderTableNetworking_PlayerTableInitState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableNetworking_PlayerTableInitState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTableNetworking_PlayerTableInitState(BuilderTableNetworking_PlayerTableInitState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3958};

/// @brief Field player, offset: 0x10, size: 0x8, def value: None
 ::Photon::Realtime::Player*  ___player;

/// @brief Field numSerializedBytes, offset: 0x18, size: 0x4, def value: None
 int32_t  ___numSerializedBytes;

/// @brief Field totalSerializedBytes, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___totalSerializedBytes;

/// @brief Field serializedTableState, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___serializedTableState;

/// @brief Field chunk, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___chunk;

/// @brief Field waitForInitTimeRemaining, offset: 0x30, size: 0x4, def value: None
 float_t  ___waitForInitTimeRemaining;

/// @brief Field sendNextChunkTimeRemaining, offset: 0x34, size: 0x4, def value: None
 float_t  ___sendNextChunkTimeRemaining;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState, ___player) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState, ___numSerializedBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState, ___totalSerializedBytes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState, ___serializedTableState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState, ___chunk) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState, ___waitForInitTimeRemaining) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState, ___sendNextChunkTimeRemaining) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts
