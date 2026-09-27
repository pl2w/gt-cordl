#pragma once
// IWYU pragma private; include "Voxels/VoxelManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Voxels/zzzz__VoxelManager_VoxelMineOperation_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelManager)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
template<typename T>
class StaticArrayBag_1;
}
namespace GlobalNamespace {
struct VoxelAction;
}
namespace GlobalNamespace {
struct VoxelManager_RPC;
}
namespace GlobalNamespace {
struct VoxelManager_VoxelMineOperation;
}
namespace GlobalNamespace {
struct VoxelManager_VoxelOperationResult;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
struct Vector3;
}
namespace Voxels {
class Chunk;
}
namespace Voxels {
class VoxelManager_ChunkInitState;
}
namespace Voxels {
class VoxelManager_StateInitQueue;
}
namespace Voxels {
class VoxelWorld;
}
namespace Voxels {
struct Voxel;
}
// Forward declare root types
namespace Voxels {
class VoxelManager;
}
namespace Voxels {
class VoxelManager_ChunkInitState;
}
namespace Voxels {
class VoxelManager_StateInitQueue;
}
// Write type traits
MARK_REF_T(::Voxels::VoxelManager*);
MARK_REF_T(::Voxels::VoxelManager_ChunkInitState*);
MARK_REF_T(::Voxels::VoxelManager_StateInitQueue*);
DEFINE_IL2CPP_CLASS(::Voxels::VoxelManager*, "Voxels", "VoxelManager");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelManager_ChunkInitState*, "Voxels", "VoxelManager/ChunkInitState");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelManager_StateInitQueue*, "Voxels", "VoxelManager/StateInitQueue");
// [NetworkBehaviourWeaved(0)]
// Dependencies NetworkComponent, Voxels.VoxelManager::VoxelMineOperation
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelManager
class CORDL_TYPE VoxelManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using RPC = ::GlobalNamespace::VoxelManager_RPC;

using VoxelMineOperation = ::GlobalNamespace::VoxelManager_VoxelMineOperation;

using VoxelOperationResult = ::GlobalNamespace::VoxelManager_VoxelOperationResult;

using ChunkInitState = ::Voxels::VoxelManager_ChunkInitState;

using StateInitQueue = ::Voxels::VoxelManager_StateInitQueue;

/// @brief Field _byteArrayBag, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__byteArrayBag, put=setStaticF__byteArrayBag)) ::GlobalNamespace::StaticArrayBag_1<uint8_t>*  _byteArrayBag;

/// @brief Field _initQueues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__initQueues, put=setStaticF__initQueues)) ::System::Collections::Generic::Dictionary_2<int32_t,::Voxels::VoxelManager_StateInitQueue*>*  _initQueues;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Voxels::VoxelManager>  _instance;

/// @brief Field _intArrayBag, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__intArrayBag, put=setStaticF__intArrayBag)) ::GlobalNamespace::StaticArrayBag_1<int32_t>*  _intArrayBag;

/// @brief Field _localInitQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localInitQueue, put=setStaticF__localInitQueue)) ::Voxels::VoxelManager_StateInitQueue*  _localInitQueue;

/// @brief Field _localOpInterval, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__localOpInterval, put=setStaticF__localOpInterval)) float_t  _localOpInterval;

/// @brief Field _localOperationQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localOperationQueue, put=setStaticF__localOperationQueue)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::VoxelManager_VoxelMineOperation>>*  _localOperationQueue;

/// @brief Field _mineCommandInterval, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__mineCommandInterval, put=setStaticF__mineCommandInterval)) float_t  _mineCommandInterval;

/// @brief Field _mineCommandsQueued, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__mineCommandsQueued, put=setStaticF__mineCommandsQueued)) bool  _mineCommandsQueued;

/// @brief Field _mineOpArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__mineOpArray, put=setStaticF__mineOpArray)) ::ArrayW<::GlobalNamespace::VoxelManager_VoxelMineOperation>  _mineOpArray;

/// @brief Field _mineOpQueues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__mineOpQueues, put=setStaticF__mineOpQueues)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*>*  _mineOpQueues;

/// @brief Field _nextLocalOpTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__nextLocalOpTime, put=setStaticF__nextLocalOpTime)) float_t  _nextLocalOpTime;

/// @brief Field _nextMineCommandTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__nextMineCommandTime, put=setStaticF__nextMineCommandTime)) float_t  _nextMineCommandTime;

/// @brief Field _owner, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__owner, put=__cordl_internal_set__owner)) ::GlobalNamespace::NetPlayer*  _owner;

/// @brief Field _packetData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__packetData, put=setStaticF__packetData)) ::ArrayW<uint8_t>  _packetData;

/// @brief Field _processInitQueus, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__processInitQueus, put=setStaticF__processInitQueus)) bool  _processInitQueus;

/// @brief Field _sendHistory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sendHistory, put=setStaticF__sendHistory)) ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<float_t,int32_t>>*  _sendHistory;

/// @brief Field _sendRate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__sendRate, put=setStaticF__sendRate)) int32_t  _sendRate;

/// @brief Field _spamChecks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__spamChecks, put=setStaticF__spamChecks)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::CallLimiter*>>*  _spamChecks;

/// @brief Field _worlds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__worlds, put=setStaticF__worlds)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*  _worlds;

/// @brief Method ClearQueuesForPlayer, addr 0x5dc6b44, size 0x1c0, virtual false, abstract: false, final false
static inline void ClearQueuesForPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5dcd5e4, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5dcd5ec, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method DeserializeContinueChunk, addr 0x5dcc7f0, size 0x174, virtual false, abstract: false, final false
static inline void DeserializeContinueChunk(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeMineCommand, addr 0x5dccae0, size 0x214, virtual false, abstract: false, final false
static inline void DeserializeMineCommand(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeMineOperationRequest, addr 0x5dcc448, size 0x1b8, virtual false, abstract: false, final false
static inline void DeserializeMineOperationRequest(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeOperationRequest, addr 0x5dcc194, size 0x2b4, virtual false, abstract: false, final false
static inline void DeserializeOperationRequest(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeSetDensity, addr 0x5dcc964, size 0x17c, virtual false, abstract: false, final false
static inline void DeserializeSetDensity(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeStartChunk, addr 0x5dcc600, size 0x1f0, virtual false, abstract: false, final false
static inline void DeserializeStartChunk(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeWorldStateRequest, addr 0x5dcc048, size 0x14c, virtual false, abstract: false, final false
static inline void DeserializeWorldStateRequest(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method EnqueueTransferLog, addr 0x5dc5ce0, size 0xd4, virtual false, abstract: false, final false
static inline void EnqueueTransferLog(int32_t  bytes) ;

/// @brief Method ExecuteQueuedLocalOperations, addr 0x5dc57e8, size 0x3cc, virtual false, abstract: false, final false
static inline void ExecuteQueuedLocalOperations() ;

/// @brief Method GetDensityForBounds, addr 0x5dc9468, size 0x294, virtual false, abstract: false, final false
static inline void GetDensityForBounds(::Voxels::VoxelWorld*  world, ::UnityEngine::BoundsInt  bounds, ::by_ref<::ArrayW<uint8_t>>  voxels) ;

/// @brief Method GetIntArray, addr 0x5dc5db4, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> GetIntArray(int32_t  length) ;

/// @brief Method GetOrCreateQueueForPlayer, addr 0x5dc737c, size 0x138, virtual false, abstract: false, final false
static inline ::Voxels::VoxelManager_StateInitQueue* GetOrCreateQueueForPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetSpamChecksForUser, addr 0x5dcb96c, size 0x40c, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::CallLimiter*> GetSpamChecksForUser(int32_t  userID) ;

/// @brief Method GetSpanFor, addr 0x5dc7db0, size 0x1b4, virtual false, abstract: false, final false
static inline ::System::Span_1<::GlobalNamespace::VoxelManager_VoxelMineOperation> GetSpanFor(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*  ops, int32_t  start, int32_t  count) ;

/// @brief Method GetVoxelsForBounds, addr 0x5dcb0f0, size 0x254, virtual false, abstract: false, final false
static inline void GetVoxelsForBounds(::Voxels::VoxelWorld*  world, ::UnityEngine::BoundsInt  bounds, ::by_ref<::ArrayW<::Voxels::Voxel>>  voxels) ;

/// @brief Method IsSpamming, addr 0x5dcb804, size 0xac, virtual false, abstract: false, final false
static inline bool IsSpamming(::GlobalNamespace::PhotonMessageInfoWrapped  info, ::GlobalNamespace::VoxelManager_RPC  eventType) ;

/// @brief Method IsValidAuthorityRPC, addr 0x5dcb728, size 0xdc, virtual false, abstract: false, final false
static inline bool IsValidAuthorityRPC(::GlobalNamespace::PhotonMessageInfoWrapped  info, ::GlobalNamespace::VoxelManager_RPC  eventType) ;

/// @brief Method IsValidClientRPC, addr 0x5dcb8b0, size 0xbc, virtual false, abstract: false, final false
static inline bool IsValidClientRPC(::GlobalNamespace::PhotonMessageInfoWrapped  info, ::GlobalNamespace::VoxelManager_RPC  eventType) ;

/// @brief Method LateUpdate, addr 0x5dc571c, size 0xcc, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method Mine, addr 0x5dca020, size 0x1f0, virtual false, abstract: false, final false
static inline void Mine(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::UnityEngine::Vector3  origin, ::GlobalNamespace::VoxelAction  action) ;

/// @brief Method MineAuthority, addr 0x5dcaaa0, size 0x3b0, virtual false, abstract: false, final false
static inline void MineAuthority(::Voxels::VoxelWorld*  world, ::GlobalNamespace::VoxelManager_VoxelMineOperation  op, ::GlobalNamespace::NetPlayer*  sender) ;

static inline ::Voxels::VoxelManager* New_ctor() ;

/// @brief Method OnChunkPacketReceived, addr 0x5dc8d64, size 0x404, virtual false, abstract: false, final false
static inline void OnChunkPacketReceived(int32_t  hash, int32_t  size, ::ArrayW<uint8_t>  data) ;

/// @brief Method OnDisable, addr 0x5dc4658, size 0x324, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5dc4334, size 0x324, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLowMemory, addr 0x5dc5bb4, size 0x12c, virtual false, abstract: false, final false
inline void OnLowMemory() ;

/// @brief Method OnMineCommandReceived, addr 0x5dcb6b4, size 0x74, virtual false, abstract: false, final false
static inline void OnMineCommandReceived(::GlobalNamespace::VoxelManager_VoxelMineOperation  op) ;

/// @brief Method OnMineRequestReceived, addr 0x5dcaf94, size 0x15c, virtual false, abstract: false, final false
static inline void OnMineRequestReceived(::GlobalNamespace::VoxelManager_VoxelMineOperation  op, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnNetworkJoinedRoom, addr 0x5dc67fc, size 0x70, virtual false, abstract: false, final false
inline void OnNetworkJoinedRoom() ;

/// @brief Method OnNetworkLeftRoom, addr 0x5dc69f0, size 0x78, virtual false, abstract: false, final false
inline void OnNetworkLeftRoom() ;

/// @brief Method OnOperationRequestReceived, addr 0x5dc9c1c, size 0x404, virtual false, abstract: false, final false
static inline void OnOperationRequestReceived(int32_t  worldId, ::UnityEngine::Vector3  localPosition, ::GlobalNamespace::VoxelAction  action, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnOwnerSwitched, addr 0x5dc6d04, size 0x104, virtual true, abstract: false, final false
inline void OnOwnerSwitched(::GlobalNamespace::NetPlayer*  newOwningPlayer) ;

/// @brief Method OnPlayerLeft, addr 0x5dc6a68, size 0xdc, virtual false, abstract: false, final false
inline void OnPlayerLeft(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnSetDensityReceived, addr 0x5dcb344, size 0x370, virtual false, abstract: false, final false
static inline void OnSetDensityReceived(int32_t  worldId, ::UnityEngine::BoundsInt  bounds, ::ArrayW<uint8_t>  data) ;

/// @brief Method OnStartChunkReceived, addr 0x5dc898c, size 0x334, virtual false, abstract: false, final false
static inline void OnStartChunkReceived(int32_t  worldId, ::Unity::Mathematics::int3  chunkId, int32_t  hash, int32_t  size) ;

/// @brief Method OnWorldStateRequestReceived, addr 0x5dc6e78, size 0xc0, virtual false, abstract: false, final false
static inline void OnWorldStateRequestReceived(int32_t  worldId, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OperateAuthority, addr 0x5dc98f8, size 0x118, virtual false, abstract: false, final false
static inline void OperateAuthority(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  localPosition, ::GlobalNamespace::VoxelAction  action) ;

/// @brief Method PerformOperation, addr 0x5dc96fc, size 0x1fc, virtual false, abstract: false, final false
static inline void PerformOperation(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  position, ::GlobalNamespace::VoxelAction  action) ;

/// @brief Method ProcessMiningResult, addr 0x5dc81cc, size 0x54, virtual false, abstract: false, final false
static inline void ProcessMiningResult(::GlobalNamespace::NetPlayer*  player, ::Voxels::VoxelWorld*  world, ::ArrayW<int32_t>  amounts) ;

/// @brief Method QueueChunkForPlayer, addr 0x5dc6f38, size 0x264, virtual false, abstract: false, final false
static inline void QueueChunkForPlayer(::Voxels::Chunk*  chunk, ::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method QueueMineCommand, addr 0x5dc7b9c, size 0x214, virtual false, abstract: false, final false
static inline void QueueMineCommand(::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::VoxelManager_VoxelMineOperation  operation) ;

/// @brief Method QueueMineOperation, addr 0x5dc8068, size 0x164, virtual false, abstract: false, final false
static inline void QueueMineOperation(::GlobalNamespace::VoxelManager_VoxelMineOperation  op, ::GlobalNamespace::NetPlayer*  sender) ;

/// @brief Method QueueMineOperationForPlayer, addr 0x5dc7998, size 0x204, virtual false, abstract: false, final false
static inline void QueueMineOperationForPlayer(::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::VoxelManager_VoxelMineOperation  op) ;

/// @brief Method QueueOperationForPlayer, addr 0x5dc7600, size 0x268, virtual false, abstract: false, final false
static inline void QueueOperationForPlayer(::Voxels::VoxelWorld*  world, ::GlobalNamespace::NetPlayer*  player, ::UnityEngine::BoundsInt  bounds, ::ArrayW<uint8_t>  data) ;

/// @brief Method ReadDataFusion, addr 0x5dc6e0c, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5dc6e14, size 0x4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Register, addr 0x5dc5e68, size 0x154, virtual false, abstract: false, final false
static inline void Register(::Voxels::VoxelWorld*  world) ;

/// @brief Method RegisterNetEventCallbacks, addr 0x5dcbd78, size 0x2d0, virtual false, abstract: false, final false
static inline void RegisterNetEventCallbacks() ;

/// @brief Method ReplicateState, addr 0x5dc6204, size 0x20c, virtual false, abstract: false, final false
static inline void ReplicateState(::Voxels::VoxelWorld*  world) ;

/// @brief Method RequestVoxelWorldStates, addr 0x5dc686c, size 0x184, virtual false, abstract: false, final false
static inline void RequestVoxelWorldStates() ;

/// @brief Method RequestWorldState, addr 0x5dc6e18, size 0x60, virtual false, abstract: false, final false
static inline void RequestWorldState(::Voxels::VoxelWorld*  world) ;

/// @brief Method SendContinueChunk, addr 0x5dc877c, size 0x210, virtual false, abstract: false, final false
static inline void SendContinueChunk(::GlobalNamespace::NetPlayer*  player, int32_t  hash, int32_t  size, ::ArrayW<uint8_t>  data) ;

/// @brief Method SendDensity, addr 0x5dc9168, size 0x300, virtual false, abstract: false, final false
static inline void SendDensity(::Voxels::VoxelWorld*  world, ::UnityEngine::BoundsInt  bounds) ;

/// @brief Method SendMineCommand, addr 0x5dc7f64, size 0x104, virtual false, abstract: false, final false
static inline void SendMineCommand(::GlobalNamespace::NetPlayer*  player, ::System::Span_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>  ops) ;

/// @brief Method SendMineOperationRequest, addr 0x5dcae50, size 0x144, virtual false, abstract: false, final false
static inline void SendMineOperationRequest(::GlobalNamespace::VoxelManager_VoxelMineOperation  op) ;

/// @brief Method SendNextChunk, addr 0x5dc5008, size 0x388, virtual false, abstract: false, final false
static inline void SendNextChunk(::Voxels::VoxelManager_StateInitQueue*  queue) ;

/// @brief Method SendNextPacketForChunk, addr 0x5dc8220, size 0xf0, virtual false, abstract: false, final false
static inline void SendNextPacketForChunk(::Voxels::VoxelManager_ChunkInitState*  chunkState, ::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SendOperationRequest, addr 0x5dc9a10, size 0x20c, virtual false, abstract: false, final false
static inline void SendOperationRequest(int32_t  worldId, ::UnityEngine::Vector3  localPosition, ::GlobalNamespace::VoxelAction  action) ;

/// @brief Method SendQueuedMineCommands, addr 0x5dc5390, size 0x38c, virtual false, abstract: false, final false
static inline void SendQueuedMineCommands() ;

/// @brief Method SendSetDensity, addr 0x5dc8524, size 0x258, virtual false, abstract: false, final false
static inline void SendSetDensity(::GlobalNamespace::NetPlayer*  player, int32_t  worldId, ::UnityEngine::BoundsInt  bounds, ::ArrayW<uint8_t>  data) ;

/// @brief Method SendStartChunk, addr 0x5dc8310, size 0x214, virtual false, abstract: false, final false
static inline void SendStartChunk(::GlobalNamespace::NetPlayer*  player, int32_t  worldId, ::Unity::Mathematics::int3  chunkId, int32_t  hash, int32_t  totalSerializedBytes) ;

/// @brief Method SendWorldStateRequest, addr 0x5dc5fbc, size 0x124, virtual false, abstract: false, final false
static inline void SendWorldStateRequest(int32_t  worldId) ;

/// @brief Method SendWorldStateToPlayer, addr 0x5dc6410, size 0x3ec, virtual false, abstract: false, final false
static inline void SendWorldStateToPlayer(::Voxels::VoxelWorld*  world, ::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method Start, addr 0x5dc42c0, size 0x74, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TestHitPoint, addr 0x5dcccf4, size 0x9c, virtual false, abstract: false, final false
inline void TestHitPoint() ;

/// @brief Method Unregister, addr 0x5dc60e0, size 0x124, virtual false, abstract: false, final false
static inline void Unregister(::Voxels::VoxelWorld*  world) ;

/// @brief Method Update, addr 0x5dc497c, size 0x4c0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateTransferLog, addr 0x5dc4e3c, size 0x134, virtual false, abstract: false, final false
static inline void UpdateTransferLog() ;

/// @brief Method WorldIsQueuedForPlayer, addr 0x5dc719c, size 0x1e0, virtual false, abstract: false, final false
static inline bool WorldIsQueuedForPlayer(::Voxels::VoxelWorld*  world, ::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method WriteDataFusion, addr 0x5dc6e08, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5dc6e10, size 0x4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [CompilerGenerated]
/// @brief Method <TestHitPoint>g__Test|103_0, addr 0x5dccd90, size 0x3ac, virtual false, abstract: false, final false
static inline void _TestHitPoint_g__Test_103_0(::ArrayW<float_t>  magnitudes) ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get__owner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get__owner() ;

constexpr void __cordl_internal_set__owner(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x5dcd13c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::StaticArrayBag_1<uint8_t>* getStaticF__byteArrayBag() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::Voxels::VoxelManager_StateInitQueue*>* getStaticF__initQueues() ;

static inline ::UnityW<::Voxels::VoxelManager> getStaticF__instance() ;

static inline ::GlobalNamespace::StaticArrayBag_1<int32_t>* getStaticF__intArrayBag() ;

static inline ::Voxels::VoxelManager_StateInitQueue* getStaticF__localInitQueue() ;

static inline float_t getStaticF__localOpInterval() ;

static inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::VoxelManager_VoxelMineOperation>>* getStaticF__localOperationQueue() ;

static inline float_t getStaticF__mineCommandInterval() ;

static inline bool getStaticF__mineCommandsQueued() ;

static inline ::ArrayW<::GlobalNamespace::VoxelManager_VoxelMineOperation> getStaticF__mineOpArray() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*>* getStaticF__mineOpQueues() ;

static inline float_t getStaticF__nextLocalOpTime() ;

static inline float_t getStaticF__nextMineCommandTime() ;

static inline ::ArrayW<uint8_t> getStaticF__packetData() ;

static inline bool getStaticF__processInitQueus() ;

static inline ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<float_t,int32_t>>* getStaticF__sendHistory() ;

static inline int32_t getStaticF__sendRate() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::CallLimiter*>>* getStaticF__spamChecks() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>* getStaticF__worlds() ;

/// @brief Method get_HasAuthority, addr 0x5dc41c8, size 0x8c, virtual false, abstract: false, final false
static inline bool get_HasAuthority() ;

/// @brief Method get_InRoom, addr 0x5dc4254, size 0x6c, virtual false, abstract: false, final false
static inline bool get_InRoom() ;

static inline void setStaticF__byteArrayBag(::GlobalNamespace::StaticArrayBag_1<uint8_t>*  value) ;

static inline void setStaticF__initQueues(::System::Collections::Generic::Dictionary_2<int32_t,::Voxels::VoxelManager_StateInitQueue*>*  value) ;

static inline void setStaticF__instance(::UnityW<::Voxels::VoxelManager>  value) ;

static inline void setStaticF__intArrayBag(::GlobalNamespace::StaticArrayBag_1<int32_t>*  value) ;

static inline void setStaticF__localInitQueue(::Voxels::VoxelManager_StateInitQueue*  value) ;

static inline void setStaticF__localOpInterval(float_t  value) ;

static inline void setStaticF__localOperationQueue(::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::VoxelManager_VoxelMineOperation>>*  value) ;

static inline void setStaticF__mineCommandInterval(float_t  value) ;

static inline void setStaticF__mineCommandsQueued(bool  value) ;

static inline void setStaticF__mineOpArray(::ArrayW<::GlobalNamespace::VoxelManager_VoxelMineOperation>  value) ;

static inline void setStaticF__mineOpQueues(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*>*  value) ;

static inline void setStaticF__nextLocalOpTime(float_t  value) ;

static inline void setStaticF__nextMineCommandTime(float_t  value) ;

static inline void setStaticF__packetData(::ArrayW<uint8_t>  value) ;

static inline void setStaticF__processInitQueus(bool  value) ;

static inline void setStaticF__sendHistory(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<float_t,int32_t>>*  value) ;

static inline void setStaticF__sendRate(int32_t  value) ;

static inline void setStaticF__spamChecks(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::CallLimiter*>>*  value) ;

static inline void setStaticF__worlds(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelManager(VoxelManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelManager(VoxelManager const& ) = delete;

/// @brief Field MAX_DATA_RATE offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DATA_RATE{static_cast<int32_t>(0x2710)};

/// @brief Field MAX_DATA_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DATA_SIZE{static_cast<int32_t>(0x3e8)};

/// @brief Field OP_SCALE offset 0xffffffff size 0x4
static constexpr int32_t  OP_SCALE{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5072};

/// @brief Field _maxMineCommandLength offset 0xffffffff size 0x4
static constexpr int32_t  _maxMineCommandLength{static_cast<int32_t>(0x14)};

/// @brief Field _owner, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ____owner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelManager, ____owner) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelManager) == 0xa8, "Size mismatch!");

} // namespace end def Voxels
// Dependencies System.Object, Unity.Mathematics.int3
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelManager/ChunkInitState
class CORDL_TYPE VoxelManager_ChunkInitState : public ::System::Object {
public:
// Declarations
/// @brief Field chunkId, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_chunkId, put=__cordl_internal_set_chunkId)) ::Unity::Mathematics::int3  chunkId;

/// @brief Field hash, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_hash, put=__cordl_internal_set_hash)) int32_t  hash;

/// @brief Field numSerializedBytes, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_numSerializedBytes, put=__cordl_internal_set_numSerializedBytes)) int32_t  numSerializedBytes;

/// @brief Field serializedChunkState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializedChunkState, put=__cordl_internal_set_serializedChunkState)) ::ArrayW<uint8_t>  serializedChunkState;

/// @brief Field totalSerializedBytes, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalSerializedBytes, put=__cordl_internal_set_totalSerializedBytes)) int32_t  totalSerializedBytes;

/// @brief Field worldId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_worldId, put=__cordl_internal_set_worldId)) int32_t  worldId;

static inline ::Voxels::VoxelManager_ChunkInitState* New_ctor() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_chunkId() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_chunkId() ;

constexpr int32_t const& __cordl_internal_get_hash() const;

constexpr int32_t& __cordl_internal_get_hash() ;

constexpr int32_t const& __cordl_internal_get_numSerializedBytes() const;

constexpr int32_t& __cordl_internal_get_numSerializedBytes() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_serializedChunkState() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_serializedChunkState() ;

constexpr int32_t const& __cordl_internal_get_totalSerializedBytes() const;

constexpr int32_t& __cordl_internal_get_totalSerializedBytes() ;

constexpr int32_t const& __cordl_internal_get_worldId() const;

constexpr int32_t& __cordl_internal_get_worldId() ;

constexpr void __cordl_internal_set_chunkId(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_hash(int32_t  value) ;

constexpr void __cordl_internal_set_numSerializedBytes(int32_t  value) ;

constexpr void __cordl_internal_set_serializedChunkState(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_totalSerializedBytes(int32_t  value) ;

constexpr void __cordl_internal_set_worldId(int32_t  value) ;

/// @brief Method .ctor, addr 0x5dc75f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelManager_ChunkInitState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelManager_ChunkInitState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelManager_ChunkInitState(VoxelManager_ChunkInitState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelManager_ChunkInitState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelManager_ChunkInitState(VoxelManager_ChunkInitState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5070};

/// @brief Field worldId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___worldId;

/// @brief Field chunkId, offset: 0x14, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___chunkId;

/// @brief Field hash, offset: 0x20, size: 0x4, def value: None
 int32_t  ___hash;

/// @brief Field serializedChunkState, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___serializedChunkState;

/// @brief Field numSerializedBytes, offset: 0x30, size: 0x4, def value: None
 int32_t  ___numSerializedBytes;

/// @brief Field totalSerializedBytes, offset: 0x34, size: 0x4, def value: None
 int32_t  ___totalSerializedBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelManager_ChunkInitState, ___worldId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelManager_ChunkInitState, ___chunkId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelManager_ChunkInitState, ___hash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelManager_ChunkInitState, ___serializedChunkState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelManager_ChunkInitState, ___numSerializedBytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelManager_ChunkInitState, ___totalSerializedBytes) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelManager_ChunkInitState) == 0x38, "Size mismatch!");

} // namespace end def Voxels
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelManager/StateInitQueue
class CORDL_TYPE VoxelManager_StateInitQueue : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

/// @brief Field chunks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunks, put=__cordl_internal_set_chunks)) ::System::Collections::Generic::List_1<::Voxels::VoxelManager_ChunkInitState*>*  chunks;

/// @brief Field currentChunk, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentChunk, put=__cordl_internal_set_currentChunk)) ::Voxels::VoxelManager_ChunkInitState*  currentChunk;

/// @brief Field mineOps, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mineOps, put=__cordl_internal_set_mineOps)) ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*  mineOps;

/// @brief Field operations, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_operations, put=__cordl_internal_set_operations)) ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelOperationResult>*  operations;

/// @brief Field player, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::GlobalNamespace::NetPlayer*  player;

/// @brief Method GetChunkIndex, addr 0x5dc8cc0, size 0xa4, virtual false, abstract: false, final false
inline int32_t GetChunkIndex(int32_t  hash) ;

/// @brief Method GetChunkState, addr 0x5dcd5f4, size 0x14c, virtual false, abstract: false, final false
inline ::Voxels::VoxelManager_ChunkInitState* GetChunkState(int32_t  hash) ;

static inline ::Voxels::VoxelManager_StateInitQueue* New_ctor() ;

static inline ::Voxels::VoxelManager_StateInitQueue* New_ctor(::GlobalNamespace::NetPlayer*  player) ;

constexpr ::System::Collections::Generic::List_1<::Voxels::VoxelManager_ChunkInitState*>* const& __cordl_internal_get_chunks() const;

constexpr ::System::Collections::Generic::List_1<::Voxels::VoxelManager_ChunkInitState*>*& __cordl_internal_get_chunks() ;

constexpr ::Voxels::VoxelManager_ChunkInitState* const& __cordl_internal_get_currentChunk() const;

constexpr ::Voxels::VoxelManager_ChunkInitState*& __cordl_internal_get_currentChunk() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>* const& __cordl_internal_get_mineOps() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*& __cordl_internal_get_mineOps() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelOperationResult>* const& __cordl_internal_get_operations() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelOperationResult>*& __cordl_internal_get_operations() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set_chunks(::System::Collections::Generic::List_1<::Voxels::VoxelManager_ChunkInitState*>*  value) ;

constexpr void __cordl_internal_set_currentChunk(::Voxels::VoxelManager_ChunkInitState*  value) ;

constexpr void __cordl_internal_set_mineOps(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*  value) ;

constexpr void __cordl_internal_set_operations(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelOperationResult>*  value) ;

constexpr void __cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x5dc7868, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5dc74b4, size 0x144, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method get_IsEmpty, addr 0x5dc4f70, size 0x98, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelManager_StateInitQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelManager_StateInitQueue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelManager_StateInitQueue(VoxelManager_StateInitQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelManager_StateInitQueue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelManager_StateInitQueue(VoxelManager_StateInitQueue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5067};

/// @brief Field player, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___player;

/// @brief Field chunks, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Voxels::VoxelManager_ChunkInitState*>*  ___chunks;

/// @brief Field mineOps, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*  ___mineOps;

/// @brief Field operations, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelOperationResult>*  ___operations;

/// @brief Field currentChunk, offset: 0x30, size: 0x8, def value: None
 ::Voxels::VoxelManager_ChunkInitState*  ___currentChunk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelManager_StateInitQueue, ___player) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelManager_StateInitQueue, ___chunks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelManager_StateInitQueue, ___mineOps) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelManager_StateInitQueue, ___operations) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelManager_StateInitQueue, ___currentChunk) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelManager_StateInitQueue) == 0x38, "Size mismatch!");

} // namespace end def Voxels
