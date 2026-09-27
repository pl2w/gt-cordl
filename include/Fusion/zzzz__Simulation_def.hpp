#pragma once
// IWYU pragma private; include "Fusion/Simulation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__BitSet512_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_ListMigration_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_List_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationConfig_DataConsistency_def.hpp"
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__SimulationStages_def.hpp"
#include "Fusion/zzzz__Simulation_SimulationPacketHeader_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_ValueCollection_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet`1_Enumerator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulation)
namespace Fusion::Sockets {
class INetPeerGroupCallbacks;
}
namespace Fusion::Sockets {
class INetSocket;
}
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace Fusion::Sockets {
struct NetConfig;
}
namespace Fusion::Sockets {
struct NetConnectFailedReason;
}
namespace Fusion::Sockets {
struct NetConnection;
}
namespace Fusion::Sockets {
struct NetDisconnectReason;
}
namespace Fusion::Sockets {
struct NetPeerGroup;
}
namespace Fusion::Sockets {
struct NetPeer;
}
namespace Fusion::Sockets {
struct NetSendEnvelope;
}
namespace Fusion::Sockets {
struct OnConnectionRequestReply;
}
namespace Fusion::Sockets {
struct ReliableId;
}
namespace Fusion::Sockets {
struct ReliableKey;
}
namespace Fusion::Statistics {
class FusionStatisticsManager;
}
namespace Fusion::Statistics {
struct MemoryStatisticsSnapshot;
}
namespace Fusion {
class Allocator;
}
namespace Fusion {
class History_Simulation_Entry;
}
namespace Fusion {
class ILogSource;
}
namespace Fusion {
class ITimeProvider;
}
namespace Fusion {
struct NetworkBufferSerializerInfo;
}
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
class NetworkObjectConnectionData;
}
namespace Fusion {
struct NetworkObjectDestroyFlags;
}
namespace Fusion {
struct NetworkObjectHeaderFlags;
}
namespace Fusion {
struct NetworkObjectHeaderSnapshotRef;
}
namespace Fusion {
class NetworkObjectHeaderSnapshot;
}
namespace Fusion {
struct NetworkObjectHeader;
}
namespace Fusion {
class NetworkObjectMeta;
}
namespace Fusion {
struct NetworkObjectNestingKey;
}
namespace Fusion {
struct NetworkObjectTypeId;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkProjectConfig;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct RpcSendMessageResult;
}
namespace Fusion {
struct RpcTargetStatus;
}
namespace Fusion {
struct SimulationArgs;
}
namespace Fusion {
class SimulationConfig;
}
namespace Fusion {
class SimulationConnection;
}
namespace Fusion {
class SimulationHistoryEntryList;
}
namespace Fusion {
class SimulationInputCollection;
}
namespace Fusion {
class SimulationInput_Pool;
}
namespace Fusion {
class SimulationInput;
}
namespace Fusion {
struct SimulationMessageEnvelope;
}
namespace Fusion {
struct SimulationMessageInternalTypes;
}
namespace Fusion {
struct SimulationMessageList;
}
namespace Fusion {
struct SimulationMessageResult;
}
namespace Fusion {
struct SimulationMessage;
}
namespace Fusion {
struct SimulationModes;
}
namespace Fusion {
struct SimulationPacketEnvelope;
}
namespace Fusion {
struct SimulationRuntimeConfig;
}
namespace Fusion {
struct SimulationStages;
}
namespace Fusion {
class Simulation_AreaOfInterestCell;
}
namespace Fusion {
class Simulation_History;
}
namespace Fusion {
class Simulation_ICallbacks;
}
namespace Fusion {
class Simulation_RecvContext;
}
namespace Fusion {
class Simulation_SendContext;
}
namespace Fusion {
class Simulation_StateReplicator;
}
namespace Fusion {
class Simulation___c;
}
namespace Fusion {
class Simulation__get_ActivePlayers_d__138;
}
namespace Fusion {
class Simulation__get_Connections_d__156;
}
namespace Fusion {
struct Tick;
}
namespace Fusion {
struct Topologies;
}
namespace GlobalNamespace {
struct MemoryStatisticsSnapshot_TargetAllocator;
}
namespace GlobalNamespace {
struct NetworkObjectMeta_List;
}
namespace GlobalNamespace {
struct Simulation_AreaOfInterest;
}
namespace GlobalNamespace {
class Simulation_Client;
}
namespace GlobalNamespace {
struct Simulation_ObjectChangeType;
}
namespace GlobalNamespace {
struct Simulation_PlayerRefMapping;
}
namespace GlobalNamespace {
struct Simulation_PlayerSimulationData;
}
namespace GlobalNamespace {
class Simulation_Server;
}
namespace GlobalNamespace {
struct Simulation_SimulationPacketHeader;
}
namespace GlobalNamespace {
struct Simulation_TargetObjectVerificationResult;
}
namespace GlobalNamespace {
struct Simulation_TimeFeedback;
}
namespace GlobalNamespace {
struct StateReplicator_Simulation_WriteResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Random;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion {
class Client_Simulation__get_ActivePlayers_d__24;
}
namespace Fusion {
class History_Simulation_Entry;
}
namespace Fusion {
class Simulation;
}
namespace Fusion {
class Simulation_AreaOfInterestCell;
}
namespace Fusion {
class Simulation_History;
}
namespace Fusion {
class Simulation_ICallbacks;
}
namespace Fusion {
class Simulation_RecvContext;
}
namespace Fusion {
class Simulation_SendContext;
}
namespace Fusion {
class Simulation_StateReplicator;
}
namespace Fusion {
class Simulation___c;
}
namespace Fusion {
class Simulation__get_ActivePlayers_d__138;
}
namespace Fusion {
class Simulation__get_Connections_d__156;
}
// Write type traits
MARK_REF_T(::Fusion::Client_Simulation__get_ActivePlayers_d__24*);
MARK_REF_T(::Fusion::History_Simulation_Entry*);
MARK_REF_T(::Fusion::Simulation*);
MARK_REF_T(::Fusion::Simulation_AreaOfInterestCell*);
MARK_REF_T(::Fusion::Simulation_History*);
MARK_REF_T(::Fusion::Simulation_ICallbacks*);
MARK_REF_T(::Fusion::Simulation_RecvContext*);
MARK_REF_T(::Fusion::Simulation_SendContext*);
MARK_REF_T(::Fusion::Simulation_StateReplicator*);
MARK_REF_T(::Fusion::Simulation___c*);
MARK_REF_T(::Fusion::Simulation__get_ActivePlayers_d__138*);
MARK_REF_T(::Fusion::Simulation__get_Connections_d__156*);
DEFINE_IL2CPP_CLASS(::Fusion::Client_Simulation__get_ActivePlayers_d__24*, "Fusion", "Simulation/Client/<get_ActivePlayers>d__24");
DEFINE_IL2CPP_CLASS(::Fusion::History_Simulation_Entry*, "Fusion", "Simulation/History/Entry");
DEFINE_IL2CPP_CLASS(::Fusion::Simulation*, "Fusion", "Simulation");
DEFINE_IL2CPP_CLASS(::Fusion::Simulation_AreaOfInterestCell*, "Fusion", "Simulation/AreaOfInterestCell");
DEFINE_IL2CPP_CLASS(::Fusion::Simulation_History*, "Fusion", "Simulation/History");
DEFINE_IL2CPP_CLASS(::Fusion::Simulation_ICallbacks*, "Fusion", "Simulation/ICallbacks");
DEFINE_IL2CPP_CLASS(::Fusion::Simulation_RecvContext*, "Fusion", "Simulation/RecvContext");
DEFINE_IL2CPP_CLASS(::Fusion::Simulation_SendContext*, "Fusion", "Simulation/SendContext");
DEFINE_IL2CPP_CLASS(::Fusion::Simulation_StateReplicator*, "Fusion", "Simulation/StateReplicator");
DEFINE_IL2CPP_CLASS(::Fusion::Simulation___c*, "Fusion", "Simulation/<>c");
DEFINE_IL2CPP_CLASS(::Fusion::Simulation__get_ActivePlayers_d__138*, "Fusion", "Simulation/<get_ActivePlayers>d__138");
DEFINE_IL2CPP_CLASS(::Fusion::Simulation__get_Connections_d__156*, "Fusion", "Simulation/<get_Connections>d__156");
// Dependencies Fusion.NetworkObjectMeta::ListMigration, Fusion.SimulationModes, Fusion.SimulationStages, Fusion.Tick, System.Nullable`1<T>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation
class CORDL_TYPE Simulation : public ::System::Object {
public:
// Declarations
using AreaOfInterestCell = ::Fusion::Simulation_AreaOfInterestCell;

using History = ::Fusion::Simulation_History;

using ICallbacks = ::Fusion::Simulation_ICallbacks;

using RecvContext = ::Fusion::Simulation_RecvContext;

using SendContext = ::Fusion::Simulation_SendContext;

using StateReplicator = ::Fusion::Simulation_StateReplicator;

using __c = ::Fusion::Simulation___c;

using _get_ActivePlayers_d__138 = ::Fusion::Simulation__get_ActivePlayers_d__138;

using _get_Connections_d__156 = ::Fusion::Simulation__get_Connections_d__156;

using AreaOfInterest = ::GlobalNamespace::Simulation_AreaOfInterest;

using Client = ::GlobalNamespace::Simulation_Client;

using ObjectChangeType = ::GlobalNamespace::Simulation_ObjectChangeType;

using PlayerRefMapping = ::GlobalNamespace::Simulation_PlayerRefMapping;

using PlayerSimulationData = ::GlobalNamespace::Simulation_PlayerSimulationData;

using Server = ::GlobalNamespace::Simulation_Server;

using SimulationPacketHeader = ::GlobalNamespace::Simulation_SimulationPacketHeader;

using TargetObjectVerificationResult = ::GlobalNamespace::Simulation_TargetObjectVerificationResult;

using TimeFeedback = ::GlobalNamespace::Simulation_TimeFeedback;

 __declspec(property(get=get_ActivePlayers)) ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*  ActivePlayers;

 __declspec(property(get=get_Callbacks)) ::Fusion::Simulation_ICallbacks*  Callbacks;

 __declspec(property(get=get_Config)) ::Fusion::SimulationConfig*  Config;

 __declspec(property(get=get_Connections)) ::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>*  Connections;

 __declspec(property(get=get_DeltaTime)) float_t  DeltaTime;

 __declspec(property(get=get_HasRuntimeConfig)) bool  HasRuntimeConfig;

 __declspec(property(get=get_IdCounter)) uint32_t  IdCounter;

 __declspec(property(get=get_InputCount)) int32_t  InputCount;

 __declspec(property(get=get_InterpolateSequence)) uint64_t  InterpolateSequence;

 __declspec(property(get=get_IsClient)) bool  IsClient;

 __declspec(property(get=get_IsFirstTick)) bool  IsFirstTick;

 __declspec(property(get=get_IsForward)) bool  IsForward;

 __declspec(property(get=get_IsInTick)) bool  IsInTick;

 __declspec(property(get=get_IsLastTick)) bool  IsLastTick;

 __declspec(property(get=get_IsLocalPlayerFirstExecution)) bool  IsLocalPlayerFirstExecution;

 __declspec(property(get=get_IsMasterClient)) bool  IsMasterClient;

 __declspec(property(get=get_IsPaused)) bool  IsPaused;

 __declspec(property(get=get_IsPlayer)) bool  IsPlayer;

 __declspec(property(get=get_IsResimulation)) bool  IsResimulation;

 __declspec(property(get=get_IsResume)) bool  IsResume;

 __declspec(property(get=get_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_IsSceneInfoReady)) bool  IsSceneInfoReady;

 __declspec(property(get=get_IsServer)) bool  IsServer;

 __declspec(property(get=get_IsShutdown)) bool  IsShutdown;

 __declspec(property(get=get_IsSinglePlayer)) bool  IsSinglePlayer;

 __declspec(property(get=get_IsWaitingForTheInitialTick)) bool  IsWaitingForTheInitialTick;

 __declspec(property(get=get_LatestServerTick)) ::Fusion::Tick  LatestServerTick;

 __declspec(property(get=get_LocalAddress)) ::Fusion::Sockets::NetAddress  LocalAddress;

 __declspec(property(get=get_LocalAlpha)) float_t  LocalAlpha;

 __declspec(property(get=get_LocalPlayer)) ::Fusion::PlayerRef  LocalPlayer;

 __declspec(property(get=get_Mode)) ::Fusion::SimulationModes  Mode;

 __declspec(property(get=get_NetConfigPointer)) ::Fusion::Sockets::NetConfig*  NetConfigPointer;

 __declspec(property(get=get_ObjectCount)) int32_t  ObjectCount;

 __declspec(property(get=get_Objects)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>*  Objects;

 __declspec(property(get=get_ProjectConfig)) ::Fusion::NetworkProjectConfig*  ProjectConfig;

 __declspec(property(get=get_ReliableDataSendRate, put=set_ReliableDataSendRate)) int32_t  ReliableDataSendRate;

 __declspec(property(get=get_RemoteAlpha)) float_t  RemoteAlpha;

 __declspec(property(get=get_RemoteTick)) ::Fusion::Tick  RemoteTick;

 __declspec(property(get=get_RemoteTickPrevious)) ::Fusion::Tick  RemoteTickPrevious;

 __declspec(property(get=get_Replicator)) ::Fusion::Simulation_StateReplicator*  Replicator;

/// @brief Field Runner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Runner, put=__cordl_internal_set_Runner)) ::UnityW<::Fusion::NetworkRunner>  Runner;

 __declspec(property(get=get_RuntimeConfig)) ::Fusion::SimulationRuntimeConfig  RuntimeConfig;

 __declspec(property(get=get_RuntimeConfigPtr)) ::Fusion::SimulationRuntimeConfig*  RuntimeConfigPtr;

 __declspec(property(get=get_SendDelta)) double_t  SendDelta;

 __declspec(property(get=get_SendRate)) int32_t  SendRate;

 __declspec(property(get=get_Stage)) ::Fusion::SimulationStages  Stage;

 __declspec(property(get=get_Tick)) ::Fusion::Tick  Tick;

 __declspec(property(get=get_TickDeltaDouble)) double_t  TickDeltaDouble;

 __declspec(property(get=get_TickDeltaFloat)) float_t  TickDeltaFloat;

 __declspec(property(get=get_TickPrevious)) ::Fusion::Tick  TickPrevious;

 __declspec(property(get=get_TickRate)) int32_t  TickRate;

 __declspec(property(get=get_TickStride)) int32_t  TickStride;

 __declspec(property(get=get_Time)) double_t  Time;

 __declspec(property(get=get_Topology)) ::Fusion::Topologies  Topology;

/// @brief Field _allocator, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__allocator, put=__cordl_internal_set__allocator)) ::Fusion::Allocator*  _allocator;

/// @brief Field _allocatorObjects, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__allocatorObjects, put=__cordl_internal_set__allocatorObjects)) ::Fusion::Allocator*  _allocatorObjects;

/// @brief Field _aoiCells, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__aoiCells, put=__cordl_internal_set__aoiCells)) ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Simulation_AreaOfInterestCell*>*  _aoiCells;

/// @brief Field _aoiCellsPool, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__aoiCellsPool, put=__cordl_internal_set__aoiCellsPool)) ::System::Collections::Generic::Stack_1<::Fusion::Simulation_AreaOfInterestCell*>*  _aoiCellsPool;

/// @brief Field _aoiConnections, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__aoiConnections, put=__cordl_internal_set__aoiConnections)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::HashSet_1<int32_t>*>*  _aoiConnections;

/// @brief Field _callbacks, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__callbacks, put=__cordl_internal_set__callbacks)) ::Fusion::Simulation_ICallbacks*  _callbacks;

/// @brief Field _config, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::Fusion::SimulationConfig*  _config;

/// @brief Field _connections, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__connections, put=__cordl_internal_set__connections)) ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::SimulationConnection*>*  _connections;

/// @brief Field _fusionStatsManager, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__fusionStatsManager, put=__cordl_internal_set__fusionStatsManager)) ::Fusion::Statistics::FusionStatisticsManager*  _fusionStatsManager;

/// @brief Field _globalInterestObjects, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__globalInterestObjects, put=__cordl_internal_set__globalInterestObjects)) ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  _globalInterestObjects;

/// @brief Field _idCounter, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__idCounter, put=__cordl_internal_set__idCounter)) uint32_t  _idCounter;

/// @brief Field _inputCollection, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputCollection, put=__cordl_internal_set__inputCollection)) ::Fusion::SimulationInputCollection*  _inputCollection;

/// @brief Field _inputPool, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputPool, put=__cordl_internal_set__inputPool)) ::Fusion::SimulationInput_Pool*  _inputPool;

/// @brief Field _inputRoot, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputRoot, put=__cordl_internal_set__inputRoot)) ::Fusion::SimulationInput*  _inputRoot;

/// @brief Field _interpFrom, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__interpFrom, put=__cordl_internal_set__interpFrom)) ::Fusion::Tick  _interpFrom;

/// @brief Field _interpFromPrev, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__interpFromPrev, put=__cordl_internal_set__interpFromPrev)) ::Fusion::Tick  _interpFromPrev;

/// @brief Field _interpTo, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__interpTo, put=__cordl_internal_set__interpTo)) ::Fusion::Tick  _interpTo;

/// @brief Field _interpToPrev, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__interpToPrev, put=__cordl_internal_set__interpToPrev)) ::Fusion::Tick  _interpToPrev;

/// @brief Field _interpolateSequence, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__interpolateSequence, put=__cordl_internal_set__interpolateSequence)) uint64_t  _interpolateSequence;

/// @brief Field _invokeJoinedLeaveQueue, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__invokeJoinedLeaveQueue, put=__cordl_internal_set__invokeJoinedLeaveQueue)) ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef,bool>>*  _invokeJoinedLeaveQueue;

/// @brief Field _isFirstTick, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFirstTick, put=__cordl_internal_set__isFirstTick)) bool  _isFirstTick;

/// @brief Field _isInTick, offset 0xdb, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInTick, put=__cordl_internal_set__isInTick)) bool  _isInTick;

/// @brief Field _isInitialLocalTick, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialLocalTick, put=__cordl_internal_set__isInitialLocalTick)) bool  _isInitialLocalTick;

/// @brief Field _isLastTick, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLastTick, put=__cordl_internal_set__isLastTick)) bool  _isLastTick;

/// @brief Field _isPaused, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get__isPaused, put=__cordl_internal_set__isPaused)) ::System::Nullable_1<bool>  _isPaused;

/// @brief Field _isResimulation, offset 0xda, size 0x1 
 __declspec(property(get=__cordl_internal_get__isResimulation, put=__cordl_internal_set__isResimulation)) bool  _isResimulation;

/// @brief Field _isResume, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isResume, put=__cordl_internal_set__isResume)) bool  _isResume;

/// @brief Field _isShutdown, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isShutdown, put=__cordl_internal_set__isShutdown)) bool  _isShutdown;

/// @brief Field _isWaitingForShutdown, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__isWaitingForShutdown, put=__cordl_internal_set__isWaitingForShutdown)) bool  _isWaitingForShutdown;

/// @brief Field _localAlpha, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__localAlpha, put=__cordl_internal_set__localAlpha)) float_t  _localAlpha;

/// @brief Field _localAlphaPrev, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__localAlphaPrev, put=__cordl_internal_set__localAlphaPrev)) float_t  _localAlphaPrev;

/// @brief Field _metaLookup, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__metaLookup, put=__cordl_internal_set__metaLookup)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>*  _metaLookup;

/// @brief Field _metaMigration, offset 0x1a0, size 0x18 
 __declspec(property(get=__cordl_internal_get__metaMigration, put=__cordl_internal_set__metaMigration)) ::GlobalNamespace::NetworkObjectMeta_ListMigration  _metaMigration;

/// @brief Field _metaMigrationRemoved, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__metaMigrationRemoved, put=__cordl_internal_set__metaMigrationRemoved)) ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  _metaMigrationRemoved;

/// @brief Field _metaSceneLookup, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__metaSceneLookup, put=__cordl_internal_set__metaSceneLookup)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::Fusion::NetworkObjectMeta*>*  _metaSceneLookup;

/// @brief Field _mode, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Fusion::SimulationModes  _mode;

/// @brief Field _netPeer, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__netPeer, put=__cordl_internal_set__netPeer)) ::Fusion::Sockets::NetPeer*  _netPeer;

/// @brief Field _netPeerGroup, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__netPeerGroup, put=__cordl_internal_set__netPeerGroup)) ::Fusion::Sockets::NetPeerGroup*  _netPeerGroup;

/// @brief Field _netPeerRng, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__netPeerRng, put=__cordl_internal_set__netPeerRng)) ::System::Random*  _netPeerRng;

/// @brief Field _netSocket, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__netSocket, put=__cordl_internal_set__netSocket)) ::Fusion::Sockets::INetSocket*  _netSocket;

/// @brief Field _playerDataLookup, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerDataLookup, put=__cordl_internal_set__playerDataLookup)) ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*  _playerDataLookup;

/// @brief Field _playerLeftTempObjectCache, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerLeftTempObjectCache, put=__cordl_internal_set__playerLeftTempObjectCache)) ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*  _playerLeftTempObjectCache;

/// @brief Field _players, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__players, put=__cordl_internal_set__players)) ::System::Collections::Generic::HashSet_1<::Fusion::PlayerRef>*  _players;

/// @brief Field _playersConnections, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__playersConnections, put=__cordl_internal_set__playersConnections)) ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationConnection*>*  _playersConnections;

/// @brief Field _projectConfig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__projectConfig, put=__cordl_internal_set__projectConfig)) ::Fusion::NetworkProjectConfig*  _projectConfig;

/// @brief Field _recvContext, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__recvContext, put=__cordl_internal_set__recvContext)) ::Fusion::Simulation_RecvContext*  _recvContext;

/// @brief Field _reliableSend, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__reliableSend, put=__cordl_internal_set__reliableSend)) int32_t  _reliableSend;

/// @brief Field _remoteAlpha, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__remoteAlpha, put=__cordl_internal_set__remoteAlpha)) float_t  _remoteAlpha;

/// @brief Field _remoteAlphaPrev, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__remoteAlphaPrev, put=__cordl_internal_set__remoteAlphaPrev)) float_t  _remoteAlphaPrev;

/// @brief Field _sendContext, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__sendContext, put=__cordl_internal_set__sendContext)) ::Fusion::Simulation_SendContext*  _sendContext;

/// @brief Field _sendTick, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__sendTick, put=__cordl_internal_set__sendTick)) ::Fusion::Tick  _sendTick;

/// @brief Field _snapshotsPool, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapshotsPool, put=__cordl_internal_set__snapshotsPool)) ::System::Collections::Generic::Stack_1<::Fusion::NetworkObjectHeaderSnapshot*>*  _snapshotsPool;

/// @brief Field _stage, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__stage, put=__cordl_internal_set__stage)) ::Fusion::SimulationStages  _stage;

/// @brief Field _stateReplicator, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateReplicator, put=__cordl_internal_set__stateReplicator)) ::Fusion::Simulation_StateReplicator*  _stateReplicator;

/// @brief Field _structs, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__structs, put=__cordl_internal_set__structs)) ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  _structs;

/// @brief Field _structsVersion, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get__structsVersion, put=__cordl_internal_set__structsVersion)) int32_t  _structsVersion;

/// @brief Field _tick, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__tick, put=__cordl_internal_set__tick)) ::Fusion::Tick  _tick;

/// @brief Field _tickUpdateTimes, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__tickUpdateTimes, put=__cordl_internal_set__tickUpdateTimes)) ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*  _tickUpdateTimes;

/// @brief Field _time, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__time, put=__cordl_internal_set__time)) ::Fusion::ITimeProvider*  _time;

/// @brief Field _uniqueIdPlayerRefMapping, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__uniqueIdPlayerRefMapping, put=__cordl_internal_set__uniqueIdPlayerRefMapping)) ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::Simulation_PlayerRefMapping>*  _uniqueIdPlayerRefMapping;

/// @brief Field _updateTime, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__updateTime, put=__cordl_internal_set__updateTime)) double_t  _updateTime;

/// @brief Convert operator to "::Fusion::ILogSource"
constexpr operator  ::Fusion::ILogSource*() noexcept;

/// @brief Convert operator to "::Fusion::Sockets::INetPeerGroupCallbacks"
constexpr operator  ::Fusion::Sockets::INetPeerGroupCallbacks*() noexcept;

/// @brief Method AOI_GetCell, addr 0x5fe21c8, size 0x1e8, virtual false, abstract: false, final false
inline ::Fusion::Simulation_AreaOfInterestCell* AOI_GetCell(int32_t  cellKey, bool  create) ;

/// @brief Method AOI_Query, addr 0x5fe31fc, size 0x2c8, virtual false, abstract: false, final false
inline bool AOI_Query(::Fusion::SimulationConnection*  sc, ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*  result, bool  clearResult) ;

/// @brief Method AOI_ReleaseCell, addr 0x5fe2658, size 0xdc, virtual false, abstract: false, final false
inline void AOI_ReleaseCell(::Fusion::Simulation_AreaOfInterestCell*  cell) ;

/// @brief Method AOI_RemoveConnection, addr 0x5fe2734, size 0x250, virtual false, abstract: false, final false
inline void AOI_RemoveConnection(::Fusion::SimulationConnection*  sc) ;

/// @brief Method AOI_RemoveFromAreaOfInterest, addr 0x5fe34c4, size 0x13c, virtual false, abstract: false, final false
inline void AOI_RemoveFromAreaOfInterest(::Fusion::NetworkObjectMeta*  meta, bool  invokeExit) ;

/// @brief Method AOI_UpdateAreaOfInterest, addr 0x5fe3688, size 0x270, virtual false, abstract: false, final false
inline void AOI_UpdateAreaOfInterest(::Fusion::NetworkObjectMeta*  meta, int32_t  newCellKey) ;

/// @brief Method AOI_UpdateAreaOfInterest, addr 0x5fe2984, size 0x54c, virtual false, abstract: false, final false
inline void AOI_UpdateAreaOfInterest(::Fusion::SimulationConnection*  sc) ;

/// @brief Method AddToGlobalObjectInterest, addr 0x5fed9e0, size 0x1e0, virtual false, abstract: false, final false
inline void AddToGlobalObjectInterest(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method AfterSimulation, addr 0x5fe9850, size 0x4, virtual true, abstract: false, final false
inline void AfterSimulation() ;

/// @brief Method AfterUpdate, addr 0x5fe63c4, size 0x4, virtual true, abstract: false, final false
inline void AfterUpdate() ;

/// @brief Method AllocateObject, addr 0x5ff0864, size 0x260, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectMeta* AllocateObject(/* [IsReadOnly] */ ::by_ref<::Fusion::NetworkObjectHeader>  header) ;

/// @brief Method AllocateObject, addr 0x5ff07e4, size 0x80, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectMeta* AllocateObject(::Fusion::NetworkId  id, int32_t  wordCount, ::Fusion::NetworkObjectTypeId  type, int32_t  behaviourCount, ::Fusion::NetworkId  nestingRoot, ::Fusion::NetworkObjectNestingKey  nestingKey, ::Fusion::NetworkObjectHeaderFlags  flags) ;

/// @brief Method AllocateStruct, addr 0x5ff063c, size 0x1a8, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectMeta* AllocateStruct(::Fusion::NetworkId  id, int32_t  words, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  objectTypeId) ;

/// @brief Method AllocateStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* AllocateStruct(::Fusion::NetworkId  id, int32_t  extraWords, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  objectTypeId) ;

/// @brief Method BeforeFirstTick, addr 0x5fe63e0, size 0x4, virtual true, abstract: false, final false
inline void BeforeFirstTick() ;

/// @brief Method BeforeSimulation, addr 0x5fe63d8, size 0x8, virtual true, abstract: false, final false
inline int32_t BeforeSimulation() ;

/// @brief Method BeforeUpdate, addr 0x5fe984c, size 0x4, virtual true, abstract: false, final false
inline void BeforeUpdate() ;

/// @brief Method CalculateForwardTicks, addr 0x5fe9e34, size 0x20c, virtual false, abstract: false, final false
inline int32_t CalculateForwardTicks() ;

/// @brief Method CalculateUpdateTime, addr 0x5fe55d0, size 0x114, virtual false, abstract: false, final false
inline void CalculateUpdateTime() ;

/// @brief Method Connection2Player, addr 0x5fe5024, size 0xf0, virtual false, abstract: false, final false
inline ::Fusion::PlayerRef Connection2Player(::Fusion::SimulationConnection*  c) ;

/// @brief Method Connection2Player, addr 0x5fe5114, size 0x74, virtual true, abstract: false, final false
inline ::Fusion::PlayerRef Connection2Player(::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method ConsumeAndWriteMessagesIntoBuffer, addr 0x5feb53c, size 0x634, virtual false, abstract: false, final false
inline void ConsumeAndWriteMessagesIntoBuffer(::by_ref<::Fusion::SimulationMessageList>  inList, ::Fusion::Sockets::NetBitBuffer*  buffer, int32_t  bitCapacity, ::by_ref<::Fusion::SimulationMessageList>  outList, bool  allowFirstMessageOverflow) ;

/// @brief Method DeletePlayerSimulationDataOnDisconnect, addr 0x5fe82a0, size 0xc8, virtual false, abstract: false, final false
inline void DeletePlayerSimulationDataOnDisconnect(::Fusion::PlayerRef  player) ;

/// @brief Method DeliverMessages, addr 0x5febb70, size 0xd58, virtual false, abstract: false, final false
inline void DeliverMessages(int32_t  tick) ;

/// @brief Method Destroy, addr 0x5fe6a14, size 0x488, virtual false, abstract: false, final false
inline void Destroy(::Fusion::NetworkId  id, ::Fusion::NetworkObjectDestroyFlags  flags, ::Fusion::PlayerRef  destroyingPlayer) ;

/// @brief Method Dispose, addr 0x5fe68e8, size 0xa8, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method DumpObject, addr 0x5fee1ac, size 0x84, virtual false, abstract: false, final false
inline ::StringW DumpObject(::Fusion::NetworkId  id) ;

/// @brief Method DumpObject, addr 0x5fee230, size 0x74, virtual false, abstract: false, final false
inline ::StringW DumpObject(::Fusion::NetworkObjectMeta*  meta) ;

/// [Conditional("DEBUG")]
/// @brief Method DumpObject, addr 0x5fedf28, size 0xa4, virtual false, abstract: false, final false
inline void DumpObject(::Fusion::NetworkId  id, ::System::Text::StringBuilder*  sb) ;

/// [Conditional("DEBUG")]
/// @brief Method DumpObject, addr 0x5fedfcc, size 0x1e0, virtual false, abstract: false, final false
inline void DumpObject(::Fusion::NetworkObjectMeta*  meta, ::System::Text::StringBuilder*  sb) ;

/// @brief Method EnterAreaOfInterest, addr 0x5fe3034, size 0x1c8, virtual false, abstract: false, final false
inline void EnterAreaOfInterest(::Fusion::SimulationConnection*  connection, ::Fusion::NetworkId  id) ;

/// @brief Method EnterAreaOfInterest, addr 0x5fe38f8, size 0x88, virtual false, abstract: false, final false
inline void EnterAreaOfInterest(int32_t  connection, ::Fusion::NetworkId  id) ;

/// @brief Method ExitAreaOfInterest, addr 0x5fe2ed0, size 0x164, virtual false, abstract: false, final false
inline void ExitAreaOfInterest(::Fusion::SimulationConnection*  connection, ::Fusion::NetworkId  id) ;

/// @brief Method ExitAreaOfInterest, addr 0x5fe3600, size 0x88, virtual false, abstract: false, final false
inline void ExitAreaOfInterest(int32_t  connection, ::Fusion::NetworkId  id) ;

/// @brief Method ForwardMessage, addr 0x5ff20d8, size 0x75c, virtual false, abstract: false, final false
inline bool ForwardMessage(::Fusion::SimulationMessage*  message, ::Fusion::PlayerRef  target, bool  required) ;

/// @brief Method FreeMessages, addr 0x5feccb0, size 0x5c, virtual false, abstract: false, final false
inline void FreeMessages(::by_ref<::Fusion::SimulationMessageList>  list) ;

/// @brief Method FreeObject, addr 0x5fe6e9c, size 0x4e8, virtual false, abstract: false, final false
inline void FreeObject(::Fusion::NetworkId  id) ;

/// @brief Method Fusion.ILogSource.GetUnityObject, addr 0x5fedf20, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> Fusion_ILogSource_GetUnityObject() ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnConnected, addr 0x5fee7a8, size 0x478, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnConnected(::Fusion::Sockets::NetConnection*  connection) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnConnectionAttempt, addr 0x5fee64c, size 0x158, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionAttempt(::Fusion::Sockets::NetConnection*  connection, int32_t  attempt, int32_t  totalConnectionAttempts) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnConnectionFailed, addr 0x5fef57c, size 0x1f8, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionFailed(::Fusion::Sockets::NetAddress  address, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnConnectionRequest, addr 0x5fef404, size 0x178, virtual true, abstract: false, final true
inline ::Fusion::Sockets::OnConnectionRequestReply Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionRequest(::Fusion::Sockets::NetAddress  remoteAddres, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueid) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnDisconnected, addr 0x5feec20, size 0x3d4, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnDisconnected(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyData, addr 0x5fef7b8, size 0x1ec, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyData(::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyDelivered, addr 0x5fefe5c, size 0xec, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyDelivered(::Fusion::Sockets::NetConnection*  connection, ::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyDispose, addr 0x5fefc90, size 0xe0, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyDispose(::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyLost, addr 0x5fefd70, size 0xec, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyLost(::Fusion::Sockets::NetConnection*  connection, ::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnReliableData, addr 0x5feeff4, size 0x410, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnReliableData(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::ReliableId  id, uint8_t*  data) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnUnconnectedData, addr 0x5fee7a4, size 0x4, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnUnconnectedData(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method Fusion.Sockets.INetPeerGroupCallbacks.OnUnreliableData, addr 0x5fef774, size 0x44, virtual true, abstract: false, final true
inline void Fusion_Sockets_INetPeerGroupCallbacks_OnUnreliableData(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method GetAreaOfInterestGizmoData, addr 0x5fe1b58, size 0x318, virtual false, abstract: false, final false
inline void GetAreaOfInterestGizmoData(/* [TupleElementNames(new[] { "center", "size", "playerCount", "objectCount" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,int32_t,int32_t>>*  result) ;

/// @brief Method GetConnectionIndexForPlayer, addr 0x5fed87c, size 0xb4, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> GetConnectionIndexForPlayer(::Fusion::PlayerRef  player) ;

/// @brief Method GetGeneralAllocatorFreeSegmentsInBytes, addr 0x5ff0098, size 0x18, virtual false, abstract: false, final false
inline int32_t GetGeneralAllocatorFreeSegmentsInBytes() ;

/// @brief Method GetGeneralAllocatorUsedSegmentsInBytes, addr 0x5ff0068, size 0x18, virtual false, abstract: false, final false
inline int32_t GetGeneralAllocatorUsedSegmentsInBytes() ;

/// @brief Method GetInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::SimulationInput* GetInput(::Fusion::Tick  tick, ::Fusion::PlayerRef  player) ;

/// @brief Method GetInputForPlayer, addr 0x5fe8284, size 0x1c, virtual false, abstract: false, final false
inline ::Fusion::SimulationInput* GetInputForPlayer(::Fusion::PlayerRef  player) ;

/// @brief Method GetLatestSnapshot, addr 0x5ff04e8, size 0x34, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshotRef GetLatestSnapshot(::Fusion::NetworkId  id) ;

/// @brief Method GetLocalAuthorityMask, addr 0x5ff0d2c, size 0x11c, virtual false, abstract: false, final false
inline int32_t GetLocalAuthorityMask(/* [RequiresLocation] */ ::by_ref<::Fusion::NetworkObjectHeader>  obj) ;

/// @brief Method GetMemorySnapshot, addr 0x5ff00b0, size 0x2c, virtual false, abstract: false, final false
inline void GetMemorySnapshot(::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator  targetAllocator, ::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>  snapshot) ;

/// @brief Method GetMessageInternalData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::by_ref<T> GetMessageInternalData(::Fusion::SimulationMessage*  message) ;

/// @brief Method GetMessageInternalType, addr 0x5fec8c8, size 0x160, virtual false, abstract: false, final false
static inline ::by_ref<::Fusion::SimulationMessageInternalTypes> GetMessageInternalType(::Fusion::SimulationMessage*  message) ;

/// @brief Method GetMessageTargetObjectIdForVerification, addr 0x5ff1c50, size 0x14c, virtual false, abstract: false, final false
inline ::Fusion::NetworkId GetMessageTargetObjectIdForVerification(::Fusion::SimulationMessage*  message) ;

/// @brief Method GetMeta, addr 0x5ff0444, size 0xa4, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectMeta* GetMeta(::Fusion::NetworkId  id) ;

/// @brief Method GetNextId, addr 0x5fe8850, size 0x114, virtual false, abstract: false, final false
inline ::Fusion::NetworkId GetNextId() ;

/// @brief Method GetObjectsAllocatorFreeSegmentsInBytes, addr 0x5ff0080, size 0x18, virtual false, abstract: false, final false
inline int32_t GetObjectsAllocatorFreeSegmentsInBytes() ;

/// @brief Method GetObjectsAllocatorUsedSegmentsInBytes, addr 0x5ff0050, size 0x18, virtual false, abstract: false, final false
inline int32_t GetObjectsAllocatorUsedSegmentsInBytes() ;

/// @brief Method GetObjectsAndPlayersInAreaOfInterestCell, addr 0x5fe23b0, size 0x2a8, virtual false, abstract: false, final false
inline void GetObjectsAndPlayersInAreaOfInterestCell(int32_t  cellKey, ::System::Collections::Generic::List_1<::Fusion::PlayerRef>*  players, ::System::Collections::Generic::List_1<::Fusion::NetworkId>*  objects) ;

/// @brief Method GetObjectsInAreaOfInterestForPlayer, addr 0x5fe1e70, size 0x358, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Fusion::NetworkId>* GetObjectsInAreaOfInterestForPlayer(::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerActorId, addr 0x5fe8f6c, size 0x80, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> GetPlayerActorId(::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerAddress, addr 0x5fe80e8, size 0xfc, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetAddress GetPlayerAddress(::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerConnectionToken, addr 0x5fe7fd4, size 0x114, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetPlayerConnectionToken(::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerObjectId, addr 0x5fe8fec, size 0x94, virtual false, abstract: false, final false
inline ::Fusion::NetworkId GetPlayerObjectId(::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerRefMapping, addr 0x5fe53a8, size 0x174, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::Simulation_PlayerRefMapping> GetPlayerRefMapping(::ArrayW<uint8_t>  id) ;

/// @brief Method GetPlayerRefMapping, addr 0x5fe551c, size 0xb4, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::Simulation_PlayerRefMapping> GetPlayerRefMapping(uint8_t*  id) ;

/// @brief Method GetPlayerRtt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline double_t GetPlayerRtt(::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerSimulationData, addr 0x5fe8368, size 0x4e8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Simulation_PlayerSimulationData* GetPlayerSimulationData(::Fusion::PlayerRef  player, bool  create) ;

/// @brief Method GetPlayerUniqueId, addr 0x5fe81e4, size 0xa0, virtual false, abstract: false, final false
inline int64_t GetPlayerUniqueId(::Fusion::PlayerRef  player) ;

/// @brief Method GetRpcSourceAuthorityMask, addr 0x5ff0cc4, size 0x68, virtual false, abstract: false, final false
inline int32_t GetRpcSourceAuthorityMask(::Fusion::NetworkObjectMeta*  meta, ::Fusion::PlayerRef  player) ;

/// @brief Method GetRpcTargetStatus, addr 0x5ff0e48, size 0x27c, virtual false, abstract: false, final false
inline ::Fusion::RpcTargetStatus GetRpcTargetStatus(::Fusion::PlayerRef  target) ;

/// @brief Method GetSimulationConnection, addr 0x5fed930, size 0xb0, virtual false, abstract: false, final false
inline ::Fusion::SimulationConnection* GetSimulationConnection(::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method GetSimulationConnectionByIndex, addr 0x5fed724, size 0x78, virtual false, abstract: false, final false
inline ::Fusion::SimulationConnection* GetSimulationConnectionByIndex(int32_t  index) ;

/// @brief Method GetSimulationConnectionForPlayer, addr 0x5fed79c, size 0x78, virtual false, abstract: false, final false
inline ::Fusion::SimulationConnection* GetSimulationConnectionForPlayer(::Fusion::PlayerRef  player) ;

/// @brief Method GetSnapshot, addr 0x5feffa8, size 0xa8, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshot* GetSnapshot() ;

/// @brief Method GetStateAuthority, addr 0x5fe7e98, size 0x13c, virtual false, abstract: false, final false
inline ::Fusion::PlayerRef GetStateAuthority(::Fusion::PlayerRef  objectStateAuthority) ;

/// @brief Method HasAnyActiveConnections, addr 0x5fe91dc, size 0x58, virtual false, abstract: false, final false
inline bool HasAnyActiveConnections() ;

/// @brief Method HasObject, addr 0x5ff0210, size 0xbc, virtual false, abstract: false, final false
inline bool HasObject(::Fusion::NetworkId  id) ;

/// @brief Method HostMigrationAfterAllocateObject, addr 0x5ff0ac4, size 0xd0, virtual false, abstract: false, final false
inline void HostMigrationAfterAllocateObject(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method HostMigrationAfterFreeObject, addr 0x5ff0b94, size 0x130, virtual false, abstract: false, final false
inline void HostMigrationAfterFreeObject(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method HostMigrationDispose, addr 0x5fe6990, size 0x84, virtual false, abstract: false, final false
inline void HostMigrationDispose() ;

/// @brief Method InterpolateSequenceIncrement, addr 0x5fe3b4c, size 0x10, virtual false, abstract: false, final false
inline void InterpolateSequenceIncrement() ;

/// @brief Method InvokeOnAfterAllTicks, addr 0x5fe96b4, size 0x198, virtual false, abstract: false, final false
inline void InvokeOnAfterAllTicks(bool  resimulation, int32_t  ticks) ;

/// @brief Method InvokeOnAfterSimulation, addr 0x5fe93b0, size 0x16c, virtual false, abstract: false, final false
inline void InvokeOnAfterSimulation() ;

/// @brief Method InvokeOnBeforeAllTicks, addr 0x5fe951c, size 0x198, virtual false, abstract: false, final false
inline void InvokeOnBeforeAllTicks(bool  resimulation, int32_t  ticks) ;

/// @brief Method InvokeOnBeforeSimulation, addr 0x5fe9234, size 0x17c, virtual false, abstract: false, final false
inline void InvokeOnBeforeSimulation(int32_t  forwardTickCount) ;

/// @brief Method InvokePlayerJoinedLeft, addr 0x5fe8964, size 0x608, virtual false, abstract: false, final false
inline void InvokePlayerJoinedLeft() ;

/// @brief Method InvokeTick, addr 0x5fe5be0, size 0x7e4, virtual false, abstract: false, final false
inline void InvokeTick(::Fusion::SimulationStages  stage, bool  releaseAllInputs) ;

/// @brief Method IsHostPlayer, addr 0x5fe767c, size 0xd8, virtual false, abstract: false, final false
inline bool IsHostPlayer(::Fusion::PlayerRef  player) ;

/// @brief Method IsInputAuthority, addr 0x5fe7a50, size 0x180, virtual false, abstract: false, final false
inline bool IsInputAuthority(::Fusion::PlayerRef  inputAuthority, ::Fusion::PlayerRef  playerRef) ;

/// @brief Method IsInputAuthority, addr 0x5fe7bd0, size 0x20, virtual false, abstract: false, final false
inline bool IsInputAuthority(/* [NotNull] */ ::Fusion::NetworkObjectMeta*  meta, ::Fusion::PlayerRef  playerRef) ;

/// @brief Method IsInterestedIn, addr 0x5fe7808, size 0x248, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> IsInterestedIn(::Fusion::NetworkObjectMeta*  meta, ::Fusion::PlayerRef  player) ;

/// @brief Method IsLocalSimulationInputAuthority, addr 0x5fe7d6c, size 0xc0, virtual false, abstract: false, final false
inline bool IsLocalSimulationInputAuthority(/* [RequiresLocation] */ ::by_ref<::Fusion::NetworkObjectHeader>  obj) ;

/// @brief Method IsLocalSimulationStateAuthority, addr 0x5fe7e2c, size 0x6c, virtual false, abstract: false, final false
inline bool IsLocalSimulationStateAuthority(/* [RequiresLocation] */ ::by_ref<::Fusion::NetworkObjectHeader>  obj) ;

/// @brief Method IsSimulated, addr 0x5ff0188, size 0x88, virtual false, abstract: false, final false
inline bool IsSimulated(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method IsStateAuthority, addr 0x5fe7d4c, size 0x20, virtual false, abstract: false, final false
inline bool IsStateAuthority(/* [NotNull] */ ::Fusion::NetworkObjectMeta*  meta, ::Fusion::PlayerRef  playerRef) ;

/// @brief Method IsStateAuthority, addr 0x5fe7bf0, size 0x15c, virtual false, abstract: false, final false
inline bool IsStateAuthority(::Fusion::PlayerRef  stateSource, ::Fusion::PlayerRef  playerRef) ;

/// @brief Method LogAllObjectIds, addr 0x5ff02cc, size 0x178, virtual false, abstract: false, final false
inline void LogAllObjectIds() ;

/// @brief Method NetworkConnected, addr 0x5fe63c8, size 0x4, virtual true, abstract: false, final false
inline void NetworkConnected(::Fusion::Sockets::NetConnection*  connection) ;

/// @brief Method NetworkDisconnected, addr 0x5fe63cc, size 0x4, virtual true, abstract: false, final false
inline void NetworkDisconnected(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method NetworkGetBuffer, addr 0x5fee534, size 0x20, virtual false, abstract: false, final false
inline bool NetworkGetBuffer(::Fusion::Sockets::NetConnection*  connection, ::by_ref<::Fusion::Sockets::NetBitBuffer*>  buffer) ;

/// @brief Method NetworkInit, addr 0x5fe4ddc, size 0x248, virtual false, abstract: false, final false
inline void NetworkInit(::Fusion::Sockets::INetSocket*  socket, ::Fusion::Sockets::NetAddress  address) ;

/// @brief Method NetworkReceiveDone, addr 0x5fe63d0, size 0x4, virtual true, abstract: false, final false
inline void NetworkReceiveDone() ;

/// @brief Method NetworkRecv, addr 0x5fea78c, size 0xec, virtual false, abstract: false, final false
inline void NetworkRecv() ;

/// @brief Method NetworkSend, addr 0x5feab54, size 0x70, virtual false, abstract: false, final false
inline void NetworkSend() ;

/// @brief Method NetworkSendBuffer, addr 0x5fee554, size 0x90, virtual false, abstract: false, final false
inline bool NetworkSendBuffer(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetBitBuffer*  buffer, ::Fusion::SimulationPacketEnvelope*  envelope) ;

/// @brief Method NetworkSendPing, addr 0x5fee5e4, size 0x68, virtual false, abstract: false, final false
inline bool NetworkSendPing(::Fusion::Sockets::NetAddress  address, void*  data, int32_t  length) ;

/// @brief Method NetworkShutdown, addr 0x5fe6744, size 0x1a4, virtual false, abstract: false, final false
inline void NetworkShutdown() ;

static inline ::Fusion::Simulation* New_ctor(::Fusion::SimulationArgs  args) ;

/// @brief Method NoSimulation, addr 0x5fe63d4, size 0x4, virtual true, abstract: false, final false
inline void NoSimulation() ;

/// @brief Method NotifyWaitingForShutdown, addr 0x5fedf14, size 0xc, virtual false, abstract: false, final false
inline void NotifyWaitingForShutdown() ;

/// @brief Method OnEnvelopeDelivered, addr 0x5fefc4c, size 0x44, virtual false, abstract: false, final false
inline void OnEnvelopeDelivered(::Fusion::Sockets::NetConnection*  connection, ::Fusion::SimulationPacketEnvelope*  envelope) ;

/// @brief Method OnEnvelopeLost, addr 0x5fef9a4, size 0x2a8, virtual false, abstract: false, final false
inline void OnEnvelopeLost(::Fusion::Sockets::NetConnection*  connection, ::Fusion::SimulationPacketEnvelope*  envelope) ;

/// @brief Method OnMessageInternal, addr 0x5feca28, size 0xd0, virtual false, abstract: false, final false
inline void OnMessageInternal(::Fusion::SimulationMessage*  message) ;

/// @brief Method OnNetworkShutdown, addr 0x5fee530, size 0x4, virtual true, abstract: false, final false
inline void OnNetworkShutdown() ;

/// @brief Method Player2Connection, addr 0x5fe5188, size 0x88, virtual true, abstract: false, final false
inline int32_t Player2Connection(::Fusion::PlayerRef  player) ;

/// @brief Method PlayerAdd, addr 0x5fe7384, size 0x1c4, virtual false, abstract: false, final false
inline void PlayerAdd(::Fusion::PlayerRef  player, ::Fusion::SimulationConnection*  connection) ;

/// @brief Method PlayerRemove, addr 0x5fe7548, size 0x134, virtual false, abstract: false, final false
inline void PlayerRemove(::Fusion::PlayerRef  player) ;

/// @brief Method PlayerValid, addr 0x5fe66d0, size 0x58, virtual false, abstract: false, final false
inline bool PlayerValid(::Fusion::PlayerRef  player) ;

/// @brief Method PreparePackets, addr 0x5fea878, size 0x2dc, virtual false, abstract: false, final false
inline void PreparePackets() ;

/// @brief Method RecvMessages, addr 0x5fecee8, size 0x73c, virtual false, abstract: false, final false
inline void RecvMessages() ;

/// @brief Method RecvPacket, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RecvPacket() ;

/// @brief Method RegisterUniqueIdPlayerMapping, addr 0x5fe5210, size 0x198, virtual false, abstract: false, final false
inline void RegisterUniqueIdPlayerMapping(int32_t  actorid, ::ArrayW<uint8_t>  id, ::Fusion::PlayerRef  playerRef) ;

/// @brief Method RemoveFromGlobalObjectInterest, addr 0x5fedbc0, size 0x1d0, virtual false, abstract: false, final false
inline void RemoveFromGlobalObjectInterest(::Fusion::NetworkId  id) ;

/// @brief Method RequestStateAuthority, addr 0x5fe6470, size 0xbc, virtual false, abstract: false, final false
inline void RequestStateAuthority(::Fusion::NetworkId  id, bool  wants) ;

/// @brief Method ResolveMessageSourceAndTarget, addr 0x5fecd0c, size 0x1dc, virtual false, abstract: false, final false
inline void ResolveMessageSourceAndTarget(::Fusion::SimulationMessage*  msg, ::Fusion::PlayerRef  sourcePlayer) ;

/// @brief Method SendInternalSimulationMessage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SendInternalSimulationMessage(::Fusion::SimulationMessageInternalTypes  type, T  buffer, ::System::Nullable_1<::Fusion::PlayerRef>  target) ;

/// @brief Method SendMessage, addr 0x5ff10c4, size 0xb8c, virtual false, abstract: false, final false
inline ::Fusion::RpcSendMessageResult SendMessage(::by_ref<::Fusion::SimulationMessage*>  message) ;

/// @brief Method SendMessageInternal, addr 0x5ff1f28, size 0x1b0, virtual false, abstract: false, final false
inline void SendMessageInternal(::Fusion::SimulationMessage*  message, ::Fusion::Sockets::NetConnection*  netConnection) ;

/// @brief Method SendReliableData, addr 0x5fedd90, size 0x184, virtual false, abstract: false, final false
inline void SendReliableData(int32_t  connection, int32_t  target, ::Fusion::Sockets::ReliableKey  key, ::ArrayW<uint8_t>  data) ;

/// @brief Method SetPlayerAlwaysInterested, addr 0x5fe652c, size 0x1a4, virtual false, abstract: false, final false
inline void SetPlayerAlwaysInterested(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id, bool  alwaysInterested) ;

/// @brief Method SetPlayerObjectId, addr 0x5fe9080, size 0x15c, virtual false, abstract: false, final false
inline void SetPlayerObjectId(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id) ;

/// @brief Method ShutdownNativeSocket, addr 0x5fe6734, size 0x10, virtual false, abstract: false, final false
inline void ShutdownNativeSocket() ;

/// @brief Method SinglePlayerSetPaused, addr 0x5fe63e4, size 0x8c, virtual false, abstract: false, final false
inline void SinglePlayerSetPaused(bool  paused) ;

/// @brief Method SnapshotRelease, addr 0x5ff00dc, size 0x68, virtual false, abstract: false, final false
inline void SnapshotRelease(::Fusion::NetworkObjectHeaderSnapshot*  snapshot) ;

/// @brief Method SnapshotRelease, addr 0x5ff0144, size 0x44, virtual false, abstract: false, final false
inline void SnapshotRelease(::by_ref<::Fusion::NetworkObjectHeaderSnapshot*>  snapshot) ;

/// @brief Method StepSimulation, addr 0x5fe56e4, size 0x4fc, virtual false, abstract: false, final false
inline void StepSimulation(::Fusion::SimulationStages  stage, bool  lastTick, bool  firstTick, bool  freeInput) ;

/// @brief Method TempAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* TempAlloc() ;

/// @brief Method TempAlloc, addr 0x5fe6728, size 0xc, virtual false, abstract: false, final false
inline void* TempAlloc(int32_t  size) ;

/// @brief Method TempAllocArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* TempAllocArray(int32_t  length) ;

/// @brief Method TempDoubleArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* TempDoubleArray(::by_ref<T*>  oldArray, int32_t  oldLength) ;

/// @brief Method TempFree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void TempFree(::by_ref<T*>  ptr) ;

/// @brief Method TryGetHostPlayer, addr 0x5fe7754, size 0xb4, virtual false, abstract: false, final false
inline bool TryGetHostPlayer(::by_ref<::Fusion::PlayerRef>  player) ;

/// @brief Method TryGetInstance, addr 0x5ff051c, size 0x120, virtual false, abstract: false, final false
inline bool TryGetInstance(::Fusion::NetworkId  id, ::by_ref<::Fusion::NetworkObject*>  instance) ;

/// @brief Method TryGetMeta, addr 0x5fe3980, size 0xcc, virtual false, abstract: false, final false
inline bool TryGetMeta(::Fusion::NetworkId  id, ::by_ref<::Fusion::NetworkObjectMeta*>  meta) ;

/// @brief Method TryGetSceneInstance, addr 0x5ff2834, size 0x3cc, virtual false, abstract: false, final false
inline bool TryGetSceneInstance(::Fusion::NetworkObjectTypeId  sceneObjectTypeId, ::by_ref<::Fusion::NetworkObject*>  instance) ;

/// @brief Method TryGetSimulationConnectionForPlayer, addr 0x5fed814, size 0x68, virtual false, abstract: false, final false
inline bool TryGetSimulationConnectionForPlayer(::Fusion::PlayerRef  player, ::by_ref<::Fusion::SimulationConnection*>  sc) ;

/// @brief Method TryGetSimulationConnectionLogErrorIfFailed, addr 0x5fecaf8, size 0x1b8, virtual false, abstract: false, final false
inline bool TryGetSimulationConnectionLogErrorIfFailed(::Fusion::Sockets::NetConnection*  c, ::by_ref<::Fusion::SimulationConnection*>  result) ;

/// @brief Method TryGetStruct, addr 0x5fe3bdc, size 0xd4, virtual false, abstract: false, final false
inline bool TryGetStruct(::Fusion::NetworkId  id, ::by_ref<::Fusion::NetworkObjectMeta*>  meta) ;

/// @brief Method TryGetStructData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool TryGetStructData(::Fusion::NetworkId  id, ::by_ref<T*>  data) ;

/// @brief Method Update, addr 0x5fea040, size 0x74c, virtual false, abstract: false, final false
inline int32_t Update(double_t  dt) ;

/// @brief Method UpdateAreaOfInterest, addr 0x5feabc4, size 0x370, virtual false, abstract: false, final false
inline void UpdateAreaOfInterest() ;

/// @brief Method UpdateSimulationStateForMasterClientObjects, addr 0x5fe9854, size 0x5e0, virtual false, abstract: false, final false
inline void UpdateSimulationStateForMasterClientObjects(bool  isMasterClient) ;

/// @brief Method VerifyMessageTargetObject, addr 0x5ff1d9c, size 0x130, virtual false, abstract: false, final false
inline bool VerifyMessageTargetObject(::Fusion::Sockets::NetConnection*  netConnection, ::Fusion::NetworkId  id, ::by_ref<::GlobalNamespace::Simulation_TargetObjectVerificationResult>  result) ;

/// @brief Method WriteMessages, addr 0x5feb068, size 0x4d4, virtual false, abstract: false, final false
inline void WriteMessages() ;

/// @brief Method WritePackets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WritePackets() ;

/// [CompilerGenerated]
/// @brief Method <RecvMessages>g__CanAppendQueue|239_0, addr 0x5fed624, size 0x100, virtual false, abstract: false, final false
static inline bool _RecvMessages_g__CanAppendQueue_239_0(::Fusion::SimulationMessageList  list, ::Fusion::SimulationMessageEnvelope*  messageEnvelope, ::by_ref<::Fusion::SimulationMessageEnvelope*>  followingMessage) ;

/// [CompilerGenerated]
/// @brief Method <SendMessage>g__VerifyResultToSendMessageResult|328_0, addr 0x5ff1ecc, size 0x5c, virtual false, abstract: false, final false
static inline ::Fusion::RpcSendMessageResult _SendMessage_g__VerifyResultToSendMessageResult_328_0(::GlobalNamespace::Simulation_TargetObjectVerificationResult  status) ;

/// [CompilerGenerated]
/// @brief Method <UpdateAreaOfInterest>g__ResolveCellPosition|228_0, addr 0x5feaf34, size 0x134, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Vector3> _UpdateAreaOfInterest_g__ResolveCellPosition_228_0(::Fusion::NetworkObjectMeta*  m) ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get_Runner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get_Runner() ;

constexpr ::Fusion::Allocator* const& __cordl_internal_get__allocator() const;

constexpr ::Fusion::Allocator*& __cordl_internal_get__allocator() ;

constexpr ::Fusion::Allocator* const& __cordl_internal_get__allocatorObjects() const;

constexpr ::Fusion::Allocator*& __cordl_internal_get__allocatorObjects() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Simulation_AreaOfInterestCell*>* const& __cordl_internal_get__aoiCells() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Simulation_AreaOfInterestCell*>*& __cordl_internal_get__aoiCells() ;

constexpr ::System::Collections::Generic::Stack_1<::Fusion::Simulation_AreaOfInterestCell*>* const& __cordl_internal_get__aoiCellsPool() const;

constexpr ::System::Collections::Generic::Stack_1<::Fusion::Simulation_AreaOfInterestCell*>*& __cordl_internal_get__aoiCellsPool() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::HashSet_1<int32_t>*>* const& __cordl_internal_get__aoiConnections() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::HashSet_1<int32_t>*>*& __cordl_internal_get__aoiConnections() ;

constexpr ::Fusion::Simulation_ICallbacks* const& __cordl_internal_get__callbacks() const;

constexpr ::Fusion::Simulation_ICallbacks*& __cordl_internal_get__callbacks() ;

constexpr ::Fusion::SimulationConfig* const& __cordl_internal_get__config() const;

constexpr ::Fusion::SimulationConfig*& __cordl_internal_get__config() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::SimulationConnection*>* const& __cordl_internal_get__connections() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::SimulationConnection*>*& __cordl_internal_get__connections() ;

constexpr ::Fusion::Statistics::FusionStatisticsManager* const& __cordl_internal_get__fusionStatsManager() const;

constexpr ::Fusion::Statistics::FusionStatisticsManager*& __cordl_internal_get__fusionStatsManager() ;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>* const& __cordl_internal_get__globalInterestObjects() const;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*& __cordl_internal_get__globalInterestObjects() ;

constexpr uint32_t const& __cordl_internal_get__idCounter() const;

constexpr uint32_t& __cordl_internal_get__idCounter() ;

constexpr ::Fusion::SimulationInputCollection* const& __cordl_internal_get__inputCollection() const;

constexpr ::Fusion::SimulationInputCollection*& __cordl_internal_get__inputCollection() ;

constexpr ::Fusion::SimulationInput_Pool* const& __cordl_internal_get__inputPool() const;

constexpr ::Fusion::SimulationInput_Pool*& __cordl_internal_get__inputPool() ;

constexpr ::Fusion::SimulationInput* const& __cordl_internal_get__inputRoot() const;

constexpr ::Fusion::SimulationInput*& __cordl_internal_get__inputRoot() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__interpFrom() const;

constexpr ::Fusion::Tick& __cordl_internal_get__interpFrom() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__interpFromPrev() const;

constexpr ::Fusion::Tick& __cordl_internal_get__interpFromPrev() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__interpTo() const;

constexpr ::Fusion::Tick& __cordl_internal_get__interpTo() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__interpToPrev() const;

constexpr ::Fusion::Tick& __cordl_internal_get__interpToPrev() ;

constexpr uint64_t const& __cordl_internal_get__interpolateSequence() const;

constexpr uint64_t& __cordl_internal_get__interpolateSequence() ;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef,bool>>* const& __cordl_internal_get__invokeJoinedLeaveQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef,bool>>*& __cordl_internal_get__invokeJoinedLeaveQueue() ;

constexpr bool const& __cordl_internal_get__isFirstTick() const;

constexpr bool& __cordl_internal_get__isFirstTick() ;

constexpr bool const& __cordl_internal_get__isInTick() const;

constexpr bool& __cordl_internal_get__isInTick() ;

constexpr bool const& __cordl_internal_get__isInitialLocalTick() const;

constexpr bool& __cordl_internal_get__isInitialLocalTick() ;

constexpr bool const& __cordl_internal_get__isLastTick() const;

constexpr bool& __cordl_internal_get__isLastTick() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isPaused() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isPaused() ;

constexpr bool const& __cordl_internal_get__isResimulation() const;

constexpr bool& __cordl_internal_get__isResimulation() ;

constexpr bool const& __cordl_internal_get__isResume() const;

constexpr bool& __cordl_internal_get__isResume() ;

constexpr bool const& __cordl_internal_get__isShutdown() const;

constexpr bool& __cordl_internal_get__isShutdown() ;

constexpr bool const& __cordl_internal_get__isWaitingForShutdown() const;

constexpr bool& __cordl_internal_get__isWaitingForShutdown() ;

constexpr float_t const& __cordl_internal_get__localAlpha() const;

constexpr float_t& __cordl_internal_get__localAlpha() ;

constexpr float_t const& __cordl_internal_get__localAlphaPrev() const;

constexpr float_t& __cordl_internal_get__localAlphaPrev() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>* const& __cordl_internal_get__metaLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>*& __cordl_internal_get__metaLookup() ;

constexpr ::GlobalNamespace::NetworkObjectMeta_ListMigration const& __cordl_internal_get__metaMigration() const;

constexpr ::GlobalNamespace::NetworkObjectMeta_ListMigration& __cordl_internal_get__metaMigration() ;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>* const& __cordl_internal_get__metaMigrationRemoved() const;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*& __cordl_internal_get__metaMigrationRemoved() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::Fusion::NetworkObjectMeta*>* const& __cordl_internal_get__metaSceneLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::Fusion::NetworkObjectMeta*>*& __cordl_internal_get__metaSceneLookup() ;

constexpr ::Fusion::SimulationModes const& __cordl_internal_get__mode() const;

constexpr ::Fusion::SimulationModes& __cordl_internal_get__mode() ;

constexpr ::Fusion::Sockets::NetPeer* const& __cordl_internal_get__netPeer() const;

constexpr ::Fusion::Sockets::NetPeer*& __cordl_internal_get__netPeer() ;

constexpr ::Fusion::Sockets::NetPeerGroup* const& __cordl_internal_get__netPeerGroup() const;

constexpr ::Fusion::Sockets::NetPeerGroup*& __cordl_internal_get__netPeerGroup() ;

constexpr ::System::Random* const& __cordl_internal_get__netPeerRng() const;

constexpr ::System::Random*& __cordl_internal_get__netPeerRng() ;

constexpr ::Fusion::Sockets::INetSocket* const& __cordl_internal_get__netSocket() const;

constexpr ::Fusion::Sockets::INetSocket*& __cordl_internal_get__netSocket() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>* const& __cordl_internal_get__playerDataLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*& __cordl_internal_get__playerDataLookup() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>* const& __cordl_internal_get__playerLeftTempObjectCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*& __cordl_internal_get__playerLeftTempObjectCache() ;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::PlayerRef>* const& __cordl_internal_get__players() const;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::PlayerRef>*& __cordl_internal_get__players() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationConnection*>* const& __cordl_internal_get__playersConnections() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationConnection*>*& __cordl_internal_get__playersConnections() ;

constexpr ::Fusion::NetworkProjectConfig* const& __cordl_internal_get__projectConfig() const;

constexpr ::Fusion::NetworkProjectConfig*& __cordl_internal_get__projectConfig() ;

constexpr ::Fusion::Simulation_RecvContext* const& __cordl_internal_get__recvContext() const;

constexpr ::Fusion::Simulation_RecvContext*& __cordl_internal_get__recvContext() ;

constexpr int32_t const& __cordl_internal_get__reliableSend() const;

constexpr int32_t& __cordl_internal_get__reliableSend() ;

constexpr float_t const& __cordl_internal_get__remoteAlpha() const;

constexpr float_t& __cordl_internal_get__remoteAlpha() ;

constexpr float_t const& __cordl_internal_get__remoteAlphaPrev() const;

constexpr float_t& __cordl_internal_get__remoteAlphaPrev() ;

constexpr ::Fusion::Simulation_SendContext* const& __cordl_internal_get__sendContext() const;

constexpr ::Fusion::Simulation_SendContext*& __cordl_internal_get__sendContext() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__sendTick() const;

constexpr ::Fusion::Tick& __cordl_internal_get__sendTick() ;

constexpr ::System::Collections::Generic::Stack_1<::Fusion::NetworkObjectHeaderSnapshot*>* const& __cordl_internal_get__snapshotsPool() const;

constexpr ::System::Collections::Generic::Stack_1<::Fusion::NetworkObjectHeaderSnapshot*>*& __cordl_internal_get__snapshotsPool() ;

constexpr ::Fusion::SimulationStages const& __cordl_internal_get__stage() const;

constexpr ::Fusion::SimulationStages& __cordl_internal_get__stage() ;

constexpr ::Fusion::Simulation_StateReplicator* const& __cordl_internal_get__stateReplicator() const;

constexpr ::Fusion::Simulation_StateReplicator*& __cordl_internal_get__stateReplicator() ;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>* const& __cordl_internal_get__structs() const;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*& __cordl_internal_get__structs() ;

constexpr int32_t const& __cordl_internal_get__structsVersion() const;

constexpr int32_t& __cordl_internal_get__structsVersion() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__tick() const;

constexpr ::Fusion::Tick& __cordl_internal_get__tick() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>* const& __cordl_internal_get__tickUpdateTimes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*& __cordl_internal_get__tickUpdateTimes() ;

constexpr ::Fusion::ITimeProvider* const& __cordl_internal_get__time() const;

constexpr ::Fusion::ITimeProvider*& __cordl_internal_get__time() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::Simulation_PlayerRefMapping>* const& __cordl_internal_get__uniqueIdPlayerRefMapping() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::Simulation_PlayerRefMapping>*& __cordl_internal_get__uniqueIdPlayerRefMapping() ;

constexpr double_t const& __cordl_internal_get__updateTime() const;

constexpr double_t& __cordl_internal_get__updateTime() ;

constexpr void __cordl_internal_set_Runner(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set__allocator(::Fusion::Allocator*  value) ;

constexpr void __cordl_internal_set__allocatorObjects(::Fusion::Allocator*  value) ;

constexpr void __cordl_internal_set__aoiCells(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Simulation_AreaOfInterestCell*>*  value) ;

constexpr void __cordl_internal_set__aoiCellsPool(::System::Collections::Generic::Stack_1<::Fusion::Simulation_AreaOfInterestCell*>*  value) ;

constexpr void __cordl_internal_set__aoiConnections(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::HashSet_1<int32_t>*>*  value) ;

constexpr void __cordl_internal_set__callbacks(::Fusion::Simulation_ICallbacks*  value) ;

constexpr void __cordl_internal_set__config(::Fusion::SimulationConfig*  value) ;

constexpr void __cordl_internal_set__connections(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::SimulationConnection*>*  value) ;

constexpr void __cordl_internal_set__fusionStatsManager(::Fusion::Statistics::FusionStatisticsManager*  value) ;

constexpr void __cordl_internal_set__globalInterestObjects(::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__idCounter(uint32_t  value) ;

constexpr void __cordl_internal_set__inputCollection(::Fusion::SimulationInputCollection*  value) ;

constexpr void __cordl_internal_set__inputPool(::Fusion::SimulationInput_Pool*  value) ;

constexpr void __cordl_internal_set__inputRoot(::Fusion::SimulationInput*  value) ;

constexpr void __cordl_internal_set__interpFrom(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__interpFromPrev(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__interpTo(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__interpToPrev(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__interpolateSequence(uint64_t  value) ;

constexpr void __cordl_internal_set__invokeJoinedLeaveQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef,bool>>*  value) ;

constexpr void __cordl_internal_set__isFirstTick(bool  value) ;

constexpr void __cordl_internal_set__isInTick(bool  value) ;

constexpr void __cordl_internal_set__isInitialLocalTick(bool  value) ;

constexpr void __cordl_internal_set__isLastTick(bool  value) ;

constexpr void __cordl_internal_set__isPaused(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__isResimulation(bool  value) ;

constexpr void __cordl_internal_set__isResume(bool  value) ;

constexpr void __cordl_internal_set__isShutdown(bool  value) ;

constexpr void __cordl_internal_set__isWaitingForShutdown(bool  value) ;

constexpr void __cordl_internal_set__localAlpha(float_t  value) ;

constexpr void __cordl_internal_set__localAlphaPrev(float_t  value) ;

constexpr void __cordl_internal_set__metaLookup(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>*  value) ;

constexpr void __cordl_internal_set__metaMigration(::GlobalNamespace::NetworkObjectMeta_ListMigration  value) ;

constexpr void __cordl_internal_set__metaMigrationRemoved(::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__metaSceneLookup(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::Fusion::NetworkObjectMeta*>*  value) ;

constexpr void __cordl_internal_set__mode(::Fusion::SimulationModes  value) ;

constexpr void __cordl_internal_set__netPeer(::Fusion::Sockets::NetPeer*  value) ;

constexpr void __cordl_internal_set__netPeerGroup(::Fusion::Sockets::NetPeerGroup*  value) ;

constexpr void __cordl_internal_set__netPeerRng(::System::Random*  value) ;

constexpr void __cordl_internal_set__netSocket(::Fusion::Sockets::INetSocket*  value) ;

constexpr void __cordl_internal_set__playerDataLookup(::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__playerLeftTempObjectCache(::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__players(::System::Collections::Generic::HashSet_1<::Fusion::PlayerRef>*  value) ;

constexpr void __cordl_internal_set__playersConnections(::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationConnection*>*  value) ;

constexpr void __cordl_internal_set__projectConfig(::Fusion::NetworkProjectConfig*  value) ;

constexpr void __cordl_internal_set__recvContext(::Fusion::Simulation_RecvContext*  value) ;

constexpr void __cordl_internal_set__reliableSend(int32_t  value) ;

constexpr void __cordl_internal_set__remoteAlpha(float_t  value) ;

constexpr void __cordl_internal_set__remoteAlphaPrev(float_t  value) ;

constexpr void __cordl_internal_set__sendContext(::Fusion::Simulation_SendContext*  value) ;

constexpr void __cordl_internal_set__sendTick(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__snapshotsPool(::System::Collections::Generic::Stack_1<::Fusion::NetworkObjectHeaderSnapshot*>*  value) ;

constexpr void __cordl_internal_set__stage(::Fusion::SimulationStages  value) ;

constexpr void __cordl_internal_set__stateReplicator(::Fusion::Simulation_StateReplicator*  value) ;

constexpr void __cordl_internal_set__structs(::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__structsVersion(int32_t  value) ;

constexpr void __cordl_internal_set__tick(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__tickUpdateTimes(::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*  value) ;

constexpr void __cordl_internal_set__time(::Fusion::ITimeProvider*  value) ;

constexpr void __cordl_internal_set__uniqueIdPlayerRefMapping(::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::Simulation_PlayerRefMapping>*  value) ;

constexpr void __cordl_internal_set__updateTime(double_t  value) ;

/// @brief Method .ctor, addr 0x5fe43c8, size 0xa14, virtual false, abstract: false, final false
inline void _ctor(::Fusion::SimulationArgs  args) ;

/// [IteratorStateMachine(typeof(Fusion.Simulation::<get_ActivePlayers>d__138))]
/// @brief Method get_ActivePlayers, addr 0x5fe41e4, size 0x74, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* get_ActivePlayers() ;

/// @brief Method get_Callbacks, addr 0x5fe4270, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Simulation_ICallbacks* get_Callbacks() ;

/// @brief Method get_Config, addr 0x5fe4058, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::SimulationConfig* get_Config() ;

/// [IteratorStateMachine(typeof(Fusion.Simulation::<get_Connections>d__156))]
/// @brief Method get_Connections, addr 0x5fe432c, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>* get_Connections() ;

/// @brief Method get_DeltaTime, addr 0x5fe3ecc, size 0x88, virtual false, abstract: false, final false
inline float_t get_DeltaTime() ;

/// @brief Method get_HasRuntimeConfig, addr 0x5fe3b64, size 0x78, virtual false, abstract: false, final false
inline bool get_HasRuntimeConfig() ;

/// @brief Method get_IdCounter, addr 0x5feff48, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_IdCounter() ;

/// @brief Method get_InputCount, addr 0x5fe4018, size 0x18, virtual false, abstract: false, final false
inline int32_t get_InputCount() ;

/// @brief Method get_InterpolateSequence, addr 0x5fe3b5c, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_InterpolateSequence() ;

/// @brief Method get_IsClient, addr 0x5fe4080, size 0x78, virtual false, abstract: false, final false
inline bool get_IsClient() ;

/// @brief Method get_IsFirstTick, addr 0x5fe3f74, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFirstTick() ;

/// @brief Method get_IsForward, addr 0x5fe3f7c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsForward() ;

/// @brief Method get_IsInTick, addr 0x5fe4280, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInTick() ;

/// @brief Method get_IsLastTick, addr 0x5fe3f6c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLastTick() ;

/// @brief Method get_IsLocalPlayerFirstExecution, addr 0x5fe3f8c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsLocalPlayerFirstExecution() ;

/// @brief Method get_IsMasterClient, addr 0x5fe4140, size 0xa4, virtual false, abstract: false, final false
inline bool get_IsMasterClient() ;

/// @brief Method get_IsPaused, addr 0x5fe4288, size 0x6c, virtual false, abstract: false, final false
inline bool get_IsPaused() ;

/// @brief Method get_IsPlayer, addr 0x5fe40f8, size 0x14, virtual false, abstract: false, final false
inline bool get_IsPlayer() ;

/// @brief Method get_IsResimulation, addr 0x5fe3f64, size 0x8, virtual false, abstract: false, final false
inline bool get_IsResimulation() ;

/// @brief Method get_IsResume, addr 0x5fe4278, size 0x8, virtual false, abstract: false, final false
inline bool get_IsResume() ;

/// @brief Method get_IsRunning, addr 0x5fe4258, size 0x10, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

/// @brief Method get_IsSceneInfoReady, addr 0x5fe42fc, size 0x30, virtual false, abstract: false, final false
inline bool get_IsSceneInfoReady() ;

/// @brief Method get_IsServer, addr 0x5fe142c, size 0x78, virtual false, abstract: false, final false
inline bool get_IsServer() ;

/// @brief Method get_IsShutdown, addr 0x5fe3f54, size 0x8, virtual false, abstract: false, final false
inline bool get_IsShutdown() ;

/// @brief Method get_IsSinglePlayer, addr 0x5fe410c, size 0x34, virtual false, abstract: false, final false
inline bool get_IsSinglePlayer() ;

/// @brief Method get_IsWaitingForTheInitialTick, addr 0x5fe42f4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsWaitingForTheInitialTick() ;

/// @brief Method get_LatestServerTick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::Tick get_LatestServerTick() ;

/// @brief Method get_LocalAddress, addr 0x5fe43a0, size 0x1c, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetAddress get_LocalAddress() ;

/// @brief Method get_LocalAlpha, addr 0x5fe3f5c, size 0x8, virtual false, abstract: false, final false
inline float_t get_LocalAlpha() ;

/// @brief Method get_LocalPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::PlayerRef get_LocalPlayer() ;

/// @brief Method get_Mode, addr 0x5fe4048, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::SimulationModes get_Mode() ;

/// @brief Method get_NetConfigPointer, addr 0x5fe43bc, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConfig* get_NetConfigPointer() ;

/// @brief Method get_ObjectCount, addr 0x5feff50, size 0x50, virtual false, abstract: false, final false
inline int32_t get_ObjectCount() ;

/// @brief Method get_Objects, addr 0x5feffa0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>* get_Objects() ;

/// @brief Method get_ProjectConfig, addr 0x5fe4060, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkProjectConfig* get_ProjectConfig() ;

/// @brief Method get_ReliableDataSendRate, addr 0x5fee2a4, size 0x40, virtual false, abstract: false, final false
inline int32_t get_ReliableDataSendRate() ;

/// @brief Method get_RemoteAlpha, addr 0x5fe4068, size 0x8, virtual false, abstract: false, final false
inline float_t get_RemoteAlpha() ;

/// @brief Method get_RemoteTick, addr 0x5fe4078, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Tick get_RemoteTick() ;

/// @brief Method get_RemoteTickPrevious, addr 0x5fe4070, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Tick get_RemoteTickPrevious() ;

/// @brief Method get_Replicator, addr 0x5fe4268, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Simulation_StateReplicator* get_Replicator() ;

/// @brief Method get_RuntimeConfig, addr 0x5fe3a4c, size 0x24, virtual false, abstract: false, final false
inline ::Fusion::SimulationRuntimeConfig get_RuntimeConfig() ;

/// @brief Method get_RuntimeConfigPtr, addr 0x5fe3a70, size 0xdc, virtual false, abstract: false, final false
inline ::Fusion::SimulationRuntimeConfig* get_RuntimeConfigPtr() ;

/// @brief Method get_SendDelta, addr 0x5fe3e48, size 0x84, virtual false, abstract: false, final false
inline double_t get_SendDelta() ;

/// @brief Method get_SendRate, addr 0x5fe3e0c, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_SendRate() ;

/// @brief Method get_Stage, addr 0x5fe4050, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::SimulationStages get_Stage() ;

/// @brief Method get_Tick, addr 0x5fe3f9c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Tick get_Tick() ;

/// @brief Method get_TickDeltaDouble, addr 0x5fe3d48, size 0x60, virtual false, abstract: false, final false
inline double_t get_TickDeltaDouble() ;

/// @brief Method get_TickDeltaFloat, addr 0x5fe3da8, size 0x64, virtual false, abstract: false, final false
inline float_t get_TickDeltaFloat() ;

/// @brief Method get_TickPrevious, addr 0x5fe14a4, size 0x78, virtual false, abstract: false, final false
inline ::Fusion::Tick get_TickPrevious() ;

/// @brief Method get_TickRate, addr 0x5fe3d34, size 0x14, virtual false, abstract: false, final false
inline int32_t get_TickRate() ;

/// @brief Method get_TickStride, addr 0x5fe3cb0, size 0x84, virtual false, abstract: false, final false
inline int32_t get_TickStride() ;

/// @brief Method get_Time, addr 0x5fe3fa4, size 0x74, virtual false, abstract: false, final false
inline double_t get_Time() ;

/// @brief Method get_Topology, addr 0x5fe4030, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::Topologies get_Topology() ;

/// @brief Convert to "::Fusion::ILogSource"
constexpr ::Fusion::ILogSource* i___Fusion__ILogSource() noexcept;

/// @brief Convert to "::Fusion::Sockets::INetPeerGroupCallbacks"
constexpr ::Fusion::Sockets::INetPeerGroupCallbacks* i___Fusion__Sockets__INetPeerGroupCallbacks() noexcept;

/// @brief Method set_ReliableDataSendRate, addr 0x5fee2e4, size 0x24c, virtual false, abstract: false, final false
inline void set_ReliableDataSendRate(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation(Simulation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation(Simulation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19324};

/// @brief Field _aoiCells, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Simulation_AreaOfInterestCell*>*  ____aoiCells;

/// @brief Field _aoiCellsPool, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::Fusion::Simulation_AreaOfInterestCell*>*  ____aoiCellsPool;

/// @brief Field _aoiConnections, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::HashSet_1<int32_t>*>*  ____aoiConnections;

/// @brief Field _interpolateSequence, offset: 0x28, size: 0x8, def value: None
 uint64_t  ____interpolateSequence;

/// @brief Field _isShutdown, offset: 0x30, size: 0x1, def value: None
 bool  ____isShutdown;

/// @brief Field _isWaitingForShutdown, offset: 0x31, size: 0x1, def value: None
 bool  ____isWaitingForShutdown;

/// @brief Field Runner, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ___Runner;

/// @brief Field _callbacks, offset: 0x40, size: 0x8, def value: None
 ::Fusion::Simulation_ICallbacks*  ____callbacks;

/// @brief Field _tick, offset: 0x48, size: 0x4, def value: None
 ::Fusion::Tick  ____tick;

/// @brief Field _mode, offset: 0x4c, size: 0x4, def value: None
 ::Fusion::SimulationModes  ____mode;

/// @brief Field _stage, offset: 0x50, size: 0x4, def value: None
 ::Fusion::SimulationStages  ____stage;

/// @brief Field _config, offset: 0x58, size: 0x8, def value: None
 ::Fusion::SimulationConfig*  ____config;

/// @brief Field _projectConfig, offset: 0x60, size: 0x8, def value: None
 ::Fusion::NetworkProjectConfig*  ____projectConfig;

/// @brief Field _time, offset: 0x68, size: 0x8, def value: None
 ::Fusion::ITimeProvider*  ____time;

/// @brief Field _interpTo, offset: 0x70, size: 0x4, def value: None
 ::Fusion::Tick  ____interpTo;

/// @brief Field _interpFrom, offset: 0x74, size: 0x4, def value: None
 ::Fusion::Tick  ____interpFrom;

/// @brief Field _remoteAlpha, offset: 0x78, size: 0x4, def value: None
 float_t  ____remoteAlpha;

/// @brief Field _localAlpha, offset: 0x7c, size: 0x4, def value: None
 float_t  ____localAlpha;

/// @brief Field _interpToPrev, offset: 0x80, size: 0x4, def value: None
 ::Fusion::Tick  ____interpToPrev;

/// @brief Field _interpFromPrev, offset: 0x84, size: 0x4, def value: None
 ::Fusion::Tick  ____interpFromPrev;

/// @brief Field _remoteAlphaPrev, offset: 0x88, size: 0x4, def value: None
 float_t  ____remoteAlphaPrev;

/// @brief Field _localAlphaPrev, offset: 0x8c, size: 0x4, def value: None
 float_t  ____localAlphaPrev;

/// @brief Field _inputRoot, offset: 0x90, size: 0x8, def value: None
 ::Fusion::SimulationInput*  ____inputRoot;

/// @brief Field _inputPool, offset: 0x98, size: 0x8, def value: None
 ::Fusion::SimulationInput_Pool*  ____inputPool;

/// @brief Field _inputCollection, offset: 0xa0, size: 0x8, def value: None
 ::Fusion::SimulationInputCollection*  ____inputCollection;

/// @brief Field _stateReplicator, offset: 0xa8, size: 0x8, def value: None
 ::Fusion::Simulation_StateReplicator*  ____stateReplicator;

/// @brief Field _connections, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::SimulationConnection*>*  ____connections;

/// @brief Field _playersConnections, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationConnection*>*  ____playersConnections;

/// @brief Field _players, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Fusion::PlayerRef>*  ____players;

/// @brief Field _updateTime, offset: 0xc8, size: 0x8, def value: None
 double_t  ____updateTime;

/// @brief Field _isResume, offset: 0xd0, size: 0x1, def value: None
 bool  ____isResume;

/// @brief Field _sendTick, offset: 0xd4, size: 0x4, def value: None
 ::Fusion::Tick  ____sendTick;

/// @brief Field _isLastTick, offset: 0xd8, size: 0x1, def value: None
 bool  ____isLastTick;

/// @brief Field _isFirstTick, offset: 0xd9, size: 0x1, def value: None
 bool  ____isFirstTick;

/// @brief Field _isResimulation, offset: 0xda, size: 0x1, def value: None
 bool  ____isResimulation;

/// @brief Field _isInTick, offset: 0xdb, size: 0x1, def value: None
 bool  ____isInTick;

/// @brief Field _isInitialLocalTick, offset: 0xdc, size: 0x1, def value: None
 bool  ____isInitialLocalTick;

/// @brief Field _isPaused, offset: 0xe0, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____isPaused;

/// @brief Field _fusionStatsManager, offset: 0xf0, size: 0x8, def value: None
 ::Fusion::Statistics::FusionStatisticsManager*  ____fusionStatsManager;

/// @brief Field _tickUpdateTimes, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*  ____tickUpdateTimes;

/// @brief Field _invokeJoinedLeaveQueue, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef,bool>>*  ____invokeJoinedLeaveQueue;

/// @brief Field _globalInterestObjects, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  ____globalInterestObjects;

/// @brief Field _uniqueIdPlayerRefMapping, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::Simulation_PlayerRefMapping>*  ____uniqueIdPlayerRefMapping;

/// @brief Field _sendContext, offset: 0x118, size: 0x8, def value: None
 ::Fusion::Simulation_SendContext*  ____sendContext;

/// @brief Field _recvContext, offset: 0x120, size: 0x8, def value: None
 ::Fusion::Simulation_RecvContext*  ____recvContext;

/// @brief Field _reliableSend, offset: 0x128, size: 0x4, def value: None
 int32_t  ____reliableSend;

/// @brief Field _netSocket, offset: 0x130, size: 0x8, def value: None
 ::Fusion::Sockets::INetSocket*  ____netSocket;

/// @brief Field _netPeer, offset: 0x138, size: 0x8, def value: None
 ::Fusion::Sockets::NetPeer*  ____netPeer;

/// @brief Field _netPeerGroup, offset: 0x140, size: 0x8, def value: None
 ::Fusion::Sockets::NetPeerGroup*  ____netPeerGroup;

/// @brief Field _netPeerRng, offset: 0x148, size: 0x8, def value: None
 ::System::Random*  ____netPeerRng;

/// @brief Field _snapshotsPool, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::Fusion::NetworkObjectHeaderSnapshot*>*  ____snapshotsPool;

/// @brief Field _idCounter, offset: 0x158, size: 0x4, def value: None
 uint32_t  ____idCounter;

/// @brief Field _metaLookup, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>*  ____metaLookup;

/// @brief Field _playerDataLookup, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*  ____playerDataLookup;

/// @brief Field _playerLeftTempObjectCache, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*  ____playerLeftTempObjectCache;

/// @brief Field _structs, offset: 0x178, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  ____structs;

/// @brief Field _structsVersion, offset: 0x180, size: 0x4, def value: None
 int32_t  ____structsVersion;

/// @brief Field _allocator, offset: 0x188, size: 0x8, def value: None
 ::Fusion::Allocator*  ____allocator;

/// @brief Field _allocatorObjects, offset: 0x190, size: 0x8, def value: None
 ::Fusion::Allocator*  ____allocatorObjects;

/// @brief Field _metaSceneLookup, offset: 0x198, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::Fusion::NetworkObjectMeta*>*  ____metaSceneLookup;

/// @brief Field _metaMigration, offset: 0x1a0, size: 0x18, def value: None
 ::GlobalNamespace::NetworkObjectMeta_ListMigration  ____metaMigration;

/// @brief Size padding 0x1b0 - 0x1c0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field _metaMigrationRemoved, offset: 0x1b8, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  ____metaMigrationRemoved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Simulation, ____aoiCells) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____aoiCellsPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____aoiConnections) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____interpolateSequence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____isShutdown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____isWaitingForShutdown) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ___Runner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____callbacks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____tick) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____mode) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____stage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____config) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____projectConfig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____time) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____interpTo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____interpFrom) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____remoteAlpha) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____localAlpha) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____interpToPrev) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____interpFromPrev) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____remoteAlphaPrev) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____localAlphaPrev) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____inputRoot) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____inputPool) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____inputCollection) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____stateReplicator) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____connections) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____playersConnections) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____players) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____updateTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____isResume) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____sendTick) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____isLastTick) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____isFirstTick) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____isResimulation) == 0xda, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____isInTick) == 0xdb, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____isInitialLocalTick) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____isPaused) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____fusionStatsManager) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____tickUpdateTimes) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____invokeJoinedLeaveQueue) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____globalInterestObjects) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____uniqueIdPlayerRefMapping) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____sendContext) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____recvContext) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____reliableSend) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____netSocket) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____netPeer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____netPeerGroup) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____netPeerRng) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____snapshotsPool) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____idCounter) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____metaLookup) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____playerDataLookup) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____playerLeftTempObjectCache) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____structs) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____structsVersion) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____allocator) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____allocatorObjects) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____metaSceneLookup) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____metaMigration) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation, ____metaMigrationRemoved) == 0x1b8, "Offset mismatch!");

static_assert(sizeof(::Fusion::Simulation) == 0x1b0, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::ValueCollection::Enumerator<TKey, TValue>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/<get_Connections>d__156
class CORDL_TYPE Simulation__get_Connections_d__156 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Fusion_SimulationConnection__get_Current)) ::Fusion::SimulationConnection*  System_Collections_Generic_IEnumerator_Fusion_SimulationConnection__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Fusion::SimulationConnection*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::Simulation*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>  __s__1;

/// @brief Field <value>5__2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__value_5__2, put=__cordl_internal_set__value_5__2)) ::Fusion::SimulationConnection*  _value_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x600158c, size 0x224, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::Simulation__get_Connections_d__156* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Fusion.SimulationConnection>.GetEnumerator, addr 0x6001848, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>* System_Collections_Generic_IEnumerable_Fusion_SimulationConnection__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Fusion.SimulationConnection>.get_Current, addr 0x6001800, size 0x8, virtual true, abstract: false, final true
inline ::Fusion::SimulationConnection* System_Collections_Generic_IEnumerator_Fusion_SimulationConnection__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x60018ec, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x6001808, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6001840, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x6001544, size 0x48, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::SimulationConnection* const& __cordl_internal_get___2__current() const;

constexpr ::Fusion::SimulationConnection*& __cordl_internal_get___2__current() ;

constexpr ::Fusion::Simulation* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::Simulation*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*> const& __cordl_internal_get___s__1() const;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>& __cordl_internal_get___s__1() ;

constexpr ::Fusion::SimulationConnection* const& __cordl_internal_get__value_5__2() const;

constexpr ::Fusion::SimulationConnection*& __cordl_internal_get__value_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Fusion::SimulationConnection*  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::Simulation*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>  value) ;

constexpr void __cordl_internal_set__value_5__2(::Fusion::SimulationConnection*  value) ;

/// @brief Method <>m__Finally1, addr 0x60017b0, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x6001510, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>* i___System__Collections__Generic__IEnumerable_1___Fusion__SimulationConnection__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>* i___System__Collections__Generic__IEnumerator_1___Fusion__SimulationConnection__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation__get_Connections_d__156() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation__get_Connections_d__156", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation__get_Connections_d__156(Simulation__get_Connections_d__156 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation__get_Connections_d__156", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation__get_Connections_d__156(Simulation__get_Connections_d__156 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19323};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Fusion::SimulationConnection*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Fusion::Simulation*  _____4__this;

/// @brief Field <>s__1, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>  _____s__1;

/// @brief Field <value>5__2, offset: 0x48, size: 0x8, def value: None
 ::Fusion::SimulationConnection*  ____value_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Simulation__get_Connections_d__156, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation__get_Connections_d__156, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation__get_Connections_d__156, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation__get_Connections_d__156, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation__get_Connections_d__156, _____s__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation__get_Connections_d__156, ____value_5__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::Simulation__get_Connections_d__156) == 0x50, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.PlayerRef, System.Collections.Generic.Dictionary`2::ValueCollection::Enumerator<TKey, TValue>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/<get_ActivePlayers>d__138
class CORDL_TYPE Simulation__get_ActivePlayers_d__138 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Fusion_PlayerRef__get_Current)) ::Fusion::PlayerRef  System_Collections_Generic_IEnumerator_Fusion_PlayerRef__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Fusion::PlayerRef  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::Simulation*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>  __s__1;

/// @brief Field <value>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__value_5__2, put=__cordl_internal_set__value_5__2)) ::Fusion::SimulationConnection*  _value_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x60010d8, size 0x2a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::Simulation__get_ActivePlayers_d__138* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Fusion.PlayerRef>.GetEnumerator, addr 0x6001468, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* System_Collections_Generic_IEnumerable_Fusion_PlayerRef__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Fusion.PlayerRef>.get_Current, addr 0x60013cc, size 0x8, virtual true, abstract: false, final true
inline ::Fusion::PlayerRef System_Collections_Generic_IEnumerator_Fusion_PlayerRef__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x600150c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x60013d4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x600140c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x600108c, size 0x4c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get___2__current() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get___2__current() ;

constexpr ::Fusion::Simulation* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::Simulation*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*> const& __cordl_internal_get___s__1() const;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>& __cordl_internal_get___s__1() ;

constexpr ::Fusion::SimulationConnection* const& __cordl_internal_get__value_5__2() const;

constexpr ::Fusion::SimulationConnection*& __cordl_internal_get__value_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::Simulation*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>  value) ;

constexpr void __cordl_internal_set__value_5__2(::Fusion::SimulationConnection*  value) ;

/// @brief Method <>m__Finally1, addr 0x600137c, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x6001058, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* i___System__Collections__Generic__IEnumerable_1___Fusion__PlayerRef_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* i___System__Collections__Generic__IEnumerator_1___Fusion__PlayerRef_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation__get_ActivePlayers_d__138() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation__get_ActivePlayers_d__138", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation__get_ActivePlayers_d__138(Simulation__get_ActivePlayers_d__138 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation__get_ActivePlayers_d__138", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation__get_ActivePlayers_d__138(Simulation__get_ActivePlayers_d__138 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19322};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
 ::Fusion::PlayerRef  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Simulation*  _____4__this;

/// @brief Field <>s__1, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>  _____s__1;

/// @brief Field <value>5__2, offset: 0x40, size: 0x8, def value: None
 ::Fusion::SimulationConnection*  ____value_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Simulation__get_ActivePlayers_d__138, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation__get_ActivePlayers_d__138, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation__get_ActivePlayers_d__138, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation__get_ActivePlayers_d__138, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation__get_ActivePlayers_d__138, _____s__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation__get_ActivePlayers_d__138, ____value_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::Simulation__get_ActivePlayers_d__138) == 0x48, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/<>c
class CORDL_TYPE Simulation___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::Simulation___c*  __9;

/// @brief Field <>9__312_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__312_0, put=setStaticF___9__312_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>,::StringW>*  __9__312_0;

static inline ::Fusion::Simulation___c* New_ctor() ;

/// @brief Method <LogAllObjectIds>b__312_0, addr 0x6000f94, size 0xc4, virtual false, abstract: false, final false
inline ::StringW _LogAllObjectIds_b__312_0(::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>  x) ;

/// @brief Method .ctor, addr 0x6000f8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::Simulation___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>,::StringW>* getStaticF___9__312_0() ;

static inline void setStaticF___9(::Fusion::Simulation___c*  value) ;

static inline void setStaticF___9__312_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation___c(Simulation___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation___c(Simulation___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19321};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Simulation___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.SimulationConfig::DataConsistency, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/StateReplicator
class CORDL_TYPE Simulation_StateReplicator : public ::System::Object {
public:
// Declarations
using WriteResult = ::GlobalNamespace::StateReplicator_Simulation_WriteResult;

/// @brief Field _aoiQuery, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__aoiQuery, put=__cordl_internal_set__aoiQuery)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*  _aoiQuery;

/// @brief Field _changedWords, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__changedWords, put=__cordl_internal_set__changedWords)) ::System::Collections::Generic::HashSet_1<int32_t>*  _changedWords;

/// @brief Field _dataConsistency, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__dataConsistency, put=__cordl_internal_set__dataConsistency)) ::GlobalNamespace::SimulationConfig_DataConsistency  _dataConsistency;

/// @brief Field _logged0, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__logged0, put=__cordl_internal_set__logged0)) bool  _logged0;

/// @brief Field _loggedWordCheck, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__loggedWordCheck, put=__cordl_internal_set__loggedWordCheck)) bool  _loggedWordCheck;

/// @brief Field _notUsingAreaOfInterest, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__notUsingAreaOfInterest, put=__cordl_internal_set__notUsingAreaOfInterest)) bool  _notUsingAreaOfInterest;

/// @brief Field _physicsInfo, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__physicsInfo, put=__cordl_internal_set__physicsInfo)) ::Fusion::NetworkObjectMeta*  _physicsInfo;

/// @brief Field _runtimeConfig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__runtimeConfig, put=__cordl_internal_set__runtimeConfig)) ::Fusion::NetworkObjectMeta*  _runtimeConfig;

/// @brief Field _sceneInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneInfo, put=__cordl_internal_set__sceneInfo)) ::Fusion::NetworkObjectMeta*  _sceneInfo;

/// @brief Field _simulation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__simulation, put=__cordl_internal_set__simulation)) ::Fusion::Simulation*  _simulation;

/// [Conditional("STATE_REPLICATOR_DEBUG")]
/// @brief Method AddDebugWord, addr 0x6000f14, size 0x4, virtual false, abstract: false, final false
inline void AddDebugWord(int32_t  word, int32_t  value) ;

/// @brief Method CheckNothingToSendTicks, addr 0x6000934, size 0x60, virtual false, abstract: false, final false
static inline bool CheckNothingToSendTicks(::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkObjectConnectionData*  data) ;

/// [Conditional("STATE_REPLICATOR_DEBUG")]
/// @brief Method ClearDebugWords, addr 0x6000f18, size 0x4, virtual false, abstract: false, final false
inline void ClearDebugWords() ;

/// [Conditional("STATE_REPLICATOR_DEBUG")]
/// @brief Method DumpDebugWordsReceive, addr 0x6000f1c, size 0x4, virtual false, abstract: false, final false
inline void DumpDebugWordsReceive(::Fusion::NetworkObjectMeta*  meta, bool  unconfirmed, bool  created) ;

/// [Conditional("STATE_REPLICATOR_DEBUG")]
/// @brief Method DumpDebugWordsSend, addr 0x6000f20, size 0x4, virtual false, abstract: false, final false
inline void DumpDebugWordsSend(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method ForceResendChangedWords, addr 0x5ffe18c, size 0x70, virtual false, abstract: false, final false
inline void ForceResendChangedWords(::Fusion::Simulation_RecvContext*  rc, ::Fusion::NetworkId  id) ;

/// @brief Method HasObjectInterest, addr 0x5fff840, size 0x140, virtual false, abstract: false, final false
inline bool HasObjectInterest(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id) ;

static inline ::Fusion::Simulation_StateReplicator* New_ctor(::Fusion::Simulation*  simulation) ;

/// @brief Method OnObjectSpawnedLocal, addr 0x5ffeb2c, size 0x3b8, virtual false, abstract: false, final false
inline void OnObjectSpawnedLocal(::Fusion::NetworkId  id) ;

/// @brief Method OnPacketDelivered, addr 0x6000c00, size 0x254, virtual false, abstract: false, final false
inline void OnPacketDelivered(::Fusion::Sockets::NetConnection*  c, ::Fusion::SimulationPacketEnvelope*  envelope) ;

/// @brief Method OnPacketLost, addr 0x6000994, size 0x158, virtual false, abstract: false, final false
inline void OnPacketLost(::Fusion::Sockets::NetConnection*  c, ::Fusion::SimulationPacketEnvelope*  envelope) ;

/// @brief Method ReadHeader, addr 0x5ffdd20, size 0x164, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeader ReadHeader(::Fusion::Simulation_RecvContext*  rc, ::Fusion::NetworkId  id) ;

/// @brief Method ReadObjectDataIntoPtr, addr 0x5ffe1fc, size 0x87c, virtual false, abstract: false, final false
inline bool ReadObjectDataIntoPtr(::Fusion::NetworkObjectMeta*  meta, ::System::Span_1<int32_t>  p, int32_t  word) ;

/// @brief Method ReadObjectDestroys, addr 0x5ffc2bc, size 0x150, virtual false, abstract: false, final false
inline void ReadObjectDestroys() ;

/// @brief Method ReadObjectUpdates, addr 0x5ffc40c, size 0x1914, virtual false, abstract: false, final false
inline void ReadObjectUpdates() ;

/// @brief Method RecvPacket, addr 0x5ff40d8, size 0x98, virtual false, abstract: false, final false
inline void RecvPacket() ;

/// @brief Method ScanAndWriteObject, addr 0x5fff030, size 0x5b0, virtual false, abstract: false, final false
inline ::GlobalNamespace::StateReplicator_Simulation_WriteResult ScanAndWriteObject(::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkObjectConnectionData*  data) ;

/// @brief Method ScanStructForChanges, addr 0x5fffbb4, size 0x1bc, virtual false, abstract: false, final false
inline bool ScanStructForChanges(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method SendPacket, addr 0x5ff4e84, size 0x190, virtual false, abstract: false, final false
inline void SendPacket() ;

/// @brief Method SkipObject, addr 0x5ffdfcc, size 0x1c0, virtual false, abstract: false, final false
inline void SkipObject(::Fusion::Simulation_RecvContext*  rc, ::Fusion::NetworkId  id, ::Fusion::NetworkObjectMeta*  meta, bool  skipHeader) ;

/// @brief Method SkipObjectData, addr 0x5ffde84, size 0x148, virtual false, abstract: false, final false
inline void SkipObjectData(::Fusion::Simulation_RecvContext*  rc, ::ArrayW<::Fusion::NetworkBufferSerializerInfo>  serializers, int32_t  word, bool  clearChangedWords) ;

/// @brief Method UpdateChangedStructSet, addr 0x5fff9c4, size 0x1f0, virtual false, abstract: false, final false
inline void UpdateChangedStructSet() ;

/// @brief Method WriteLevelUsingScheduling, addr 0x5fff5e0, size 0x260, virtual false, abstract: false, final false
inline void WriteLevelUsingScheduling(int32_t  level, ::by_ref<::Fusion::NetworkObjectConnectionData*>  sent) ;

/// @brief Method WriteObject, addr 0x5fffd70, size 0x988, virtual false, abstract: false, final false
inline ::GlobalNamespace::StateReplicator_Simulation_WriteResult WriteObject(::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkObjectConnectionData*  data) ;

/// @brief Method WriteObjectDestroys, addr 0x5ffb8cc, size 0x16c, virtual false, abstract: false, final false
inline void WriteObjectDestroys() ;

/// @brief Method WriteStructs, addr 0x5ffba38, size 0x514, virtual false, abstract: false, final false
inline void WriteStructs() ;

/// @brief Method WriteUsingAllObjects, addr 0x5ffc0a8, size 0x214, virtual false, abstract: false, final false
inline void WriteUsingAllObjects() ;

/// @brief Method WriteUsingScheduling, addr 0x5ffbf58, size 0x150, virtual false, abstract: false, final false
inline void WriteUsingScheduling() ;

/// @brief Method WriteWord, addr 0x60006f8, size 0x23c, virtual false, abstract: false, final false
static inline void WriteWord(::Fusion::Sockets::NetBitBuffer*  buffer, ::System::ReadOnlySpan_1<int32_t>  ptr, int32_t  word, int32_t  previous) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>* const& __cordl_internal_get__aoiQuery() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*& __cordl_internal_get__aoiQuery() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__changedWords() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__changedWords() ;

constexpr ::GlobalNamespace::SimulationConfig_DataConsistency const& __cordl_internal_get__dataConsistency() const;

constexpr ::GlobalNamespace::SimulationConfig_DataConsistency& __cordl_internal_get__dataConsistency() ;

constexpr bool const& __cordl_internal_get__logged0() const;

constexpr bool& __cordl_internal_get__logged0() ;

constexpr bool const& __cordl_internal_get__loggedWordCheck() const;

constexpr bool& __cordl_internal_get__loggedWordCheck() ;

constexpr bool const& __cordl_internal_get__notUsingAreaOfInterest() const;

constexpr bool& __cordl_internal_get__notUsingAreaOfInterest() ;

constexpr ::Fusion::NetworkObjectMeta* const& __cordl_internal_get__physicsInfo() const;

constexpr ::Fusion::NetworkObjectMeta*& __cordl_internal_get__physicsInfo() ;

constexpr ::Fusion::NetworkObjectMeta* const& __cordl_internal_get__runtimeConfig() const;

constexpr ::Fusion::NetworkObjectMeta*& __cordl_internal_get__runtimeConfig() ;

constexpr ::Fusion::NetworkObjectMeta* const& __cordl_internal_get__sceneInfo() const;

constexpr ::Fusion::NetworkObjectMeta*& __cordl_internal_get__sceneInfo() ;

constexpr ::Fusion::Simulation* const& __cordl_internal_get__simulation() const;

constexpr ::Fusion::Simulation*& __cordl_internal_get__simulation() ;

constexpr void __cordl_internal_set__aoiQuery(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*  value) ;

constexpr void __cordl_internal_set__changedWords(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__dataConsistency(::GlobalNamespace::SimulationConfig_DataConsistency  value) ;

constexpr void __cordl_internal_set__logged0(bool  value) ;

constexpr void __cordl_internal_set__loggedWordCheck(bool  value) ;

constexpr void __cordl_internal_set__notUsingAreaOfInterest(bool  value) ;

constexpr void __cordl_internal_set__physicsInfo(::Fusion::NetworkObjectMeta*  value) ;

constexpr void __cordl_internal_set__runtimeConfig(::Fusion::NetworkObjectMeta*  value) ;

constexpr void __cordl_internal_set__sceneInfo(::Fusion::NetworkObjectMeta*  value) ;

constexpr void __cordl_internal_set__simulation(::Fusion::Simulation*  value) ;

/// @brief Method .ctor, addr 0x5ffb798, size 0x134, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Simulation*  simulation) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation_StateReplicator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation_StateReplicator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation_StateReplicator(Simulation_StateReplicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation_StateReplicator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation_StateReplicator(Simulation_StateReplicator const& ) = delete;

/// @brief Field DATA_BLOCK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  DATA_BLOCK_SIZE{static_cast<int32_t>(0x6)};

/// @brief Field GLOBAL_BLOCK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  GLOBAL_BLOCK_SIZE{static_cast<int32_t>(0x8)};

/// @brief Field HEADER_BLOCK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  HEADER_BLOCK_SIZE{static_cast<int32_t>(0x8)};

/// @brief Field OFFSET_BLOCK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  OFFSET_BLOCK_SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19320};

/// @brief Field _simulation, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Simulation*  ____simulation;

/// @brief Field _aoiQuery, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*  ____aoiQuery;

/// @brief Field _notUsingAreaOfInterest, offset: 0x20, size: 0x1, def value: None
 bool  ____notUsingAreaOfInterest;

/// @brief Field _dataConsistency, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::SimulationConfig_DataConsistency  ____dataConsistency;

/// @brief Field _changedWords, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ____changedWords;

/// @brief Field _loggedWordCheck, offset: 0x30, size: 0x1, def value: None
 bool  ____loggedWordCheck;

/// @brief Field _logged0, offset: 0x31, size: 0x1, def value: None
 bool  ____logged0;

/// @brief Field _runtimeConfig, offset: 0x38, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  ____runtimeConfig;

/// @brief Field _sceneInfo, offset: 0x40, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  ____sceneInfo;

/// @brief Field _physicsInfo, offset: 0x48, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  ____physicsInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Simulation_StateReplicator, ____simulation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_StateReplicator, ____aoiQuery) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_StateReplicator, ____notUsingAreaOfInterest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_StateReplicator, ____dataConsistency) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_StateReplicator, ____changedWords) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_StateReplicator, ____loggedWordCheck) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_StateReplicator, ____logged0) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_StateReplicator, ____runtimeConfig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_StateReplicator, ____sceneInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_StateReplicator, ____physicsInfo) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::Simulation_StateReplicator) == 0x50, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.PlayerRef, Fusion.Simulation::SimulationPacketHeader, Fusion.Tick, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/SendContext
class CORDL_TYPE Simulation_SendContext : public ::System::Object {
public:
// Declarations
/// @brief Field Buffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Buffer, put=__cordl_internal_set_Buffer)) ::Fusion::Sockets::NetBitBuffer*  Buffer;

/// @brief Field Connection, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Connection, put=__cordl_internal_set_Connection)) ::Fusion::SimulationConnection*  Connection;

/// @brief Field Envelope, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Envelope, put=__cordl_internal_set_Envelope)) ::Fusion::SimulationPacketEnvelope*  Envelope;

/// @brief Field Header, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Header, put=__cordl_internal_set_Header)) ::GlobalNamespace::Simulation_SimulationPacketHeader  Header;

 __declspec(property(get=get_IsWriting)) bool  IsWriting;

/// @brief Field ObjPrev, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_ObjPrev, put=__cordl_internal_set_ObjPrev)) int32_t  ObjPrev;

/// @brief Field Player, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Player, put=__cordl_internal_set_Player)) ::Fusion::PlayerRef  Player;

/// @brief Field Tick, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tick, put=__cordl_internal_set_Tick)) ::Fusion::Tick  Tick;

/// @brief Field _simulation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__simulation, put=__cordl_internal_set__simulation)) ::Fusion::Simulation*  _simulation;

/// @brief Method Init, addr 0x5ff6fa0, size 0x24c, virtual false, abstract: false, final false
inline bool Init(::Fusion::SimulationConnection*  connection, ::Fusion::Tick  tick) ;

static inline ::Fusion::Simulation_SendContext* New_ctor(::Fusion::Simulation*  simulation) ;

/// @brief Method Reset, addr 0x5ff71ec, size 0x14, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Send, addr 0x5ff7200, size 0x78, virtual false, abstract: false, final false
inline void Send() ;

constexpr ::Fusion::Sockets::NetBitBuffer* const& __cordl_internal_get_Buffer() const;

constexpr ::Fusion::Sockets::NetBitBuffer*& __cordl_internal_get_Buffer() ;

constexpr ::Fusion::SimulationConnection* const& __cordl_internal_get_Connection() const;

constexpr ::Fusion::SimulationConnection*& __cordl_internal_get_Connection() ;

constexpr ::Fusion::SimulationPacketEnvelope* const& __cordl_internal_get_Envelope() const;

constexpr ::Fusion::SimulationPacketEnvelope*& __cordl_internal_get_Envelope() ;

constexpr ::GlobalNamespace::Simulation_SimulationPacketHeader const& __cordl_internal_get_Header() const;

constexpr ::GlobalNamespace::Simulation_SimulationPacketHeader& __cordl_internal_get_Header() ;

constexpr int32_t const& __cordl_internal_get_ObjPrev() const;

constexpr int32_t& __cordl_internal_get_ObjPrev() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_Player() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_Player() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_Tick() const;

constexpr ::Fusion::Tick& __cordl_internal_get_Tick() ;

constexpr ::Fusion::Simulation* const& __cordl_internal_get__simulation() const;

constexpr ::Fusion::Simulation*& __cordl_internal_get__simulation() ;

constexpr void __cordl_internal_set_Buffer(::Fusion::Sockets::NetBitBuffer*  value) ;

constexpr void __cordl_internal_set_Connection(::Fusion::SimulationConnection*  value) ;

constexpr void __cordl_internal_set_Envelope(::Fusion::SimulationPacketEnvelope*  value) ;

constexpr void __cordl_internal_set_Header(::GlobalNamespace::Simulation_SimulationPacketHeader  value) ;

constexpr void __cordl_internal_set_ObjPrev(int32_t  value) ;

constexpr void __cordl_internal_set_Player(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set_Tick(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__simulation(::Fusion::Simulation*  value) ;

/// @brief Method .ctor, addr 0x5ff6f70, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Simulation*  simulation) ;

/// @brief Method get_IsWriting, addr 0x5ff6f60, size 0x10, virtual false, abstract: false, final false
inline bool get_IsWriting() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation_SendContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation_SendContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation_SendContext(Simulation_SendContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation_SendContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation_SendContext(Simulation_SendContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19317};

/// @brief Field _simulation, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Simulation*  ____simulation;

/// @brief Field Header, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::Simulation_SimulationPacketHeader  ___Header;

/// @brief Field Buffer, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBuffer*  ___Buffer;

/// @brief Field Envelope, offset: 0x28, size: 0x8, def value: None
 ::Fusion::SimulationPacketEnvelope*  ___Envelope;

/// @brief Field Tick, offset: 0x30, size: 0x4, def value: None
 ::Fusion::Tick  ___Tick;

/// @brief Field Player, offset: 0x34, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Player;

/// @brief Field Connection, offset: 0x38, size: 0x8, def value: None
 ::Fusion::SimulationConnection*  ___Connection;

/// @brief Field ObjPrev, offset: 0x40, size: 0x4, def value: None
 int32_t  ___ObjPrev;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Simulation_SendContext, ____simulation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_SendContext, ___Header) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_SendContext, ___Buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_SendContext, ___Envelope) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_SendContext, ___Tick) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_SendContext, ___Player) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_SendContext, ___Connection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_SendContext, ___ObjPrev) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::Simulation_SendContext) == 0x48, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.PlayerRef, Fusion.Simulation::SimulationPacketHeader, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/RecvContext
class CORDL_TYPE Simulation_RecvContext : public ::System::Object {
public:
// Declarations
/// @brief Field Buffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Buffer, put=__cordl_internal_set_Buffer)) ::Fusion::Sockets::NetBitBuffer*  Buffer;

/// @brief Field Connection, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Connection, put=__cordl_internal_set_Connection)) ::Fusion::SimulationConnection*  Connection;

/// @brief Field Header, offset 0x1c, size 0x8 
 __declspec(property(get=__cordl_internal_get_Header, put=__cordl_internal_set_Header)) ::GlobalNamespace::Simulation_SimulationPacketHeader  Header;

/// @brief Field Player, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Player, put=__cordl_internal_set_Player)) ::Fusion::PlayerRef  Player;

/// @brief Field _simulation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__simulation, put=__cordl_internal_set__simulation)) ::Fusion::Simulation*  _simulation;

/// @brief Method Done, addr 0x5ff6f3c, size 0x24, virtual false, abstract: false, final false
inline void Done() ;

/// @brief Method Init, addr 0x5ff6eb4, size 0x88, virtual false, abstract: false, final false
inline void Init(::Fusion::SimulationConnection*  connection, ::Fusion::Sockets::NetBitBuffer*  buffer) ;

static inline ::Fusion::Simulation_RecvContext* New_ctor(::Fusion::Simulation*  simulation) ;

constexpr ::Fusion::Sockets::NetBitBuffer* const& __cordl_internal_get_Buffer() const;

constexpr ::Fusion::Sockets::NetBitBuffer*& __cordl_internal_get_Buffer() ;

constexpr ::Fusion::SimulationConnection* const& __cordl_internal_get_Connection() const;

constexpr ::Fusion::SimulationConnection*& __cordl_internal_get_Connection() ;

constexpr ::GlobalNamespace::Simulation_SimulationPacketHeader const& __cordl_internal_get_Header() const;

constexpr ::GlobalNamespace::Simulation_SimulationPacketHeader& __cordl_internal_get_Header() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_Player() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_Player() ;

constexpr ::Fusion::Simulation* const& __cordl_internal_get__simulation() const;

constexpr ::Fusion::Simulation*& __cordl_internal_get__simulation() ;

constexpr void __cordl_internal_set_Buffer(::Fusion::Sockets::NetBitBuffer*  value) ;

constexpr void __cordl_internal_set_Connection(::Fusion::SimulationConnection*  value) ;

constexpr void __cordl_internal_set_Header(::GlobalNamespace::Simulation_SimulationPacketHeader  value) ;

constexpr void __cordl_internal_set_Player(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set__simulation(::Fusion::Simulation*  value) ;

/// @brief Method .ctor, addr 0x5ff6e84, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Simulation*  simulation) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation_RecvContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation_RecvContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation_RecvContext(Simulation_RecvContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation_RecvContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation_RecvContext(Simulation_RecvContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19316};

/// @brief Field _simulation, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Simulation*  ____simulation;

/// @brief Field Player, offset: 0x18, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Player;

/// @brief Field Header, offset: 0x1c, size: 0x8, def value: None
 ::GlobalNamespace::Simulation_SimulationPacketHeader  ___Header;

/// @brief Field Buffer, offset: 0x28, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBuffer*  ___Buffer;

/// @brief Field Connection, offset: 0x30, size: 0x8, def value: None
 ::Fusion::SimulationConnection*  ___Connection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Simulation_RecvContext, ____simulation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_RecvContext, ___Player) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_RecvContext, ___Header) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_RecvContext, ___Buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_RecvContext, ___Connection) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Simulation_RecvContext) == 0x38, "Size mismatch!");

} // namespace end def Fusion
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/ICallbacks
class CORDL_TYPE Simulation_ICallbacks {
public:
// Declarations
 __declspec(property(get=get_CanReceivePlayerJoinLeaveCallbacks)) bool  CanReceivePlayerJoinLeaveCallbacks;

 __declspec(property(get=get_IsSharedModeMasterClient)) bool  IsSharedModeMasterClient;

 __declspec(property(get=get_LocalPlayerRef)) ::Fusion::PlayerRef  LocalPlayerRef;

/// @brief Method ObjectChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ObjectChanged(::Fusion::PlayerRef  player, ::Fusion::NetworkObjectMeta*  obj, ::GlobalNamespace::Simulation_ObjectChangeType  changeType) ;

/// @brief Method ObjectEnterAOI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ObjectEnterAOI(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id) ;

/// @brief Method ObjectExitAOI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ObjectExitAOI(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id) ;

/// @brief Method ObjectInputAuthorityChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ObjectInputAuthorityChanged(::Fusion::NetworkId  id, bool  gained) ;

/// @brief Method ObjectIsSimulatedChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ObjectIsSimulatedChanged(::Fusion::NetworkId  id, bool  simulated) ;

/// @brief Method ObjectStateAuthorityChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ObjectStateAuthorityChanged(::Fusion::NetworkId  id, bool  gained) ;

/// @brief Method OnAfterAllTicks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnAfterAllTicks(bool  resimulation, int32_t  tickCount) ;

/// @brief Method OnAfterClientSidePredictionReset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnAfterClientSidePredictionReset() ;

/// @brief Method OnAfterSimulation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnAfterSimulation() ;

/// @brief Method OnAfterTick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnAfterTick() ;

/// @brief Method OnBeforeAllTicks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnBeforeAllTicks(bool  resimulation, int32_t  tickCount) ;

/// @brief Method OnBeforeClientSidePredictionReset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnBeforeClientSidePredictionReset() ;

/// @brief Method OnBeforeCopyPreviousState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnBeforeCopyPreviousState() ;

/// @brief Method OnBeforeSimulation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnBeforeSimulation(int32_t  forwardTickCount) ;

/// @brief Method OnBeforeTick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnBeforeTick() ;

/// @brief Method OnClientStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnClientStart() ;

/// @brief Method OnConnectedToServer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnectedToServer() ;

/// @brief Method OnConnectionFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnectionFailed(::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method OnConnectionRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::Sockets::OnConnectionRequestReply OnConnectionRequest(::Fusion::Sockets::NetAddress  remoteAddress, ::ArrayW<uint8_t>  token) ;

/// @brief Method OnDisconnectedFromServer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDisconnectedFromServer(::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method OnInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnInput(::Fusion::SimulationInput*  input) ;

/// @brief Method OnInputMissing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnInputMissing(::Fusion::SimulationInput*  input) ;

/// @brief Method OnInternalConnectionAttempt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnInternalConnectionAttempt(int32_t  attempt, int32_t  totalConnectionAttempts, ::by_ref<bool>  shouldChange, ::by_ref<::Fusion::Sockets::NetAddress>  newAddress) ;

/// @brief Method OnMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::SimulationMessageResult OnMessage(::Fusion::SimulationMessage*  message) ;

/// @brief Method OnReliableData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnReliableData(::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableId  id, bool  local, ::ArrayW<uint8_t>  dataArray) ;

/// @brief Method OnServerStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnServerStart() ;

/// @brief Method OnTick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnTick() ;

/// @brief Method PlayerJoined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PlayerJoined(::Fusion::PlayerRef  player) ;

/// @brief Method PlayerLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PlayerLeft(::Fusion::PlayerRef  player) ;

/// @brief Method RemoteObjectCreated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoteObjectCreated(::Fusion::NetworkObjectMeta*  obj) ;

/// @brief Method RemoteObjectDestroyed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool RemoteObjectDestroyed(::Fusion::NetworkId  id) ;

/// @brief Method UpdateRemotePrefabs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateRemotePrefabs() ;

/// @brief Method get_CanReceivePlayerJoinLeaveCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_CanReceivePlayerJoinLeaveCallbacks() ;

/// @brief Method get_IsSharedModeMasterClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsSharedModeMasterClient() ;

/// @brief Method get_LocalPlayerRef, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::PlayerRef get_LocalPlayerRef() ;

// Ctor Parameters [CppParam { name: "", ty: "Simulation_ICallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation_ICallbacks(Simulation_ICallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19312};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/History
class CORDL_TYPE Simulation_History : public ::System::Object {
public:
// Declarations
using Entry = ::Fusion::History_Simulation_Entry;

 __declspec(property(get=get_Latest)) ::Fusion::History_Simulation_Entry*  Latest;

 __declspec(property(get=get_Oldest)) ::Fusion::History_Simulation_Entry*  Oldest;

/// @brief Field _entryList, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__entryList, put=__cordl_internal_set__entryList)) ::Fusion::SimulationHistoryEntryList*  _entryList;

/// @brief Method Add, addr 0x5ff6438, size 0x64, virtual false, abstract: false, final false
inline ::Fusion::History_Simulation_Entry* Add(::Fusion::Tick  tick, double_t  time) ;

static inline ::Fusion::Simulation_History* New_ctor(int32_t  capacity) ;

constexpr ::Fusion::SimulationHistoryEntryList* const& __cordl_internal_get__entryList() const;

constexpr ::Fusion::SimulationHistoryEntryList*& __cordl_internal_get__entryList() ;

constexpr void __cordl_internal_set__entryList(::Fusion::SimulationHistoryEntryList*  value) ;

/// @brief Method .ctor, addr 0x5ff6360, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Latest, addr 0x5ff6330, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::History_Simulation_Entry* get_Latest() ;

/// @brief Method get_Oldest, addr 0x5ff6348, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::History_Simulation_Entry* get_Oldest() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation_History() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation_History", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation_History(Simulation_History && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation_History", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation_History(Simulation_History const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19311};

/// @brief Field _entryList, offset: 0x10, size: 0x8, def value: None
 ::Fusion::SimulationHistoryEntryList*  ____entryList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Simulation_History, ____entryList) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Simulation_History) == 0x18, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.Tick, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/History/Entry
class CORDL_TYPE History_Simulation_Entry : public ::System::Object {
public:
// Declarations
/// @brief Field Next, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Fusion::History_Simulation_Entry*  Next;

/// @brief Field Prev, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::Fusion::History_Simulation_Entry*  Prev;

/// @brief Field Tick, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tick, put=__cordl_internal_set_Tick)) ::Fusion::Tick  Tick;

/// @brief Field Time, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Time, put=__cordl_internal_set_Time)) double_t  Time;

static inline ::Fusion::History_Simulation_Entry* New_ctor() ;

constexpr ::Fusion::History_Simulation_Entry* const& __cordl_internal_get_Next() const;

constexpr ::Fusion::History_Simulation_Entry*& __cordl_internal_get_Next() ;

constexpr ::Fusion::History_Simulation_Entry* const& __cordl_internal_get_Prev() const;

constexpr ::Fusion::History_Simulation_Entry*& __cordl_internal_get_Prev() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_Tick() const;

constexpr ::Fusion::Tick& __cordl_internal_get_Tick() ;

constexpr double_t const& __cordl_internal_get_Time() const;

constexpr double_t& __cordl_internal_get_Time() ;

constexpr void __cordl_internal_set_Next(::Fusion::History_Simulation_Entry*  value) ;

constexpr void __cordl_internal_set_Prev(::Fusion::History_Simulation_Entry*  value) ;

constexpr void __cordl_internal_set_Tick(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set_Time(double_t  value) ;

/// @brief Method .ctor, addr 0x5ff6430, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr History_Simulation_Entry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "History_Simulation_Entry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
History_Simulation_Entry(History_Simulation_Entry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "History_Simulation_Entry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
History_Simulation_Entry(History_Simulation_Entry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19310};

/// @brief Field Prev, offset: 0x10, size: 0x8, def value: None
 ::Fusion::History_Simulation_Entry*  ___Prev;

/// @brief Field Next, offset: 0x18, size: 0x8, def value: None
 ::Fusion::History_Simulation_Entry*  ___Next;

/// @brief Field Tick, offset: 0x20, size: 0x4, def value: None
 ::Fusion::Tick  ___Tick;

/// @brief Field Time, offset: 0x28, size: 0x8, def value: None
 double_t  ___Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::History_Simulation_Entry, ___Prev) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::History_Simulation_Entry, ___Next) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::History_Simulation_Entry, ___Tick) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::History_Simulation_Entry, ___Time) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::History_Simulation_Entry) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.PlayerRef, System.Collections.Generic.HashSet`1::Enumerator<T>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/Client/<get_ActivePlayers>d__24
class CORDL_TYPE Client_Simulation__get_ActivePlayers_d__24 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Fusion_PlayerRef__get_Current)) ::Fusion::PlayerRef  System_Collections_Generic_IEnumerator_Fusion_PlayerRef__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Fusion::PlayerRef  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::Simulation_Client*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::GlobalNamespace::HashSet_1_Enumerator<::Fusion::PlayerRef>  __s__1;

/// @brief Field <player>5__2, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__player_5__2, put=__cordl_internal_set__player_5__2)) ::Fusion::PlayerRef  _player_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ff6004, size 0x198, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::Client_Simulation__get_ActivePlayers_d__24* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Fusion.PlayerRef>.GetEnumerator, addr 0x5ff6288, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* System_Collections_Generic_IEnumerable_Fusion_PlayerRef__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Fusion.PlayerRef>.get_Current, addr 0x5ff61ec, size 0x8, virtual true, abstract: false, final true
inline ::Fusion::PlayerRef System_Collections_Generic_IEnumerator_Fusion_PlayerRef__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5ff632c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ff61f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ff622c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ff5fc8, size 0x3c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get___2__current() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::Simulation_Client* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::Simulation_Client*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::HashSet_1_Enumerator<::Fusion::PlayerRef> const& __cordl_internal_get___s__1() const;

constexpr ::GlobalNamespace::HashSet_1_Enumerator<::Fusion::PlayerRef>& __cordl_internal_get___s__1() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get__player_5__2() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get__player_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::Simulation_Client*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::GlobalNamespace::HashSet_1_Enumerator<::Fusion::PlayerRef>  value) ;

constexpr void __cordl_internal_set__player_5__2(::Fusion::PlayerRef  value) ;

/// @brief Method <>m__Finally1, addr 0x5ff619c, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ff38c8, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* i___System__Collections__Generic__IEnumerable_1___Fusion__PlayerRef_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* i___System__Collections__Generic__IEnumerator_1___Fusion__PlayerRef_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Client_Simulation__get_ActivePlayers_d__24() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Client_Simulation__get_ActivePlayers_d__24", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Client_Simulation__get_ActivePlayers_d__24(Client_Simulation__get_ActivePlayers_d__24 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Client_Simulation__get_ActivePlayers_d__24", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Client_Simulation__get_ActivePlayers_d__24(Client_Simulation__get_ActivePlayers_d__24 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19305};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
 ::Fusion::PlayerRef  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::Simulation_Client*  _____4__this;

/// @brief Field <>s__1, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::HashSet_1_Enumerator<::Fusion::PlayerRef>  _____s__1;

/// @brief Field <player>5__2, offset: 0x40, size: 0x4, def value: None
 ::Fusion::PlayerRef  ____player_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Client_Simulation__get_ActivePlayers_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Client_Simulation__get_ActivePlayers_d__24, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Client_Simulation__get_ActivePlayers_d__24, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Client_Simulation__get_ActivePlayers_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Client_Simulation__get_ActivePlayers_d__24, _____s__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Client_Simulation__get_ActivePlayers_d__24, ____player_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::Client_Simulation__get_ActivePlayers_d__24) == 0x48, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.BitSet512, Fusion.NetworkObjectMeta::List, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Simulation/AreaOfInterestCell
class CORDL_TYPE Simulation_AreaOfInterestCell : public ::System::Object {
public:
// Declarations
/// @brief Field Connections, offset 0x30, size 0x40 
 __declspec(property(get=__cordl_internal_get_Connections, put=__cordl_internal_set_Connections)) ::Fusion::BitSet512  Connections;

 __declspec(property(get=get_Empty)) bool  Empty;

/// @brief Field Key, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) int32_t  Key;

/// @brief Field Objects, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_Objects, put=__cordl_internal_set_Objects)) ::GlobalNamespace::NetworkObjectMeta_List  Objects;

static inline ::Fusion::Simulation_AreaOfInterestCell* New_ctor() ;

constexpr ::Fusion::BitSet512 const& __cordl_internal_get_Connections() const;

constexpr ::Fusion::BitSet512& __cordl_internal_get_Connections() ;

constexpr int32_t const& __cordl_internal_get_Key() const;

constexpr int32_t& __cordl_internal_get_Key() ;

constexpr ::GlobalNamespace::NetworkObjectMeta_List const& __cordl_internal_get_Objects() const;

constexpr ::GlobalNamespace::NetworkObjectMeta_List& __cordl_internal_get_Objects() ;

constexpr void __cordl_internal_set_Connections(::Fusion::BitSet512  value) ;

constexpr void __cordl_internal_set_Key(int32_t  value) ;

constexpr void __cordl_internal_set_Objects(::GlobalNamespace::NetworkObjectMeta_List  value) ;

/// @brief Method .ctor, addr 0x5ff2c58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Empty, addr 0x5ff2c00, size 0x58, virtual false, abstract: false, final false
inline bool get_Empty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation_AreaOfInterestCell() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation_AreaOfInterestCell", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation_AreaOfInterestCell(Simulation_AreaOfInterestCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation_AreaOfInterestCell", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation_AreaOfInterestCell(Simulation_AreaOfInterestCell const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19303};

/// @brief Field Key, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Key;

/// @brief Field Objects, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::NetworkObjectMeta_List  ___Objects;

/// @brief Field Connections, offset: 0x30, size: 0x40, def value: None
 ::Fusion::BitSet512  ___Connections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Simulation_AreaOfInterestCell, ___Key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_AreaOfInterestCell, ___Objects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Simulation_AreaOfInterestCell, ___Connections) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Simulation_AreaOfInterestCell) == 0x70, "Size mismatch!");

} // namespace end def Fusion
