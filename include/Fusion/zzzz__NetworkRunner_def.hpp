#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__GameMode_def.hpp"
#include "Fusion/zzzz__INetworkInput_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkLoadSceneParameters_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPtr_def.hpp"
#include "Fusion/zzzz__NetworkRunnerInitializeArgs_def.hpp"
#include "Fusion/zzzz__NetworkRunner_DeferredShutdownParams_def.hpp"
#include "Fusion/zzzz__NetworkRunner_ShutdownFlags_def.hpp"
#include "Fusion/zzzz__NetworkRunner_SimulationPhase_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfoChangeSource_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_def.hpp"
#include "Fusion/zzzz__SessionLobby_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__StartGameArgs_def.hpp"
#include "Fusion/zzzz__TickRate_Selection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_ValueCollection_Enumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRunner)
namespace Fusion::Async {
template<typename T>
class AsyncOperationHandler_1;
}
namespace Fusion::Encryption {
class EncryptionToken;
}
namespace Fusion::Photon::Realtime {
class AuthenticationValues;
}
namespace Fusion::Photon::Realtime {
class FusionAppSettings;
}
namespace Fusion::Photon::Realtime {
struct ServerConnection;
}
namespace Fusion::Protocol {
class HostMigration;
}
namespace Fusion::Protocol {
class Snapshot;
}
namespace Fusion::Sockets::Stun {
struct NATType;
}
namespace Fusion::Sockets {
class INetSocket;
}
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetConnectFailedReason;
}
namespace Fusion::Sockets {
struct NetDisconnectReason;
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
class BehaviourStatisticsSnapshot;
}
namespace Fusion::Statistics {
class FusionStatisticsManager;
}
namespace Fusion::Statistics {
struct MemoryStatisticsSnapshot;
}
namespace Fusion {
class CloudCommunicator;
}
namespace Fusion {
class CloudServices;
}
namespace Fusion {
struct ConnectionType;
}
namespace Fusion {
struct GameMode;
}
namespace Fusion {
class HitboxManager;
}
namespace Fusion {
class HostMigrationToken;
}
namespace Fusion {
class INetworkObjectInitializer;
}
namespace Fusion {
class INetworkObjectProvider;
}
namespace Fusion {
class INetworkRunnerCallbacks;
}
namespace Fusion {
class INetworkRunnerUpdater;
}
namespace Fusion {
class INetworkSceneManager;
}
namespace Fusion {
class ISpawned;
}
namespace Fusion {
class LobbyInfo;
}
namespace Fusion {
struct NetworkBehaviourId;
}
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
struct NetworkInput;
}
namespace Fusion {
struct NetworkObjectDestroyFlags;
}
namespace Fusion {
struct NetworkObjectGuid;
}
namespace Fusion {
struct NetworkObjectHeaderFlags;
}
namespace Fusion {
struct NetworkObjectHeaderPtr;
}
namespace Fusion {
struct NetworkObjectHeader;
}
namespace Fusion {
class NetworkObjectInactivityGuard;
}
namespace Fusion {
class NetworkObjectMeta;
}
namespace Fusion {
struct NetworkObjectRuntimeFlags;
}
namespace Fusion {
class NetworkObjectSpawnDelegate;
}
namespace Fusion {
struct NetworkObjectTypeId;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
struct NetworkPhysicsInfo;
}
namespace Fusion {
struct NetworkPrefabId;
}
namespace Fusion {
struct NetworkPrefabRef;
}
namespace Fusion {
class NetworkPrefabTable;
}
namespace Fusion {
class NetworkProjectConfig;
}
namespace Fusion {
struct NetworkRunnerInitializeArgs;
}
namespace Fusion {
class NetworkRunner_CloudConnectionLostHandler;
}
namespace Fusion {
class NetworkRunner_ObjectDelegate;
}
namespace Fusion {
class NetworkRunner_OnBeforeSpawned;
}
namespace Fusion {
class NetworkRunner__DisconnectFromCloud_d__426;
}
namespace Fusion {
class NetworkRunner__GetResumeSnapshotNetworkObjects_d__3;
}
namespace Fusion {
class NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4;
}
namespace Fusion {
class NetworkRunner__JoinSessionLobby_d__423;
}
namespace Fusion {
class NetworkRunner__PushHostMigrationSnapshot_d__2;
}
namespace Fusion {
class NetworkRunner__RunHostMigrationResume_d__11;
}
namespace Fusion {
class NetworkRunner__ShutdownAndBuildResult_d__429;
}
namespace Fusion {
class NetworkRunner__StartGameModeCloud_d__428;
}
namespace Fusion {
class NetworkRunner__StartGameModeSinglePlayer_d__427;
}
namespace Fusion {
class NetworkRunner___c;
}
namespace Fusion {
class NetworkRunner___c__DisplayClass145_0;
}
namespace Fusion {
class NetworkRunner___c__DisplayClass302_0;
}
namespace Fusion {
class NetworkRunner___c__DisplayClass370_1;
}
namespace Fusion {
struct NetworkSceneAsyncOp;
}
namespace Fusion {
struct NetworkSceneInfoChangeSource;
}
namespace Fusion {
struct NetworkSceneInfo;
}
namespace Fusion {
struct NetworkSceneLoadId;
}
namespace Fusion {
struct NetworkSpawnFlags;
}
namespace Fusion {
class NetworkSpawnOp_AsyncOpData;
}
namespace Fusion {
struct NetworkSpawnOp;
}
namespace Fusion {
struct NetworkSpawnStatus;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct RegionInfo;
}
namespace Fusion {
struct RpcSendResult;
}
namespace Fusion {
struct RpcTargetStatus;
}
namespace Fusion {
struct SceneLoadDoneArgs;
}
namespace Fusion {
struct SceneRef;
}
namespace Fusion {
class SessionInfo;
}
namespace Fusion {
struct SessionLobby;
}
namespace Fusion {
struct ShutdownReason;
}
namespace Fusion {
struct SimulationBehaviourListScope;
}
namespace Fusion {
class SimulationBehaviourUpdater;
}
namespace Fusion {
class SimulationBehaviour;
}
namespace Fusion {
class SimulationConnection;
}
namespace Fusion {
class SimulationInput;
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
struct SimulationStages;
}
namespace Fusion {
class Simulation_ICallbacks;
}
namespace Fusion {
class Simulation;
}
namespace Fusion {
struct StartGameArgs;
}
namespace Fusion {
class StartGameResult;
}
namespace Fusion {
struct Tick;
}
namespace Fusion {
struct Topologies;
}
namespace GlobalNamespace {
template<typename T>
struct List_1_Enumerator;
}
namespace GlobalNamespace {
struct MemoryStatisticsSnapshot_TargetAllocator;
}
namespace GlobalNamespace {
struct NetworkRunner_AttachOptions;
}
namespace GlobalNamespace {
struct NetworkRunner_BuildTypes;
}
namespace GlobalNamespace {
struct NetworkRunner_CreateInstanceResult;
}
namespace GlobalNamespace {
struct NetworkRunner_DeferredShutdownParams;
}
namespace GlobalNamespace {
struct NetworkRunner_ShutdownFlags;
}
namespace GlobalNamespace {
struct NetworkRunner_SimulationPhase;
}
namespace GlobalNamespace {
struct NetworkRunner_SpawnArgs;
}
namespace GlobalNamespace {
struct NetworkRunner_SpawnFlagsInternal;
}
namespace GlobalNamespace {
struct NetworkRunner_States;
}
namespace GlobalNamespace {
struct NetworkRunner___c__DisplayClass370_0;
}
namespace GlobalNamespace {
struct Simulation_ObjectChangeType;
}
namespace GlobalNamespace {
class Simulation_Server;
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
class IReadOnlyList_1;
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
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct LocalPhysicsMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct PhysicsScene2D;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
class NetworkRunner_CloudConnectionLostHandler;
}
namespace Fusion {
class NetworkRunner_ObjectDelegate;
}
namespace Fusion {
class NetworkRunner_OnBeforeSpawned;
}
namespace Fusion {
class NetworkRunner__DisconnectFromCloud_d__426;
}
namespace Fusion {
class NetworkRunner__GetResumeSnapshotNetworkObjects_d__3;
}
namespace Fusion {
class NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4;
}
namespace Fusion {
class NetworkRunner__JoinSessionLobby_d__423;
}
namespace Fusion {
class NetworkRunner__PushHostMigrationSnapshot_d__2;
}
namespace Fusion {
class NetworkRunner__RunHostMigrationResume_d__11;
}
namespace Fusion {
class NetworkRunner__ShutdownAndBuildResult_d__429;
}
namespace Fusion {
class NetworkRunner__StartGameModeCloud_d__428;
}
namespace Fusion {
class NetworkRunner__StartGameModeSinglePlayer_d__427;
}
namespace Fusion {
class NetworkRunner___c;
}
namespace Fusion {
class NetworkRunner___c__DisplayClass145_0;
}
namespace Fusion {
class NetworkRunner___c__DisplayClass302_0;
}
namespace Fusion {
class NetworkRunner___c__DisplayClass370_1;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkRunner*);
MARK_REF_T(::Fusion::NetworkRunner_CloudConnectionLostHandler*);
MARK_REF_T(::Fusion::NetworkRunner_ObjectDelegate*);
MARK_REF_T(::Fusion::NetworkRunner_OnBeforeSpawned*);
MARK_REF_T(::Fusion::NetworkRunner__DisconnectFromCloud_d__426*);
MARK_REF_T(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*);
MARK_REF_T(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*);
MARK_REF_T(::Fusion::NetworkRunner__JoinSessionLobby_d__423*);
MARK_REF_T(::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2*);
MARK_REF_T(::Fusion::NetworkRunner__RunHostMigrationResume_d__11*);
MARK_REF_T(::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429*);
MARK_REF_T(::Fusion::NetworkRunner__StartGameModeCloud_d__428*);
MARK_REF_T(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427*);
MARK_REF_T(::Fusion::NetworkRunner___c*);
MARK_REF_T(::Fusion::NetworkRunner___c__DisplayClass145_0*);
MARK_REF_T(::Fusion::NetworkRunner___c__DisplayClass302_0*);
MARK_REF_T(::Fusion::NetworkRunner___c__DisplayClass370_1*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner*, "Fusion", "NetworkRunner");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner_CloudConnectionLostHandler*, "Fusion", "NetworkRunner/CloudConnectionLostHandler");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner_ObjectDelegate*, "Fusion", "NetworkRunner/ObjectDelegate");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner_OnBeforeSpawned*, "Fusion", "NetworkRunner/OnBeforeSpawned");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner__DisconnectFromCloud_d__426*, "Fusion", "NetworkRunner/<DisconnectFromCloud>d__426");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*, "Fusion", "NetworkRunner/<GetResumeSnapshotNetworkObjects>d__3");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*, "Fusion", "NetworkRunner/<GetResumeSnapshotNetworkSceneObjects>d__4");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner__JoinSessionLobby_d__423*, "Fusion", "NetworkRunner/<JoinSessionLobby>d__423");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2*, "Fusion", "NetworkRunner/<PushHostMigrationSnapshot>d__2");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner__RunHostMigrationResume_d__11*, "Fusion", "NetworkRunner/<RunHostMigrationResume>d__11");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429*, "Fusion", "NetworkRunner/<ShutdownAndBuildResult>d__429");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner__StartGameModeCloud_d__428*, "Fusion", "NetworkRunner/<StartGameModeCloud>d__428");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427*, "Fusion", "NetworkRunner/<StartGameModeSinglePlayer>d__427");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner___c*, "Fusion", "NetworkRunner/<>c");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner___c__DisplayClass145_0*, "Fusion", "NetworkRunner/<>c__DisplayClass145_0");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner___c__DisplayClass302_0*, "Fusion", "NetworkRunner/<>c__DisplayClass302_0");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunner___c__DisplayClass370_1*, "Fusion", "NetworkRunner/<>c__DisplayClass370_1");
// [AddComponentMenu("Fusion/Network Runner")]
// [DisallowMultipleComponent]
// [HelpURL("https://doc.photonengine.com/fusion/current/manual/prebuilt-components#networkrunner")]
// [ScriptHelp(BackColor = (Fusion.ScriptHeaderBackColor)3)]
// Dependencies Fusion.Behaviour, Fusion.GameMode, Fusion.INetworkInput, Fusion.NetworkBehaviour, Fusion.NetworkRunner::DeferredShutdownParams, Fusion.NetworkRunner::ShutdownFlags, Fusion.NetworkRunner::SimulationPhase, Fusion.NetworkSceneInfo, Fusion.NetworkSceneInfoChangeSource, Fusion.SimulationBehaviour, System.Nullable`1<T>, UnityEngine.Component
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner
class CORDL_TYPE NetworkRunner : public ::Fusion::Behaviour {
public:
// Declarations
using CloudConnectionLostHandler = ::Fusion::NetworkRunner_CloudConnectionLostHandler;

using ObjectDelegate = ::Fusion::NetworkRunner_ObjectDelegate;

using OnBeforeSpawned = ::Fusion::NetworkRunner_OnBeforeSpawned;

using _DisconnectFromCloud_d__426 = ::Fusion::NetworkRunner__DisconnectFromCloud_d__426;

using _GetResumeSnapshotNetworkObjects_d__3 = ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3;

using _GetResumeSnapshotNetworkSceneObjects_d__4 = ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4;

using _JoinSessionLobby_d__423 = ::Fusion::NetworkRunner__JoinSessionLobby_d__423;

using _PushHostMigrationSnapshot_d__2 = ::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2;

using _RunHostMigrationResume_d__11 = ::Fusion::NetworkRunner__RunHostMigrationResume_d__11;

using _ShutdownAndBuildResult_d__429 = ::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429;

using _StartGameModeCloud_d__428 = ::Fusion::NetworkRunner__StartGameModeCloud_d__428;

using _StartGameModeSinglePlayer_d__427 = ::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427;

using __c = ::Fusion::NetworkRunner___c;

using __c__DisplayClass145_0 = ::Fusion::NetworkRunner___c__DisplayClass145_0;

using __c__DisplayClass302_0 = ::Fusion::NetworkRunner___c__DisplayClass302_0;

using __c__DisplayClass370_1 = ::Fusion::NetworkRunner___c__DisplayClass370_1;

using AttachOptions = ::GlobalNamespace::NetworkRunner_AttachOptions;

using BuildTypes = ::GlobalNamespace::NetworkRunner_BuildTypes;

using CreateInstanceResult = ::GlobalNamespace::NetworkRunner_CreateInstanceResult;

using DeferredShutdownParams = ::GlobalNamespace::NetworkRunner_DeferredShutdownParams;

using ShutdownFlags = ::GlobalNamespace::NetworkRunner_ShutdownFlags;

using SimulationPhase = ::GlobalNamespace::NetworkRunner_SimulationPhase;

using SpawnArgs = ::GlobalNamespace::NetworkRunner_SpawnArgs;

using SpawnFlagsInternal = ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal;

using States = ::GlobalNamespace::NetworkRunner_States;

using __c__DisplayClass370_0 = ::GlobalNamespace::NetworkRunner___c__DisplayClass370_0;

 __declspec(property(get=get_ActivePlayers)) ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*  ActivePlayers;

 __declspec(property(get=get_AuthenticationValues)) ::Fusion::Photon::Realtime::AuthenticationValues*  AuthenticationValues;

 __declspec(property(get=get_CanSpawn)) bool  CanSpawn;

/// @brief Field CloudAddressRewriter, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_CloudAddressRewriter, put=__cordl_internal_set_CloudAddressRewriter)) ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*  CloudAddressRewriter;

/// @brief Field CloudConnectionLost, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CloudConnectionLost, put=setStaticF_CloudConnectionLost)) ::Fusion::NetworkRunner_CloudConnectionLostHandler*  CloudConnectionLost;

 __declspec(property(get=get_Config)) ::Fusion::NetworkProjectConfig*  Config;

 __declspec(property(get=get_CurrentConnectionType)) ::Fusion::ConnectionType  CurrentConnectionType;

 __declspec(property(get=get_DeltaTime)) float_t  DeltaTime;

 __declspec(property(get=Fusion_Simulation_ICallbacks_get_CanReceivePlayerJoinLeaveCallbacks)) bool  Fusion_Simulation_ICallbacks_CanReceivePlayerJoinLeaveCallbacks;

 __declspec(property(get=Fusion_Simulation_ICallbacks_get_IsSharedModeMasterClient)) bool  Fusion_Simulation_ICallbacks_IsSharedModeMasterClient;

 __declspec(property(get=Fusion_Simulation_ICallbacks_get_LocalPlayerRef)) ::Fusion::PlayerRef  Fusion_Simulation_ICallbacks_LocalPlayerRef;

 __declspec(property(get=get_GameMode, put=set_GameMode)) ::Fusion::GameMode  GameMode;

 __declspec(property(get=get_IsClient)) bool  IsClient;

 __declspec(property(get=get_IsCloudReady)) bool  IsCloudReady;

 __declspec(property(get=get_IsConnectedToServer)) bool  IsConnectedToServer;

 __declspec(property(get=get_IsFirstTick)) bool  IsFirstTick;

 __declspec(property(get=get_IsForward)) bool  IsForward;

 __declspec(property(get=get_IsInSession)) bool  IsInSession;

 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_IsLastTick)) bool  IsLastTick;

 __declspec(property(get=get_IsPlayer)) bool  IsPlayer;

 __declspec(property(get=get_IsRegularShutdown)) bool  IsRegularShutdown;

 __declspec(property(get=get_IsResimulation)) bool  IsResimulation;

 __declspec(property(get=get_IsResume)) bool  IsResume;

 __declspec(property(get=get_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_IsSceneAuthority)) bool  IsSceneAuthority;

 __declspec(property(get=get_IsSceneManagerBusy)) bool  IsSceneManagerBusy;

 __declspec(property(get=get_IsServer)) bool  IsServer;

 __declspec(property(get=get_IsSharedModeMasterClient)) bool  IsSharedModeMasterClient;

 __declspec(property(get=get_IsShutdown)) bool  IsShutdown;

 __declspec(property(get=get_IsShutdownDeferred)) bool  IsShutdownDeferred;

 __declspec(property(get=get_IsSimulationUpdating)) bool  IsSimulationUpdating;

 __declspec(property(get=get_IsSinglePlayer)) bool  IsSinglePlayer;

 __declspec(property(get=get_IsStarting)) bool  IsStarting;

 __declspec(property(get=get_LagCompensation)) ::UnityW<::Fusion::HitboxManager>  LagCompensation;

/// @brief Field LastConfirmedSnapshotTick, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_LastConfirmedSnapshotTick, put=__cordl_internal_set_LastConfirmedSnapshotTick)) int32_t  LastConfirmedSnapshotTick;

/// @brief Field LastSnapshotTick, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_LastSnapshotTick, put=__cordl_internal_set_LastSnapshotTick)) int32_t  LastSnapshotTick;

 __declspec(property(get=get_LatestServerTick)) ::Fusion::Tick  LatestServerTick;

 __declspec(property(get=get_LobbyInfo, put=set_LobbyInfo)) ::Fusion::LobbyInfo*  LobbyInfo;

 __declspec(property(get=get_LocalAddress)) ::Fusion::Sockets::NetAddress  LocalAddress;

 __declspec(property(get=get_LocalAlpha)) float_t  LocalAlpha;

 __declspec(property(get=get_LocalPlayer)) ::Fusion::PlayerRef  LocalPlayer;

 __declspec(property(get=get_LocalRenderTime)) float_t  LocalRenderTime;

 __declspec(property(get=get_Mode)) ::Fusion::SimulationModes  Mode;

 __declspec(property(get=get_NATType)) ::Fusion::Sockets::Stun::NATType  NATType;

/// @brief Field ObjectAcquired, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ObjectAcquired, put=__cordl_internal_set_ObjectAcquired)) ::Fusion::NetworkRunner_ObjectDelegate*  ObjectAcquired;

 __declspec(property(get=get_ObjectProvider)) ::Fusion::INetworkObjectProvider*  ObjectProvider;

/// @brief Field OnGameStartedInvoked, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_OnGameStartedInvoked, put=__cordl_internal_set_OnGameStartedInvoked)) bool  OnGameStartedInvoked;

 __declspec(property(get=get_OperationsCancellationToken)) ::System::Threading::CancellationToken  OperationsCancellationToken;

/// @brief Field OperationsCancellationTokenSource, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationsCancellationTokenSource, put=__cordl_internal_set_OperationsCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  OperationsCancellationTokenSource;

 __declspec(property(get=get_Prefabs)) ::Fusion::NetworkPrefabTable*  Prefabs;

 __declspec(property(get=get_ProvideInput, put=set_ProvideInput)) bool  ProvideInput;

 __declspec(property(get=get_ReliableDataSendRate, put=set_ReliableDataSendRate)) int32_t  ReliableDataSendRate;

 __declspec(property(get=get_RemoteRenderTime)) float_t  RemoteRenderTime;

 __declspec(property(get=get_SceneManager)) ::Fusion::INetworkSceneManager*  SceneManager;

 __declspec(property(get=get_SessionInfo, put=set_SessionInfo)) ::Fusion::SessionInfo*  SessionInfo;

 __declspec(property(get=get_Simulation)) ::Fusion::Simulation*  Simulation;

 __declspec(property(get=get_SimulationTime)) float_t  SimulationTime;

 __declspec(property(get=get_SimulationUnityScene)) ::UnityEngine::SceneManagement::Scene  SimulationUnityScene;

 __declspec(property(get=get_Stage)) ::Fusion::SimulationStages  Stage;

 __declspec(property(get=get_State)) ::GlobalNamespace::NetworkRunner_States  State;

 __declspec(property(get=get_Tick)) ::Fusion::Tick  Tick;

 __declspec(property(get=get_TickRate)) int32_t  TickRate;

 __declspec(property(get=get_TicksExecuted)) int32_t  TicksExecuted;

 __declspec(property(get=get_Topology)) ::Fusion::Topologies  Topology;

 __declspec(property(get=get_UserId)) ::StringW  UserId;

/// @brief Field <GameMode>k__BackingField, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get__GameMode_k__BackingField, put=__cordl_internal_set__GameMode_k__BackingField)) ::Fusion::GameMode  _GameMode_k__BackingField;

/// @brief Field <LobbyInfo>k__BackingField, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__LobbyInfo_k__BackingField, put=__cordl_internal_set__LobbyInfo_k__BackingField)) ::Fusion::LobbyInfo*  _LobbyInfo_k__BackingField;

/// @brief Field <SessionInfo>k__BackingField, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SessionInfo_k__BackingField, put=__cordl_internal_set__SessionInfo_k__BackingField)) ::Fusion::SessionInfo*  _SessionInfo_k__BackingField;

/// @brief Field _alreadyInitialized, offset 0x1c0, size 0x1 
 __declspec(property(get=__cordl_internal_get__alreadyInitialized, put=__cordl_internal_set__alreadyInitialized)) bool  _alreadyInitialized;

/// @brief Field _attachableInstances, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__attachableInstances, put=__cordl_internal_set__attachableInstances)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::UnityW<::Fusion::NetworkObject>>*  _attachableInstances;

/// @brief Field _behaviourUpdater, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__behaviourUpdater, put=__cordl_internal_set__behaviourUpdater)) ::Fusion::SimulationBehaviourUpdater*  _behaviourUpdater;

/// @brief Field _cachedRegionSummary, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedRegionSummary, put=setStaticF__cachedRegionSummary)) ::StringW  _cachedRegionSummary;

/// @brief Field _callbacks, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__callbacks, put=__cordl_internal_set__callbacks)) ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*  _callbacks;

/// @brief Field _cloudServices, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__cloudServices, put=__cordl_internal_set__cloudServices)) ::Fusion::CloudServices*  _cloudServices;

/// @brief Field _config, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::Fusion::NetworkProjectConfig*  _config;

/// @brief Field _connectionToken, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectionToken, put=__cordl_internal_set__connectionToken)) ::ArrayW<uint8_t>  _connectionToken;

/// @brief Field _deferredShutdownParams, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__deferredShutdownParams, put=__cordl_internal_set__deferredShutdownParams)) ::GlobalNamespace::NetworkRunner_DeferredShutdownParams  _deferredShutdownParams;

/// @brief Field _destroyIdsBuffer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__destroyIdsBuffer, put=__cordl_internal_set__destroyIdsBuffer)) ::System::Collections::Generic::List_1<::Fusion::NetworkId>*  _destroyIdsBuffer;

/// @brief Field _hostSnapshotTempData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hostSnapshotTempData, put=__cordl_internal_set__hostSnapshotTempData)) ::ArrayW<uint8_t>  _hostSnapshotTempData;

/// @brief Field _inactivityGuardPool, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__inactivityGuardPool, put=__cordl_internal_set__inactivityGuardPool)) ::System::Collections::Generic::Stack_1<::UnityW<::Fusion::NetworkObjectInactivityGuard>>*  _inactivityGuardPool;

/// @brief Field _initializeOperation, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__initializeOperation, put=__cordl_internal_set__initializeOperation)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _initializeOperation;

/// @brief Field _instances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instances, put=setStaticF__instances)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*  _instances;

/// @brief Field _lastHostMigrationInfo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastHostMigrationInfo, put=__cordl_internal_set__lastHostMigrationInfo)) ::Fusion::Protocol::HostMigration*  _lastHostMigrationInfo;

/// @brief Field _objectInitializer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectInitializer, put=__cordl_internal_set__objectInitializer)) ::Fusion::INetworkObjectInitializer*  _objectInitializer;

/// @brief Field _objectProvider, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectProvider, put=__cordl_internal_set__objectProvider)) ::Fusion::INetworkObjectProvider*  _objectProvider;

/// @brief Field _onGameStartAction, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__onGameStartAction, put=__cordl_internal_set__onGameStartAction)) ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  _onGameStartAction;

/// @brief Field _provideInput, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get__provideInput, put=__cordl_internal_set__provideInput)) ::System::Nullable_1<bool>  _provideInput;

/// @brief Field _reliableTransfers, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__reliableTransfers, put=__cordl_internal_set__reliableTransfers)) ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*>*  _reliableTransfers;

/// @brief Field _remoteCreateNestedQueue, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__remoteCreateNestedQueue, put=__cordl_internal_set__remoteCreateNestedQueue)) ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  _remoteCreateNestedQueue;

/// @brief Field _remoteCreateQueue, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__remoteCreateQueue, put=__cordl_internal_set__remoteCreateQueue)) ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  _remoteCreateQueue;

/// @brief Field _remoteDestroyQueue, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__remoteDestroyQueue, put=__cordl_internal_set__remoteDestroyQueue)) ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  _remoteDestroyQueue;

/// @brief Field _remotePrefabsWaitingForSpawnedCallback, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__remotePrefabsWaitingForSpawnedCallback, put=__cordl_internal_set__remotePrefabsWaitingForSpawnedCallback)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  _remotePrefabsWaitingForSpawnedCallback;

/// @brief Field _sceneInfoChangeSource, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sceneInfoChangeSource, put=__cordl_internal_set__sceneInfoChangeSource)) ::Fusion::NetworkSceneInfoChangeSource  _sceneInfoChangeSource;

/// @brief Field _sceneInfoInitial, offset 0x128, size 0x34 
 __declspec(property(get=__cordl_internal_get__sceneInfoInitial, put=__cordl_internal_set__sceneInfoInitial)) ::Fusion::NetworkSceneInfo  _sceneInfoInitial;

/// @brief Field _sceneInfoSnapshot, offset 0x160, size 0x34 
 __declspec(property(get=__cordl_internal_get__sceneInfoSnapshot, put=__cordl_internal_set__sceneInfoSnapshot)) ::Fusion::NetworkSceneInfo  _sceneInfoSnapshot;

/// @brief Field _sceneLoadInitialTCS, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneLoadInitialTCS, put=__cordl_internal_set__sceneLoadInitialTCS)) ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  _sceneLoadInitialTCS;

/// @brief Field _sceneManager, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneManager, put=__cordl_internal_set__sceneManager)) ::Fusion::INetworkSceneManager*  _sceneManager;

/// @brief Field _simulateMultiPeerPhysicsScenes, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get__simulateMultiPeerPhysicsScenes, put=__cordl_internal_set__simulateMultiPeerPhysicsScenes)) bool  _simulateMultiPeerPhysicsScenes;

/// @brief Field _simulation, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__simulation, put=__cordl_internal_set__simulation)) ::Fusion::Simulation*  _simulation;

/// @brief Field _simulationPhase, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__simulationPhase, put=__cordl_internal_set__simulationPhase)) ::GlobalNamespace::NetworkRunner_SimulationPhase  _simulationPhase;

/// @brief Field _simulationShutdown, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__simulationShutdown, put=__cordl_internal_set__simulationShutdown)) ::GlobalNamespace::NetworkRunner_ShutdownFlags  _simulationShutdown;

/// @brief Field _spawnQueue, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnQueue, put=__cordl_internal_set__spawnQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::NetworkRunner_SpawnArgs>*  _spawnQueue;

/// @brief Field _spawnedSimBehaviourQueue, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnedSimBehaviourQueue, put=__cordl_internal_set__spawnedSimBehaviourQueue)) ::System::Collections::Generic::Queue_1<::Fusion::ISpawned*>*  _spawnedSimBehaviourQueue;

/// @brief Field _startGameOperation, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__startGameOperation, put=__cordl_internal_set__startGameOperation)) ::Fusion::Async::AsyncOperationHandler_1<::Fusion::ShutdownReason>*  _startGameOperation;

/// @brief Field _ticksExecuted, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__ticksExecuted, put=__cordl_internal_set__ticksExecuted)) int32_t  _ticksExecuted;

/// @brief Field _updater, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__updater, put=__cordl_internal_set__updater)) ::Fusion::INetworkRunnerUpdater*  _updater;

/// @brief Convert operator to "::Fusion::Simulation_ICallbacks"
constexpr operator  ::Fusion::Simulation_ICallbacks*() noexcept;

/// @brief Method AddCallbacks, addr 0x5fb3b48, size 0x178, virtual false, abstract: false, final false
inline void AddCallbacks(/* [ParamArray] */ ::ArrayW<::Fusion::INetworkRunnerCallbacks*>  callbacks) ;

/// @brief Method AddGlobal, addr 0x5fb61e0, size 0xf8, virtual false, abstract: false, final false
inline void AddGlobal(::Fusion::SimulationBehaviour*  instance) ;

/// @brief Method AddInactiveObjectGuard, addr 0x5fb9a40, size 0x244, virtual false, abstract: false, final false
inline void AddInactiveObjectGuard(::Fusion::NetworkObject*  obj) ;

/// @brief Method AddInstance, addr 0x5fb2e14, size 0x124, virtual false, abstract: false, final false
static inline bool AddInstance(::Fusion::NetworkRunner*  runner) ;

/// @brief Method AddPlayerAreaOfInterest, addr 0x5fb8210, size 0x2a8, virtual false, abstract: false, final false
inline void AddPlayerAreaOfInterest(::Fusion::PlayerRef  player, ::UnityEngine::Vector3  center, float_t  radius) ;

/// @brief Method AddSimulationBehaviour, addr 0x5fb2b2c, size 0x2e8, virtual false, abstract: false, final false
inline void AddSimulationBehaviour(::Fusion::SimulationBehaviour*  behaviour) ;

/// @brief Method ApplySpawnArgs, addr 0x5fc4910, size 0x174, virtual false, abstract: false, final false
static inline void ApplySpawnArgs(::Fusion::NetworkObject*  obj, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>  spawnArgs) ;

/// @brief Method Attach, addr 0x5fb68e8, size 0x2cc, virtual false, abstract: false, final false
inline void Attach(::Fusion::NetworkObject*  networkObject, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, bool  allocate, ::System::Nullable_1<bool>  masterClientObjectOverride) ;

/// @brief Method Attach, addr 0x5fb8908, size 0x7d8, virtual false, abstract: false, final false
inline void Attach(::ArrayW<::Fusion::NetworkObject*>  networkObjects, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, bool  allocate, ::System::Nullable_1<bool>  masterClientObjectOverride) ;

/// @brief Method AttachActivatedByUser, addr 0x5fb90e0, size 0x1f8, virtual false, abstract: false, final false
inline void AttachActivatedByUser(::Fusion::NetworkObject*  networkObject) ;

/// @brief Method AttachOptionsToNetworkObjectFlags, addr 0x5fb9f64, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectRuntimeFlags AttachOptionsToNetworkObjectFlags(::GlobalNamespace::NetworkRunner_AttachOptions  options) ;

/// @brief Method Awake, addr 0x5fb4010, size 0xe8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearPlayerAreaOfInterest, addr 0x5fb84b8, size 0x134, virtual false, abstract: false, final false
inline void ClearPlayerAreaOfInterest(::Fusion::PlayerRef  player) ;

/// @brief Method Connect, addr 0x5fb004c, size 0x170, virtual false, abstract: false, final false
inline void Connect(::Fusion::Sockets::NetAddress  address, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId) ;

/// @brief Method ConnectToCloud, addr 0x5fc83dc, size 0x258, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ConnectToCloud(::Fusion::Photon::Realtime::AuthenticationValues*  authentication, ::Fusion::Photon::Realtime::FusionAppSettings*  customAppSettings, ::Fusion::CloudCommunicator*  externalCommunicator, ::System::Threading::CancellationToken  externalCancellationToken, ::System::Nullable_1<bool>  useDefaultCloudPorts, bool  useCachedRegions) ;

/// @brief Method ConsumeInitialSceneInfo, addr 0x5fbc938, size 0x36c, virtual false, abstract: false, final false
inline void ConsumeInitialSceneInfo(bool  isSceneAuthority) ;

/// @brief Method CreateCloudSocket, addr 0x5fb17a0, size 0x11c, virtual false, abstract: false, final false
inline ::Fusion::Sockets::INetSocket* CreateCloudSocket() ;

/// @brief Method DebugOnDestroy, addr 0x5fb41ac, size 0x8c, virtual false, abstract: false, final false
inline void DebugOnDestroy() ;

/// @brief Method DebugOnDisable, addr 0x5fb40fc, size 0x8c, virtual false, abstract: false, final false
inline void DebugOnDisable() ;

/// @brief Method Despawn, addr 0x5fb5c68, size 0x1f0, virtual false, abstract: false, final false
inline void Despawn(::Fusion::NetworkObject*  networkObject) ;

/// @brief Method Destroy, addr 0x5fb5e58, size 0x388, virtual false, abstract: false, final false
inline void Destroy(::Fusion::NetworkObject*  networkObject, ::Fusion::NetworkObjectDestroyFlags  flags) ;

/// @brief Method DestroySingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline void DestroySingleton() ;

/// @brief Method DetachInstance, addr 0x5fb121c, size 0x584, virtual false, abstract: false, final false
inline void DetachInstance(::Fusion::NetworkObject*  obj, bool  destroyedByEngine, bool  hasState) ;

/// @brief Method Disconnect, addr 0x5faff1c, size 0x130, virtual false, abstract: false, final false
inline void Disconnect(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method Disconnect, addr 0x5fafe24, size 0xf8, virtual false, abstract: false, final false
inline void Disconnect(::Fusion::PlayerRef  player, ::ArrayW<uint8_t>  token) ;

/// [AsyncStateMachine(typeof(Fusion.NetworkRunner::<DisconnectFromCloud>d__426))]
/// [DebuggerStepThrough]
/// @brief Method DisconnectFromCloud, addr 0x5fb1108, size 0x114, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DisconnectFromCloud() ;

/// @brief Method EnsureRunnerSceneIsActive, addr 0x5fbc574, size 0x154, virtual false, abstract: false, final false
inline bool EnsureRunnerSceneIsActive(::by_ref<::UnityEngine::SceneManagement::Scene>  previousActiveScene) ;

/// @brief Method Exists, addr 0x5fb5be4, size 0x84, virtual false, abstract: false, final false
inline bool Exists(::Fusion::NetworkId  id) ;

/// @brief Method Exists, addr 0x5fb3380, size 0x74, virtual false, abstract: false, final false
inline bool Exists(::Fusion::NetworkObject*  obj) ;

/// @brief Method FindObject, addr 0x5fb55c4, size 0x1c, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> FindObject(::Fusion::NetworkId  networkId) ;

/// @brief Method FixedUpdate, addr 0x5fba7dc, size 0x58, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method FlagsFromInstance, addr 0x5fb7104, size 0x1cc, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderFlags FlagsFromInstance(::Fusion::NetworkObject*  instance) ;

/// @brief Method FreeObject, addr 0x5fb6854, size 0x94, virtual false, abstract: false, final false
inline void FreeObject(::Fusion::NetworkObject*  obj) ;

/// @brief Method Fusion.Simulation.ICallbacks.ObjectChanged, addr 0x5fbe57c, size 0x12c, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_ObjectChanged(::Fusion::PlayerRef  player, ::Fusion::NetworkObjectMeta*  obj, ::GlobalNamespace::Simulation_ObjectChangeType  change) ;

/// @brief Method Fusion.Simulation.ICallbacks.ObjectEnterAOI, addr 0x5fc2740, size 0x3a8, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_ObjectEnterAOI(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id) ;

/// @brief Method Fusion.Simulation.ICallbacks.ObjectExitAOI, addr 0x5fc2ae8, size 0x3a4, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_ObjectExitAOI(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id) ;

/// @brief Method Fusion.Simulation.ICallbacks.ObjectInputAuthorityChanged, addr 0x5fbdff8, size 0x388, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_ObjectInputAuthorityChanged(::Fusion::NetworkId  id, bool  gained) ;

/// @brief Method Fusion.Simulation.ICallbacks.ObjectIsSimulatedChanged, addr 0x5fbdbf8, size 0x400, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_ObjectIsSimulatedChanged(::Fusion::NetworkId  id, bool  simulated) ;

/// @brief Method Fusion.Simulation.ICallbacks.ObjectStateAuthorityChanged, addr 0x5fbe380, size 0x1fc, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_ObjectStateAuthorityChanged(::Fusion::NetworkId  id, bool  gained) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnAfterAllTicks, addr 0x5fc270c, size 0xc, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnAfterAllTicks(bool  resimulation, int32_t  tickCount) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnAfterClientSidePredictionReset, addr 0x5fc26f4, size 0xc, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnAfterClientSidePredictionReset() ;

/// @brief Method Fusion.Simulation.ICallbacks.OnAfterSimulation, addr 0x5fc26e4, size 0x4, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnAfterSimulation() ;

/// @brief Method Fusion.Simulation.ICallbacks.OnAfterTick, addr 0x5fc2734, size 0xc, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnAfterTick() ;

/// @brief Method Fusion.Simulation.ICallbacks.OnBeforeAllTicks, addr 0x5fc2700, size 0xc, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnBeforeAllTicks(bool  resimulation, int32_t  tickCount) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnBeforeClientSidePredictionReset, addr 0x5fc26e8, size 0xc, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnBeforeClientSidePredictionReset() ;

/// @brief Method Fusion.Simulation.ICallbacks.OnBeforeCopyPreviousState, addr 0x5fc0838, size 0xc, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnBeforeCopyPreviousState() ;

/// @brief Method Fusion.Simulation.ICallbacks.OnBeforeSimulation, addr 0x5fc26d8, size 0xc, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnBeforeSimulation(int32_t  forwardTickCount) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnBeforeTick, addr 0x5fc2718, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnBeforeTick() ;

/// @brief Method Fusion.Simulation.ICallbacks.OnClientStart, addr 0x5fc0948, size 0x20, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnClientStart() ;

/// @brief Method Fusion.Simulation.ICallbacks.OnConnectedToServer, addr 0x5fc2e8c, size 0x1c4, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnConnectedToServer() ;

/// @brief Method Fusion.Simulation.ICallbacks.OnConnectionFailed, addr 0x5fc3228, size 0x364, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnConnectionFailed(::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnConnectionRequest, addr 0x5fc4324, size 0x27c, virtual true, abstract: false, final true
inline ::Fusion::Sockets::OnConnectionRequestReply Fusion_Simulation_ICallbacks_OnConnectionRequest(::Fusion::Sockets::NetAddress  remoteAddress, ::ArrayW<uint8_t>  token) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnDisconnectedFromServer, addr 0x5fc3050, size 0x1d8, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnDisconnectedFromServer(::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnInput, addr 0x5fc0bc4, size 0x26c, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnInput(::Fusion::SimulationInput*  input) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnInputMissing, addr 0x5fc0968, size 0x25c, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnInputMissing(::Fusion::SimulationInput*  input) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnInternalConnectionAttempt, addr 0x5fc45a0, size 0x74, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnInternalConnectionAttempt(int32_t  attempt, int32_t  totalConnectionAttempts, ::by_ref<bool>  shouldChange, ::by_ref<::Fusion::Sockets::NetAddress>  newAddress) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnMessage, addr 0x5fc1000, size 0x16d8, virtual true, abstract: false, final true
inline ::Fusion::SimulationMessageResult Fusion_Simulation_ICallbacks_OnMessage(::Fusion::SimulationMessage*  message) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnReliableData, addr 0x5fc358c, size 0x99c, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnReliableData(::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableId  id, bool  local, ::ArrayW<uint8_t>  dataArray) ;

/// @brief Method Fusion.Simulation.ICallbacks.OnServerStart, addr 0x5fc0940, size 0x8, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnServerStart() ;

/// @brief Method Fusion.Simulation.ICallbacks.OnTick, addr 0x5fc0844, size 0xfc, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_OnTick() ;

/// @brief Method Fusion.Simulation.ICallbacks.PlayerJoined, addr 0x5fc3f28, size 0x1fc, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_PlayerJoined(::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.Simulation.ICallbacks.PlayerLeft, addr 0x5fc4124, size 0x200, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_PlayerLeft(::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.Simulation.ICallbacks.RemoteObjectCreated, addr 0x5fbe6a8, size 0xe0, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_RemoteObjectCreated(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method Fusion.Simulation.ICallbacks.RemoteObjectDestroyed, addr 0x5fbe788, size 0x60, virtual true, abstract: false, final true
inline bool Fusion_Simulation_ICallbacks_RemoteObjectDestroyed(::Fusion::NetworkId  id) ;

/// @brief Method Fusion.Simulation.ICallbacks.UpdateRemotePrefabs, addr 0x5fbe7e8, size 0x134c, virtual true, abstract: false, final true
inline void Fusion_Simulation_ICallbacks_UpdateRemotePrefabs() ;

/// @brief Method Fusion.Simulation.ICallbacks.get_CanReceivePlayerJoinLeaveCallbacks, addr 0x5fbdb34, size 0x30, virtual true, abstract: false, final true
inline bool Fusion_Simulation_ICallbacks_get_CanReceivePlayerJoinLeaveCallbacks() ;

/// @brief Method Fusion.Simulation.ICallbacks.get_IsSharedModeMasterClient, addr 0x5fbdbf4, size 0x4, virtual true, abstract: false, final true
inline bool Fusion_Simulation_ICallbacks_get_IsSharedModeMasterClient() ;

/// @brief Method Fusion.Simulation.ICallbacks.get_LocalPlayerRef, addr 0x5fbdb64, size 0x90, virtual true, abstract: false, final true
inline ::Fusion::PlayerRef Fusion_Simulation_ICallbacks_get_LocalPlayerRef() ;

/// @brief Method GetAllBehaviours, addr 0x5fb3b30, size 0x18, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::Fusion::SimulationBehaviour>> GetAllBehaviours(::System::Type*  type) ;

/// @brief Method GetAllBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline ::System::Collections::Generic::List_1<T>* GetAllBehaviours() ;

/// @brief Method GetAllBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline void GetAllBehaviours(::System::Collections::Generic::List_1<T>*  result) ;

/// @brief Method GetAllNetworkObjects, addr 0x5fb34f8, size 0xd8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* GetAllNetworkObjects() ;

/// @brief Method GetAllNetworkObjects, addr 0x5fb35d0, size 0x250, virtual false, abstract: false, final false
inline void GetAllNetworkObjects(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  result) ;

/// @brief Method GetAreaOfInterestGizmoData, addr 0x5fb5b54, size 0x14, virtual false, abstract: false, final false
inline void GetAreaOfInterestGizmoData(/* [TupleElementNames(new[] { "center", "size", "playerCount", "objectCount" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,int32_t,int32_t>>*  result) ;

/// @brief Method GetAvailableRegions, addr 0x5fb3018, size 0x8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>* GetAvailableRegions(::StringW  appId, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetInputForPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Nullable_1<T> GetInputForPlayer(::Fusion::PlayerRef  player) ;

/// @brief Method GetInstancesEnumerator, addr 0x5fba3b0, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkRunner>> GetInstancesEnumerator() ;

/// @brief Method GetInterfaceListHead, addr 0x5fb2fd8, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::SimulationBehaviourListScope GetInterfaceListHead(::System::Type*  type, int32_t  index, ::by_ref<::Fusion::SimulationBehaviour*>  head) ;

/// @brief Method GetInterfaceListNext, addr 0x5fb3004, size 0x14, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::SimulationBehaviour> GetInterfaceListNext(::Fusion::SimulationBehaviour*  behaviour) ;

/// @brief Method GetInterfaceListPrev, addr 0x5fb2ff0, size 0x14, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::SimulationBehaviour> GetInterfaceListPrev(::Fusion::SimulationBehaviour*  behaviour) ;

/// @brief Method GetInterfaceListsCount, addr 0x5fb2f8c, size 0x4c, virtual false, abstract: false, final false
inline int32_t GetInterfaceListsCount(::System::Type*  type) ;

/// @brief Method GetMemorySnapshot, addr 0x5fb3de8, size 0x18, virtual false, abstract: false, final false
inline void GetMemorySnapshot(::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator  targetAllocator, ::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>  snapshot) ;

/// @brief Method GetNetworkObjectFromResumeSnapshot, addr 0x5fadbcc, size 0x324, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> GetNetworkObjectFromResumeSnapshot(::Fusion::NetworkObjectHeaderPtr  networkObjectPtr, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*  headerList, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*  nestedMapping) ;

/// @brief Method GetObjectsInAreaOfInterestForPlayer, addr 0x5fb5b38, size 0x1c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Fusion::NetworkId>* GetObjectsInAreaOfInterestForPlayer(::Fusion::PlayerRef  player) ;

/// @brief Method GetPhysicsScene, addr 0x5fba5d4, size 0x104, virtual false, abstract: false, final false
inline ::UnityEngine::PhysicsScene GetPhysicsScene() ;

/// @brief Method GetPhysicsScene2D, addr 0x5fba6d8, size 0x104, virtual false, abstract: false, final false
inline ::UnityEngine::PhysicsScene2D GetPhysicsScene2D() ;

/// @brief Method GetPlayerActorId, addr 0x5fb3020, size 0x100, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> GetPlayerActorId(::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerConnectionToken, addr 0x5fb38cc, size 0xec, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetPlayerConnectionToken(::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerConnectionType, addr 0x5fb39b8, size 0x178, virtual false, abstract: false, final false
inline ::Fusion::ConnectionType GetPlayerConnectionType(::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerObject, addr 0x5fb33f4, size 0x1c, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> GetPlayerObject(::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerRtt, addr 0x5fb3820, size 0x24, virtual false, abstract: false, final false
inline double_t GetPlayerRtt(::Fusion::PlayerRef  playerRef) ;

/// @brief Method GetPlayerUserId, addr 0x5fb3120, size 0x130, virtual false, abstract: false, final false
inline ::StringW GetPlayerUserId(::Fusion::PlayerRef  player) ;

/// @brief Method GetRawInputForPlayer, addr 0x5fb536c, size 0xf0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Fusion::NetworkInput> GetRawInputForPlayer(::Fusion::PlayerRef  player) ;

/// [IteratorStateMachine(typeof(Fusion.NetworkRunner::<GetResumeSnapshotNetworkObjects>d__3))]
/// @brief Method GetResumeSnapshotNetworkObjects, addr 0x5fada44, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>* GetResumeSnapshotNetworkObjects() ;

/// [IteratorStateMachine(typeof(Fusion.NetworkRunner::<GetResumeSnapshotNetworkSceneObjects>d__4))]
/// @brief Method GetResumeSnapshotNetworkSceneObjects, addr 0x5fadab8, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>* GetResumeSnapshotNetworkSceneObjects() ;

/// @brief Method GetRpcTargetStatus, addr 0x5fb9f6c, size 0x1c, virtual false, abstract: false, final false
inline ::Fusion::RpcTargetStatus GetRpcTargetStatus(::Fusion::PlayerRef  target) ;

/// @brief Method GetRunnerForGameObject, addr 0x5fbc00c, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::Fusion::NetworkRunner> GetRunnerForGameObject(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetRunnerForScene, addr 0x5fbc07c, size 0x3b4, virtual false, abstract: false, final false
static inline ::UnityW<::Fusion::NetworkRunner> GetRunnerForScene(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method GetSceneInfoRef, addr 0x5fbba6c, size 0x168, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::NetworkSceneInfo> GetSceneInfoRef(bool  allowFallback) ;

/// @brief Method GetSceneRef, addr 0x5fbafd4, size 0xb8, virtual false, abstract: false, final false
inline ::Fusion::SceneRef GetSceneRef(::UnityEngine::GameObject*  gameObj) ;

/// @brief Method GetSceneRef, addr 0x5fbaf1c, size 0xb8, virtual false, abstract: false, final false
inline ::Fusion::SceneRef GetSceneRef(::StringW  sceneNameOrPath) ;

/// @brief Method GetServerSnapshot, addr 0x5faf1e0, size 0xe8, virtual false, abstract: false, final false
inline bool GetServerSnapshot(::by_ref<::ArrayW<uint8_t>>  data, ::by_ref<::Fusion::Tick>  tick, ::by_ref<uint32_t>  idCounter, ::by_ref<int32_t>  length) ;

/// @brief Method GetSingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline T GetSingleton() ;

/// @brief Method HasAnyActiveConnections, addr 0x5fb9f88, size 0x18, virtual false, abstract: false, final false
inline bool HasAnyActiveConnections() ;

/// @brief Method HasSingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline bool HasSingleton() ;

/// @brief Method Initialize, addr 0x5fb1be0, size 0xe6c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* Initialize(::Fusion::NetworkRunnerInitializeArgs  args) ;

/// @brief Method InitializeNetworkObjectAssignRunner, addr 0x5fb6bdc, size 0x528, virtual false, abstract: false, final false
inline void InitializeNetworkObjectAssignRunner(::Fusion::NetworkObject*  instance, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  typeId, bool  isNestedObject) ;

/// @brief Method InitializeNetworkObjectInstance, addr 0x5fb72d0, size 0x584, virtual false, abstract: false, final false
inline void InitializeNetworkObjectInstance(::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkObject*  instance, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::GlobalNamespace::NetworkRunner_AttachOptions  options, ::System::Nullable_1<bool>  masterClientObjectOverride) ;

/// @brief Method InitializeNetworkObjectState, addr 0x5fb7854, size 0x194, virtual false, abstract: false, final false
inline void InitializeNetworkObjectState(::Fusion::NetworkObject*  instance) ;

/// @brief Method InitializeTempNetworkObjectInstance, addr 0x5fae77c, size 0x17c, virtual false, abstract: false, final false
inline void InitializeTempNetworkObjectInstance(::Fusion::NetworkObjectHeader*  header, ::Fusion::NetworkObject*  instance) ;

/// @brief Method InstantiateInRunnerScene, addr 0x5fbc7a0, size 0xe4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> InstantiateInRunnerScene(::UnityEngine::GameObject*  original) ;

/// @brief Method InstantiateInRunnerScene, addr 0x5fbc430, size 0x144, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> InstantiateInRunnerScene(::UnityEngine::GameObject*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InstantiateInRunnerScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T InstantiateInRunnerScene(T  original) ;

/// @brief Method InstantiateInRunnerScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T InstantiateInRunnerScene(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InvokeAfterSpawnedCallback, addr 0x5fb806c, size 0x1a4, virtual false, abstract: false, final false
inline void InvokeAfterSpawnedCallback(::Fusion::NetworkObject*  instance) ;

/// @brief Method InvokeAfterUpdate, addr 0x5fb4e00, size 0xc, virtual false, abstract: false, final false
inline void InvokeAfterUpdate() ;

/// @brief Method InvokeBeforeSpawnedCallbacks, addr 0x5fb79e8, size 0x3e0, virtual false, abstract: false, final false
inline void InvokeBeforeSpawnedCallbacks(::Fusion::NetworkObject*  instance, ::GlobalNamespace::NetworkRunner_AttachOptions  options, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned) ;

/// @brief Method InvokeBeforeUpdate, addr 0x5fb48a4, size 0xc, virtual false, abstract: false, final false
inline void InvokeBeforeUpdate() ;

/// @brief Method InvokeCustomAuthenticationResponse, addr 0x5fc8954, size 0x1d0, virtual false, abstract: false, final false
inline void InvokeCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method InvokeDespawnedCallback, addr 0x5fb65ac, size 0x2a8, virtual false, abstract: false, final false
inline void InvokeDespawnedCallback(::Fusion::NetworkObject*  instance, bool  hasState) ;

/// @brief Method InvokeHostMigration, addr 0x5faea98, size 0x1cc, virtual false, abstract: false, final false
inline void InvokeHostMigration(::Fusion::HostMigrationToken*  migrationToken) ;

/// @brief Method InvokeObjectAcquired, addr 0x5fb6bb4, size 0x28, virtual false, abstract: false, final false
inline void InvokeObjectAcquired(::Fusion::NetworkObject*  instance) ;

/// @brief Method InvokeOnBeforeHitboxRegistration, addr 0x5fb99e4, size 0x5c, virtual false, abstract: false, final false
inline void InvokeOnBeforeHitboxRegistration() ;

/// @brief Method InvokeOnGameStartedCallback, addr 0x5fb1b08, size 0xd8, virtual false, abstract: false, final false
inline void InvokeOnGameStartedCallback() ;

/// @brief Method InvokeSceneLoadDone, addr 0x5fbbd98, size 0x1c4, virtual false, abstract: false, final false
inline void InvokeSceneLoadDone(/* [IsReadOnly] */ ::by_ref<::Fusion::SceneLoadDoneArgs>  info) ;

/// @brief Method InvokeSceneLoadStart, addr 0x5fbbbd4, size 0x1c4, virtual false, abstract: false, final false
inline void InvokeSceneLoadStart(::Fusion::SceneRef  sceneRef) ;

/// @brief Method InvokeSessionListUpdated, addr 0x5fc8784, size 0x1d0, virtual false, abstract: false, final false
inline void InvokeSessionListUpdated(::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method InvokeSpawnedCallback, addr 0x5fb7dc8, size 0x2a4, virtual false, abstract: false, final false
inline void InvokeSpawnedCallback(::Fusion::NetworkObject*  instance) ;

/// @brief Method IsAwakeAtInitialization, addr 0x5fb9fa0, size 0x1c, virtual false, abstract: false, final false
static inline bool IsAwakeAtInitialization(::Fusion::NetworkObject*  obj) ;

/// @brief Method IsInterestedIn, addr 0x5fb85ec, size 0x28, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> IsInterestedIn(::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method IsPlayerValid, addr 0x5fb38b0, size 0x1c, virtual false, abstract: false, final false
inline bool IsPlayerValid(::Fusion::PlayerRef  player) ;

/// @brief Method IsPreexistingAtInitialization, addr 0x5fb9fbc, size 0x1c, virtual false, abstract: false, final false
static inline bool IsPreexistingAtInitialization(::Fusion::NetworkObject*  obj) ;

/// [AsyncStateMachine(typeof(Fusion.NetworkRunner::<JoinSessionLobby>d__423))]
/// [DebuggerStepThrough]
/// @brief Method JoinSessionLobby, addr 0x5fc79f4, size 0x1c0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* JoinSessionLobby(::Fusion::SessionLobby  sessionLobby, ::StringW  lobbyID, ::Fusion::Photon::Realtime::AuthenticationValues*  authentication, ::Fusion::Photon::Realtime::FusionAppSettings*  customAppSettings, ::System::Nullable_1<bool>  useDefaultCloudPorts, ::System::Threading::CancellationToken  cancellationToken, bool  useCachedRegions) ;

/// @brief Method LoadScene, addr 0x5fbb6c8, size 0x64, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode  localPhysicsMode, bool  setActiveOnLoad) ;

/// @brief Method LoadScene, addr 0x5fbb1b0, size 0x38, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  setActiveOnLoad) ;

/// @brief Method LoadScene, addr 0x5fbb72c, size 0x54, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp LoadScene(::Fusion::SceneRef  sceneRef, ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode  localPhysicsMode, bool  setActiveOnLoad) ;

/// @brief Method LoadScene, addr 0x5fbb1e8, size 0x4e0, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp LoadScene(::Fusion::SceneRef  sceneRef, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  setActiveOnLoad) ;

/// @brief Method MakeDontDestroyOnLoad, addr 0x5fbc884, size 0xb4, virtual false, abstract: false, final false
inline void MakeDontDestroyOnLoad(::UnityEngine::GameObject*  obj) ;

/// @brief Method MoveGameObjectToSameScene, addr 0x5fbb158, size 0x58, virtual false, abstract: false, final false
inline bool MoveGameObjectToSameScene(::UnityEngine::GameObject*  gameObj, ::UnityEngine::GameObject*  other) ;

/// @brief Method MoveGameObjectToScene, addr 0x5fbb08c, size 0xcc, virtual false, abstract: false, final false
inline bool MoveGameObjectToScene(::UnityEngine::GameObject*  gameObj, ::Fusion::SceneRef  sceneRef) ;

/// @brief Method MoveToRunnerScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void MoveToRunnerScene(T  component) ;

/// @brief Method MoveToRunnerScene, addr 0x5fbc6c8, size 0xd8, virtual false, abstract: false, final false
inline void MoveToRunnerScene(::UnityEngine::GameObject*  instance, ::System::Nullable_1<::Fusion::SceneRef>  targetSceneRef) ;

/// @brief Method NetworkObjectFlagsToAttachOptions, addr 0x5fb92d8, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetworkRunner_AttachOptions NetworkObjectFlagsToAttachOptions(::Fusion::NetworkObjectRuntimeFlags  flags) ;

static inline ::Fusion::NetworkRunner* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x5fb3e00, size 0x68, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0x5fb4188, size 0x24, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5fb40f8, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnMessageUser, addr 0x5fc0e30, size 0x1d0, virtual false, abstract: false, final false
inline void OnMessageUser(::Fusion::SimulationMessage*  message) ;

/// @brief Method OnRemoteSceneLoadCompleted, addr 0x5fbd964, size 0xe8, virtual false, abstract: false, final false
inline void OnRemoteSceneLoadCompleted(::Fusion::NetworkSceneAsyncOp  asyncOp) ;

/// @brief Method OnRemoteSceneUnloadCompleted, addr 0x5fbda4c, size 0xe8, virtual false, abstract: false, final false
inline void OnRemoteSceneUnloadCompleted(::Fusion::NetworkSceneAsyncOp  asyncOp) ;

/// @brief Method OnRuntimeConfigReady, addr 0x5fb1928, size 0x1e0, virtual false, abstract: false, final false
inline void OnRuntimeConfigReady() ;

/// @brief Method OnValidate, addr 0x5faf4b0, size 0xe0, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ProcessSpawnQueue, addr 0x5fb48b0, size 0x550, virtual false, abstract: false, final false
inline void ProcessSpawnQueue() ;

/// [AsyncStateMachine(typeof(Fusion.NetworkRunner::<PushHostMigrationSnapshot>d__2))]
/// [DebuggerStepThrough]
/// @brief Method PushHostMigrationSnapshot, addr 0x5fad908, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* PushHostMigrationSnapshot() ;

/// @brief Method RegisterNetworkCallbacks, addr 0x5fb0e60, size 0x228, virtual false, abstract: false, final false
inline void RegisterNetworkCallbacks() ;

/// @brief Method RegisterSceneObjects, addr 0x5fb92e0, size 0x6d0, virtual false, abstract: false, final false
inline int32_t RegisterSceneObjects(::Fusion::SceneRef  scene, ::ArrayW<::Fusion::NetworkObject*>  objects, ::Fusion::NetworkSceneLoadId  loadId) ;

/// @brief Method ReleaseStateAuthority, addr 0x5fb5510, size 0xb4, virtual false, abstract: false, final false
inline void ReleaseStateAuthority(::Fusion::NetworkId  id) ;

/// @brief Method RemoveCallbacks, addr 0x5fb3cc0, size 0x128, virtual false, abstract: false, final false
inline void RemoveCallbacks(/* [ParamArray] */ ::ArrayW<::Fusion::INetworkRunnerCallbacks*>  callbacks) ;

/// @brief Method RemoveGlobal, addr 0x5fb62d8, size 0xf8, virtual false, abstract: false, final false
inline void RemoveGlobal(::Fusion::SimulationBehaviour*  instance) ;

/// @brief Method RemoveInstance, addr 0x5fb1088, size 0x80, virtual false, abstract: false, final false
static inline bool RemoveInstance(::Fusion::NetworkRunner*  runner) ;

/// @brief Method RemoveSimulationBehavior, addr 0x5fb63d0, size 0x1dc, virtual false, abstract: false, final false
inline void RemoveSimulationBehavior(::Fusion::SimulationBehaviour*  behaviour) ;

/// @brief Method RenderInternal, addr 0x5fb3e68, size 0x1a8, virtual false, abstract: false, final false
inline void RenderInternal() ;

/// @brief Method RequestStateAuthority, addr 0x5fb545c, size 0xb4, virtual false, abstract: false, final false
inline void RequestStateAuthority(::Fusion::NetworkId  id) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method ResetAllSimulationStatics, addr 0x5fba18c, size 0xac, virtual false, abstract: false, final false
static inline void ResetAllSimulationStatics() ;

/// @brief Method ResetStatics, addr 0x5faf408, size 0x98, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// [IteratorStateMachine(typeof(Fusion.NetworkRunner::<RunHostMigrationResume>d__11))]
/// @brief Method RunHostMigrationResume, addr 0x5fadb30, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RunHostMigrationResume(::Fusion::NetworkRunnerInitializeArgs  args) ;

/// @brief Method SceneInfoSyncSceneManager, addr 0x5fbcff0, size 0x974, virtual false, abstract: false, final false
inline void SceneInfoSyncSceneManager(::Fusion::NetworkSceneInfoChangeSource  changeSource, ::by_ref<::Fusion::NetworkSceneInfo>  sceneInfo, ::by_ref<::Fusion::NetworkSceneInfo>  prevInfo) ;

/// @brief Method SceneInfoUpdate, addr 0x5fbcca4, size 0x34c, virtual false, abstract: false, final false
inline void SceneInfoUpdate() ;

/// @brief Method SendHostMigrationSnapshot, addr 0x5faec64, size 0x38c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* SendHostMigrationSnapshot() ;

/// @brief Method SendReliableDataToPlayer, addr 0x5fb4e0c, size 0x308, virtual false, abstract: false, final false
inline void SendReliableDataToPlayer(::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::ArrayW<uint8_t>  data) ;

/// @brief Method SendReliableDataToServer, addr 0x5fb5114, size 0x1d0, virtual false, abstract: false, final false
inline void SendReliableDataToServer(::Fusion::Sockets::ReliableKey  key, ::ArrayW<uint8_t>  data) ;

/// @brief Method SendRpc, addr 0x5fb3844, size 0x24, virtual false, abstract: false, final false
inline void SendRpc(::Fusion::SimulationMessage*  message) ;

/// @brief Method SendRpc, addr 0x5fb3868, size 0x48, virtual false, abstract: false, final false
inline void SendRpc(::Fusion::SimulationMessage*  message, ::by_ref<::Fusion::RpcSendResult>  info) ;

/// @brief Method SetAreaOfInterestCellSize, addr 0x5fb5a60, size 0xd8, virtual false, abstract: false, final false
inline void SetAreaOfInterestCellSize(int32_t  size) ;

/// @brief Method SetAreaOfInterestGrid, addr 0x5fb5954, size 0x10c, virtual false, abstract: false, final false
inline void SetAreaOfInterestGrid(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method SetBehaviourReplicateTo, addr 0x5fb8854, size 0xb4, virtual false, abstract: false, final false
inline void SetBehaviourReplicateTo(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::PlayerRef  player, bool  replicate) ;

/// @brief Method SetBehaviourReplicateTo, addr 0x5fb87a4, size 0xb0, virtual false, abstract: false, final false
inline void SetBehaviourReplicateTo(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationConnection*  sc, bool  replicate, bool  forceCreate) ;

/// @brief Method SetBehaviourReplicateToAll, addr 0x5fb8614, size 0x190, virtual false, abstract: false, final false
inline void SetBehaviourReplicateToAll(::Fusion::NetworkBehaviour*  behaviour, bool  replicate) ;

/// @brief Method SetHostMigrationBandwidth, addr 0x5fadb2c, size 0x4, virtual false, abstract: false, final false
inline void SetHostMigrationBandwidth(int32_t  bytePerSecond) ;

/// @brief Method SetInitializationDone, addr 0x5fb18bc, size 0x6c, virtual false, abstract: false, final false
inline void SetInitializationDone(::Fusion::NetworkRunnerInitializeArgs  args) ;

/// @brief Method SetIsSimulated, addr 0x5fb57a0, size 0x1b4, virtual false, abstract: false, final false
inline bool SetIsSimulated(::Fusion::NetworkObject*  obj, bool  simulate) ;

/// @brief Method SetMasterClient, addr 0x5fb424c, size 0x1f4, virtual false, abstract: false, final false
inline void SetMasterClient(::Fusion::PlayerRef  player) ;

/// @brief Method SetPlayerAlwaysInterested, addr 0x5fb52e4, size 0x88, virtual false, abstract: false, final false
inline void SetPlayerAlwaysInterested(::Fusion::PlayerRef  player, ::Fusion::NetworkObject*  networkObject, bool  alwaysInterested) ;

/// @brief Method SetPlayerObject, addr 0x5fb3284, size 0xfc, virtual false, abstract: false, final false
inline void SetPlayerObject(::Fusion::PlayerRef  player, ::Fusion::NetworkObject*  networkObject) ;

/// @brief Method SetSimulateMultiPeerPhysics, addr 0x5fba834, size 0x8, virtual false, abstract: false, final false
inline void SetSimulateMultiPeerPhysics(bool  value) ;

/// @brief Method SetupEncryption, addr 0x5fba238, size 0x178, virtual false, abstract: false, final false
inline void SetupEncryption(::Fusion::Encryption::EncryptionToken*  token) ;

/// @brief Method SetupHostMigration, addr 0x5fae8f8, size 0x8, virtual false, abstract: false, final false
inline void SetupHostMigration(::Fusion::Protocol::HostMigration*  hostMigration) ;

/// @brief Method SetupNetworkProjectConfig, addr 0x5fb2a4c, size 0xe0, virtual false, abstract: false, final false
static inline ::Fusion::NetworkProjectConfig* SetupNetworkProjectConfig(::Fusion::NetworkRunnerInitializeArgs  args) ;

/// @brief Method Shutdown, addr 0x5fb01cc, size 0xc94, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Shutdown(bool  destroyGameObject, ::Fusion::ShutdownReason  shutdownReason, bool  forceShutdownProcedure) ;

/// [EditorButton("Shutdown", (Fusion.EditorButtonVisibility)0, 0, false)]
/// @brief Method ShutdownAction, addr 0x5fb01bc, size 0x10, virtual false, abstract: false, final false
inline void ShutdownAction() ;

/// [AsyncStateMachine(typeof(Fusion.NetworkRunner::<ShutdownAndBuildResult>d__429))]
/// [DebuggerStepThrough]
/// @brief Method ShutdownAndBuildResult, addr 0x5fc8634, size 0x150, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* ShutdownAndBuildResult(::System::Exception*  e) ;

/// @brief Method SimulatePhysicsScenes, addr 0x5fba4a4, size 0x130, virtual false, abstract: false, final false
inline void SimulatePhysicsScenes(float_t  fixedDeltaTime) ;

/// @brief Method SinglePlayerContinue, addr 0x5fb2f54, size 0x1c, virtual false, abstract: false, final false
inline void SinglePlayerContinue() ;

/// @brief Method SinglePlayerPause, addr 0x5fb2f38, size 0x1c, virtual false, abstract: false, final false
inline void SinglePlayerPause() ;

/// @brief Method SinglePlayerPause, addr 0x5fb2f70, size 0x1c, virtual false, abstract: false, final false
inline void SinglePlayerPause(bool  paused) ;

/// @brief Method Spawn, addr 0x5fc4da4, size 0x454, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> Spawn(::Fusion::NetworkObject*  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method Spawn, addr 0x5fc4c04, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> Spawn(::UnityEngine::GameObject*  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method Spawn, addr 0x5fc5510, size 0x308, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> Spawn(::Fusion::NetworkObjectGuid  prefabGuid, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method Spawn, addr 0x5fc51f8, size 0x318, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> Spawn(::Fusion::NetworkPrefabRef  prefabRef, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method Spawn, addr 0x5fc5818, size 0x1a4, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> Spawn(::Fusion::NetworkPrefabId  typeId, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline T Spawn(T  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method SpawnAsync, addr 0x5fc6bb0, size 0x450, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnOp SpawnAsync(::Fusion::NetworkObject*  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted) ;

/// @brief Method SpawnAsync, addr 0x5fc69ec, size 0x1c4, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnOp SpawnAsync(::UnityEngine::GameObject*  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted) ;

/// @brief Method SpawnAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline ::Fusion::NetworkSpawnOp SpawnAsync(T  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted) ;

/// @brief Method SpawnAsync, addr 0x5fc7310, size 0x300, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnOp SpawnAsync(::Fusion::NetworkObjectGuid  prefabGuid, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted) ;

/// @brief Method SpawnAsync, addr 0x5fc7000, size 0x310, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnOp SpawnAsync(::Fusion::NetworkPrefabRef  prefabRef, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted) ;

/// @brief Method SpawnAsync, addr 0x5fc7610, size 0x1a4, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnOp SpawnAsync(::Fusion::NetworkPrefabId  typeId, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted) ;

/// @brief Method SpawnInternal, addr 0x5fbfdf0, size 0xa48, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnOp SpawnInternal(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>  args) ;

/// @brief Method StartGame, addr 0x5fc7bb4, size 0x578, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* StartGame(::Fusion::StartGameArgs  args) ;

/// [AsyncStateMachine(typeof(Fusion.NetworkRunner::<StartGameModeCloud>d__428))]
/// [DebuggerStepThrough]
/// @brief Method StartGameModeCloud, addr 0x5fc8284, size 0x158, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* StartGameModeCloud(::Fusion::StartGameArgs  args) ;

/// [AsyncStateMachine(typeof(Fusion.NetworkRunner::<StartGameModeSinglePlayer>d__427))]
/// [DebuggerStepThrough]
/// @brief Method StartGameModeSinglePlayer, addr 0x5fc812c, size 0x158, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* StartGameModeSinglePlayer(::Fusion::StartGameArgs  args) ;

/// @brief Method StartHostMigration, addr 0x5fae900, size 0x198, virtual false, abstract: false, final false
inline void StartHostMigration(::Fusion::Protocol::Snapshot*  snapshot) ;

/// @brief Method TryAcquireInstance, addr 0x5fadef0, size 0x88c, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkRunner_CreateInstanceResult TryAcquireInstance(::Fusion::NetworkObjectTypeId  typeId, ::Fusion::NetworkObjectMeta*  meta, ::by_ref<::Fusion::NetworkObject*>  result, bool  synchronous, bool  dontDestroyOnLoad) ;

/// @brief Method TryFindBehaviour, addr 0x5fb565c, size 0x98, virtual false, abstract: false, final false
inline bool TryFindBehaviour(::Fusion::NetworkBehaviourId  behaviourId, ::by_ref<::Fusion::NetworkBehaviour*>  behaviour) ;

/// @brief Method TryFindBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::NetworkBehaviour*>)
inline bool TryFindBehaviour(::Fusion::NetworkBehaviourId  id, ::by_ref<T>  behaviour) ;

/// @brief Method TryFindObject, addr 0x5fb55e0, size 0x7c, virtual false, abstract: false, final false
inline bool TryFindObject(::Fusion::NetworkId  objectId, ::by_ref<::Fusion::NetworkObject*>  networkObject) ;

/// @brief Method TryGetBehaviourStatistics, addr 0x5fb5ba0, size 0x44, virtual false, abstract: false, final false
inline bool TryGetBehaviourStatistics(::System::Type*  behaviourType, ::by_ref<::Fusion::Statistics::BehaviourStatisticsSnapshot*>  behaviourStatisticsSnapshot) ;

/// @brief Method TryGetFusionStatistics, addr 0x5fb5b68, size 0x38, virtual false, abstract: false, final false
inline bool TryGetFusionStatistics(::by_ref<::Fusion::Statistics::FusionStatisticsManager*>  statisticsManager) ;

/// @brief Method TryGetInputForPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool TryGetInputForPlayer(::Fusion::PlayerRef  player, ::by_ref<T>  input) ;

/// @brief Method TryGetInterfaceWithDefaultType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline bool TryGetInterfaceWithDefaultType(::StringW  defaultTypeName, ::by_ref<T>  result) ;

/// @brief Method TryGetNetworkedBehaviourFromNetworkedObjectRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::NetworkBehaviour*>)
inline T TryGetNetworkedBehaviourFromNetworkedObjectRef(::Fusion::NetworkId  networkId) ;

/// @brief Method TryGetNetworkedBehaviourId, addr 0x5fb5744, size 0x5c, virtual false, abstract: false, final false
inline ::Fusion::NetworkBehaviourId TryGetNetworkedBehaviourId(::Fusion::NetworkBehaviour*  behaviour) ;

/// @brief Method TryGetObjectRefFromNetworkedBehaviour, addr 0x5fb56f4, size 0x50, virtual false, abstract: false, final false
inline ::Fusion::NetworkId TryGetObjectRefFromNetworkedBehaviour(::Fusion::NetworkBehaviour*  behaviour) ;

/// @brief Method TryGetPhysicsInfo, addr 0x5fba83c, size 0xb8, virtual false, abstract: false, final false
inline bool TryGetPhysicsInfo(::by_ref<::Fusion::NetworkPhysicsInfo>  info) ;

/// @brief Method TryGetPlayerObject, addr 0x5fb3410, size 0xe8, virtual false, abstract: false, final false
inline bool TryGetPlayerObject(::Fusion::PlayerRef  player, ::by_ref<::Fusion::NetworkObject*>  networkObject) ;

/// @brief Method TryGetPrettyRunnerName, addr 0x5fb9fd8, size 0x1b4, virtual false, abstract: false, final false
static inline bool TryGetPrettyRunnerName(::System::Text::StringBuilder*  output, ::Fusion::NetworkRunner*  runner) ;

/// @brief Method TryGetSceneInfo, addr 0x5fbaac0, size 0x8, virtual false, abstract: false, final false
inline bool TryGetSceneInfo(::by_ref<::Fusion::NetworkSceneInfo>  sceneInfo) ;

/// @brief Method TryGetSceneInfo, addr 0x5fbaac8, size 0x120, virtual false, abstract: false, final false
inline bool TryGetSceneInfo(::by_ref<::Fusion::NetworkSceneInfo>  sceneInfo, bool  allowFallback) ;

/// @brief Method TrySetPhysicsInfo, addr 0x5fba8f4, size 0x10c, virtual false, abstract: false, final false
inline bool TrySetPhysicsInfo(::Fusion::NetworkPhysicsInfo  info) ;

/// @brief Method TrySpawn, addr 0x5fc5b64, size 0x4ec, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnStatus TrySpawn(::Fusion::NetworkObject*  prefab, ::by_ref<::Fusion::NetworkObject*>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method TrySpawn, addr 0x5fc59bc, size 0x1a8, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnStatus TrySpawn(::UnityEngine::GameObject*  prefab, ::by_ref<::Fusion::NetworkObject*>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method TrySpawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline ::Fusion::NetworkSpawnStatus TrySpawn(T  prefab, ::by_ref<T>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method TrySpawn, addr 0x5fc6408, size 0x3a8, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnStatus TrySpawn(::Fusion::NetworkObjectGuid  prefabGuid, ::by_ref<::Fusion::NetworkObject*>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method TrySpawn, addr 0x5fc6050, size 0x3b8, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnStatus TrySpawn(::Fusion::NetworkPrefabRef  prefabRef, ::by_ref<::Fusion::NetworkObject*>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method TrySpawn, addr 0x5fc67b0, size 0x23c, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnStatus TrySpawn(::Fusion::NetworkPrefabId  typeId, ::by_ref<::Fusion::NetworkObject*>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags) ;

/// @brief Method UnityPreInitialize, addr 0x5fb9c84, size 0x2e0, virtual false, abstract: false, final false
inline void UnityPreInitialize(::Fusion::NetworkObjectMeta*  meta, ::GlobalNamespace::NetworkRunner_AttachOptions  options) ;

/// @brief Method UnloadScene, addr 0x5fbb780, size 0x20, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp UnloadScene(::StringW  sceneName) ;

/// @brief Method UnloadScene, addr 0x5fbb7a0, size 0x2cc, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp UnloadScene(::Fusion::SceneRef  sceneRef) ;

/// @brief Method Update, addr 0x5fb4238, size 0x14, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateInternal, addr 0x5fb4488, size 0x41c, virtual false, abstract: false, final false
inline void UpdateInternal(double_t  dt) ;

/// @brief Method ValidateSceneName, addr 0x5fbabe8, size 0x1dc, virtual false, abstract: false, final false
inline ::Fusion::SceneRef ValidateSceneName(::StringW  sceneName) ;

/// @brief Method ValidateSceneOp, addr 0x5fbae8c, size 0x90, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp ValidateSceneOp(::Fusion::NetworkSceneAsyncOp  op) ;

/// @brief Method ValidateSceneRef, addr 0x5fbadc4, size 0xc8, virtual false, abstract: false, final false
inline ::Fusion::SceneRef ValidateSceneRef(::Fusion::SceneRef  sceneRef) ;

/// [CompilerGenerated]
/// @brief Method <Fusion.Simulation.ICallbacks.UpdateRemotePrefabs>g__InstanceAcquired|337_0, addr 0x5fbfb34, size 0x2bc, virtual false, abstract: false, final false
inline void _Fusion_Simulation_ICallbacks_UpdateRemotePrefabs_g__InstanceAcquired_337_0(::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkObject*  instance) ;

/// [CompilerGenerated]
/// @brief Method <RunHostMigrationResume>b__11_0, addr 0x5fc8f78, size 0x18, virtual false, abstract: false, final false
inline bool _RunHostMigrationResume_b__11_0() ;

/// [CompilerGenerated]
/// @brief Method <SceneInfoSyncSceneManager>b__322_0, addr 0x5fc90ec, size 0x4, virtual false, abstract: false, final false
inline void _SceneInfoSyncSceneManager_b__322_0(::Fusion::NetworkSceneAsyncOp  op) ;

/// [CompilerGenerated]
/// @brief Method <SceneInfoSyncSceneManager>b__322_1, addr 0x5fc90f0, size 0x2c0, virtual false, abstract: false, final false
inline void _SceneInfoSyncSceneManager_b__322_1(::Fusion::NetworkSceneAsyncOp  op) ;

/// [CompilerGenerated]
/// @brief Method <SendHostMigrationSnapshot>b__17_0, addr 0x5fc8f90, size 0xb0, virtual false, abstract: false, final false
inline bool _SendHostMigrationSnapshot_b__17_0() ;

/// [CompilerGenerated]
/// @brief Method <SpawnInternal>g__CheckIdOrGetNewId|370_0, addr 0x5fc4a84, size 0xf0, virtual false, abstract: false, final false
inline ::Fusion::NetworkId _SpawnInternal_g__CheckIdOrGetNewId_370_0(::Fusion::NetworkObject*  obj, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <SpawnInternal>g__Complete|370_2, addr 0x5fc4b74, size 0x90, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnOp _SpawnInternal_g__Complete_370_2(::Fusion::NetworkObject*  instance, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <SpawnInternal>g__Failed|370_1, addr 0x5fc4668, size 0x80, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnOp _SpawnInternal_g__Failed_370_1(::Fusion::NetworkSpawnStatus  status, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <SpawnInternal>g__Incomplete|370_3, addr 0x5fc46e8, size 0x228, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnOp _SpawnInternal_g__Incomplete_370_3(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>  spawnArgs, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <UnloadScene>b__303_0, addr 0x5fc9040, size 0xac, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp _UnloadScene_b__303_0(::Fusion::SceneRef  x) ;

constexpr ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>* const& __cordl_internal_get_CloudAddressRewriter() const;

constexpr ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*& __cordl_internal_get_CloudAddressRewriter() ;

constexpr int32_t const& __cordl_internal_get_LastConfirmedSnapshotTick() const;

constexpr int32_t& __cordl_internal_get_LastConfirmedSnapshotTick() ;

constexpr int32_t const& __cordl_internal_get_LastSnapshotTick() const;

constexpr int32_t& __cordl_internal_get_LastSnapshotTick() ;

constexpr ::Fusion::NetworkRunner_ObjectDelegate* const& __cordl_internal_get_ObjectAcquired() const;

constexpr ::Fusion::NetworkRunner_ObjectDelegate*& __cordl_internal_get_ObjectAcquired() ;

constexpr bool const& __cordl_internal_get_OnGameStartedInvoked() const;

constexpr bool& __cordl_internal_get_OnGameStartedInvoked() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_OperationsCancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_OperationsCancellationTokenSource() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get__GameMode_k__BackingField() const;

constexpr ::Fusion::GameMode& __cordl_internal_get__GameMode_k__BackingField() ;

constexpr ::Fusion::LobbyInfo* const& __cordl_internal_get__LobbyInfo_k__BackingField() const;

constexpr ::Fusion::LobbyInfo*& __cordl_internal_get__LobbyInfo_k__BackingField() ;

constexpr ::Fusion::SessionInfo* const& __cordl_internal_get__SessionInfo_k__BackingField() const;

constexpr ::Fusion::SessionInfo*& __cordl_internal_get__SessionInfo_k__BackingField() ;

constexpr bool const& __cordl_internal_get__alreadyInitialized() const;

constexpr bool& __cordl_internal_get__alreadyInitialized() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::UnityW<::Fusion::NetworkObject>>* const& __cordl_internal_get__attachableInstances() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::UnityW<::Fusion::NetworkObject>>*& __cordl_internal_get__attachableInstances() ;

constexpr ::Fusion::SimulationBehaviourUpdater* const& __cordl_internal_get__behaviourUpdater() const;

constexpr ::Fusion::SimulationBehaviourUpdater*& __cordl_internal_get__behaviourUpdater() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>* const& __cordl_internal_get__callbacks() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*& __cordl_internal_get__callbacks() ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get__cloudServices() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get__cloudServices() ;

constexpr ::Fusion::NetworkProjectConfig* const& __cordl_internal_get__config() const;

constexpr ::Fusion::NetworkProjectConfig*& __cordl_internal_get__config() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__connectionToken() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__connectionToken() ;

constexpr ::GlobalNamespace::NetworkRunner_DeferredShutdownParams const& __cordl_internal_get__deferredShutdownParams() const;

constexpr ::GlobalNamespace::NetworkRunner_DeferredShutdownParams& __cordl_internal_get__deferredShutdownParams() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::NetworkId>* const& __cordl_internal_get__destroyIdsBuffer() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::NetworkId>*& __cordl_internal_get__destroyIdsBuffer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__hostSnapshotTempData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__hostSnapshotTempData() ;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::Fusion::NetworkObjectInactivityGuard>>* const& __cordl_internal_get__inactivityGuardPool() const;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::Fusion::NetworkObjectInactivityGuard>>*& __cordl_internal_get__inactivityGuardPool() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__initializeOperation() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__initializeOperation() ;

constexpr ::Fusion::Protocol::HostMigration* const& __cordl_internal_get__lastHostMigrationInfo() const;

constexpr ::Fusion::Protocol::HostMigration*& __cordl_internal_get__lastHostMigrationInfo() ;

constexpr ::Fusion::INetworkObjectInitializer* const& __cordl_internal_get__objectInitializer() const;

constexpr ::Fusion::INetworkObjectInitializer*& __cordl_internal_get__objectInitializer() ;

constexpr ::Fusion::INetworkObjectProvider* const& __cordl_internal_get__objectProvider() const;

constexpr ::Fusion::INetworkObjectProvider*& __cordl_internal_get__objectProvider() ;

constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* const& __cordl_internal_get__onGameStartAction() const;

constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*& __cordl_internal_get__onGameStartAction() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__provideInput() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__provideInput() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*>* const& __cordl_internal_get__reliableTransfers() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*>*& __cordl_internal_get__reliableTransfers() ;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>* const& __cordl_internal_get__remoteCreateNestedQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*& __cordl_internal_get__remoteCreateNestedQueue() ;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>* const& __cordl_internal_get__remoteCreateQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*& __cordl_internal_get__remoteCreateQueue() ;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>* const& __cordl_internal_get__remoteDestroyQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*& __cordl_internal_get__remoteDestroyQueue() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* const& __cordl_internal_get__remotePrefabsWaitingForSpawnedCallback() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*& __cordl_internal_get__remotePrefabsWaitingForSpawnedCallback() ;

constexpr ::Fusion::NetworkSceneInfoChangeSource const& __cordl_internal_get__sceneInfoChangeSource() const;

constexpr ::Fusion::NetworkSceneInfoChangeSource& __cordl_internal_get__sceneInfoChangeSource() ;

constexpr ::Fusion::NetworkSceneInfo const& __cordl_internal_get__sceneInfoInitial() const;

constexpr ::Fusion::NetworkSceneInfo& __cordl_internal_get__sceneInfoInitial() ;

constexpr ::Fusion::NetworkSceneInfo const& __cordl_internal_get__sceneInfoSnapshot() const;

constexpr ::Fusion::NetworkSceneInfo& __cordl_internal_get__sceneInfoSnapshot() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* const& __cordl_internal_get__sceneLoadInitialTCS() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& __cordl_internal_get__sceneLoadInitialTCS() ;

constexpr ::Fusion::INetworkSceneManager* const& __cordl_internal_get__sceneManager() const;

constexpr ::Fusion::INetworkSceneManager*& __cordl_internal_get__sceneManager() ;

constexpr bool const& __cordl_internal_get__simulateMultiPeerPhysicsScenes() const;

constexpr bool& __cordl_internal_get__simulateMultiPeerPhysicsScenes() ;

constexpr ::Fusion::Simulation* const& __cordl_internal_get__simulation() const;

constexpr ::Fusion::Simulation*& __cordl_internal_get__simulation() ;

constexpr ::GlobalNamespace::NetworkRunner_SimulationPhase const& __cordl_internal_get__simulationPhase() const;

constexpr ::GlobalNamespace::NetworkRunner_SimulationPhase& __cordl_internal_get__simulationPhase() ;

constexpr ::GlobalNamespace::NetworkRunner_ShutdownFlags const& __cordl_internal_get__simulationShutdown() const;

constexpr ::GlobalNamespace::NetworkRunner_ShutdownFlags& __cordl_internal_get__simulationShutdown() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::NetworkRunner_SpawnArgs>* const& __cordl_internal_get__spawnQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::NetworkRunner_SpawnArgs>*& __cordl_internal_get__spawnQueue() ;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::ISpawned*>* const& __cordl_internal_get__spawnedSimBehaviourQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::ISpawned*>*& __cordl_internal_get__spawnedSimBehaviourQueue() ;

constexpr ::Fusion::Async::AsyncOperationHandler_1<::Fusion::ShutdownReason>* const& __cordl_internal_get__startGameOperation() const;

constexpr ::Fusion::Async::AsyncOperationHandler_1<::Fusion::ShutdownReason>*& __cordl_internal_get__startGameOperation() ;

constexpr int32_t const& __cordl_internal_get__ticksExecuted() const;

constexpr int32_t& __cordl_internal_get__ticksExecuted() ;

constexpr ::Fusion::INetworkRunnerUpdater* const& __cordl_internal_get__updater() const;

constexpr ::Fusion::INetworkRunnerUpdater*& __cordl_internal_get__updater() ;

constexpr void __cordl_internal_set_CloudAddressRewriter(::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*  value) ;

constexpr void __cordl_internal_set_LastConfirmedSnapshotTick(int32_t  value) ;

constexpr void __cordl_internal_set_LastSnapshotTick(int32_t  value) ;

constexpr void __cordl_internal_set_ObjectAcquired(::Fusion::NetworkRunner_ObjectDelegate*  value) ;

constexpr void __cordl_internal_set_OnGameStartedInvoked(bool  value) ;

constexpr void __cordl_internal_set_OperationsCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__GameMode_k__BackingField(::Fusion::GameMode  value) ;

constexpr void __cordl_internal_set__LobbyInfo_k__BackingField(::Fusion::LobbyInfo*  value) ;

constexpr void __cordl_internal_set__SessionInfo_k__BackingField(::Fusion::SessionInfo*  value) ;

constexpr void __cordl_internal_set__alreadyInitialized(bool  value) ;

constexpr void __cordl_internal_set__attachableInstances(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::UnityW<::Fusion::NetworkObject>>*  value) ;

constexpr void __cordl_internal_set__behaviourUpdater(::Fusion::SimulationBehaviourUpdater*  value) ;

constexpr void __cordl_internal_set__callbacks(::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*  value) ;

constexpr void __cordl_internal_set__cloudServices(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set__config(::Fusion::NetworkProjectConfig*  value) ;

constexpr void __cordl_internal_set__connectionToken(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__deferredShutdownParams(::GlobalNamespace::NetworkRunner_DeferredShutdownParams  value) ;

constexpr void __cordl_internal_set__destroyIdsBuffer(::System::Collections::Generic::List_1<::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__hostSnapshotTempData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__inactivityGuardPool(::System::Collections::Generic::Stack_1<::UnityW<::Fusion::NetworkObjectInactivityGuard>>*  value) ;

constexpr void __cordl_internal_set__initializeOperation(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__lastHostMigrationInfo(::Fusion::Protocol::HostMigration*  value) ;

constexpr void __cordl_internal_set__objectInitializer(::Fusion::INetworkObjectInitializer*  value) ;

constexpr void __cordl_internal_set__objectProvider(::Fusion::INetworkObjectProvider*  value) ;

constexpr void __cordl_internal_set__onGameStartAction(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

constexpr void __cordl_internal_set__provideInput(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__reliableTransfers(::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*>*  value) ;

constexpr void __cordl_internal_set__remoteCreateNestedQueue(::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__remoteCreateQueue(::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__remoteDestroyQueue(::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__remotePrefabsWaitingForSpawnedCallback(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  value) ;

constexpr void __cordl_internal_set__sceneInfoChangeSource(::Fusion::NetworkSceneInfoChangeSource  value) ;

constexpr void __cordl_internal_set__sceneInfoInitial(::Fusion::NetworkSceneInfo  value) ;

constexpr void __cordl_internal_set__sceneInfoSnapshot(::Fusion::NetworkSceneInfo  value) ;

constexpr void __cordl_internal_set__sceneLoadInitialTCS(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__sceneManager(::Fusion::INetworkSceneManager*  value) ;

constexpr void __cordl_internal_set__simulateMultiPeerPhysicsScenes(bool  value) ;

constexpr void __cordl_internal_set__simulation(::Fusion::Simulation*  value) ;

constexpr void __cordl_internal_set__simulationPhase(::GlobalNamespace::NetworkRunner_SimulationPhase  value) ;

constexpr void __cordl_internal_set__simulationShutdown(::GlobalNamespace::NetworkRunner_ShutdownFlags  value) ;

constexpr void __cordl_internal_set__spawnQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::NetworkRunner_SpawnArgs>*  value) ;

constexpr void __cordl_internal_set__spawnedSimBehaviourQueue(::System::Collections::Generic::Queue_1<::Fusion::ISpawned*>*  value) ;

constexpr void __cordl_internal_set__startGameOperation(::Fusion::Async::AsyncOperationHandler_1<::Fusion::ShutdownReason>*  value) ;

constexpr void __cordl_internal_set__ticksExecuted(int32_t  value) ;

constexpr void __cordl_internal_set__updater(::Fusion::INetworkRunnerUpdater*  value) ;

/// @brief Method .ctor, addr 0x5fc8b24, size 0x398, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_ObjectAcquired, addr 0x5faf2d0, size 0x9c, virtual false, abstract: false, final false
inline void add_ObjectAcquired(::Fusion::NetworkRunner_ObjectDelegate*  value) ;

static inline ::Fusion::NetworkRunner_CloudConnectionLostHandler* getStaticF_CloudConnectionLost() ;

static inline ::StringW getStaticF__cachedRegionSummary() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>* getStaticF__instances() ;

/// @brief Method get_ActivePlayers, addr 0x5fafbb4, size 0xb4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* get_ActivePlayers() ;

/// @brief Method get_AuthenticationValues, addr 0x5fc7834, size 0x34, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::AuthenticationValues* get_AuthenticationValues() ;

/// @brief Method get_BuildType, addr 0x5faf2c8, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetworkRunner_BuildTypes get_BuildType() ;

/// @brief Method get_CanSpawn, addr 0x5fc4614, size 0x54, virtual false, abstract: false, final false
inline bool get_CanSpawn() ;

/// @brief Method get_Config, addr 0x5fafb8c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkProjectConfig* get_Config() ;

/// @brief Method get_CurrentConnectionType, addr 0x5fc78a8, size 0x138, virtual false, abstract: false, final false
inline ::Fusion::ConnectionType get_CurrentConnectionType() ;

/// @brief Method get_DeltaTime, addr 0x5faf694, size 0x18, virtual false, abstract: false, final false
inline float_t get_DeltaTime() ;

/// [CompilerGenerated]
/// @brief Method get_GameMode, addr 0x5fc7868, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::GameMode get_GameMode() ;

/// @brief Method get_Instances, addr 0x5fba44c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::Fusion::NetworkRunner>>* get_Instances() ;

/// @brief Method get_IsClient, addr 0x5faf9b4, size 0x14, virtual false, abstract: false, final false
inline bool get_IsClient() ;

/// @brief Method get_IsCloudReady, addr 0x5faf094, size 0x80, virtual false, abstract: false, final false
inline bool get_IsCloudReady() ;

/// @brief Method get_IsConnectedToServer, addr 0x5faf9c8, size 0xa4, virtual false, abstract: false, final false
inline bool get_IsConnectedToServer() ;

/// @brief Method get_IsFirstTick, addr 0x5fafab4, size 0x20, virtual false, abstract: false, final false
inline bool get_IsFirstTick() ;

/// @brief Method get_IsForward, addr 0x5fafad4, size 0x14, virtual false, abstract: false, final false
inline bool get_IsForward() ;

/// @brief Method get_IsInSession, addr 0x5fc77b4, size 0x80, virtual false, abstract: false, final false
inline bool get_IsInSession() ;

/// @brief Method get_IsInitialized, addr 0x5faf004, size 0x90, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_IsLastTick, addr 0x5fafa94, size 0x20, virtual false, abstract: false, final false
inline bool get_IsLastTick() ;

/// @brief Method get_IsPlayer, addr 0x5fafa6c, size 0x14, virtual false, abstract: false, final false
inline bool get_IsPlayer() ;

/// @brief Method get_IsRegularShutdown, addr 0x5faf93c, size 0xc, virtual false, abstract: false, final false
inline bool get_IsRegularShutdown() ;

/// @brief Method get_IsResimulation, addr 0x5fafae8, size 0x20, virtual false, abstract: false, final false
inline bool get_IsResimulation() ;

/// @brief Method get_IsResume, addr 0x5fad89c, size 0x6c, virtual false, abstract: false, final false
inline bool get_IsResume() ;

/// @brief Method get_IsRunning, addr 0x5faf910, size 0x14, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

/// @brief Method get_IsSceneAuthority, addr 0x5fb99b0, size 0x34, virtual false, abstract: false, final false
inline bool get_IsSceneAuthority() ;

/// @brief Method get_IsSceneManagerBusy, addr 0x5fbaa00, size 0xc0, virtual false, abstract: false, final false
inline bool get_IsSceneManagerBusy() ;

/// @brief Method get_IsServer, addr 0x5faeff0, size 0x14, virtual false, abstract: false, final false
inline bool get_IsServer() ;

/// @brief Method get_IsSharedModeMasterClient, addr 0x5fb4440, size 0x48, virtual false, abstract: false, final false
inline bool get_IsSharedModeMasterClient() ;

/// @brief Method get_IsShutdown, addr 0x5faf924, size 0x10, virtual false, abstract: false, final false
inline bool get_IsShutdown() ;

/// @brief Method get_IsShutdownDeferred, addr 0x5faf934, size 0x8, virtual false, abstract: false, final false
inline bool get_IsShutdownDeferred() ;

/// @brief Method get_IsSimulationUpdating, addr 0x5faf4a0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsSimulationUpdating() ;

/// @brief Method get_IsSinglePlayer, addr 0x5fafa80, size 0x14, virtual false, abstract: false, final false
inline bool get_IsSinglePlayer() ;

/// @brief Method get_IsStarting, addr 0x5faf97c, size 0x38, virtual false, abstract: false, final false
inline bool get_IsStarting() ;

/// @brief Method get_LagCompensation, addr 0x5fafdb0, size 0x74, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::HitboxManager> get_LagCompensation() ;

/// @brief Method get_LatestServerTick, addr 0x5faf960, size 0x1c, virtual false, abstract: false, final false
inline ::Fusion::Tick get_LatestServerTick() ;

/// [CompilerGenerated]
/// @brief Method get_LobbyInfo, addr 0x5fc7890, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::LobbyInfo* get_LobbyInfo() ;

/// @brief Method get_LocalAddress, addr 0x5fafd20, size 0x88, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetAddress get_LocalAddress() ;

/// @brief Method get_LocalAlpha, addr 0x5faf948, size 0x18, virtual false, abstract: false, final false
inline float_t get_LocalAlpha() ;

/// @brief Method get_LocalPlayer, addr 0x5fafb58, size 0x1c, virtual false, abstract: false, final false
inline ::Fusion::PlayerRef get_LocalPlayer() ;

/// @brief Method get_LocalRenderTime, addr 0x5faf6d4, size 0x180, virtual false, abstract: false, final false
inline float_t get_LocalRenderTime() ;

/// @brief Method get_Mode, addr 0x5faf664, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::SimulationModes get_Mode() ;

/// @brief Method get_NATType, addr 0x5fc79e0, size 0x14, virtual false, abstract: false, final false
inline ::Fusion::Sockets::Stun::NATType get_NATType() ;

/// @brief Method get_ObjectProvider, addr 0x5fafc68, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::INetworkObjectProvider* get_ObjectProvider() ;

/// @brief Method get_OperationsCancellationToken, addr 0x5faf114, size 0xcc, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken get_OperationsCancellationToken() ;

/// @brief Method get_Prefabs, addr 0x5fafb94, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::NetworkPrefabTable* get_Prefabs() ;

/// @brief Method get_ProvideInput, addr 0x5faf590, size 0x3c, virtual false, abstract: false, final false
inline bool get_ProvideInput() ;

/// @brief Method get_ReliableDataSendRate, addr 0x5fafc70, size 0x14, virtual false, abstract: false, final false
inline int32_t get_ReliableDataSendRate() ;

/// @brief Method get_RemoteRenderTime, addr 0x5faf854, size 0xbc, virtual false, abstract: false, final false
inline float_t get_RemoteRenderTime() ;

/// @brief Method get_SceneManager, addr 0x5fafda8, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::INetworkSceneManager* get_SceneManager() ;

/// [CompilerGenerated]
/// @brief Method get_SessionInfo, addr 0x5fc7878, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::SessionInfo* get_SessionInfo() ;

/// @brief Method get_Simulation, addr 0x5faf65c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Simulation* get_Simulation() ;

/// @brief Method get_SimulationTime, addr 0x5faf6ac, size 0x28, virtual false, abstract: false, final false
inline float_t get_SimulationTime() ;

/// @brief Method get_SimulationUnityScene, addr 0x5fbbf5c, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::Scene get_SimulationUnityScene() ;

/// @brief Method get_Stage, addr 0x5faf67c, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::SimulationStages get_Stage() ;

/// @brief Method get_State, addr 0x5fafb1c, size 0x3c, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkRunner_States get_State() ;

/// @brief Method get_Tick, addr 0x5fafb74, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::Tick get_Tick() ;

/// @brief Method get_TickRate, addr 0x5fafb08, size 0x14, virtual false, abstract: false, final false
inline int32_t get_TickRate() ;

/// @brief Method get_TicksExecuted, addr 0x5fafbac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TicksExecuted() ;

/// @brief Method get_Topology, addr 0x5faf634, size 0x28, virtual false, abstract: false, final false
inline ::Fusion::Topologies get_Topology() ;

/// @brief Method get_UserId, addr 0x5fb3250, size 0x34, virtual false, abstract: false, final false
inline ::StringW get_UserId() ;

/// @brief Convert to "::Fusion::Simulation_ICallbacks"
constexpr ::Fusion::Simulation_ICallbacks* i___Fusion__Simulation_ICallbacks() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_ObjectAcquired, addr 0x5faf36c, size 0x9c, virtual false, abstract: false, final false
inline void remove_ObjectAcquired(::Fusion::NetworkRunner_ObjectDelegate*  value) ;

static inline void setStaticF_CloudConnectionLost(::Fusion::NetworkRunner_CloudConnectionLostHandler*  value) ;

static inline void setStaticF__cachedRegionSummary(::StringW  value) ;

static inline void setStaticF__instances(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_GameMode, addr 0x5fc7870, size 0x8, virtual false, abstract: false, final false
inline void set_GameMode(::Fusion::GameMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_LobbyInfo, addr 0x5fc7898, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyInfo(::Fusion::LobbyInfo*  value) ;

/// @brief Method set_ProvideInput, addr 0x5faf5cc, size 0x68, virtual false, abstract: false, final false
inline void set_ProvideInput(bool  value) ;

/// @brief Method set_ReliableDataSendRate, addr 0x5fafc84, size 0x9c, virtual false, abstract: false, final false
inline void set_ReliableDataSendRate(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SessionInfo, addr 0x5fc7880, size 0x10, virtual false, abstract: false, final false
inline void set_SessionInfo(::Fusion::SessionInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner(NetworkRunner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner(NetworkRunner const& ) = delete;

/// @brief Field DefaultSetActiveOnLoad offset 0xffffffff size 0x1
static constexpr bool  DefaultSetActiveOnLoad{false};

/// @brief Field HostSnapshotTransferDataSize offset 0xffffffff size 0x4
static constexpr int32_t  HostSnapshotTransferDataSize{static_cast<int32_t>(0x1000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19226};

/// @brief Field _lastHostMigrationInfo, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Protocol::HostMigration*  ____lastHostMigrationInfo;

/// @brief Field _hostSnapshotTempData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____hostSnapshotTempData;

/// @brief Field LastSnapshotTick, offset: 0x30, size: 0x4, def value: None
 int32_t  ___LastSnapshotTick;

/// @brief Field LastConfirmedSnapshotTick, offset: 0x34, size: 0x4, def value: None
 int32_t  ___LastConfirmedSnapshotTick;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field ObjectAcquired, offset: 0x38, size: 0x8, def value: None
 ::Fusion::NetworkRunner_ObjectDelegate*  ___ObjectAcquired;

/// @brief Field _deferredShutdownParams, offset: 0x40, size: 0xc, def value: None
 ::GlobalNamespace::NetworkRunner_DeferredShutdownParams  ____deferredShutdownParams;

/// @brief Field _simulation, offset: 0x50, size: 0x8, def value: None
 ::Fusion::Simulation*  ____simulation;

/// @brief Field _simulationPhase, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::NetworkRunner_SimulationPhase  ____simulationPhase;

/// @brief Field _simulationShutdown, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::NetworkRunner_ShutdownFlags  ____simulationShutdown;

/// @brief Field _behaviourUpdater, offset: 0x60, size: 0x8, def value: None
 ::Fusion::SimulationBehaviourUpdater*  ____behaviourUpdater;

/// @brief Field _callbacks, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*  ____callbacks;

/// @brief Field _destroyIdsBuffer, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::NetworkId>*  ____destroyIdsBuffer;

/// @brief Field _spawnQueue, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::NetworkRunner_SpawnArgs>*  ____spawnQueue;

/// @brief Field _initializeOperation, offset: 0x80, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____initializeOperation;

/// @brief Field OnGameStartedInvoked, offset: 0x88, size: 0x1, def value: None
 bool  ___OnGameStartedInvoked;

/// @brief Field _spawnedSimBehaviourQueue, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Fusion::ISpawned*>*  ____spawnedSimBehaviourQueue;

/// @brief Field _config, offset: 0x98, size: 0x8, def value: None
 ::Fusion::NetworkProjectConfig*  ____config;

/// @brief Field _ticksExecuted, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____ticksExecuted;

/// @brief Field _updater, offset: 0xa8, size: 0x8, def value: None
 ::Fusion::INetworkRunnerUpdater*  ____updater;

/// @brief Field _objectInitializer, offset: 0xb0, size: 0x8, def value: None
 ::Fusion::INetworkObjectInitializer*  ____objectInitializer;

/// @brief Field _objectProvider, offset: 0xb8, size: 0x8, def value: None
 ::Fusion::INetworkObjectProvider*  ____objectProvider;

/// @brief Field _connectionToken, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____connectionToken;

/// @brief Field _attachableInstances, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::UnityW<::Fusion::NetworkObject>>*  ____attachableInstances;

/// @brief Field _provideInput, offset: 0xd0, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____provideInput;

/// @brief Field OperationsCancellationTokenSource, offset: 0xe0, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___OperationsCancellationTokenSource;

/// @brief Field _remotePrefabsWaitingForSpawnedCallback, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  ____remotePrefabsWaitingForSpawnedCallback;

/// @brief Field _remoteCreateQueue, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  ____remoteCreateQueue;

/// @brief Field _remoteCreateNestedQueue, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  ____remoteCreateNestedQueue;

/// @brief Field _remoteDestroyQueue, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  ____remoteDestroyQueue;

/// @brief Field _onGameStartAction, offset: 0x108, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  ____onGameStartAction;

/// @brief Field _inactivityGuardPool, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::UnityW<::Fusion::NetworkObjectInactivityGuard>>*  ____inactivityGuardPool;

/// @brief Field _simulateMultiPeerPhysicsScenes, offset: 0x118, size: 0x1, def value: None
 bool  ____simulateMultiPeerPhysicsScenes;

/// @brief Field _sceneManager, offset: 0x120, size: 0x8, def value: None
 ::Fusion::INetworkSceneManager*  ____sceneManager;

/// @brief Field _sceneInfoInitial, offset: 0x128, size: 0x34, def value: None
 ::Fusion::NetworkSceneInfo  ____sceneInfoInitial;

/// @brief Field _sceneInfoChangeSource, offset: 0x15c, size: 0x4, def value: None
 ::Fusion::NetworkSceneInfoChangeSource  ____sceneInfoChangeSource;

/// @brief Field _sceneInfoSnapshot, offset: 0x160, size: 0x34, def value: None
 ::Fusion::NetworkSceneInfo  ____sceneInfoSnapshot;

/// @brief Field _sceneLoadInitialTCS, offset: 0x198, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  ____sceneLoadInitialTCS;

/// @brief Field _reliableTransfers, offset: 0x1a0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*>*  ____reliableTransfers;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <GameMode>k__BackingField, offset: 0x1a8, size: 0x4, def value: None
 ::Fusion::GameMode  ____GameMode_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SessionInfo>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
 ::Fusion::SessionInfo*  ____SessionInfo_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <LobbyInfo>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
 ::Fusion::LobbyInfo*  ____LobbyInfo_k__BackingField;

/// @brief Field _alreadyInitialized, offset: 0x1c0, size: 0x1, def value: None
 bool  ____alreadyInitialized;

/// @brief Field CloudAddressRewriter, offset: 0x1c8, size: 0x8, def value: None
 ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*  ___CloudAddressRewriter;

/// @brief Field _startGameOperation, offset: 0x1d0, size: 0x8, def value: None
 ::Fusion::Async::AsyncOperationHandler_1<::Fusion::ShutdownReason>*  ____startGameOperation;

/// @brief Field _cloudServices, offset: 0x1d8, size: 0x8, def value: None
 ::Fusion::CloudServices*  ____cloudServices;

/// @brief Size padding 0x1d8 - 0x1e0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner, ____lastHostMigrationInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____hostSnapshotTempData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ___LastSnapshotTick) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ___LastConfirmedSnapshotTick) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ___ObjectAcquired) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____deferredShutdownParams) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____simulation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____simulationPhase) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____simulationShutdown) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____behaviourUpdater) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____callbacks) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____destroyIdsBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____spawnQueue) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____initializeOperation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ___OnGameStartedInvoked) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____spawnedSimBehaviourQueue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____config) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____ticksExecuted) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____updater) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____objectInitializer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____objectProvider) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____connectionToken) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____attachableInstances) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____provideInput) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ___OperationsCancellationTokenSource) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____remotePrefabsWaitingForSpawnedCallback) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____remoteCreateQueue) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____remoteCreateNestedQueue) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____remoteDestroyQueue) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____onGameStartAction) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____inactivityGuardPool) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____simulateMultiPeerPhysicsScenes) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____sceneManager) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____sceneInfoInitial) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____sceneInfoChangeSource) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____sceneInfoSnapshot) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____sceneLoadInitialTCS) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____reliableTransfers) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____GameMode_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____SessionInfo_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____LobbyInfo_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____alreadyInitialized) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ___CloudAddressRewriter) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____startGameOperation) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner, ____cloudServices) == 0x1d8, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner) == 0x1d8, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkRunnerInitializeArgs, Fusion.ShutdownReason, Fusion.StartGameArgs, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<StartGameModeSinglePlayer>d__427
class CORDL_TYPE NetworkRunner__StartGameModeSinglePlayer_d__427 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field <>s__1, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::System::Object*  __s__1;

/// @brief Field <>s__2, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) int32_t  __s__2;

/// @brief Field <>s__5, offset 0x26c, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__5, put=__cordl_internal_set___s__5)) ::Fusion::ShutdownReason  __s__5;

/// @brief Field <>s__7, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__7, put=__cordl_internal_set___s__7)) ::Fusion::StartGameResult*  __s__7;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  __t__builder;

/// @brief Field <>u__1, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__2, put=__cordl_internal_set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>  __u__2;

/// @brief Field <>u__3, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__3, put=__cordl_internal_set___u__3)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  __u__3;

/// @brief Field <e>5__6, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get__e_5__6, put=__cordl_internal_set__e_5__6)) ::System::Exception*  _e_5__6;

/// @brief Field <result>5__4, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get__result_5__4, put=__cordl_internal_set__result_5__4)) ::Fusion::ShutdownReason  _result_5__4;

/// @brief Field <runnerArgs>5__3, offset 0x188, size 0xe0 
 __declspec(property(get=__cordl_internal_get__runnerArgs_5__3, put=__cordl_internal_set__runnerArgs_5__3)) ::Fusion::NetworkRunnerInitializeArgs  _runnerArgs_5__3;

/// @brief Field args, offset 0x30, size 0x140 
 __declspec(property(get=__cordl_internal_get_args, put=__cordl_internal_set_args)) ::Fusion::StartGameArgs  args;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5fd6ba0, size 0xac0, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5fd7660, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr ::System::Object* const& __cordl_internal_get___s__1() const;

constexpr ::System::Object*& __cordl_internal_get___s__1() ;

constexpr int32_t const& __cordl_internal_get___s__2() const;

constexpr int32_t& __cordl_internal_get___s__2() ;

constexpr ::Fusion::ShutdownReason const& __cordl_internal_get___s__5() const;

constexpr ::Fusion::ShutdownReason& __cordl_internal_get___s__5() ;

constexpr ::Fusion::StartGameResult* const& __cordl_internal_get___s__7() const;

constexpr ::Fusion::StartGameResult*& __cordl_internal_get___s__7() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __cordl_internal_get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason> const& __cordl_internal_get___u__2() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>& __cordl_internal_get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*> const& __cordl_internal_get___u__3() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>& __cordl_internal_get___u__3() ;

constexpr ::System::Exception* const& __cordl_internal_get__e_5__6() const;

constexpr ::System::Exception*& __cordl_internal_get__e_5__6() ;

constexpr ::Fusion::ShutdownReason const& __cordl_internal_get__result_5__4() const;

constexpr ::Fusion::ShutdownReason& __cordl_internal_get__result_5__4() ;

constexpr ::Fusion::NetworkRunnerInitializeArgs const& __cordl_internal_get__runnerArgs_5__3() const;

constexpr ::Fusion::NetworkRunnerInitializeArgs& __cordl_internal_get__runnerArgs_5__3() ;

constexpr ::Fusion::StartGameArgs const& __cordl_internal_get_args() const;

constexpr ::Fusion::StartGameArgs& __cordl_internal_get_args() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set___s__1(::System::Object*  value) ;

constexpr void __cordl_internal_set___s__2(int32_t  value) ;

constexpr void __cordl_internal_set___s__5(::Fusion::ShutdownReason  value) ;

constexpr void __cordl_internal_set___s__7(::Fusion::StartGameResult*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr void __cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>  value) ;

constexpr void __cordl_internal_set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  value) ;

constexpr void __cordl_internal_set__e_5__6(::System::Exception*  value) ;

constexpr void __cordl_internal_set__result_5__4(::Fusion::ShutdownReason  value) ;

constexpr void __cordl_internal_set__runnerArgs_5__3(::Fusion::NetworkRunnerInitializeArgs  value) ;

constexpr void __cordl_internal_set_args(::Fusion::StartGameArgs  value) ;

/// @brief Method .ctor, addr 0x5fd6b98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner__StartGameModeSinglePlayer_d__427() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__StartGameModeSinglePlayer_d__427", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner__StartGameModeSinglePlayer_d__427(NetworkRunner__StartGameModeSinglePlayer_d__427 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__StartGameModeSinglePlayer_d__427", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner__StartGameModeSinglePlayer_d__427(NetworkRunner__StartGameModeSinglePlayer_d__427 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19225};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  _____t__builder;

/// @brief Field args, offset: 0x30, size: 0x140, def value: None
 ::Fusion::StartGameArgs  ___args;

/// @brief Field <>4__this, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

/// @brief Field <>s__1, offset: 0x178, size: 0x8, def value: None
 ::System::Object*  _____s__1;

/// @brief Field <>s__2, offset: 0x180, size: 0x4, def value: None
 int32_t  _____s__2;

/// @brief Field <runnerArgs>5__3, offset: 0x188, size: 0xe0, def value: None
 ::Fusion::NetworkRunnerInitializeArgs  ____runnerArgs_5__3;

/// @brief Field <result>5__4, offset: 0x268, size: 0x4, def value: None
 ::Fusion::ShutdownReason  ____result_5__4;

/// @brief Field <>s__5, offset: 0x26c, size: 0x4, def value: None
 ::Fusion::ShutdownReason  _____s__5;

/// @brief Field <e>5__6, offset: 0x270, size: 0x8, def value: None
 ::System::Exception*  ____e_5__6;

/// @brief Field <>s__7, offset: 0x278, size: 0x8, def value: None
 ::Fusion::StartGameResult*  _____s__7;

/// @brief Field <>u__1, offset: 0x280, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  _____u__1;

/// @brief Field <>u__2, offset: 0x288, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>  _____u__2;

/// @brief Field <>u__3, offset: 0x290, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  _____u__3;

/// @brief Size padding 0x2a8 - 0x298 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, ___args) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, _____4__this) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, _____s__1) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, _____s__2) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, ____runnerArgs_5__3) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, ____result_5__4) == 0x268, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, _____s__5) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, ____e_5__6) == 0x270, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, _____s__7) == 0x278, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, _____u__1) == 0x280, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, _____u__2) == 0x288, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427, _____u__3) == 0x290, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427) == 0x2a8, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.GameMode, Fusion.ShutdownReason, Fusion.SimulationModes, Fusion.StartGameArgs, Fusion.TickRate::Selection, System.Nullable`1<T>, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<StartGameModeCloud>d__428
class CORDL_TYPE NetworkRunner__StartGameModeCloud_d__428 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field <>s__10, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__10, put=__cordl_internal_set___s__10)) ::Fusion::ShutdownReason  __s__10;

/// @brief Field <>s__12, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__12, put=__cordl_internal_set___s__12)) ::Fusion::StartGameResult*  __s__12;

/// @brief Field <>s__2, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) ::Fusion::GameMode  __s__2;

/// @brief Field <>s__3, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__3, put=__cordl_internal_set___s__3)) ::System::Object*  __s__3;

/// @brief Field <>s__4, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) int32_t  __s__4;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  __t__builder;

/// @brief Field <>u__1, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__2, put=__cordl_internal_set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>  __u__2;

/// @brief Field <>u__3, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__3, put=__cordl_internal_set___u__3)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>  __u__3;

/// @brief Field <>u__4, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__4, put=__cordl_internal_set___u__4)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  __u__4;

/// @brief Field <configTickRate>5__7, offset 0x1a4, size 0x10 
 __declspec(property(get=__cordl_internal_get__configTickRate_5__7, put=__cordl_internal_set__configTickRate_5__7)) ::GlobalNamespace::TickRate_Selection  _configTickRate_5__7;

/// @brief Field <customPropertiesSize>5__6, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get__customPropertiesSize_5__6, put=__cordl_internal_set__customPropertiesSize_5__6)) int32_t  _customPropertiesSize_5__6;

/// @brief Field <e>5__11, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__e_5__11, put=__cordl_internal_set__e_5__11)) ::System::Exception*  _e_5__11;

/// @brief Field <result>5__5, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get__result_5__5, put=__cordl_internal_set__result_5__5)) ::Fusion::ShutdownReason  _result_5__5;

/// @brief Field <sharedModeResolved>5__9, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sharedModeResolved_5__9, put=__cordl_internal_set__sharedModeResolved_5__9)) ::StringW  _sharedModeResolved_5__9;

/// @brief Field <sharedModeTickRate>5__8, offset 0x1b4, size 0x10 
 __declspec(property(get=__cordl_internal_get__sharedModeTickRate_5__8, put=__cordl_internal_set__sharedModeTickRate_5__8)) ::GlobalNamespace::TickRate_Selection  _sharedModeTickRate_5__8;

/// @brief Field <simulationMode>5__1, offset 0x178, size 0x10 
 __declspec(property(get=__cordl_internal_get__simulationMode_5__1, put=__cordl_internal_set__simulationMode_5__1)) ::System::Nullable_1<::Fusion::SimulationModes>  _simulationMode_5__1;

/// @brief Field args, offset 0x30, size 0x140 
 __declspec(property(get=__cordl_internal_get_args, put=__cordl_internal_set_args)) ::Fusion::StartGameArgs  args;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5fd5198, size 0x19fc, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::NetworkRunner__StartGameModeCloud_d__428* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5fd6b94, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr ::Fusion::ShutdownReason const& __cordl_internal_get___s__10() const;

constexpr ::Fusion::ShutdownReason& __cordl_internal_get___s__10() ;

constexpr ::Fusion::StartGameResult* const& __cordl_internal_get___s__12() const;

constexpr ::Fusion::StartGameResult*& __cordl_internal_get___s__12() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get___s__2() const;

constexpr ::Fusion::GameMode& __cordl_internal_get___s__2() ;

constexpr ::System::Object* const& __cordl_internal_get___s__3() const;

constexpr ::System::Object*& __cordl_internal_get___s__3() ;

constexpr int32_t const& __cordl_internal_get___s__4() const;

constexpr int32_t& __cordl_internal_get___s__4() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t> const& __cordl_internal_get___u__2() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>& __cordl_internal_get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason> const& __cordl_internal_get___u__3() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>& __cordl_internal_get___u__3() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*> const& __cordl_internal_get___u__4() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>& __cordl_internal_get___u__4() ;

constexpr ::GlobalNamespace::TickRate_Selection const& __cordl_internal_get__configTickRate_5__7() const;

constexpr ::GlobalNamespace::TickRate_Selection& __cordl_internal_get__configTickRate_5__7() ;

constexpr int32_t const& __cordl_internal_get__customPropertiesSize_5__6() const;

constexpr int32_t& __cordl_internal_get__customPropertiesSize_5__6() ;

constexpr ::System::Exception* const& __cordl_internal_get__e_5__11() const;

constexpr ::System::Exception*& __cordl_internal_get__e_5__11() ;

constexpr ::Fusion::ShutdownReason const& __cordl_internal_get__result_5__5() const;

constexpr ::Fusion::ShutdownReason& __cordl_internal_get__result_5__5() ;

constexpr ::StringW const& __cordl_internal_get__sharedModeResolved_5__9() const;

constexpr ::StringW& __cordl_internal_get__sharedModeResolved_5__9() ;

constexpr ::GlobalNamespace::TickRate_Selection const& __cordl_internal_get__sharedModeTickRate_5__8() const;

constexpr ::GlobalNamespace::TickRate_Selection& __cordl_internal_get__sharedModeTickRate_5__8() ;

constexpr ::System::Nullable_1<::Fusion::SimulationModes> const& __cordl_internal_get__simulationMode_5__1() const;

constexpr ::System::Nullable_1<::Fusion::SimulationModes>& __cordl_internal_get__simulationMode_5__1() ;

constexpr ::Fusion::StartGameArgs const& __cordl_internal_get_args() const;

constexpr ::Fusion::StartGameArgs& __cordl_internal_get_args() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set___s__10(::Fusion::ShutdownReason  value) ;

constexpr void __cordl_internal_set___s__12(::Fusion::StartGameResult*  value) ;

constexpr void __cordl_internal_set___s__2(::Fusion::GameMode  value) ;

constexpr void __cordl_internal_set___s__3(::System::Object*  value) ;

constexpr void __cordl_internal_set___s__4(int32_t  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>  value) ;

constexpr void __cordl_internal_set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>  value) ;

constexpr void __cordl_internal_set___u__4(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  value) ;

constexpr void __cordl_internal_set__configTickRate_5__7(::GlobalNamespace::TickRate_Selection  value) ;

constexpr void __cordl_internal_set__customPropertiesSize_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__e_5__11(::System::Exception*  value) ;

constexpr void __cordl_internal_set__result_5__5(::Fusion::ShutdownReason  value) ;

constexpr void __cordl_internal_set__sharedModeResolved_5__9(::StringW  value) ;

constexpr void __cordl_internal_set__sharedModeTickRate_5__8(::GlobalNamespace::TickRate_Selection  value) ;

constexpr void __cordl_internal_set__simulationMode_5__1(::System::Nullable_1<::Fusion::SimulationModes>  value) ;

constexpr void __cordl_internal_set_args(::Fusion::StartGameArgs  value) ;

/// @brief Method .ctor, addr 0x5fd5190, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner__StartGameModeCloud_d__428() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__StartGameModeCloud_d__428", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner__StartGameModeCloud_d__428(NetworkRunner__StartGameModeCloud_d__428 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__StartGameModeCloud_d__428", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner__StartGameModeCloud_d__428(NetworkRunner__StartGameModeCloud_d__428 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19224};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  _____t__builder;

/// @brief Field args, offset: 0x30, size: 0x140, def value: None
 ::Fusion::StartGameArgs  ___args;

/// @brief Field <>4__this, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

/// @brief Field <simulationMode>5__1, offset: 0x178, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::SimulationModes>  ____simulationMode_5__1;

/// @brief Field <>s__2, offset: 0x188, size: 0x4, def value: None
 ::Fusion::GameMode  _____s__2;

/// @brief Field <>s__3, offset: 0x190, size: 0x8, def value: None
 ::System::Object*  _____s__3;

/// @brief Field <>s__4, offset: 0x198, size: 0x4, def value: None
 int32_t  _____s__4;

/// @brief Field <result>5__5, offset: 0x19c, size: 0x4, def value: None
 ::Fusion::ShutdownReason  ____result_5__5;

/// @brief Field <customPropertiesSize>5__6, offset: 0x1a0, size: 0x4, def value: None
 int32_t  ____customPropertiesSize_5__6;

/// @brief Field <configTickRate>5__7, offset: 0x1a4, size: 0x10, def value: None
 ::GlobalNamespace::TickRate_Selection  ____configTickRate_5__7;

/// @brief Field <sharedModeTickRate>5__8, offset: 0x1b4, size: 0x10, def value: None
 ::GlobalNamespace::TickRate_Selection  ____sharedModeTickRate_5__8;

/// @brief Field <sharedModeResolved>5__9, offset: 0x1c8, size: 0x8, def value: None
 ::StringW  ____sharedModeResolved_5__9;

/// @brief Field <>s__10, offset: 0x1d0, size: 0x4, def value: None
 ::Fusion::ShutdownReason  _____s__10;

/// @brief Field <e>5__11, offset: 0x1d8, size: 0x8, def value: None
 ::System::Exception*  ____e_5__11;

/// @brief Field <>s__12, offset: 0x1e0, size: 0x8, def value: None
 ::Fusion::StartGameResult*  _____s__12;

/// @brief Field <>u__1, offset: 0x1e8, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

/// @brief Field <>u__2, offset: 0x1f0, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>  _____u__2;

/// @brief Field <>u__3, offset: 0x1f8, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>  _____u__3;

/// @brief Size padding 0x1f8 - 0x208 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field <>u__4, offset: 0x200, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  _____u__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, ___args) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____4__this) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, ____simulationMode_5__1) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____s__2) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____s__3) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____s__4) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, ____result_5__5) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, ____customPropertiesSize_5__6) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, ____configTickRate_5__7) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, ____sharedModeTickRate_5__8) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, ____sharedModeResolved_5__9) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____s__10) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, ____e_5__11) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____s__12) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____u__1) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____u__2) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____u__3) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__StartGameModeCloud_d__428, _____u__4) == 0x200, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner__StartGameModeCloud_d__428) == 0x1f8, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<ShutdownAndBuildResult>d__429
class CORDL_TYPE NetworkRunner__ShutdownAndBuildResult_d__429 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  __t__builder;

/// @brief Field <>u__1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <result>5__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__result_5__1, put=__cordl_internal_set__result_5__1)) ::Fusion::StartGameResult*  _result_5__1;

/// @brief Field e, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_e, put=__cordl_internal_set_e)) ::System::Exception*  e;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5fd4be0, size 0x300, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5fd518c, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::Fusion::StartGameResult* const& __cordl_internal_get__result_5__1() const;

constexpr ::Fusion::StartGameResult*& __cordl_internal_get__result_5__1() ;

constexpr ::System::Exception* const& __cordl_internal_get_e() const;

constexpr ::System::Exception*& __cordl_internal_get_e() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set__result_5__1(::Fusion::StartGameResult*  value) ;

constexpr void __cordl_internal_set_e(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x5fd4bd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner__ShutdownAndBuildResult_d__429() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__ShutdownAndBuildResult_d__429", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner__ShutdownAndBuildResult_d__429(NetworkRunner__ShutdownAndBuildResult_d__429 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__ShutdownAndBuildResult_d__429", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner__ShutdownAndBuildResult_d__429(NetworkRunner__ShutdownAndBuildResult_d__429 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19223};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  _____t__builder;

/// @brief Field e, offset: 0x30, size: 0x8, def value: None
 ::System::Exception*  ___e;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

/// @brief Field <result>5__1, offset: 0x40, size: 0x8, def value: None
 ::Fusion::StartGameResult*  ____result_5__1;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429, ___e) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429, ____result_5__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429, _____u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429) == 0x50, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkRunnerInitializeArgs, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<RunHostMigrationResume>d__11
class CORDL_TYPE NetworkRunner__RunHostMigrationResume_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field <server>5__1, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__server_5__1, put=__cordl_internal_set__server_5__1)) ::GlobalNamespace::Simulation_Server*  _server_5__1;

/// @brief Field args, offset 0x20, size 0xe0 
 __declspec(property(get=__cordl_internal_get_args, put=__cordl_internal_set_args)) ::Fusion::NetworkRunnerInitializeArgs  args;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5fd4954, size 0x23c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::NetworkRunner__RunHostMigrationResume_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5fd4b90, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fd4b98, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fd4bd0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5fd492c, size 0x28, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Simulation_Server* const& __cordl_internal_get__server_5__1() const;

constexpr ::GlobalNamespace::Simulation_Server*& __cordl_internal_get__server_5__1() ;

constexpr ::Fusion::NetworkRunnerInitializeArgs const& __cordl_internal_get_args() const;

constexpr ::Fusion::NetworkRunnerInitializeArgs& __cordl_internal_get_args() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set__server_5__1(::GlobalNamespace::Simulation_Server*  value) ;

constexpr void __cordl_internal_set_args(::Fusion::NetworkRunnerInitializeArgs  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5fd4904, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner__RunHostMigrationResume_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__RunHostMigrationResume_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner__RunHostMigrationResume_d__11(NetworkRunner__RunHostMigrationResume_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__RunHostMigrationResume_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner__RunHostMigrationResume_d__11(NetworkRunner__RunHostMigrationResume_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19222};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field args, offset: 0x20, size: 0xe0, def value: None
 ::Fusion::NetworkRunnerInitializeArgs  ___args;

/// @brief Field <>4__this, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

/// @brief Field <server>5__1, offset: 0x108, size: 0x8, def value: None
 ::GlobalNamespace::Simulation_Server*  ____server_5__1;

/// @brief Size padding 0x128 - 0x110 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner__RunHostMigrationResume_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__RunHostMigrationResume_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__RunHostMigrationResume_d__11, ___args) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__RunHostMigrationResume_d__11, _____4__this) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__RunHostMigrationResume_d__11, ____server_5__1) == 0x108, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner__RunHostMigrationResume_d__11) == 0x128, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<PushHostMigrationSnapshot>d__2
class CORDL_TYPE NetworkRunner__PushHostMigrationSnapshot_d__2 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field <>s__1, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) bool  __s__1;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>u__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5fd45ec, size 0x314, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5fd4900, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get___s__1() const;

constexpr bool& __cordl_internal_get___s__1() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __cordl_internal_get___u__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set___s__1(bool  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

/// @brief Method .ctor, addr 0x5fd45e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner__PushHostMigrationSnapshot_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__PushHostMigrationSnapshot_d__2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner__PushHostMigrationSnapshot_d__2(NetworkRunner__PushHostMigrationSnapshot_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__PushHostMigrationSnapshot_d__2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner__PushHostMigrationSnapshot_d__2(NetworkRunner__PushHostMigrationSnapshot_d__2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19221};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  _____t__builder;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

/// @brief Field <>s__1, offset: 0x38, size: 0x1, def value: None
 bool  _____s__1;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2, _____s__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2, _____u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2) == 0x48, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.SessionLobby, System.Nullable`1<T>, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<JoinSessionLobby>d__423
class CORDL_TYPE NetworkRunner__JoinSessionLobby_d__423 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field <>s__1, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::System::Object*  __s__1;

/// @brief Field <>s__2, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) int32_t  __s__2;

/// @brief Field <>s__4, offset 0x86, size 0x2 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) int16_t  __s__4;

/// @brief Field <>s__6, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__6, put=__cordl_internal_set___s__6)) ::Fusion::StartGameResult*  __s__6;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  __t__builder;

/// @brief Field <>u__1, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__2, put=__cordl_internal_set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>  __u__2;

/// @brief Field <>u__3, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__3, put=__cordl_internal_set___u__3)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  __u__3;

/// @brief Field <e>5__5, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__e_5__5, put=__cordl_internal_set__e_5__5)) ::System::Exception*  _e_5__5;

/// @brief Field <result>5__3, offset 0x84, size 0x2 
 __declspec(property(get=__cordl_internal_get__result_5__3, put=__cordl_internal_set__result_5__3)) int16_t  _result_5__3;

/// @brief Field authentication, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_authentication, put=__cordl_internal_set_authentication)) ::Fusion::Photon::Realtime::AuthenticationValues*  authentication;

/// @brief Field cancellationToken, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field customAppSettings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_customAppSettings, put=__cordl_internal_set_customAppSettings)) ::Fusion::Photon::Realtime::FusionAppSettings*  customAppSettings;

/// @brief Field lobbyID, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyID, put=__cordl_internal_set_lobbyID)) ::StringW  lobbyID;

/// @brief Field sessionLobby, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_sessionLobby, put=__cordl_internal_set_sessionLobby)) ::Fusion::SessionLobby  sessionLobby;

/// @brief Field useCachedRegions, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCachedRegions, put=__cordl_internal_set_useCachedRegions)) bool  useCachedRegions;

/// @brief Field useDefaultCloudPorts, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_useDefaultCloudPorts, put=__cordl_internal_set_useDefaultCloudPorts)) ::System::Nullable_1<bool>  useDefaultCloudPorts;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5fd3c9c, size 0x7e0, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::NetworkRunner__JoinSessionLobby_d__423* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5fd45e0, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr ::System::Object* const& __cordl_internal_get___s__1() const;

constexpr ::System::Object*& __cordl_internal_get___s__1() ;

constexpr int32_t const& __cordl_internal_get___s__2() const;

constexpr int32_t& __cordl_internal_get___s__2() ;

constexpr int16_t const& __cordl_internal_get___s__4() const;

constexpr int16_t& __cordl_internal_get___s__4() ;

constexpr ::Fusion::StartGameResult* const& __cordl_internal_get___s__6() const;

constexpr ::Fusion::StartGameResult*& __cordl_internal_get___s__6() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t> const& __cordl_internal_get___u__2() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>& __cordl_internal_get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*> const& __cordl_internal_get___u__3() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>& __cordl_internal_get___u__3() ;

constexpr ::System::Exception* const& __cordl_internal_get__e_5__5() const;

constexpr ::System::Exception*& __cordl_internal_get__e_5__5() ;

constexpr int16_t const& __cordl_internal_get__result_5__3() const;

constexpr int16_t& __cordl_internal_get__result_5__3() ;

constexpr ::Fusion::Photon::Realtime::AuthenticationValues* const& __cordl_internal_get_authentication() const;

constexpr ::Fusion::Photon::Realtime::AuthenticationValues*& __cordl_internal_get_authentication() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Fusion::Photon::Realtime::FusionAppSettings* const& __cordl_internal_get_customAppSettings() const;

constexpr ::Fusion::Photon::Realtime::FusionAppSettings*& __cordl_internal_get_customAppSettings() ;

constexpr ::StringW const& __cordl_internal_get_lobbyID() const;

constexpr ::StringW& __cordl_internal_get_lobbyID() ;

constexpr ::Fusion::SessionLobby const& __cordl_internal_get_sessionLobby() const;

constexpr ::Fusion::SessionLobby& __cordl_internal_get_sessionLobby() ;

constexpr bool const& __cordl_internal_get_useCachedRegions() const;

constexpr bool& __cordl_internal_get_useCachedRegions() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_useDefaultCloudPorts() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_useDefaultCloudPorts() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set___s__1(::System::Object*  value) ;

constexpr void __cordl_internal_set___s__2(int32_t  value) ;

constexpr void __cordl_internal_set___s__4(int16_t  value) ;

constexpr void __cordl_internal_set___s__6(::Fusion::StartGameResult*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>  value) ;

constexpr void __cordl_internal_set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  value) ;

constexpr void __cordl_internal_set__e_5__5(::System::Exception*  value) ;

constexpr void __cordl_internal_set__result_5__3(int16_t  value) ;

constexpr void __cordl_internal_set_authentication(::Fusion::Photon::Realtime::AuthenticationValues*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_customAppSettings(::Fusion::Photon::Realtime::FusionAppSettings*  value) ;

constexpr void __cordl_internal_set_lobbyID(::StringW  value) ;

constexpr void __cordl_internal_set_sessionLobby(::Fusion::SessionLobby  value) ;

constexpr void __cordl_internal_set_useCachedRegions(bool  value) ;

constexpr void __cordl_internal_set_useDefaultCloudPorts(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0x5fd3c94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner__JoinSessionLobby_d__423() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__JoinSessionLobby_d__423", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner__JoinSessionLobby_d__423(NetworkRunner__JoinSessionLobby_d__423 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__JoinSessionLobby_d__423", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner__JoinSessionLobby_d__423(NetworkRunner__JoinSessionLobby_d__423 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19220};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  _____t__builder;

/// @brief Field sessionLobby, offset: 0x30, size: 0x4, def value: None
 ::Fusion::SessionLobby  ___sessionLobby;

/// @brief Field lobbyID, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___lobbyID;

/// @brief Field authentication, offset: 0x40, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::AuthenticationValues*  ___authentication;

/// @brief Field customAppSettings, offset: 0x48, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::FusionAppSettings*  ___customAppSettings;

/// @brief Field useDefaultCloudPorts, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___useDefaultCloudPorts;

/// @brief Field cancellationToken, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field useCachedRegions, offset: 0x68, size: 0x1, def value: None
 bool  ___useCachedRegions;

/// @brief Field <>4__this, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

/// @brief Field <>s__1, offset: 0x78, size: 0x8, def value: None
 ::System::Object*  _____s__1;

/// @brief Field <>s__2, offset: 0x80, size: 0x4, def value: None
 int32_t  _____s__2;

/// @brief Field <result>5__3, offset: 0x84, size: 0x2, def value: None
 int16_t  ____result_5__3;

/// @brief Field <>s__4, offset: 0x86, size: 0x2, def value: None
 int16_t  _____s__4;

/// @brief Field <e>5__5, offset: 0x88, size: 0x8, def value: None
 ::System::Exception*  ____e_5__5;

/// @brief Field <>s__6, offset: 0x90, size: 0x8, def value: None
 ::Fusion::StartGameResult*  _____s__6;

/// @brief Field <>u__1, offset: 0x98, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

/// @brief Field <>u__2, offset: 0xa0, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>  _____u__2;

/// @brief Field <>u__3, offset: 0xa8, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  _____u__3;

/// @brief Size padding 0xa8 - 0xb0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, ___sessionLobby) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, ___lobbyID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, ___authentication) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, ___customAppSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, ___useDefaultCloudPorts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, ___cancellationToken) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, ___useCachedRegions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, _____4__this) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, _____s__1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, _____s__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, ____result_5__3) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, _____s__4) == 0x86, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, ____e_5__5) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, _____s__6) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, _____u__1) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, _____u__2) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__JoinSessionLobby_d__423, _____u__3) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner__JoinSessionLobby_d__423) == 0xa8, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkId, Fusion.NetworkObjectHeaderPtr, System.Collections.Generic.Dictionary`2::ValueCollection::Enumerator<TKey, TValue>, System.Object, System.ValueTuple`2<T1, T2>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<GetResumeSnapshotNetworkSceneObjects>d__4
class CORDL_TYPE NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr___get_Current)) ::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>  System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__4, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>  __s__4;

/// @brief Field <headerMapping>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerMapping_5__2, put=__cordl_internal_set__headerMapping_5__2)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*  _headerMapping_5__2;

/// @brief Field <header>5__5, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__header_5__5, put=__cordl_internal_set__header_5__5)) ::Fusion::NetworkObjectHeaderPtr  _header_5__5;

/// @brief Field <nestedMapping>5__3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__nestedMapping_5__3, put=__cordl_internal_set__nestedMapping_5__3)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*  _nestedMapping_5__3;

/// @brief Field <resumeObj>5__6, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__resumeObj_5__6, put=__cordl_internal_set__resumeObj_5__6)) ::UnityW<::Fusion::NetworkObject>  _resumeObj_5__6;

/// @brief Field <server>5__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__server_5__1, put=__cordl_internal_set__server_5__1)) ::GlobalNamespace::Simulation_Server*  _server_5__1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5fd35f0, size 0x50c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.ValueTuple<Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr>>.GetEnumerator, addr 0x5fd3bec, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>* System_Collections_Generic_IEnumerable_System_ValueTuple_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr___GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.ValueTuple<Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr>>.get_Current, addr 0x5fd3b4c, size 0xc, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr> System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5fd3c90, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fd3b58, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fd3b90, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5fd3574, size 0x7c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr> const& __cordl_internal_get___2__current() const;

constexpr ::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr> const& __cordl_internal_get___s__4() const;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>& __cordl_internal_get___s__4() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>* const& __cordl_internal_get__headerMapping_5__2() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*& __cordl_internal_get__headerMapping_5__2() ;

constexpr ::Fusion::NetworkObjectHeaderPtr const& __cordl_internal_get__header_5__5() const;

constexpr ::Fusion::NetworkObjectHeaderPtr& __cordl_internal_get__header_5__5() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>* const& __cordl_internal_get__nestedMapping_5__3() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*& __cordl_internal_get__nestedMapping_5__3() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get__resumeObj_5__6() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get__resumeObj_5__6() ;

constexpr ::GlobalNamespace::Simulation_Server* const& __cordl_internal_get__server_5__1() const;

constexpr ::GlobalNamespace::Simulation_Server*& __cordl_internal_get__server_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__4(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>  value) ;

constexpr void __cordl_internal_set__headerMapping_5__2(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*  value) ;

constexpr void __cordl_internal_set__header_5__5(::Fusion::NetworkObjectHeaderPtr  value) ;

constexpr void __cordl_internal_set__nestedMapping_5__3(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*  value) ;

constexpr void __cordl_internal_set__resumeObj_5__6(::UnityW<::Fusion::NetworkObject>  value) ;

constexpr void __cordl_internal_set__server_5__1(::GlobalNamespace::Simulation_Server*  value) ;

/// @brief Method <>m__Finally1, addr 0x5fd3afc, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5fd3540, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>* i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___UnityW___Fusion__NetworkObject____Fusion__NetworkObjectHeaderPtr__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>* i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___UnityW___Fusion__NetworkObject____Fusion__NetworkObjectHeaderPtr__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4(NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4(NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19219};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

/// @brief Field <server>5__1, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::Simulation_Server*  ____server_5__1;

/// @brief Field <headerMapping>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*  ____headerMapping_5__2;

/// @brief Field <nestedMapping>5__3, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*  ____nestedMapping_5__3;

/// @brief Field <>s__4, offset: 0x50, size: 0x18, def value: None
 ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>  _____s__4;

/// @brief Field <header>5__5, offset: 0x68, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderPtr  ____header_5__5;

/// @brief Field <resumeObj>5__6, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ____resumeObj_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4, ____server_5__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4, ____headerMapping_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4, ____nestedMapping_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4, _____s__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4, ____header_5__5) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4, ____resumeObj_5__6) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4) == 0x78, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkId, Fusion.NetworkObjectHeaderPtr, System.Collections.Generic.Dictionary`2::ValueCollection::Enumerator<TKey, TValue>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<GetResumeSnapshotNetworkObjects>d__3
class CORDL_TYPE NetworkRunner__GetResumeSnapshotNetworkObjects_d__3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Fusion_NetworkObject__get_Current)) ::UnityW<::Fusion::NetworkObject>  System_Collections_Generic_IEnumerator_Fusion_NetworkObject__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityW<::Fusion::NetworkObject>  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__4, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>  __s__4;

/// @brief Field <headerMapping>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerMapping_5__2, put=__cordl_internal_set__headerMapping_5__2)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*  _headerMapping_5__2;

/// @brief Field <header>5__5, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__header_5__5, put=__cordl_internal_set__header_5__5)) ::Fusion::NetworkObjectHeaderPtr  _header_5__5;

/// @brief Field <nestedMapping>5__3, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__nestedMapping_5__3, put=__cordl_internal_set__nestedMapping_5__3)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*  _nestedMapping_5__3;

/// @brief Field <resumeObj>5__6, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__resumeObj_5__6, put=__cordl_internal_set__resumeObj_5__6)) ::UnityW<::Fusion::NetworkObject>  _resumeObj_5__6;

/// @brief Field <server>5__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__server_5__1, put=__cordl_internal_set__server_5__1)) ::GlobalNamespace::Simulation_Server*  _server_5__1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5fd2f00, size 0x500, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Fusion.NetworkObject>.GetEnumerator, addr 0x5fd3498, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>* System_Collections_Generic_IEnumerable_Fusion_NetworkObject__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Fusion.NetworkObject>.get_Current, addr 0x5fd3450, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::Fusion::NetworkObject> System_Collections_Generic_IEnumerator_Fusion_NetworkObject__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5fd353c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fd3458, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fd3490, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5fd2e84, size 0x7c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr> const& __cordl_internal_get___s__4() const;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>& __cordl_internal_get___s__4() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>* const& __cordl_internal_get__headerMapping_5__2() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*& __cordl_internal_get__headerMapping_5__2() ;

constexpr ::Fusion::NetworkObjectHeaderPtr const& __cordl_internal_get__header_5__5() const;

constexpr ::Fusion::NetworkObjectHeaderPtr& __cordl_internal_get__header_5__5() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>* const& __cordl_internal_get__nestedMapping_5__3() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*& __cordl_internal_get__nestedMapping_5__3() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get__resumeObj_5__6() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get__resumeObj_5__6() ;

constexpr ::GlobalNamespace::Simulation_Server* const& __cordl_internal_get__server_5__1() const;

constexpr ::GlobalNamespace::Simulation_Server*& __cordl_internal_get__server_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityW<::Fusion::NetworkObject>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__4(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>  value) ;

constexpr void __cordl_internal_set__headerMapping_5__2(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*  value) ;

constexpr void __cordl_internal_set__header_5__5(::Fusion::NetworkObjectHeaderPtr  value) ;

constexpr void __cordl_internal_set__nestedMapping_5__3(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*  value) ;

constexpr void __cordl_internal_set__resumeObj_5__6(::UnityW<::Fusion::NetworkObject>  value) ;

constexpr void __cordl_internal_set__server_5__1(::GlobalNamespace::Simulation_Server*  value) ;

/// @brief Method <>m__Finally1, addr 0x5fd3400, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5fd2e50, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>* i___System__Collections__Generic__IEnumerable_1___UnityW___Fusion__NetworkObject__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>* i___System__Collections__Generic__IEnumerator_1___UnityW___Fusion__NetworkObject__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner__GetResumeSnapshotNetworkObjects_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__GetResumeSnapshotNetworkObjects_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner__GetResumeSnapshotNetworkObjects_d__3(NetworkRunner__GetResumeSnapshotNetworkObjects_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__GetResumeSnapshotNetworkObjects_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner__GetResumeSnapshotNetworkObjects_d__3(NetworkRunner__GetResumeSnapshotNetworkObjects_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19218};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

/// @brief Field <server>5__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::Simulation_Server*  ____server_5__1;

/// @brief Field <headerMapping>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*  ____headerMapping_5__2;

/// @brief Field <nestedMapping>5__3, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*  ____nestedMapping_5__3;

/// @brief Field <>s__4, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>  _____s__4;

/// @brief Field <header>5__5, offset: 0x60, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderPtr  ____header_5__5;

/// @brief Field <resumeObj>5__6, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ____resumeObj_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3, ____server_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3, ____headerMapping_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3, ____nestedMapping_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3, _____s__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3, ____header_5__5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3, ____resumeObj_5__6) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3) == 0x70, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<DisconnectFromCloud>d__426
class CORDL_TYPE NetworkRunner__DisconnectFromCloud_d__426 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5fd2bf8, size 0x254, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::NetworkRunner__DisconnectFromCloud_d__426* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5fd2e4c, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

/// @brief Method .ctor, addr 0x5fd2bf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner__DisconnectFromCloud_d__426() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__DisconnectFromCloud_d__426", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner__DisconnectFromCloud_d__426(NetworkRunner__DisconnectFromCloud_d__426 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner__DisconnectFromCloud_d__426", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner__DisconnectFromCloud_d__426(NetworkRunner__DisconnectFromCloud_d__426 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19217};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner__DisconnectFromCloud_d__426, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__DisconnectFromCloud_d__426, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__DisconnectFromCloud_d__426, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner__DisconnectFromCloud_d__426, _____u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner__DisconnectFromCloud_d__426) == 0x40, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<>c__DisplayClass370_1
class CORDL_TYPE NetworkRunner___c__DisplayClass370_1 : public ::System::Object {
public:
// Declarations
/// @brief Field asyncOp, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOp, put=__cordl_internal_set_asyncOp)) ::Fusion::NetworkSpawnOp_AsyncOpData*  asyncOp;

static inline ::Fusion::NetworkRunner___c__DisplayClass370_1* New_ctor() ;

/// @brief Method <SpawnInternal>b__4, addr 0x5fd29ac, size 0x14, virtual false, abstract: false, final false
inline void _SpawnInternal_b__4(::Fusion::NetworkSpawnOp  op) ;

constexpr ::Fusion::NetworkSpawnOp_AsyncOpData* const& __cordl_internal_get_asyncOp() const;

constexpr ::Fusion::NetworkSpawnOp_AsyncOpData*& __cordl_internal_get_asyncOp() ;

constexpr void __cordl_internal_set_asyncOp(::Fusion::NetworkSpawnOp_AsyncOpData*  value) ;

/// @brief Method .ctor, addr 0x5fd29a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner___c__DisplayClass370_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner___c__DisplayClass370_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner___c__DisplayClass370_1(NetworkRunner___c__DisplayClass370_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner___c__DisplayClass370_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner___c__DisplayClass370_1(NetworkRunner___c__DisplayClass370_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19216};

/// @brief Field asyncOp, offset: 0x10, size: 0x8, def value: None
 ::Fusion::NetworkSpawnOp_AsyncOpData*  ___asyncOp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner___c__DisplayClass370_1, ___asyncOp) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner___c__DisplayClass370_1) == 0x18, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkLoadSceneParameters, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<>c__DisplayClass302_0
class CORDL_TYPE NetworkRunner___c__DisplayClass302_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field sceneParameters, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_sceneParameters, put=__cordl_internal_set_sceneParameters)) ::Fusion::NetworkLoadSceneParameters  sceneParameters;

static inline ::Fusion::NetworkRunner___c__DisplayClass302_0* New_ctor() ;

/// @brief Method <LoadScene>b__0, addr 0x5fd28e8, size 0xbc, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp _LoadScene_b__0(::Fusion::SceneRef  x) ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get_sceneParameters() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get_sceneParameters() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set_sceneParameters(::Fusion::NetworkLoadSceneParameters  value) ;

/// @brief Method .ctor, addr 0x5fd28e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner___c__DisplayClass302_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner___c__DisplayClass302_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner___c__DisplayClass302_0(NetworkRunner___c__DisplayClass302_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner___c__DisplayClass302_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner___c__DisplayClass302_0(NetworkRunner___c__DisplayClass302_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19214};

/// @brief Field sceneParameters, offset: 0x10, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ___sceneParameters;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner___c__DisplayClass302_0, ___sceneParameters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner___c__DisplayClass302_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner___c__DisplayClass302_0) == 0x20, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.ShutdownReason, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<>c__DisplayClass145_0
class CORDL_TYPE NetworkRunner___c__DisplayClass145_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field destroyGameObject, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyGameObject, put=__cordl_internal_set_destroyGameObject)) bool  destroyGameObject;

/// @brief Field shutdownReason, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shutdownReason, put=__cordl_internal_set_shutdownReason)) ::Fusion::ShutdownReason  shutdownReason;

static inline ::Fusion::NetworkRunner___c__DisplayClass145_0* New_ctor() ;

/// @brief Method <Shutdown>b__2, addr 0x5fd2520, size 0x1dc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _Shutdown_b__2(::System::Threading::CancellationToken  token) ;

/// @brief Method <Shutdown>g__ContinueTasksWithDestroy|0, addr 0x5fd2454, size 0xcc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _Shutdown_g__ContinueTasksWithDestroy_0(::ArrayW<::System::Threading::Tasks::Task*>  precedingTasks) ;

/// @brief Method <Shutdown>g__InvokeOnShutdownCallbacks|1, addr 0x5fd26fc, size 0x1e4, virtual false, abstract: false, final false
inline void _Shutdown_g__InvokeOnShutdownCallbacks_1() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_destroyGameObject() const;

constexpr bool& __cordl_internal_get_destroyGameObject() ;

constexpr ::Fusion::ShutdownReason const& __cordl_internal_get_shutdownReason() const;

constexpr ::Fusion::ShutdownReason& __cordl_internal_get_shutdownReason() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set_destroyGameObject(bool  value) ;

constexpr void __cordl_internal_set_shutdownReason(::Fusion::ShutdownReason  value) ;

/// @brief Method .ctor, addr 0x5fd244c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner___c__DisplayClass145_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner___c__DisplayClass145_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner___c__DisplayClass145_0(NetworkRunner___c__DisplayClass145_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner___c__DisplayClass145_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner___c__DisplayClass145_0(NetworkRunner___c__DisplayClass145_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19213};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _____4__this;

/// @brief Field destroyGameObject, offset: 0x18, size: 0x1, def value: None
 bool  ___destroyGameObject;

/// @brief Field shutdownReason, offset: 0x1c, size: 0x4, def value: None
 ::Fusion::ShutdownReason  ___shutdownReason;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunner___c__DisplayClass145_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner___c__DisplayClass145_0, ___destroyGameObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunner___c__DisplayClass145_0, ___shutdownReason) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunner___c__DisplayClass145_0) == 0x20, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/<>c
class CORDL_TYPE NetworkRunner___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::NetworkRunner___c*  __9;

/// @brief Field <>9__233_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__233_0, put=setStaticF___9__233_0)) ::System::Func_2<::UnityW<::Fusion::NetworkObject>,bool>*  __9__233_0;

/// @brief Field <>9__239_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__239_0, put=setStaticF___9__239_0)) ::System::Func_2<::UnityW<::Fusion::NetworkBehaviour>,bool>*  __9__239_0;

/// @brief Field <>9__361_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__361_0, put=setStaticF___9__361_0)) ::System::Func_2<::ArrayW<uint8_t>,int32_t>*  __9__361_0;

static inline ::Fusion::NetworkRunner___c* New_ctor() ;

/// @brief Method <FlagsFromInstance>b__239_0, addr 0x5fd23c0, size 0x78, virtual false, abstract: false, final false
inline bool _FlagsFromInstance_b__239_0(::Fusion::NetworkBehaviour*  x) ;

/// @brief Method <Fusion.Simulation.ICallbacks.OnReliableData>b__361_0, addr 0x5fd2438, size 0x14, virtual false, abstract: false, final false
inline int32_t _Fusion_Simulation_ICallbacks_OnReliableData_b__361_0(::ArrayW<uint8_t>  x) ;

/// @brief Method <RegisterSceneObjects>b__233_0, addr 0x5fd2398, size 0x28, virtual false, abstract: false, final false
inline bool _RegisterSceneObjects_b__233_0(::Fusion::NetworkObject*  o) ;

/// @brief Method .ctor, addr 0x5fd2390, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::NetworkRunner___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::Fusion::NetworkObject>,bool>* getStaticF___9__233_0() ;

static inline ::System::Func_2<::UnityW<::Fusion::NetworkBehaviour>,bool>* getStaticF___9__239_0() ;

static inline ::System::Func_2<::ArrayW<uint8_t>,int32_t>* getStaticF___9__361_0() ;

static inline void setStaticF___9(::Fusion::NetworkRunner___c*  value) ;

static inline void setStaticF___9__233_0(::System::Func_2<::UnityW<::Fusion::NetworkObject>,bool>*  value) ;

static inline void setStaticF___9__239_0(::System::Func_2<::UnityW<::Fusion::NetworkBehaviour>,bool>*  value) ;

static inline void setStaticF___9__361_0(::System::Func_2<::ArrayW<uint8_t>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner___c(NetworkRunner___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner___c(NetworkRunner___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19212};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkRunner___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/CloudConnectionLostHandler
class CORDL_TYPE NetworkRunner_CloudConnectionLostHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5fd2264, size 0xb8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkRunner*  networkRunner, ::Fusion::ShutdownReason  shutdownReason, bool  reconnecting, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5fd231c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5fd2250, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Fusion::NetworkRunner*  networkRunner, ::Fusion::ShutdownReason  shutdownReason, bool  reconnecting) ;

static inline ::Fusion::NetworkRunner_CloudConnectionLostHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5fd219c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_CloudConnectionLostHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner_CloudConnectionLostHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner_CloudConnectionLostHandler(NetworkRunner_CloudConnectionLostHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner_CloudConnectionLostHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner_CloudConnectionLostHandler(NetworkRunner_CloudConnectionLostHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19211};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkRunner_CloudConnectionLostHandler) == 0x80, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/ObjectDelegate
class CORDL_TYPE NetworkRunner_ObjectDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5fd1af0, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5fd1b18, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5fd1adc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj) ;

static inline ::Fusion::NetworkRunner_ObjectDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5fd1a28, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_ObjectDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner_ObjectDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner_ObjectDelegate(NetworkRunner_ObjectDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner_ObjectDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner_ObjectDelegate(NetworkRunner_ObjectDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19204};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkRunner_ObjectDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunner/OnBeforeSpawned
class CORDL_TYPE NetworkRunner_OnBeforeSpawned : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5fd19f4, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5fd1a1c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5fd19e0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj) ;

static inline ::Fusion::NetworkRunner_OnBeforeSpawned* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5fd192c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_OnBeforeSpawned() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner_OnBeforeSpawned", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunner_OnBeforeSpawned(NetworkRunner_OnBeforeSpawned && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunner_OnBeforeSpawned", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunner_OnBeforeSpawned(NetworkRunner_OnBeforeSpawned const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19203};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkRunner_OnBeforeSpawned) == 0x80, "Size mismatch!");

} // namespace end def Fusion
