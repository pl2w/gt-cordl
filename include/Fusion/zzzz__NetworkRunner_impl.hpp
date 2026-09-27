#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__GameMode_impl.hpp"
#include "Fusion/zzzz__INetworkInput_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__NetworkLoadSceneParameters_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPtr_impl.hpp"
#include "Fusion/zzzz__NetworkRunnerInitializeArgs_impl.hpp"
#include "Fusion/zzzz__NetworkRunner_DeferredShutdownParams_impl.hpp"
#include "Fusion/zzzz__NetworkRunner_ShutdownFlags_impl.hpp"
#include "Fusion/zzzz__NetworkRunner_SimulationPhase_impl.hpp"
#include "Fusion/zzzz__NetworkSceneInfoChangeSource_impl.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_impl.hpp"
#include "Fusion/zzzz__SessionLobby_impl.hpp"
#include "Fusion/zzzz__ShutdownReason_impl.hpp"
#include "Fusion/zzzz__SimulationBehaviour_impl.hpp"
#include "Fusion/zzzz__SimulationModes_impl.hpp"
#include "Fusion/zzzz__StartGameArgs_impl.hpp"
#include "Fusion/zzzz__TickRate_Selection_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_ValueCollection_Enumerator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/Async/zzzz__AsyncOperationHandler_1_def.hpp"
#include "Fusion/Encryption/zzzz__EncryptionToken_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FusionAppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ServerConnection_def.hpp"
#include "Fusion/Protocol/zzzz__HostMigration_def.hpp"
#include "Fusion/Protocol/zzzz__Snapshot_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__NATType_def.hpp"
#include "Fusion/Sockets/zzzz__INetSocket_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/Sockets/zzzz__OnConnectionRequestReply_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableId_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey_def.hpp"
#include "Fusion/Statistics/zzzz__BehaviourStatisticsSnapshot_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__MemoryStatisticsSnapshot_TargetAllocator_def.hpp"
#include "Fusion/Statistics/zzzz__MemoryStatisticsSnapshot_def.hpp"
#include "Fusion/zzzz__CloudCommunicator_def.hpp"
#include "Fusion/zzzz__CloudServices_def.hpp"
#include "Fusion/zzzz__ConnectionType_def.hpp"
#include "Fusion/zzzz__GameMode_def.hpp"
#include "Fusion/zzzz__HitboxManager_def.hpp"
#include "Fusion/zzzz__HostMigrationToken_def.hpp"
#include "Fusion/zzzz__INetworkObjectInitializer_def.hpp"
#include "Fusion/zzzz__INetworkObjectProvider_def.hpp"
#include "Fusion/zzzz__INetworkRunnerCallbacks_def.hpp"
#include "Fusion/zzzz__INetworkRunnerUpdater_def.hpp"
#include "Fusion/zzzz__INetworkSceneManager_def.hpp"
#include "Fusion/zzzz__ISpawned_def.hpp"
#include "Fusion/zzzz__LobbyInfo_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourId_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkInput_def.hpp"
#include "Fusion/zzzz__NetworkObjectDestroyFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPtr_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_def.hpp"
#include "Fusion/zzzz__NetworkObjectInactivityGuard_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__NetworkObjectRuntimeFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectSpawnDelegate_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkPhysicsInfo_def.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "Fusion/zzzz__NetworkPrefabRef_def.hpp"
#include "Fusion/zzzz__NetworkPrefabTable_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_def.hpp"
#include "Fusion/zzzz__NetworkRunnerInitializeArgs_def.hpp"
#include "Fusion/zzzz__NetworkRunner_AttachOptions_def.hpp"
#include "Fusion/zzzz__NetworkRunner_BuildTypes_def.hpp"
#include "Fusion/zzzz__NetworkRunner_CreateInstanceResult_def.hpp"
#include "Fusion/zzzz__NetworkRunner_DeferredShutdownParams_def.hpp"
#include "Fusion/zzzz__NetworkRunner_ShutdownFlags_def.hpp"
#include "Fusion/zzzz__NetworkRunner_SimulationPhase_def.hpp"
#include "Fusion/zzzz__NetworkRunner_SpawnArgs_def.hpp"
#include "Fusion/zzzz__NetworkRunner_SpawnFlagsInternal_def.hpp"
#include "Fusion/zzzz__NetworkRunner_States_def.hpp"
#include "Fusion/zzzz__NetworkRunner___c__DisplayClass370_0_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__NetworkSceneAsyncOp_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfoChangeSource_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_def.hpp"
#include "Fusion/zzzz__NetworkSceneLoadId_def.hpp"
#include "Fusion/zzzz__NetworkSpawnFlags_def.hpp"
#include "Fusion/zzzz__NetworkSpawnOp_def.hpp"
#include "Fusion/zzzz__NetworkSpawnStatus_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__RegionInfo_def.hpp"
#include "Fusion/zzzz__RpcSendResult_def.hpp"
#include "Fusion/zzzz__RpcTargetStatus_def.hpp"
#include "Fusion/zzzz__SceneLoadDoneArgs_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "Fusion/zzzz__SessionInfo_def.hpp"
#include "Fusion/zzzz__SessionLobby_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "Fusion/zzzz__SimulationBehaviourListScope_def.hpp"
#include "Fusion/zzzz__SimulationBehaviourUpdater_def.hpp"
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "Fusion/zzzz__SimulationConnection_def.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "Fusion/zzzz__SimulationMessageResult_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__SimulationStages_def.hpp"
#include "Fusion/zzzz__Simulation_ObjectChangeType_def.hpp"
#include "Fusion/zzzz__Simulation_Server_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "Fusion/zzzz__StartGameArgs_def.hpp"
#include "Fusion/zzzz__StartGameResult_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__Topologies_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsResume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsResume)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fad89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsResume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.PushHostMigrationSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::PushHostMigrationSnapshot)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5fad908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"PushHostMigrationSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetResumeSnapshotNetworkObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::GetResumeSnapshotNetworkObjects)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fada44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetResumeSnapshotNetworkObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetResumeSnapshotNetworkSceneObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::GetResumeSnapshotNetworkSceneObjects)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fadab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetResumeSnapshotNetworkSceneObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetHostMigrationBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(int32_t)>(&::Fusion::NetworkRunner::SetHostMigrationBandwidth)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fadb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetHostMigrationBandwidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.RunHostMigrationResume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::NetworkRunner::*)(::Fusion::NetworkRunnerInitializeArgs)>(&::Fusion::NetworkRunner::RunHostMigrationResume)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fadb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RunHostMigrationResume", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetNetworkObjectFromResumeSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkRunner::*)(::Fusion::NetworkObjectHeaderPtr, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*)>(&::Fusion::NetworkRunner::GetNetworkObjectFromResumeSnapshot)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5fadbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetNetworkObjectFromResumeSnapshot", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPtr>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InitializeTempNetworkObjectInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObjectHeader*, ::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::InitializeTempNetworkObjectInstance)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5fae77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InitializeTempNetworkObjectInstance", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetupHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::Protocol::HostMigration*)>(&::Fusion::NetworkRunner::SetupHostMigration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fae8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetupHostMigration", {}, {::i2c::type_of<::Fusion::Protocol::HostMigration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.StartHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::Protocol::Snapshot*)>(&::Fusion::NetworkRunner::StartHostMigration)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5fae900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"StartHostMigration", {}, {::i2c::type_of<::Fusion::Protocol::Snapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::HostMigrationToken*)>(&::Fusion::NetworkRunner::InvokeHostMigration)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5faea98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeHostMigration", {}, {::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SendHostMigrationSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::SendHostMigrationSnapshot)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5faec64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SendHostMigrationSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetServerSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::by_ref<::ArrayW<uint8_t>>, ::by_ref<::Fusion::Tick>, ::by_ref<uint32_t>, ::by_ref<int32_t>)>(&::Fusion::NetworkRunner::GetServerSnapshot)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5faf1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetServerSnapshot", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::Fusion::Tick>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_BuildType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkRunner_BuildTypes (*)()>(&::Fusion::NetworkRunner::get_BuildType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faf2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_BuildType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.add_ObjectAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkRunner_ObjectDelegate*)>(&::Fusion::NetworkRunner::add_ObjectAcquired)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5faf2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"add_ObjectAcquired", {}, {::i2c::type_of<::Fusion::NetworkRunner_ObjectDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.remove_ObjectAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkRunner_ObjectDelegate*)>(&::Fusion::NetworkRunner::remove_ObjectAcquired)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5faf36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"remove_ObjectAcquired", {}, {::i2c::type_of<::Fusion::NetworkRunner_ObjectDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkRunner::ResetStatics)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5faf408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsSimulationUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsSimulationUpdating)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faf4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsSimulationUpdating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::OnValidate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5faf4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsInitialized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5faf004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_ProvideInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_ProvideInput)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5faf590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_ProvideInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.set_ProvideInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(bool)>(&::Fusion::NetworkRunner::set_ProvideInput)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5faf5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"set_ProvideInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_Topology
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Topologies (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_Topology)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5faf634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Topology", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_Simulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Simulation* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_Simulation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faf65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Simulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationModes (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_Mode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faf664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationStages (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_Stage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faf67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Stage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_DeltaTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faf694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_SimulationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_SimulationTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5faf6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_SimulationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_LocalRenderTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_LocalRenderTime)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5faf6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LocalRenderTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_RemoteRenderTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_RemoteRenderTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5faf854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_RemoteRenderTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsRunning)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5faf910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsShutdown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faf924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsShutdownDeferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsShutdownDeferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faf934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsShutdownDeferred", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsRegularShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsRegularShutdown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5faf93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsRegularShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_LocalAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_LocalAlpha)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faf948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LocalAlpha", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_LatestServerTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_LatestServerTick)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5faf960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LatestServerTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsStarting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsStarting)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5faf97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsStarting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsClient)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5faf9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsConnectedToServer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5faf9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsConnectedToServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsServer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5faeff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsPlayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fafa6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsSinglePlayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fafa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsSinglePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsLastTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsLastTick)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fafa94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsLastTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsFirstTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsFirstTick)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fafab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsFirstTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsForward)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fafad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsResimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsResimulation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fafae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsResimulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_TickRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_TickRate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fafb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_TickRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkRunner_States (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_State)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fafb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_LocalPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fafb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_Tick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fafb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_Config
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkProjectConfig* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_Config)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fafb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Config", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_Prefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabTable* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_Prefabs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fafb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Prefabs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_TicksExecuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_TicksExecuted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fafbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_TicksExecuted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_ActivePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_ActivePlayers)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fafbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_ActivePlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_ObjectProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::INetworkObjectProvider* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_ObjectProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fafc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_ObjectProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_ReliableDataSendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_ReliableDataSendRate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fafc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_ReliableDataSendRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.set_ReliableDataSendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(int32_t)>(&::Fusion::NetworkRunner::set_ReliableDataSendRate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fafc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"set_ReliableDataSendRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_LocalAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_LocalAddress)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fafd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LocalAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_SceneManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::INetworkSceneManager* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_SceneManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fafda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_SceneManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_OperationsCancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_OperationsCancellationToken)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5faf114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_OperationsCancellationToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_LagCompensation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::HitboxManager> (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_LagCompensation)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fafdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LagCompensation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef, ::ArrayW<uint8_t>)>(&::Fusion::NetworkRunner::Disconnect)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fafe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::NetworkRunner::Disconnect)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5faff1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::Sockets::NetAddress, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::NetworkRunner::Connect)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5fb004c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ShutdownAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::ShutdownAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fb01bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ShutdownAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::NetworkRunner::*)(bool, ::Fusion::ShutdownReason, bool)>(&::Fusion::NetworkRunner::Shutdown)> {
  constexpr static std::size_t size = 0xc94;
  constexpr static std::size_t addrs = 0x5fb01cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Shutdown", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::ShutdownReason>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.CreateCloudSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::INetSocket* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::CreateCloudSocket)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5fb17a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"CreateCloudSocket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetInitializationDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkRunnerInitializeArgs)>(&::Fusion::NetworkRunner::SetInitializationDone)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fb18bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetInitializationDone", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.OnRuntimeConfigReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::OnRuntimeConfigReady)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5fb1928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnRuntimeConfigReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeOnGameStartedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::InvokeOnGameStartedCallback)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5fb1b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeOnGameStartedCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Fusion::NetworkRunner::*)(::Fusion::NetworkRunnerInitializeArgs)>(&::Fusion::NetworkRunner::Initialize)> {
  constexpr static std::size_t size = 0xe6c;
  constexpr static std::size_t addrs = 0x5fb1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SinglePlayerPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::SinglePlayerPause)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb2f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SinglePlayerPause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SinglePlayerContinue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::SinglePlayerContinue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb2f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SinglePlayerContinue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SinglePlayerPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(bool)>(&::Fusion::NetworkRunner::SinglePlayerPause)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SinglePlayerPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetInterfaceListsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRunner::*)(::System::Type*)>(&::Fusion::NetworkRunner::GetInterfaceListsCount)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fb2f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetInterfaceListsCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetInterfaceListHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationBehaviourListScope (::Fusion::NetworkRunner::*)(::System::Type*, int32_t, ::by_ref<::Fusion::SimulationBehaviour*>)>(&::Fusion::NetworkRunner::GetInterfaceListHead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fb2fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetInterfaceListHead", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::SimulationBehaviour*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetInterfaceListPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::SimulationBehaviour> (::Fusion::NetworkRunner::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkRunner::GetInterfaceListPrev)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fb2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetInterfaceListPrev", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetInterfaceListNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::SimulationBehaviour> (::Fusion::NetworkRunner::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkRunner::GetInterfaceListNext)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fb3004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetInterfaceListNext", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetAvailableRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>* (*)(::StringW, ::System::Threading::CancellationToken)>(&::Fusion::NetworkRunner::GetAvailableRegions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb3018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetAvailableRegions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetPlayerActorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::GetPlayerActorId)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5fb3020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerActorId", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetPlayerUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::GetPlayerUserId)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5fb3120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerUserId", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetPlayerObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef, ::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::SetPlayerObject)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5fb3284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetPlayerObject", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetPlayerObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::GetPlayerObject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb33f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerObject", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryGetPlayerObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef, ::by_ref<::Fusion::NetworkObject*>)>(&::Fusion::NetworkRunner::TryGetPlayerObject)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5fb3410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetPlayerObject", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetAllNetworkObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::GetAllNetworkObjects)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5fb34f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetAllNetworkObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetAllNetworkObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*)>(&::Fusion::NetworkRunner::GetAllNetworkObjects)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5fb35d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetAllNetworkObjects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetPlayerRtt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::GetPlayerRtt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fb3820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerRtt", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SendRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SimulationMessage*)>(&::Fusion::NetworkRunner::SendRpc)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fb3844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SendRpc", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SendRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SimulationMessage*, ::by_ref<::Fusion::RpcSendResult>)>(&::Fusion::NetworkRunner::SendRpc)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fb3868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SendRpc", {}, {::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<::by_ref<::Fusion::RpcSendResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.IsPlayerValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::IsPlayerValid)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb38b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"IsPlayerValid", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetPlayerConnectionToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::GetPlayerConnectionToken)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fb38cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerConnectionToken", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetPlayerConnectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::ConnectionType (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::GetPlayerConnectionType)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5fb39b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerConnectionType", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetAllBehaviours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>> (::Fusion::NetworkRunner::*)(::System::Type*)>(&::Fusion::NetworkRunner::GetAllBehaviours)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fb3b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetAllBehaviours", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.AddCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::ArrayW<::Fusion::INetworkRunnerCallbacks*>)>(&::Fusion::NetworkRunner::AddCallbacks)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5fb3b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddCallbacks", {}, {::i2c::type_of<::ArrayW<::Fusion::INetworkRunnerCallbacks*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.RemoveCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::ArrayW<::Fusion::INetworkRunnerCallbacks*>)>(&::Fusion::NetworkRunner::RemoveCallbacks)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5fb3cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RemoveCallbacks", {}, {::i2c::type_of<::ArrayW<::Fusion::INetworkRunnerCallbacks*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetMemorySnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator, ::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>)>(&::Fusion::NetworkRunner::GetMemorySnapshot)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fb3de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetMemorySnapshot", {}, {::i2c::type_of<::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fb3e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.RenderInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::RenderInternal)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5fb3e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RenderInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5fb4010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb40f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::OnDestroy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fb4188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fb4238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::SetMasterClient)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5fb424c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetMasterClient", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.UpdateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(double_t)>(&::Fusion::NetworkRunner::UpdateInternal)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x5fb4488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"UpdateInternal", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.RegisterNetworkCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::RegisterNetworkCallbacks)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5fb0e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RegisterNetworkCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SendReliableDataToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, ::ArrayW<uint8_t>)>(&::Fusion::NetworkRunner::SendReliableDataToPlayer)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5fb4e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SendReliableDataToPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SendReliableDataToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::Sockets::ReliableKey, ::ArrayW<uint8_t>)>(&::Fusion::NetworkRunner::SendReliableDataToServer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5fb5114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SendReliableDataToServer", {}, {::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetPlayerAlwaysInterested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef, ::Fusion::NetworkObject*, bool)>(&::Fusion::NetworkRunner::SetPlayerAlwaysInterested)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fb52e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetPlayerAlwaysInterested", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetRawInputForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Fusion::NetworkInput> (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::GetRawInputForPlayer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5fb536c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetRawInputForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.RequestStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkId)>(&::Fusion::NetworkRunner::RequestStateAuthority)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fb545c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RequestStateAuthority", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ReleaseStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkId)>(&::Fusion::NetworkRunner::ReleaseStateAuthority)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fb5510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ReleaseStateAuthority", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.FindObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkRunner::*)(::Fusion::NetworkId)>(&::Fusion::NetworkRunner::FindObject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb55c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"FindObject", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryFindObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::Fusion::NetworkId, ::by_ref<::Fusion::NetworkObject*>)>(&::Fusion::NetworkRunner::TryFindObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fb55e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryFindObject", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryFindBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::Fusion::NetworkBehaviourId, ::by_ref<::Fusion::NetworkBehaviour*>)>(&::Fusion::NetworkRunner::TryFindBehaviour)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fb565c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryFindBehaviour", {}, {::i2c::type_of<::Fusion::NetworkBehaviourId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviour*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryGetObjectRefFromNetworkedBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::NetworkRunner::*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkRunner::TryGetObjectRefFromNetworkedBehaviour)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fb56f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetObjectRefFromNetworkedBehaviour", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryGetNetworkedBehaviourId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviourId (::Fusion::NetworkRunner::*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkRunner::TryGetNetworkedBehaviourId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fb5744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetNetworkedBehaviourId", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetIsSimulated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, bool)>(&::Fusion::NetworkRunner::SetIsSimulated)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5fb57a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetIsSimulated", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetAreaOfInterestGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(int32_t, int32_t, int32_t)>(&::Fusion::NetworkRunner::SetAreaOfInterestGrid)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5fb5954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetAreaOfInterestGrid", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetAreaOfInterestCellSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(int32_t)>(&::Fusion::NetworkRunner::SetAreaOfInterestCellSize)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5fb5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetAreaOfInterestCellSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetObjectsInAreaOfInterestForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Fusion::NetworkId>* (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::GetObjectsInAreaOfInterestForPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb5b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetObjectsInAreaOfInterestForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetAreaOfInterestGizmoData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,int32_t,int32_t>>*)>(&::Fusion::NetworkRunner::GetAreaOfInterestGizmoData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fb5b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetAreaOfInterestGizmoData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,int32_t,int32_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryGetFusionStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::by_ref<::Fusion::Statistics::FusionStatisticsManager*>)>(&::Fusion::NetworkRunner::TryGetFusionStatistics)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fb5b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetFusionStatistics", {}, {::i2c::type_of<::by_ref<::Fusion::Statistics::FusionStatisticsManager*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryGetBehaviourStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::System::Type*, ::by_ref<::Fusion::Statistics::BehaviourStatisticsSnapshot*>)>(&::Fusion::NetworkRunner::TryGetBehaviourStatistics)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb5ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetBehaviourStatistics", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::BehaviourStatisticsSnapshot*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::Exists)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fb3380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Exists", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::Fusion::NetworkId)>(&::Fusion::NetworkRunner::Exists)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fb5be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Exists", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Despawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::Despawn)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5fb5c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Despawn", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.AddGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkRunner::AddGlobal)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fb61e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddGlobal", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.RemoveGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkRunner::RemoveGlobal)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fb62d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RemoveGlobal", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.AddSimulationBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkRunner::AddSimulationBehaviour)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5fb2b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddSimulationBehaviour", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.RemoveSimulationBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkRunner::RemoveSimulationBehavior)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5fb63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RemoveSimulationBehavior", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, ::Fusion::NetworkObjectDestroyFlags)>(&::Fusion::NetworkRunner::Destroy)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5fb5e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::NetworkObjectDestroyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.DetachInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, bool, bool)>(&::Fusion::NetworkRunner::DetachInstance)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x5fb121c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"DetachInstance", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.FreeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::FreeObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5fb6854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"FreeObject", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Attach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, ::System::Nullable_1<::Fusion::PlayerRef>, bool, ::System::Nullable_1<bool>)>(&::Fusion::NetworkRunner::Attach)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5fb68e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Attach", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.AddPlayerAreaOfInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef, ::UnityEngine::Vector3, float_t)>(&::Fusion::NetworkRunner::AddPlayerAreaOfInterest)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5fb8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddPlayerAreaOfInterest", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ClearPlayerAreaOfInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::ClearPlayerAreaOfInterest)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5fb84b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ClearPlayerAreaOfInterest", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.IsInterestedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::IsInterestedIn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fb85ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"IsInterestedIn", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetBehaviourReplicateToAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkBehaviour*, bool)>(&::Fusion::NetworkRunner::SetBehaviourReplicateToAll)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5fb8614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetBehaviourReplicateToAll", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetBehaviourReplicateTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkBehaviour*, ::Fusion::PlayerRef, bool)>(&::Fusion::NetworkRunner::SetBehaviourReplicateTo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fb8854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetBehaviourReplicateTo", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetBehaviourReplicateTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationConnection*, bool, bool)>(&::Fusion::NetworkRunner::SetBehaviourReplicateTo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fb87a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetBehaviourReplicateTo", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Attach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::ArrayW<::Fusion::NetworkObject*>, ::System::Nullable_1<::Fusion::PlayerRef>, bool, ::System::Nullable_1<bool>)>(&::Fusion::NetworkRunner::Attach)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x5fb8908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Attach", {}, {::i2c::type_of<::ArrayW<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.AttachActivatedByUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::AttachActivatedByUser)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5fb90e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AttachActivatedByUser", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.RegisterSceneObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRunner::*)(::Fusion::SceneRef, ::ArrayW<::Fusion::NetworkObject*>, ::Fusion::NetworkSceneLoadId)>(&::Fusion::NetworkRunner::RegisterSceneObjects)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x5fb92e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RegisterSceneObjects", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::ArrayW<::Fusion::NetworkObject*>>(), ::i2c::type_of<::Fusion::NetworkSceneLoadId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeOnBeforeHitboxRegistration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::InvokeOnBeforeHitboxRegistration)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fb99e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeOnBeforeHitboxRegistration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryAcquireInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkRunner_CreateInstanceResult (::Fusion::NetworkRunner::*)(::Fusion::NetworkObjectTypeId, ::Fusion::NetworkObjectMeta*, ::by_ref<::Fusion::NetworkObject*>, bool, bool)>(&::Fusion::NetworkRunner::TryAcquireInstance)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x5fadef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryAcquireInstance", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InitializeNetworkObjectAssignRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>, bool)>(&::Fusion::NetworkRunner::InitializeNetworkObjectAssignRunner)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5fb6bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InitializeNetworkObjectAssignRunner", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::System::Nullable_1<::Fusion::NetworkObjectTypeId>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.FlagsFromInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderFlags (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::FlagsFromInstance)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5fb7104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"FlagsFromInstance", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InitializeNetworkObjectInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObjectMeta*, ::Fusion::NetworkObject*, ::System::Nullable_1<::Fusion::PlayerRef>, ::GlobalNamespace::NetworkRunner_AttachOptions, ::System::Nullable_1<bool>)>(&::Fusion::NetworkRunner::InitializeNetworkObjectInstance)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x5fb72d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InitializeNetworkObjectInstance", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::GlobalNamespace::NetworkRunner_AttachOptions>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.UnityPreInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObjectMeta*, ::GlobalNamespace::NetworkRunner_AttachOptions)>(&::Fusion::NetworkRunner::UnityPreInitialize)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5fb9c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"UnityPreInitialize", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::GlobalNamespace::NetworkRunner_AttachOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InitializeNetworkObjectState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::InitializeNetworkObjectState)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5fb7854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InitializeNetworkObjectState", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeBeforeSpawnedCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, ::GlobalNamespace::NetworkRunner_AttachOptions, ::Fusion::NetworkRunner_OnBeforeSpawned*)>(&::Fusion::NetworkRunner::InvokeBeforeSpawnedCallbacks)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5fb79e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeBeforeSpawnedCallbacks", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::GlobalNamespace::NetworkRunner_AttachOptions>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeSpawnedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::InvokeSpawnedCallback)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5fb7dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeSpawnedCallback", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeDespawnedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, bool)>(&::Fusion::NetworkRunner::InvokeDespawnedCallback)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5fb65ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeDespawnedCallback", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeAfterSpawnedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::InvokeAfterSpawnedCallback)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5fb806c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeAfterSpawnedCallback", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeObjectAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::InvokeObjectAcquired)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fb6bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeObjectAcquired", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeBeforeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::InvokeBeforeUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fb48a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeBeforeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeAfterUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::InvokeAfterUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fb4e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeAfterUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetupNetworkProjectConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkProjectConfig* (*)(::Fusion::NetworkRunnerInitializeArgs)>(&::Fusion::NetworkRunner::SetupNetworkProjectConfig)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fb2a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetupNetworkProjectConfig", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetRpcTargetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcTargetStatus (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::GetRpcTargetStatus)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb9f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetRpcTargetStatus", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.HasAnyActiveConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::HasAnyActiveConnections)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fb9f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"HasAnyActiveConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.AttachOptionsToNetworkObjectFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectRuntimeFlags (*)(::GlobalNamespace::NetworkRunner_AttachOptions)>(&::Fusion::NetworkRunner::AttachOptionsToNetworkObjectFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb9f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AttachOptionsToNetworkObjectFlags", {}, {::i2c::type_of<::GlobalNamespace::NetworkRunner_AttachOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.NetworkObjectFlagsToAttachOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkRunner_AttachOptions (*)(::Fusion::NetworkObjectRuntimeFlags)>(&::Fusion::NetworkRunner::NetworkObjectFlagsToAttachOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb92d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"NetworkObjectFlagsToAttachOptions", {}, {::i2c::type_of<::Fusion::NetworkObjectRuntimeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.IsAwakeAtInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::IsAwakeAtInitialization)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb9fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"IsAwakeAtInitialization", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.IsPreexistingAtInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::IsPreexistingAtInitialization)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb9fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"IsPreexistingAtInitialization", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.DebugOnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::DebugOnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fb41ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"DebugOnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.DebugOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::DebugOnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fb40fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"DebugOnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryGetPrettyRunnerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Text::StringBuilder*, ::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunner::TryGetPrettyRunnerName)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5fb9fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetPrettyRunnerName", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ResetAllSimulationStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkRunner::ResetAllSimulationStatics)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fba18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ResetAllSimulationStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetupEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::Encryption::EncryptionToken*)>(&::Fusion::NetworkRunner::SetupEncryption)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5fba238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::Fusion::Encryption::EncryptionToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.AddInactiveObjectGuard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::AddInactiveObjectGuard)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5fb9a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddInactiveObjectGuard", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetInstancesEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkRunner>> (*)()>(&::Fusion::NetworkRunner::GetInstancesEnumerator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fba3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetInstancesEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_Instances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::Fusion::NetworkRunner>>* (*)()>(&::Fusion::NetworkRunner::get_Instances)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fba44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Instances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.AddInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunner::AddInstance)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5fb2e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.RemoveInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunner::RemoveInstance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fb1088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RemoveInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SimulatePhysicsScenes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(float_t)>(&::Fusion::NetworkRunner::SimulatePhysicsScenes)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5fba4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SimulatePhysicsScenes", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::FixedUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fba7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SetSimulateMultiPeerPhysics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(bool)>(&::Fusion::NetworkRunner::SetSimulateMultiPeerPhysics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fba834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetSimulateMultiPeerPhysics", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryGetPhysicsInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::by_ref<::Fusion::NetworkPhysicsInfo>)>(&::Fusion::NetworkRunner::TryGetPhysicsInfo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fba83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetPhysicsInfo", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkPhysicsInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TrySetPhysicsInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::Fusion::NetworkPhysicsInfo)>(&::Fusion::NetworkRunner::TrySetPhysicsInfo)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5fba8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySetPhysicsInfo", {}, {::i2c::type_of<::Fusion::NetworkPhysicsInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsSceneAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsSceneAuthority)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fb99b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsSceneAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsSceneManagerBusy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsSceneManagerBusy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5fbaa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsSceneManagerBusy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryGetSceneInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::by_ref<::Fusion::NetworkSceneInfo>)>(&::Fusion::NetworkRunner::TryGetSceneInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbaac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetSceneInfo", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkSceneInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TryGetSceneInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::by_ref<::Fusion::NetworkSceneInfo>, bool)>(&::Fusion::NetworkRunner::TryGetSceneInfo)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5fbaac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetSceneInfo", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkSceneInfo>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ValidateSceneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (::Fusion::NetworkRunner::*)(::StringW)>(&::Fusion::NetworkRunner::ValidateSceneName)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5fbabe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ValidateSceneName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ValidateSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (::Fusion::NetworkRunner::*)(::Fusion::SceneRef)>(&::Fusion::NetworkRunner::ValidateSceneRef)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fbadc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ValidateSceneRef", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ValidateSceneOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkRunner::*)(::Fusion::NetworkSceneAsyncOp)>(&::Fusion::NetworkRunner::ValidateSceneOp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fbae8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ValidateSceneOp", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (::Fusion::NetworkRunner::*)(::StringW)>(&::Fusion::NetworkRunner::GetSceneRef)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fbaf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetSceneRef", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (::Fusion::NetworkRunner::*)(::UnityEngine::GameObject*)>(&::Fusion::NetworkRunner::GetSceneRef)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fbafd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetSceneRef", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.MoveGameObjectToScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::UnityEngine::GameObject*, ::Fusion::SceneRef)>(&::Fusion::NetworkRunner::MoveGameObjectToScene)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fbb08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"MoveGameObjectToScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.MoveGameObjectToSameScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::Fusion::NetworkRunner::MoveGameObjectToSameScene)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fbb158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"MoveGameObjectToSameScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkRunner::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(&::Fusion::NetworkRunner::LoadScene)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fbb1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"LoadScene", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkRunner::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode, bool)>(&::Fusion::NetworkRunner::LoadScene)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fbb6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"LoadScene", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkRunner::*)(::Fusion::SceneRef, ::UnityEngine::SceneManagement::LoadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode, bool)>(&::Fusion::NetworkRunner::LoadScene)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fbb72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"LoadScene", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.UnloadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkRunner::*)(::StringW)>(&::Fusion::NetworkRunner::UnloadScene)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fbb780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"UnloadScene", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetSceneInfoRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkSceneInfo> (::Fusion::NetworkRunner::*)(bool)>(&::Fusion::NetworkRunner::GetSceneInfoRef)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5fbba6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetSceneInfoRef", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkRunner::*)(::Fusion::SceneRef, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(&::Fusion::NetworkRunner::LoadScene)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5fbb1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"LoadScene", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.UnloadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkRunner::*)(::Fusion::SceneRef)>(&::Fusion::NetworkRunner::UnloadScene)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5fbb7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"UnloadScene", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SceneRef)>(&::Fusion::NetworkRunner::InvokeSceneLoadStart)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5fbbbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeSceneLoadStart", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::by_ref<::Fusion::SceneLoadDoneArgs>)>(&::Fusion::NetworkRunner::InvokeSceneLoadDone)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5fbbd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeSceneLoadDone", {}, {::i2c::type_of<::by_ref<::Fusion::SceneLoadDoneArgs>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_SimulationUnityScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_SimulationUnityScene)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fbbf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_SimulationUnityScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetRunnerForGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkRunner> (*)(::UnityEngine::GameObject*)>(&::Fusion::NetworkRunner::GetRunnerForGameObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fbc00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetRunnerForGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetRunnerForScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkRunner> (*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::NetworkRunner::GetRunnerForScene)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5fbc07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetRunnerForScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetPhysicsScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::GetPhysicsScene)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5fba5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPhysicsScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.GetPhysicsScene2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene2D (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::GetPhysicsScene2D)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5fba6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPhysicsScene2D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InstantiateInRunnerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Fusion::NetworkRunner::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Fusion::NetworkRunner::InstantiateInRunnerScene)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fbc430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InstantiateInRunnerScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InstantiateInRunnerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Fusion::NetworkRunner::*)(::UnityEngine::GameObject*)>(&::Fusion::NetworkRunner::InstantiateInRunnerScene)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5fbc7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InstantiateInRunnerScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.EnsureRunnerSceneIsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::Fusion::NetworkRunner::EnsureRunnerSceneIsActive)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5fbc574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"EnsureRunnerSceneIsActive", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.MoveToRunnerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::UnityEngine::GameObject*, ::System::Nullable_1<::Fusion::SceneRef>)>(&::Fusion::NetworkRunner::MoveToRunnerScene)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5fbc6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"MoveToRunnerScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Nullable_1<::Fusion::SceneRef>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.MakeDontDestroyOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::UnityEngine::GameObject*)>(&::Fusion::NetworkRunner::MakeDontDestroyOnLoad)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fbc884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"MakeDontDestroyOnLoad", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ConsumeInitialSceneInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(bool)>(&::Fusion::NetworkRunner::ConsumeInitialSceneInfo)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5fbc938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ConsumeInitialSceneInfo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SceneInfoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::SceneInfoUpdate)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5fbcca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SceneInfoUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SceneInfoSyncSceneManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkSceneInfoChangeSource, ::by_ref<::Fusion::NetworkSceneInfo>, ::by_ref<::Fusion::NetworkSceneInfo>)>(&::Fusion::NetworkRunner::SceneInfoSyncSceneManager)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x5fbcff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SceneInfoSyncSceneManager", {}, {::i2c::type_of<::Fusion::NetworkSceneInfoChangeSource>(), ::i2c::type_of<::by_ref<::Fusion::NetworkSceneInfo>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkSceneInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.OnRemoteSceneLoadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkSceneAsyncOp)>(&::Fusion::NetworkRunner::OnRemoteSceneLoadCompleted)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5fbd964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnRemoteSceneLoadCompleted", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.OnRemoteSceneUnloadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkSceneAsyncOp)>(&::Fusion::NetworkRunner::OnRemoteSceneUnloadCompleted)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5fbda4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnRemoteSceneUnloadCompleted", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_get_CanReceivePlayerJoinLeaveCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_get_CanReceivePlayerJoinLeaveCallbacks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbdb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.get_CanReceivePlayerJoinLeaveCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_get_LocalPlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_get_LocalPlayerRef)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fbdb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.get_LocalPlayerRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_get_IsSharedModeMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_get_IsSharedModeMasterClient)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fbdbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.get_IsSharedModeMasterClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_ObjectIsSimulatedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkId, bool)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectIsSimulatedChanged)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5fbdbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectIsSimulatedChanged", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_ObjectInputAuthorityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkId, bool)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectInputAuthorityChanged)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5fbdff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectInputAuthorityChanged", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_ObjectStateAuthorityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkId, bool)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectStateAuthorityChanged)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5fbe380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectStateAuthorityChanged", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_ObjectChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef, ::Fusion::NetworkObjectMeta*, ::GlobalNamespace::Simulation_ObjectChangeType)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectChanged)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5fbe57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectChanged", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::GlobalNamespace::Simulation_ObjectChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_RemoteObjectCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_RemoteObjectCreated)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fbe6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.RemoteObjectCreated", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_RemoteObjectDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)(::Fusion::NetworkId)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_RemoteObjectDestroyed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fbe788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.RemoteObjectDestroyed", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_UpdateRemotePrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_UpdateRemotePrefabs)> {
  constexpr static std::size_t size = 0x134c;
  constexpr static std::size_t addrs = 0x5fbe7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.UpdateRemotePrefabs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ProcessSpawnQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::ProcessSpawnQueue)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x5fb48b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ProcessSpawnQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnBeforeCopyPreviousState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnBeforeCopyPreviousState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc0838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnBeforeCopyPreviousState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnTick)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5fc0844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnServerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnServerStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc0940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnServerStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnClientStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnClientStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc0948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnClientStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SimulationInput*)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnInputMissing)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5fc0968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SimulationInput*)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnInput)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5fc0bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnInput", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.OnMessageUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SimulationMessage*)>(&::Fusion::NetworkRunner::OnMessageUser)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5fc0e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnMessageUser", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationMessageResult (::Fusion::NetworkRunner::*)(::Fusion::SimulationMessage*)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnMessage)> {
  constexpr static std::size_t size = 0x16d8;
  constexpr static std::size_t addrs = 0x5fc1000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnMessage", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnBeforeSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(int32_t)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnBeforeSimulation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc26d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnBeforeSimulation", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnAfterSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnAfterSimulation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fc26e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnAfterSimulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnBeforeClientSidePredictionReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnBeforeClientSidePredictionReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc26e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnBeforeClientSidePredictionReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnAfterClientSidePredictionReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnAfterClientSidePredictionReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc26f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnAfterClientSidePredictionReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnBeforeAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(bool, int32_t)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnBeforeAllTicks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc2700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnBeforeAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnAfterAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(bool, int32_t)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnAfterAllTicks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc270c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnAfterAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnBeforeTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnBeforeTick)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnBeforeTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnAfterTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnAfterTick)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc2734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnAfterTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_ObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef, ::Fusion::NetworkId)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectEnterAOI)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5fc2740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectEnterAOI", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_ObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef, ::Fusion::NetworkId)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectExitAOI)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5fc2ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectExitAOI", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnConnectedToServer)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5fc2e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnConnectedToServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::Sockets::NetDisconnectReason)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5fc3050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnConnectionFailed)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5fc3228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnConnectionFailed", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnReliableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef, ::Fusion::Sockets::ReliableId, bool, ::ArrayW<uint8_t>)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnReliableData)> {
  constexpr static std::size_t size = 0x99c;
  constexpr static std::size_t addrs = 0x5fc358c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnReliableData", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_PlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_PlayerJoined)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5fc3f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.PlayerJoined", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_PlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_PlayerLeft)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5fc4124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.PlayerLeft", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnConnectionRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::OnConnectionRequestReply (::Fusion::NetworkRunner::*)(::Fusion::Sockets::NetAddress, ::ArrayW<uint8_t>)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5fc4324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnConnectionRequest", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Fusion_Simulation_ICallbacks_OnInternalConnectionAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(int32_t, int32_t, ::by_ref<bool>, ::by_ref<::Fusion::Sockets::NetAddress>)>(&::Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnInternalConnectionAttempt)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fc45a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnInternalConnectionAttempt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetAddress>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_CanSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_CanSpawn)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fc4614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_CanSpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SpawnInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnOp (::Fusion::NetworkRunner::*)(::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>)>(&::Fusion::NetworkRunner::SpawnInternal)> {
  constexpr static std::size_t size = 0xa48;
  constexpr static std::size_t addrs = 0x5fbfdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnInternal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ApplySpawnArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkObject*, ::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>)>(&::Fusion::NetworkRunner::ApplySpawnArgs)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5fc4910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ApplySpawnArgs", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkRunner::*)(::UnityEngine::GameObject*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags)>(&::Fusion::NetworkRunner::Spawn)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5fc4c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Spawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags)>(&::Fusion::NetworkRunner::Spawn)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x5fc4da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Spawn", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkRunner::*)(::Fusion::NetworkPrefabRef, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags)>(&::Fusion::NetworkRunner::Spawn)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5fc51f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Spawn", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkRunner::*)(::Fusion::NetworkObjectGuid, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags)>(&::Fusion::NetworkRunner::Spawn)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5fc5510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Spawn", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkRunner::*)(::Fusion::NetworkPrefabId, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags)>(&::Fusion::NetworkRunner::Spawn)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5fc5818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Spawn", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TrySpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnStatus (::Fusion::NetworkRunner::*)(::UnityEngine::GameObject*, ::by_ref<::Fusion::NetworkObject*>, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags)>(&::Fusion::NetworkRunner::TrySpawn)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5fc59bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySpawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TrySpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnStatus (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, ::by_ref<::Fusion::NetworkObject*>, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags)>(&::Fusion::NetworkRunner::TrySpawn)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x5fc5b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySpawn", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TrySpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnStatus (::Fusion::NetworkRunner::*)(::Fusion::NetworkPrefabRef, ::by_ref<::Fusion::NetworkObject*>, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags)>(&::Fusion::NetworkRunner::TrySpawn)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5fc6050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySpawn", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TrySpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnStatus (::Fusion::NetworkRunner::*)(::Fusion::NetworkObjectGuid, ::by_ref<::Fusion::NetworkObject*>, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags)>(&::Fusion::NetworkRunner::TrySpawn)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5fc6408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySpawn", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.TrySpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnStatus (::Fusion::NetworkRunner::*)(::Fusion::NetworkPrefabId, ::by_ref<::Fusion::NetworkObject*>, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags)>(&::Fusion::NetworkRunner::TrySpawn)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5fc67b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySpawn", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SpawnAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnOp (::Fusion::NetworkRunner::*)(::UnityEngine::GameObject*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags, ::Fusion::NetworkObjectSpawnDelegate*)>(&::Fusion::NetworkRunner::SpawnAsync)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5fc69ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnAsync", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SpawnAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnOp (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags, ::Fusion::NetworkObjectSpawnDelegate*)>(&::Fusion::NetworkRunner::SpawnAsync)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5fc6bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnAsync", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SpawnAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnOp (::Fusion::NetworkRunner::*)(::Fusion::NetworkPrefabRef, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags, ::Fusion::NetworkObjectSpawnDelegate*)>(&::Fusion::NetworkRunner::SpawnAsync)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5fc7000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnAsync", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SpawnAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnOp (::Fusion::NetworkRunner::*)(::Fusion::NetworkObjectGuid, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags, ::Fusion::NetworkObjectSpawnDelegate*)>(&::Fusion::NetworkRunner::SpawnAsync)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5fc7310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnAsync", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.SpawnAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnOp (::Fusion::NetworkRunner::*)(::Fusion::NetworkPrefabId, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::Fusion::NetworkRunner_OnBeforeSpawned*, ::Fusion::NetworkSpawnFlags, ::Fusion::NetworkObjectSpawnDelegate*)>(&::Fusion::NetworkRunner::SpawnAsync)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5fc7610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnAsync", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsCloudReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsCloudReady)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5faf094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsCloudReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsInSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsInSession)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fc77b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsInSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_UserId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fb3250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_AuthenticationValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::AuthenticationValues* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_AuthenticationValues)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fc7834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_AuthenticationValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_GameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::GameMode (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_GameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc7868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_GameMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.set_GameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::GameMode)>(&::Fusion::NetworkRunner::set_GameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc7870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"set_GameMode", {}, {::i2c::type_of<::Fusion::GameMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_SessionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SessionInfo* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_SessionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc7878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_SessionInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.set_SessionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::SessionInfo*)>(&::Fusion::NetworkRunner::set_SessionInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fc7880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"set_SessionInfo", {}, {::i2c::type_of<::Fusion::SessionInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_LobbyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LobbyInfo* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_LobbyInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc7890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LobbyInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.set_LobbyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::LobbyInfo*)>(&::Fusion::NetworkRunner::set_LobbyInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fc7898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"set_LobbyInfo", {}, {::i2c::type_of<::Fusion::LobbyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_CurrentConnectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::ConnectionType (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_CurrentConnectionType)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5fc78a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_CurrentConnectionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_NATType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::Stun::NATType (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_NATType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fc79e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_NATType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.get_IsSharedModeMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::get_IsSharedModeMasterClient)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fb4440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsSharedModeMasterClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.JoinSessionLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* (::Fusion::NetworkRunner::*)(::Fusion::SessionLobby, ::StringW, ::Fusion::Photon::Realtime::AuthenticationValues*, ::Fusion::Photon::Realtime::FusionAppSettings*, ::System::Nullable_1<bool>, ::System::Threading::CancellationToken, bool)>(&::Fusion::NetworkRunner::JoinSessionLobby)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5fc79f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"JoinSessionLobby", {}, {::i2c::type_of<::Fusion::SessionLobby>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), ::i2c::type_of<::Fusion::Photon::Realtime::FusionAppSettings*>(), ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.StartGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* (::Fusion::NetworkRunner::*)(::Fusion::StartGameArgs)>(&::Fusion::NetworkRunner::StartGame)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5fc7bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"StartGame", {}, {::i2c::type_of<::Fusion::StartGameArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ConnectToCloud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::NetworkRunner::*)(::Fusion::Photon::Realtime::AuthenticationValues*, ::Fusion::Photon::Realtime::FusionAppSettings*, ::Fusion::CloudCommunicator*, ::System::Threading::CancellationToken, ::System::Nullable_1<bool>, bool)>(&::Fusion::NetworkRunner::ConnectToCloud)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5fc83dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ConnectToCloud", {}, {::i2c::type_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), ::i2c::type_of<::Fusion::Photon::Realtime::FusionAppSettings*>(), ::i2c::type_of<::Fusion::CloudCommunicator*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.DisconnectFromCloud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::DisconnectFromCloud)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5fb1108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"DisconnectFromCloud", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.StartGameModeSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* (::Fusion::NetworkRunner::*)(::Fusion::StartGameArgs)>(&::Fusion::NetworkRunner::StartGameModeSinglePlayer)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5fc812c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"StartGameModeSinglePlayer", {}, {::i2c::type_of<::Fusion::StartGameArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.StartGameModeCloud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* (::Fusion::NetworkRunner::*)(::Fusion::StartGameArgs)>(&::Fusion::NetworkRunner::StartGameModeCloud)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5fc8284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"StartGameModeCloud", {}, {::i2c::type_of<::Fusion::StartGameArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.ShutdownAndBuildResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* (::Fusion::NetworkRunner::*)(::System::Exception*)>(&::Fusion::NetworkRunner::ShutdownAndBuildResult)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5fc8634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ShutdownAndBuildResult", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::Fusion::NetworkRunner::InvokeSessionListUpdated)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5fc8784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeSessionListUpdated", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner.InvokeCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::NetworkRunner::InvokeCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5fc8954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::_ctor)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5fc8b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._RunHostMigrationResume_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::_RunHostMigrationResume_b__11_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fc8f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<RunHostMigrationResume>b__11_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._SendHostMigrationSnapshot_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner::*)()>(&::Fusion::NetworkRunner::_SendHostMigrationSnapshot_b__17_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fc8f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SendHostMigrationSnapshot>b__17_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._UnloadScene_b__303_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkRunner::*)(::Fusion::SceneRef)>(&::Fusion::NetworkRunner::_UnloadScene_b__303_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fc9040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<UnloadScene>b__303_0", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._SceneInfoSyncSceneManager_b__322_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkSceneAsyncOp)>(&::Fusion::NetworkRunner::_SceneInfoSyncSceneManager_b__322_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fc90ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SceneInfoSyncSceneManager>b__322_0", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._SceneInfoSyncSceneManager_b__322_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkSceneAsyncOp)>(&::Fusion::NetworkRunner::_SceneInfoSyncSceneManager_b__322_1)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5fc90f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SceneInfoSyncSceneManager>b__322_1", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._Fusion_Simulation_ICallbacks_UpdateRemotePrefabs_g__InstanceAcquired_337_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner::*)(::Fusion::NetworkObjectMeta*, ::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner::_Fusion_Simulation_ICallbacks_UpdateRemotePrefabs_g__InstanceAcquired_337_0)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5fbfb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<Fusion.Simulation.ICallbacks.UpdateRemotePrefabs>g__InstanceAcquired|337_0", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._SpawnInternal_g__CheckIdOrGetNewId_370_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>)>(&::Fusion::NetworkRunner::_SpawnInternal_g__CheckIdOrGetNewId_370_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5fc4a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SpawnInternal>g__CheckIdOrGetNewId|370_0", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._SpawnInternal_g__Failed_370_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnOp (::Fusion::NetworkRunner::*)(::Fusion::NetworkSpawnStatus, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>)>(&::Fusion::NetworkRunner::_SpawnInternal_g__Failed_370_1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fc4668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SpawnInternal>g__Failed|370_1", {}, {::i2c::type_of<::Fusion::NetworkSpawnStatus>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._SpawnInternal_g__Complete_370_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnOp (::Fusion::NetworkRunner::*)(::Fusion::NetworkObject*, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>)>(&::Fusion::NetworkRunner::_SpawnInternal_g__Complete_370_2)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fc4b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SpawnInternal>g__Complete|370_2", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner._SpawnInternal_g__Incomplete_370_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnOp (::Fusion::NetworkRunner::*)(::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>)>(&::Fusion::NetworkRunner::_SpawnInternal_g__Incomplete_370_3)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5fc46e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SpawnInternal>g__Incomplete|370_3", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Protocol::HostMigration*& Fusion::NetworkRunner::__cordl_internal_get__lastHostMigrationInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHostMigrationInfo;
}
constexpr ::Fusion::Protocol::HostMigration* const& Fusion::NetworkRunner::__cordl_internal_get__lastHostMigrationInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHostMigrationInfo;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__lastHostMigrationInfo(::Fusion::Protocol::HostMigration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastHostMigrationInfo = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::NetworkRunner::__cordl_internal_get__hostSnapshotTempData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hostSnapshotTempData;
}
constexpr ::ArrayW<uint8_t> const& Fusion::NetworkRunner::__cordl_internal_get__hostSnapshotTempData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hostSnapshotTempData;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__hostSnapshotTempData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hostSnapshotTempData = value;
}
constexpr int32_t& Fusion::NetworkRunner::__cordl_internal_get_LastSnapshotTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastSnapshotTick;
}
constexpr int32_t const& Fusion::NetworkRunner::__cordl_internal_get_LastSnapshotTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastSnapshotTick;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set_LastSnapshotTick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastSnapshotTick = value;
}
constexpr int32_t& Fusion::NetworkRunner::__cordl_internal_get_LastConfirmedSnapshotTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastConfirmedSnapshotTick;
}
constexpr int32_t const& Fusion::NetworkRunner::__cordl_internal_get_LastConfirmedSnapshotTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastConfirmedSnapshotTick;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set_LastConfirmedSnapshotTick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastConfirmedSnapshotTick = value;
}
constexpr ::Fusion::NetworkRunner_ObjectDelegate*& Fusion::NetworkRunner::__cordl_internal_get_ObjectAcquired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectAcquired;
}
constexpr ::Fusion::NetworkRunner_ObjectDelegate* const& Fusion::NetworkRunner::__cordl_internal_get_ObjectAcquired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectAcquired;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set_ObjectAcquired(::Fusion::NetworkRunner_ObjectDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObjectAcquired = value;
}
constexpr ::GlobalNamespace::NetworkRunner_DeferredShutdownParams& Fusion::NetworkRunner::__cordl_internal_get__deferredShutdownParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredShutdownParams;
}
constexpr ::GlobalNamespace::NetworkRunner_DeferredShutdownParams const& Fusion::NetworkRunner::__cordl_internal_get__deferredShutdownParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredShutdownParams;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__deferredShutdownParams(::GlobalNamespace::NetworkRunner_DeferredShutdownParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deferredShutdownParams = value;
}
constexpr ::Fusion::Simulation*& Fusion::NetworkRunner::__cordl_internal_get__simulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr ::Fusion::Simulation* const& Fusion::NetworkRunner::__cordl_internal_get__simulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__simulation(::Fusion::Simulation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulation = value;
}
constexpr ::GlobalNamespace::NetworkRunner_SimulationPhase& Fusion::NetworkRunner::__cordl_internal_get__simulationPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationPhase;
}
constexpr ::GlobalNamespace::NetworkRunner_SimulationPhase const& Fusion::NetworkRunner::__cordl_internal_get__simulationPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationPhase;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__simulationPhase(::GlobalNamespace::NetworkRunner_SimulationPhase  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulationPhase = value;
}
constexpr ::GlobalNamespace::NetworkRunner_ShutdownFlags& Fusion::NetworkRunner::__cordl_internal_get__simulationShutdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationShutdown;
}
constexpr ::GlobalNamespace::NetworkRunner_ShutdownFlags const& Fusion::NetworkRunner::__cordl_internal_get__simulationShutdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationShutdown;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__simulationShutdown(::GlobalNamespace::NetworkRunner_ShutdownFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulationShutdown = value;
}
constexpr ::Fusion::SimulationBehaviourUpdater*& Fusion::NetworkRunner::__cordl_internal_get__behaviourUpdater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____behaviourUpdater;
}
constexpr ::Fusion::SimulationBehaviourUpdater* const& Fusion::NetworkRunner::__cordl_internal_get__behaviourUpdater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____behaviourUpdater;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__behaviourUpdater(::Fusion::SimulationBehaviourUpdater*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____behaviourUpdater = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*& Fusion::NetworkRunner::__cordl_internal_get__callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>* const& Fusion::NetworkRunner::__cordl_internal_get__callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__callbacks(::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callbacks = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::NetworkId>*& Fusion::NetworkRunner::__cordl_internal_get__destroyIdsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destroyIdsBuffer;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::NetworkId>* const& Fusion::NetworkRunner::__cordl_internal_get__destroyIdsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destroyIdsBuffer;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__destroyIdsBuffer(::System::Collections::Generic::List_1<::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destroyIdsBuffer = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::NetworkRunner_SpawnArgs>*& Fusion::NetworkRunner::__cordl_internal_get__spawnQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::NetworkRunner_SpawnArgs>* const& Fusion::NetworkRunner::__cordl_internal_get__spawnQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnQueue;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__spawnQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::NetworkRunner_SpawnArgs>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnQueue = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Fusion::NetworkRunner::__cordl_internal_get__initializeOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializeOperation;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Fusion::NetworkRunner::__cordl_internal_get__initializeOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializeOperation;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__initializeOperation(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initializeOperation = value;
}
constexpr bool& Fusion::NetworkRunner::__cordl_internal_get_OnGameStartedInvoked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGameStartedInvoked;
}
constexpr bool const& Fusion::NetworkRunner::__cordl_internal_get_OnGameStartedInvoked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGameStartedInvoked;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set_OnGameStartedInvoked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGameStartedInvoked = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::ISpawned*>*& Fusion::NetworkRunner::__cordl_internal_get__spawnedSimBehaviourQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnedSimBehaviourQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::ISpawned*>* const& Fusion::NetworkRunner::__cordl_internal_get__spawnedSimBehaviourQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnedSimBehaviourQueue;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__spawnedSimBehaviourQueue(::System::Collections::Generic::Queue_1<::Fusion::ISpawned*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnedSimBehaviourQueue = value;
}
constexpr ::Fusion::NetworkProjectConfig*& Fusion::NetworkRunner::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::Fusion::NetworkProjectConfig* const& Fusion::NetworkRunner::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__config(::Fusion::NetworkProjectConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr int32_t& Fusion::NetworkRunner::__cordl_internal_get__ticksExecuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticksExecuted;
}
constexpr int32_t const& Fusion::NetworkRunner::__cordl_internal_get__ticksExecuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticksExecuted;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__ticksExecuted(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ticksExecuted = value;
}
constexpr ::Fusion::INetworkRunnerUpdater*& Fusion::NetworkRunner::__cordl_internal_get__updater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updater;
}
constexpr ::Fusion::INetworkRunnerUpdater* const& Fusion::NetworkRunner::__cordl_internal_get__updater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updater;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__updater(::Fusion::INetworkRunnerUpdater*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updater = value;
}
constexpr ::Fusion::INetworkObjectInitializer*& Fusion::NetworkRunner::__cordl_internal_get__objectInitializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectInitializer;
}
constexpr ::Fusion::INetworkObjectInitializer* const& Fusion::NetworkRunner::__cordl_internal_get__objectInitializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectInitializer;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__objectInitializer(::Fusion::INetworkObjectInitializer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectInitializer = value;
}
constexpr ::Fusion::INetworkObjectProvider*& Fusion::NetworkRunner::__cordl_internal_get__objectProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectProvider;
}
constexpr ::Fusion::INetworkObjectProvider* const& Fusion::NetworkRunner::__cordl_internal_get__objectProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectProvider;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__objectProvider(::Fusion::INetworkObjectProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectProvider = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::NetworkRunner::__cordl_internal_get__connectionToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionToken;
}
constexpr ::ArrayW<uint8_t> const& Fusion::NetworkRunner::__cordl_internal_get__connectionToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionToken;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__connectionToken(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connectionToken = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::UnityW<::Fusion::NetworkObject>>*& Fusion::NetworkRunner::__cordl_internal_get__attachableInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachableInstances;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::UnityW<::Fusion::NetworkObject>>* const& Fusion::NetworkRunner::__cordl_internal_get__attachableInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachableInstances;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__attachableInstances(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::UnityW<::Fusion::NetworkObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachableInstances = value;
}
constexpr ::System::Nullable_1<bool>& Fusion::NetworkRunner::__cordl_internal_get__provideInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____provideInput;
}
constexpr ::System::Nullable_1<bool> const& Fusion::NetworkRunner::__cordl_internal_get__provideInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____provideInput;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__provideInput(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____provideInput = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Fusion::NetworkRunner::__cordl_internal_get_OperationsCancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationsCancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Fusion::NetworkRunner::__cordl_internal_get_OperationsCancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationsCancellationTokenSource;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set_OperationsCancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationsCancellationTokenSource = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*& Fusion::NetworkRunner::__cordl_internal_get__remotePrefabsWaitingForSpawnedCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remotePrefabsWaitingForSpawnedCallback;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* const& Fusion::NetworkRunner::__cordl_internal_get__remotePrefabsWaitingForSpawnedCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remotePrefabsWaitingForSpawnedCallback;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__remotePrefabsWaitingForSpawnedCallback(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remotePrefabsWaitingForSpawnedCallback = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*& Fusion::NetworkRunner::__cordl_internal_get__remoteCreateQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteCreateQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>* const& Fusion::NetworkRunner::__cordl_internal_get__remoteCreateQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteCreateQueue;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__remoteCreateQueue(::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remoteCreateQueue = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*& Fusion::NetworkRunner::__cordl_internal_get__remoteCreateNestedQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteCreateNestedQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>* const& Fusion::NetworkRunner::__cordl_internal_get__remoteCreateNestedQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteCreateNestedQueue;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__remoteCreateNestedQueue(::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remoteCreateNestedQueue = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*& Fusion::NetworkRunner::__cordl_internal_get__remoteDestroyQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteDestroyQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>* const& Fusion::NetworkRunner::__cordl_internal_get__remoteDestroyQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteDestroyQueue;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__remoteDestroyQueue(::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remoteDestroyQueue = value;
}
constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*& Fusion::NetworkRunner::__cordl_internal_get__onGameStartAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onGameStartAction;
}
constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* const& Fusion::NetworkRunner::__cordl_internal_get__onGameStartAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onGameStartAction;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__onGameStartAction(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onGameStartAction = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::Fusion::NetworkObjectInactivityGuard>>*& Fusion::NetworkRunner::__cordl_internal_get__inactivityGuardPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inactivityGuardPool;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::Fusion::NetworkObjectInactivityGuard>>* const& Fusion::NetworkRunner::__cordl_internal_get__inactivityGuardPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inactivityGuardPool;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__inactivityGuardPool(::System::Collections::Generic::Stack_1<::UnityW<::Fusion::NetworkObjectInactivityGuard>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inactivityGuardPool = value;
}
constexpr bool& Fusion::NetworkRunner::__cordl_internal_get__simulateMultiPeerPhysicsScenes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulateMultiPeerPhysicsScenes;
}
constexpr bool const& Fusion::NetworkRunner::__cordl_internal_get__simulateMultiPeerPhysicsScenes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulateMultiPeerPhysicsScenes;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__simulateMultiPeerPhysicsScenes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulateMultiPeerPhysicsScenes = value;
}
constexpr ::Fusion::INetworkSceneManager*& Fusion::NetworkRunner::__cordl_internal_get__sceneManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneManager;
}
constexpr ::Fusion::INetworkSceneManager* const& Fusion::NetworkRunner::__cordl_internal_get__sceneManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneManager;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__sceneManager(::Fusion::INetworkSceneManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneManager = value;
}
constexpr ::Fusion::NetworkSceneInfo& Fusion::NetworkRunner::__cordl_internal_get__sceneInfoInitial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfoInitial;
}
constexpr ::Fusion::NetworkSceneInfo const& Fusion::NetworkRunner::__cordl_internal_get__sceneInfoInitial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfoInitial;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__sceneInfoInitial(::Fusion::NetworkSceneInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneInfoInitial = value;
}
constexpr ::Fusion::NetworkSceneInfoChangeSource& Fusion::NetworkRunner::__cordl_internal_get__sceneInfoChangeSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfoChangeSource;
}
constexpr ::Fusion::NetworkSceneInfoChangeSource const& Fusion::NetworkRunner::__cordl_internal_get__sceneInfoChangeSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfoChangeSource;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__sceneInfoChangeSource(::Fusion::NetworkSceneInfoChangeSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneInfoChangeSource = value;
}
constexpr ::Fusion::NetworkSceneInfo& Fusion::NetworkRunner::__cordl_internal_get__sceneInfoSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfoSnapshot;
}
constexpr ::Fusion::NetworkSceneInfo const& Fusion::NetworkRunner::__cordl_internal_get__sceneInfoSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfoSnapshot;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__sceneInfoSnapshot(::Fusion::NetworkSceneInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneInfoSnapshot = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& Fusion::NetworkRunner::__cordl_internal_get__sceneLoadInitialTCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneLoadInitialTCS;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* const& Fusion::NetworkRunner::__cordl_internal_get__sceneLoadInitialTCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneLoadInitialTCS;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__sceneLoadInitialTCS(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneLoadInitialTCS = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*>*& Fusion::NetworkRunner::__cordl_internal_get__reliableTransfers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reliableTransfers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*>* const& Fusion::NetworkRunner::__cordl_internal_get__reliableTransfers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reliableTransfers;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__reliableTransfers(::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reliableTransfers = value;
}
constexpr ::Fusion::GameMode& Fusion::NetworkRunner::__cordl_internal_get__GameMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GameMode_k__BackingField;
}
constexpr ::Fusion::GameMode const& Fusion::NetworkRunner::__cordl_internal_get__GameMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GameMode_k__BackingField;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__GameMode_k__BackingField(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GameMode_k__BackingField = value;
}
constexpr ::Fusion::SessionInfo*& Fusion::NetworkRunner::__cordl_internal_get__SessionInfo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionInfo_k__BackingField;
}
constexpr ::Fusion::SessionInfo* const& Fusion::NetworkRunner::__cordl_internal_get__SessionInfo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionInfo_k__BackingField;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__SessionInfo_k__BackingField(::Fusion::SessionInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionInfo_k__BackingField = value;
}
constexpr ::Fusion::LobbyInfo*& Fusion::NetworkRunner::__cordl_internal_get__LobbyInfo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LobbyInfo_k__BackingField;
}
constexpr ::Fusion::LobbyInfo* const& Fusion::NetworkRunner::__cordl_internal_get__LobbyInfo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LobbyInfo_k__BackingField;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__LobbyInfo_k__BackingField(::Fusion::LobbyInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LobbyInfo_k__BackingField = value;
}
constexpr bool& Fusion::NetworkRunner::__cordl_internal_get__alreadyInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alreadyInitialized;
}
constexpr bool const& Fusion::NetworkRunner::__cordl_internal_get__alreadyInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alreadyInitialized;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__alreadyInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alreadyInitialized = value;
}
constexpr ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*& Fusion::NetworkRunner::__cordl_internal_get_CloudAddressRewriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CloudAddressRewriter;
}
constexpr ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>* const& Fusion::NetworkRunner::__cordl_internal_get_CloudAddressRewriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CloudAddressRewriter;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set_CloudAddressRewriter(::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CloudAddressRewriter = value;
}
constexpr ::Fusion::Async::AsyncOperationHandler_1<::Fusion::ShutdownReason>*& Fusion::NetworkRunner::__cordl_internal_get__startGameOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startGameOperation;
}
constexpr ::Fusion::Async::AsyncOperationHandler_1<::Fusion::ShutdownReason>* const& Fusion::NetworkRunner::__cordl_internal_get__startGameOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startGameOperation;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__startGameOperation(::Fusion::Async::AsyncOperationHandler_1<::Fusion::ShutdownReason>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startGameOperation = value;
}
constexpr ::Fusion::CloudServices*& Fusion::NetworkRunner::__cordl_internal_get__cloudServices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloudServices;
}
constexpr ::Fusion::CloudServices* const& Fusion::NetworkRunner::__cordl_internal_get__cloudServices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloudServices;
}
constexpr void Fusion::NetworkRunner::__cordl_internal_set__cloudServices(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cloudServices = value;
}
inline void Fusion::NetworkRunner::setStaticF__instances(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*, "_instances", ::Fusion::NetworkRunner*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>* Fusion::NetworkRunner::getStaticF__instances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*, "_instances", ::Fusion::NetworkRunner*>();
}
inline void Fusion::NetworkRunner::setStaticF_CloudConnectionLost(::Fusion::NetworkRunner_CloudConnectionLostHandler*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkRunner_CloudConnectionLostHandler*, "CloudConnectionLost", ::Fusion::NetworkRunner*>(std::forward<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(value));
}
inline ::Fusion::NetworkRunner_CloudConnectionLostHandler* Fusion::NetworkRunner::getStaticF_CloudConnectionLost()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkRunner_CloudConnectionLostHandler*, "CloudConnectionLost", ::Fusion::NetworkRunner*>();
}
inline void Fusion::NetworkRunner::setStaticF__cachedRegionSummary(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_cachedRegionSummary", ::Fusion::NetworkRunner*>(std::forward<::StringW>(value));
}
inline ::StringW Fusion::NetworkRunner::getStaticF__cachedRegionSummary()  {
return ::cordl_internals::getStaticField<::StringW, "_cachedRegionSummary", ::Fusion::NetworkRunner*>();
}
inline bool Fusion::NetworkRunner::get_IsResume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsResume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Fusion::NetworkRunner::PushHostMigrationSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"PushHostMigrationSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>* Fusion::NetworkRunner::GetResumeSnapshotNetworkObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetResumeSnapshotNetworkObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>* Fusion::NetworkRunner::GetResumeSnapshotNetworkSceneObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetResumeSnapshotNetworkSceneObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>*>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::SetHostMigrationBandwidth(int32_t  bytePerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetHostMigrationBandwidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytePerSecond);
}
inline ::System::Collections::IEnumerator* Fusion::NetworkRunner::RunHostMigrationResume(::Fusion::NetworkRunnerInitializeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RunHostMigrationResume", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, args);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkRunner::GetNetworkObjectFromResumeSnapshot(::Fusion::NetworkObjectHeaderPtr  networkObjectPtr, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*  headerList, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*  nestedMapping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetNetworkObjectFromResumeSnapshot", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPtr>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, networkObjectPtr, headerList, nestedMapping);
}
inline void Fusion::NetworkRunner::InitializeTempNetworkObjectInstance(::Fusion::NetworkObjectHeader*  header, ::Fusion::NetworkObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InitializeTempNetworkObjectInstance", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, instance);
}
inline void Fusion::NetworkRunner::SetupHostMigration(::Fusion::Protocol::HostMigration*  hostMigration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetupHostMigration", {}, {::i2c::type_of<::Fusion::Protocol::HostMigration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hostMigration);
}
inline void Fusion::NetworkRunner::StartHostMigration(::Fusion::Protocol::Snapshot*  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"StartHostMigration", {}, {::i2c::type_of<::Fusion::Protocol::Snapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot);
}
inline void Fusion::NetworkRunner::InvokeHostMigration(::Fusion::HostMigrationToken*  migrationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeHostMigration", {}, {::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, migrationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Fusion::NetworkRunner::SendHostMigrationSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SendHostMigrationSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::GetServerSnapshot(::by_ref<::ArrayW<uint8_t>>  data, ::by_ref<::Fusion::Tick>  tick, ::by_ref<uint32_t>  idCounter, ::by_ref<int32_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetServerSnapshot", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::Fusion::Tick>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, tick, idCounter, length);
}
inline ::GlobalNamespace::NetworkRunner_BuildTypes Fusion::NetworkRunner::get_BuildType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_BuildType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkRunner_BuildTypes>(nullptr, ___internal_method);
}
inline void Fusion::NetworkRunner::add_ObjectAcquired(::Fusion::NetworkRunner_ObjectDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"add_ObjectAcquired", {}, {::i2c::type_of<::Fusion::NetworkRunner_ObjectDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkRunner::remove_ObjectAcquired(::Fusion::NetworkRunner_ObjectDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"remove_ObjectAcquired", {}, {::i2c::type_of<::Fusion::NetworkRunner_ObjectDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkRunner::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsSimulationUpdating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsSimulationUpdating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_ProvideInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_ProvideInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::set_ProvideInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"set_ProvideInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Topologies Fusion::NetworkRunner::get_Topology()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Topology", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Topologies>(this, ___internal_method);
}
inline ::Fusion::Simulation* Fusion::NetworkRunner::get_Simulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Simulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Simulation*>(this, ___internal_method);
}
inline ::Fusion::SimulationModes Fusion::NetworkRunner::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationModes>(this, ___internal_method);
}
inline ::Fusion::SimulationStages Fusion::NetworkRunner::get_Stage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Stage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationStages>(this, ___internal_method);
}
inline float_t Fusion::NetworkRunner::get_DeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Fusion::NetworkRunner::get_SimulationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_SimulationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Fusion::NetworkRunner::get_LocalRenderTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LocalRenderTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Fusion::NetworkRunner::get_RemoteRenderTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_RemoteRenderTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsShutdownDeferred()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsShutdownDeferred", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsRegularShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsRegularShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Fusion::NetworkRunner::get_LocalAlpha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LocalAlpha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Fusion::Tick Fusion::NetworkRunner::get_LatestServerTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LatestServerTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsStarting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsStarting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsConnectedToServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsConnectedToServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsSinglePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsSinglePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsLastTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsLastTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsFirstTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsFirstTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsResimulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsResimulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Fusion::NetworkRunner::get_TickRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_TickRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkRunner_States Fusion::NetworkRunner::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkRunner_States>(this, ___internal_method);
}
inline ::Fusion::PlayerRef Fusion::NetworkRunner::get_LocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline ::Fusion::Tick Fusion::NetworkRunner::get_Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline ::Fusion::NetworkProjectConfig* Fusion::NetworkRunner::get_Config()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Config", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkProjectConfig*>(this, ___internal_method);
}
inline ::Fusion::NetworkPrefabTable* Fusion::NetworkRunner::get_Prefabs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Prefabs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabTable*>(this, ___internal_method);
}
inline int32_t Fusion::NetworkRunner::get_TicksExecuted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_TicksExecuted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* Fusion::NetworkRunner::get_ActivePlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_ActivePlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*>(this, ___internal_method);
}
inline ::Fusion::INetworkObjectProvider* Fusion::NetworkRunner::get_ObjectProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_ObjectProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::INetworkObjectProvider*>(this, ___internal_method);
}
inline int32_t Fusion::NetworkRunner::get_ReliableDataSendRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_ReliableDataSendRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::set_ReliableDataSendRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"set_ReliableDataSendRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Sockets::NetAddress Fusion::NetworkRunner::get_LocalAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LocalAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method);
}
inline ::Fusion::INetworkSceneManager* Fusion::NetworkRunner::get_SceneManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_SceneManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::INetworkSceneManager*>(this, ___internal_method);
}
inline ::System::Threading::CancellationToken Fusion::NetworkRunner::get_OperationsCancellationToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_OperationsCancellationToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method);
}
inline ::UnityW<::Fusion::HitboxManager> Fusion::NetworkRunner::get_LagCompensation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LagCompensation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::HitboxManager>>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Disconnect(::Fusion::PlayerRef  player, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, token);
}
inline void Fusion::NetworkRunner::Disconnect(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Fusion::NetworkRunner::Connect(::Fusion::Sockets::NetAddress  address, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, token, uniqueId);
}
inline void Fusion::NetworkRunner::ShutdownAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ShutdownAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::NetworkRunner::Shutdown(bool  destroyGameObject, ::Fusion::ShutdownReason  shutdownReason, bool  forceShutdownProcedure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Shutdown", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::ShutdownReason>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destroyGameObject, shutdownReason, forceShutdownProcedure);
}
inline ::Fusion::Sockets::INetSocket* Fusion::NetworkRunner::CreateCloudSocket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"CreateCloudSocket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::INetSocket*>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::SetInitializationDone(::Fusion::NetworkRunnerInitializeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetInitializationDone", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Fusion::NetworkRunner::OnRuntimeConfigReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnRuntimeConfigReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline bool Fusion::NetworkRunner::TryGetInterfaceWithDefaultType(::StringW  defaultTypeName, ::by_ref<T>  result)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"TryGetInterfaceWithDefaultType", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, defaultTypeName, result);
}
inline void Fusion::NetworkRunner::InvokeOnGameStartedCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeOnGameStartedCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Fusion::NetworkRunner::Initialize(::Fusion::NetworkRunnerInitializeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, args);
}
inline void Fusion::NetworkRunner::SinglePlayerPause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SinglePlayerPause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::SinglePlayerContinue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SinglePlayerContinue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::SinglePlayerPause(bool  paused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SinglePlayerPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paused);
}
inline int32_t Fusion::NetworkRunner::GetInterfaceListsCount(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetInterfaceListsCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline ::Fusion::SimulationBehaviourListScope Fusion::NetworkRunner::GetInterfaceListHead(::System::Type*  type, int32_t  index, ::by_ref<::Fusion::SimulationBehaviour*>  head)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetInterfaceListHead", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::SimulationBehaviour*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationBehaviourListScope>(this, ___internal_method, type, index, head);
}
inline ::UnityW<::Fusion::SimulationBehaviour> Fusion::NetworkRunner::GetInterfaceListPrev(::Fusion::SimulationBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetInterfaceListPrev", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::SimulationBehaviour>>(this, ___internal_method, behaviour);
}
inline ::UnityW<::Fusion::SimulationBehaviour> Fusion::NetworkRunner::GetInterfaceListNext(::Fusion::SimulationBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetInterfaceListNext", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::SimulationBehaviour>>(this, ___internal_method, behaviour);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>* Fusion::NetworkRunner::GetAvailableRegions(::StringW  appId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetAvailableRegions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>*>(nullptr, ___internal_method, appId, cancellationToken);
}
inline ::System::Nullable_1<int32_t> Fusion::NetworkRunner::GetPlayerActorId(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerActorId", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method, player);
}
inline ::StringW Fusion::NetworkRunner::GetPlayerUserId(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerUserId", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline void Fusion::NetworkRunner::SetPlayerObject(::Fusion::PlayerRef  player, ::Fusion::NetworkObject*  networkObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetPlayerObject", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, networkObject);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkRunner::GetPlayerObject(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerObject", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, player);
}
inline bool Fusion::NetworkRunner::TryGetPlayerObject(::Fusion::PlayerRef  player, ::by_ref<::Fusion::NetworkObject*>  networkObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetPlayerObject", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, networkObject);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline ::System::Collections::Generic::List_1<T>* Fusion::NetworkRunner::GetAllBehaviours()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"GetAllBehaviours", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* Fusion::NetworkRunner::GetAllNetworkObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetAllNetworkObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::GetAllNetworkObjects(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetAllNetworkObjects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline void Fusion::NetworkRunner::GetAllBehaviours(::System::Collections::Generic::List_1<T>*  result)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"GetAllBehaviours", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline double_t Fusion::NetworkRunner::GetPlayerRtt(::Fusion::PlayerRef  playerRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerRtt", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, playerRef);
}
inline void Fusion::NetworkRunner::SendRpc(::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SendRpc", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::NetworkRunner::SendRpc(::Fusion::SimulationMessage*  message, ::by_ref<::Fusion::RpcSendResult>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SendRpc", {}, {::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<::by_ref<::Fusion::RpcSendResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, info);
}
inline bool Fusion::NetworkRunner::IsPlayerValid(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"IsPlayerValid", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::ArrayW<uint8_t> Fusion::NetworkRunner::GetPlayerConnectionToken(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerConnectionToken", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, player);
}
inline ::Fusion::ConnectionType Fusion::NetworkRunner::GetPlayerConnectionType(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPlayerConnectionType", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ConnectionType>(this, ___internal_method, player);
}
inline ::ArrayW<::UnityW<::Fusion::SimulationBehaviour>> Fusion::NetworkRunner::GetAllBehaviours(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetAllBehaviours", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>>>(this, ___internal_method, type);
}
inline void Fusion::NetworkRunner::AddCallbacks(/* [ParamArray] */ ::ArrayW<::Fusion::INetworkRunnerCallbacks*>  callbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddCallbacks", {}, {::i2c::type_of<::ArrayW<::Fusion::INetworkRunnerCallbacks*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbacks);
}
inline void Fusion::NetworkRunner::RemoveCallbacks(/* [ParamArray] */ ::ArrayW<::Fusion::INetworkRunnerCallbacks*>  callbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RemoveCallbacks", {}, {::i2c::type_of<::ArrayW<::Fusion::INetworkRunnerCallbacks*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbacks);
}
inline void Fusion::NetworkRunner::GetMemorySnapshot(::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator  targetAllocator, ::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetMemorySnapshot", {}, {::i2c::type_of<::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetAllocator, snapshot);
}
inline void Fusion::NetworkRunner::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::RenderInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RenderInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::SetMasterClient(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetMasterClient", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Fusion::NetworkRunner::UpdateInternal(double_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"UpdateInternal", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void Fusion::NetworkRunner::RegisterNetworkCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RegisterNetworkCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::SendReliableDataToPlayer(::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SendReliableDataToPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, key, data);
}
inline void Fusion::NetworkRunner::SendReliableDataToServer(::Fusion::Sockets::ReliableKey  key, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SendReliableDataToServer", {}, {::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, data);
}
inline void Fusion::NetworkRunner::SetPlayerAlwaysInterested(::Fusion::PlayerRef  player, ::Fusion::NetworkObject*  networkObject, bool  alwaysInterested)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetPlayerAlwaysInterested", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, networkObject, alwaysInterested);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Nullable_1<T> Fusion::NetworkRunner::GetInputForPlayer(::Fusion::PlayerRef  player)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"GetInputForPlayer", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<T>>(this, ___internal_method, player);
}
inline ::System::Nullable_1<::Fusion::NetworkInput> Fusion::NetworkRunner::GetRawInputForPlayer(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetRawInputForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Fusion::NetworkInput>>(this, ___internal_method, player);
}
inline void Fusion::NetworkRunner::RequestStateAuthority(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RequestStateAuthority", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Fusion::NetworkRunner::ReleaseStateAuthority(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ReleaseStateAuthority", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Fusion::NetworkRunner::TryGetInputForPlayer(::Fusion::PlayerRef  player, ::by_ref<T>  input)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"TryGetInputForPlayer", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, input);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkRunner::FindObject(::Fusion::NetworkId  networkId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"FindObject", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, networkId);
}
inline bool Fusion::NetworkRunner::TryFindObject(::Fusion::NetworkId  objectId, ::by_ref<::Fusion::NetworkObject*>  networkObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryFindObject", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectId, networkObject);
}
inline bool Fusion::NetworkRunner::TryFindBehaviour(::Fusion::NetworkBehaviourId  behaviourId, ::by_ref<::Fusion::NetworkBehaviour*>  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryFindBehaviour", {}, {::i2c::type_of<::Fusion::NetworkBehaviourId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviour*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, behaviourId, behaviour);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::NetworkBehaviour*>)
inline bool Fusion::NetworkRunner::TryFindBehaviour(::Fusion::NetworkBehaviourId  id, ::by_ref<T>  behaviour)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"TryFindBehaviour", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkBehaviourId>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, behaviour);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::NetworkBehaviour*>)
inline T Fusion::NetworkRunner::TryGetNetworkedBehaviourFromNetworkedObjectRef(::Fusion::NetworkId  networkId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"TryGetNetworkedBehaviourFromNetworkedObjectRef", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkId>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, networkId);
}
inline ::Fusion::NetworkId Fusion::NetworkRunner::TryGetObjectRefFromNetworkedBehaviour(::Fusion::NetworkBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetObjectRefFromNetworkedBehaviour", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(this, ___internal_method, behaviour);
}
inline ::Fusion::NetworkBehaviourId Fusion::NetworkRunner::TryGetNetworkedBehaviourId(::Fusion::NetworkBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetNetworkedBehaviourId", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviourId>(this, ___internal_method, behaviour);
}
inline bool Fusion::NetworkRunner::SetIsSimulated(::Fusion::NetworkObject*  obj, bool  simulate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetIsSimulated", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj, simulate);
}
inline void Fusion::NetworkRunner::SetAreaOfInterestGrid(int32_t  x, int32_t  y, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetAreaOfInterestGrid", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, z);
}
inline void Fusion::NetworkRunner::SetAreaOfInterestCellSize(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetAreaOfInterestCellSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline ::System::Collections::Generic::List_1<::Fusion::NetworkId>* Fusion::NetworkRunner::GetObjectsInAreaOfInterestForPlayer(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetObjectsInAreaOfInterestForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Fusion::NetworkId>*>(this, ___internal_method, player);
}
inline void Fusion::NetworkRunner::GetAreaOfInterestGizmoData(/* [TupleElementNames(new[] { "center", "size", "playerCount", "objectCount" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,int32_t,int32_t>>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetAreaOfInterestGizmoData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,int32_t,int32_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline bool Fusion::NetworkRunner::TryGetFusionStatistics(::by_ref<::Fusion::Statistics::FusionStatisticsManager*>  statisticsManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetFusionStatistics", {}, {::i2c::type_of<::by_ref<::Fusion::Statistics::FusionStatisticsManager*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, statisticsManager);
}
inline bool Fusion::NetworkRunner::TryGetBehaviourStatistics(::System::Type*  behaviourType, ::by_ref<::Fusion::Statistics::BehaviourStatisticsSnapshot*>  behaviourStatisticsSnapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetBehaviourStatistics", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::BehaviourStatisticsSnapshot*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, behaviourType, behaviourStatisticsSnapshot);
}
inline bool Fusion::NetworkRunner::Exists(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Exists", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Fusion::NetworkRunner::Exists(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Exists", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void Fusion::NetworkRunner::Despawn(::Fusion::NetworkObject*  networkObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Despawn", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkObject);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline T Fusion::NetworkRunner::GetSingleton()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"GetSingleton", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline bool Fusion::NetworkRunner::HasSingleton()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"HasSingleton", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline void Fusion::NetworkRunner::DestroySingleton()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"DestroySingleton", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::AddGlobal(::Fusion::SimulationBehaviour*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddGlobal", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void Fusion::NetworkRunner::RemoveGlobal(::Fusion::SimulationBehaviour*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RemoveGlobal", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void Fusion::NetworkRunner::AddSimulationBehaviour(::Fusion::SimulationBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddSimulationBehaviour", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline void Fusion::NetworkRunner::RemoveSimulationBehavior(::Fusion::SimulationBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RemoveSimulationBehavior", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline void Fusion::NetworkRunner::Destroy(::Fusion::NetworkObject*  networkObject, ::Fusion::NetworkObjectDestroyFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::NetworkObjectDestroyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkObject, flags);
}
inline void Fusion::NetworkRunner::DetachInstance(::Fusion::NetworkObject*  obj, bool  destroyedByEngine, bool  hasState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"DetachInstance", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, destroyedByEngine, hasState);
}
inline void Fusion::NetworkRunner::FreeObject(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"FreeObject", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Fusion::NetworkRunner::Attach(::Fusion::NetworkObject*  networkObject, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, bool  allocate, ::System::Nullable_1<bool>  masterClientObjectOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Attach", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkObject, inputAuthority, allocate, masterClientObjectOverride);
}
inline void Fusion::NetworkRunner::AddPlayerAreaOfInterest(::Fusion::PlayerRef  player, ::UnityEngine::Vector3  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddPlayerAreaOfInterest", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, center, radius);
}
inline void Fusion::NetworkRunner::ClearPlayerAreaOfInterest(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ClearPlayerAreaOfInterest", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::System::Nullable_1<bool> Fusion::NetworkRunner::IsInterestedIn(::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"IsInterestedIn", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method, obj, player);
}
inline void Fusion::NetworkRunner::SetBehaviourReplicateToAll(::Fusion::NetworkBehaviour*  behaviour, bool  replicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetBehaviourReplicateToAll", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour, replicate);
}
inline void Fusion::NetworkRunner::SetBehaviourReplicateTo(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::PlayerRef  player, bool  replicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetBehaviourReplicateTo", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour, player, replicate);
}
inline void Fusion::NetworkRunner::SetBehaviourReplicateTo(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationConnection*  sc, bool  replicate, bool  forceCreate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetBehaviourReplicateTo", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour, sc, replicate, forceCreate);
}
inline void Fusion::NetworkRunner::Attach(::ArrayW<::Fusion::NetworkObject*>  networkObjects, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, bool  allocate, ::System::Nullable_1<bool>  masterClientObjectOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Attach", {}, {::i2c::type_of<::ArrayW<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkObjects, inputAuthority, allocate, masterClientObjectOverride);
}
inline void Fusion::NetworkRunner::AttachActivatedByUser(::Fusion::NetworkObject*  networkObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AttachActivatedByUser", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkObject);
}
inline int32_t Fusion::NetworkRunner::RegisterSceneObjects(::Fusion::SceneRef  scene, ::ArrayW<::Fusion::NetworkObject*>  objects, ::Fusion::NetworkSceneLoadId  loadId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RegisterSceneObjects", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::ArrayW<::Fusion::NetworkObject*>>(), ::i2c::type_of<::Fusion::NetworkSceneLoadId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, scene, objects, loadId);
}
inline void Fusion::NetworkRunner::InvokeOnBeforeHitboxRegistration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeOnBeforeHitboxRegistration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkRunner_CreateInstanceResult Fusion::NetworkRunner::TryAcquireInstance(::Fusion::NetworkObjectTypeId  typeId, ::Fusion::NetworkObjectMeta*  meta, ::by_ref<::Fusion::NetworkObject*>  result, bool  synchronous, bool  dontDestroyOnLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryAcquireInstance", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkRunner_CreateInstanceResult>(this, ___internal_method, typeId, meta, result, synchronous, dontDestroyOnLoad);
}
inline void Fusion::NetworkRunner::InitializeNetworkObjectAssignRunner(::Fusion::NetworkObject*  instance, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  typeId, bool  isNestedObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InitializeNetworkObjectAssignRunner", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::System::Nullable_1<::Fusion::NetworkObjectTypeId>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, typeId, isNestedObject);
}
inline ::Fusion::NetworkObjectHeaderFlags Fusion::NetworkRunner::FlagsFromInstance(::Fusion::NetworkObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"FlagsFromInstance", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderFlags>(this, ___internal_method, instance);
}
inline void Fusion::NetworkRunner::InitializeNetworkObjectInstance(::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkObject*  instance, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::GlobalNamespace::NetworkRunner_AttachOptions  options, ::System::Nullable_1<bool>  masterClientObjectOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InitializeNetworkObjectInstance", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::GlobalNamespace::NetworkRunner_AttachOptions>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta, instance, inputAuthority, options, masterClientObjectOverride);
}
inline void Fusion::NetworkRunner::UnityPreInitialize(::Fusion::NetworkObjectMeta*  meta, ::GlobalNamespace::NetworkRunner_AttachOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"UnityPreInitialize", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::GlobalNamespace::NetworkRunner_AttachOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta, options);
}
inline void Fusion::NetworkRunner::InitializeNetworkObjectState(::Fusion::NetworkObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InitializeNetworkObjectState", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void Fusion::NetworkRunner::InvokeBeforeSpawnedCallbacks(::Fusion::NetworkObject*  instance, ::GlobalNamespace::NetworkRunner_AttachOptions  options, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeBeforeSpawnedCallbacks", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::GlobalNamespace::NetworkRunner_AttachOptions>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, options, onBeforeSpawned);
}
inline void Fusion::NetworkRunner::InvokeSpawnedCallback(::Fusion::NetworkObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeSpawnedCallback", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void Fusion::NetworkRunner::InvokeDespawnedCallback(::Fusion::NetworkObject*  instance, bool  hasState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeDespawnedCallback", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, hasState);
}
inline void Fusion::NetworkRunner::InvokeAfterSpawnedCallback(::Fusion::NetworkObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeAfterSpawnedCallback", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void Fusion::NetworkRunner::InvokeObjectAcquired(::Fusion::NetworkObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeObjectAcquired", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void Fusion::NetworkRunner::InvokeBeforeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeBeforeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::InvokeAfterUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeAfterUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkProjectConfig* Fusion::NetworkRunner::SetupNetworkProjectConfig(::Fusion::NetworkRunnerInitializeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetupNetworkProjectConfig", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkProjectConfig*>(nullptr, ___internal_method, args);
}
inline ::Fusion::RpcTargetStatus Fusion::NetworkRunner::GetRpcTargetStatus(::Fusion::PlayerRef  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetRpcTargetStatus", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcTargetStatus>(this, ___internal_method, target);
}
inline bool Fusion::NetworkRunner::HasAnyActiveConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"HasAnyActiveConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectRuntimeFlags Fusion::NetworkRunner::AttachOptionsToNetworkObjectFlags(::GlobalNamespace::NetworkRunner_AttachOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AttachOptionsToNetworkObjectFlags", {}, {::i2c::type_of<::GlobalNamespace::NetworkRunner_AttachOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectRuntimeFlags>(nullptr, ___internal_method, options);
}
inline ::GlobalNamespace::NetworkRunner_AttachOptions Fusion::NetworkRunner::NetworkObjectFlagsToAttachOptions(::Fusion::NetworkObjectRuntimeFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"NetworkObjectFlagsToAttachOptions", {}, {::i2c::type_of<::Fusion::NetworkObjectRuntimeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkRunner_AttachOptions>(nullptr, ___internal_method, flags);
}
inline bool Fusion::NetworkRunner::IsAwakeAtInitialization(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"IsAwakeAtInitialization", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Fusion::NetworkRunner::IsPreexistingAtInitialization(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"IsPreexistingAtInitialization", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline void Fusion::NetworkRunner::DebugOnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"DebugOnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::DebugOnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"DebugOnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::TryGetPrettyRunnerName(::System::Text::StringBuilder*  output, ::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetPrettyRunnerName", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, output, runner);
}
inline void Fusion::NetworkRunner::ResetAllSimulationStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ResetAllSimulationStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::NetworkRunner::SetupEncryption(::Fusion::Encryption::EncryptionToken*  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::Fusion::Encryption::EncryptionToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Fusion::NetworkRunner::AddInactiveObjectGuard(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddInactiveObjectGuard", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkRunner>> Fusion::NetworkRunner::GetInstancesEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetInstancesEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkRunner>>>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::Fusion::NetworkRunner>>* Fusion::NetworkRunner::get_Instances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_Instances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::Fusion::NetworkRunner>>*>(nullptr, ___internal_method);
}
inline bool Fusion::NetworkRunner::AddInstance(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"AddInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, runner);
}
inline bool Fusion::NetworkRunner::RemoveInstance(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"RemoveInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, runner);
}
inline void Fusion::NetworkRunner::SimulatePhysicsScenes(float_t  fixedDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SimulatePhysicsScenes", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixedDeltaTime);
}
inline void Fusion::NetworkRunner::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::SetSimulateMultiPeerPhysics(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SetSimulateMultiPeerPhysics", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::NetworkRunner::TryGetPhysicsInfo(::by_ref<::Fusion::NetworkPhysicsInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetPhysicsInfo", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkPhysicsInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline bool Fusion::NetworkRunner::TrySetPhysicsInfo(::Fusion::NetworkPhysicsInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySetPhysicsInfo", {}, {::i2c::type_of<::Fusion::NetworkPhysicsInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline bool Fusion::NetworkRunner::get_IsSceneAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsSceneAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsSceneManagerBusy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsSceneManagerBusy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::TryGetSceneInfo(::by_ref<::Fusion::NetworkSceneInfo>  sceneInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetSceneInfo", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkSceneInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneInfo);
}
inline bool Fusion::NetworkRunner::TryGetSceneInfo(::by_ref<::Fusion::NetworkSceneInfo>  sceneInfo, bool  allowFallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TryGetSceneInfo", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkSceneInfo>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneInfo, allowFallback);
}
inline ::Fusion::SceneRef Fusion::NetworkRunner::ValidateSceneName(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ValidateSceneName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(this, ___internal_method, sceneName);
}
inline ::Fusion::SceneRef Fusion::NetworkRunner::ValidateSceneRef(::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ValidateSceneRef", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(this, ___internal_method, sceneRef);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkRunner::ValidateSceneOp(::Fusion::NetworkSceneAsyncOp  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ValidateSceneOp", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, op);
}
inline ::Fusion::SceneRef Fusion::NetworkRunner::GetSceneRef(::StringW  sceneNameOrPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetSceneRef", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(this, ___internal_method, sceneNameOrPath);
}
inline ::Fusion::SceneRef Fusion::NetworkRunner::GetSceneRef(::UnityEngine::GameObject*  gameObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetSceneRef", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(this, ___internal_method, gameObj);
}
inline bool Fusion::NetworkRunner::MoveGameObjectToScene(::UnityEngine::GameObject*  gameObj, ::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"MoveGameObjectToScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObj, sceneRef);
}
inline bool Fusion::NetworkRunner::MoveGameObjectToSameScene(::UnityEngine::GameObject*  gameObj, ::UnityEngine::GameObject*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"MoveGameObjectToSameScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObj, other);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkRunner::LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  setActiveOnLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"LoadScene", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneName, parameters, setActiveOnLoad);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkRunner::LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode  localPhysicsMode, bool  setActiveOnLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"LoadScene", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneName, loadSceneMode, localPhysicsMode, setActiveOnLoad);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkRunner::LoadScene(::Fusion::SceneRef  sceneRef, ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode  localPhysicsMode, bool  setActiveOnLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"LoadScene", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneRef, loadSceneMode, localPhysicsMode, setActiveOnLoad);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkRunner::UnloadScene(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"UnloadScene", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneName);
}
inline ::by_ref<::Fusion::NetworkSceneInfo> Fusion::NetworkRunner::GetSceneInfoRef(bool  allowFallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetSceneInfoRef", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkSceneInfo>>(this, ___internal_method, allowFallback);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkRunner::LoadScene(::Fusion::SceneRef  sceneRef, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  setActiveOnLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"LoadScene", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneRef, parameters, setActiveOnLoad);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkRunner::UnloadScene(::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"UnloadScene", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneRef);
}
inline void Fusion::NetworkRunner::InvokeSceneLoadStart(::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeSceneLoadStart", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneRef);
}
inline void Fusion::NetworkRunner::InvokeSceneLoadDone(/* [IsReadOnly] */ ::by_ref<::Fusion::SceneLoadDoneArgs>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeSceneLoadDone", {}, {::i2c::type_of<::by_ref<::Fusion::SceneLoadDoneArgs>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::UnityEngine::SceneManagement::Scene Fusion::NetworkRunner::get_SimulationUnityScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_SimulationUnityScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method);
}
inline ::UnityW<::Fusion::NetworkRunner> Fusion::NetworkRunner::GetRunnerForGameObject(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetRunnerForGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkRunner>>(nullptr, ___internal_method, gameObject);
}
inline ::UnityW<::Fusion::NetworkRunner> Fusion::NetworkRunner::GetRunnerForScene(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetRunnerForScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkRunner>>(nullptr, ___internal_method, scene);
}
inline ::UnityEngine::PhysicsScene Fusion::NetworkRunner::GetPhysicsScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPhysicsScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene>(this, ___internal_method);
}
inline ::UnityEngine::PhysicsScene2D Fusion::NetworkRunner::GetPhysicsScene2D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"GetPhysicsScene2D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene2D>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Fusion::NetworkRunner::InstantiateInRunnerScene(::UnityEngine::GameObject*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InstantiateInRunnerScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, original, position, rotation);
}
inline ::UnityW<::UnityEngine::GameObject> Fusion::NetworkRunner::InstantiateInRunnerScene(::UnityEngine::GameObject*  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InstantiateInRunnerScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, original);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Fusion::NetworkRunner::InstantiateInRunnerScene(T  original)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"InstantiateInRunnerScene", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, original);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Fusion::NetworkRunner::InstantiateInRunnerScene(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"InstantiateInRunnerScene", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, original, position, rotation);
}
inline bool Fusion::NetworkRunner::EnsureRunnerSceneIsActive(::by_ref<::UnityEngine::SceneManagement::Scene>  previousActiveScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"EnsureRunnerSceneIsActive", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, previousActiveScene);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void Fusion::NetworkRunner::MoveToRunnerScene(T  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"MoveToRunnerScene", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void Fusion::NetworkRunner::MoveToRunnerScene(::UnityEngine::GameObject*  instance, ::System::Nullable_1<::Fusion::SceneRef>  targetSceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"MoveToRunnerScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Nullable_1<::Fusion::SceneRef>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, targetSceneRef);
}
inline void Fusion::NetworkRunner::MakeDontDestroyOnLoad(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"MakeDontDestroyOnLoad", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Fusion::NetworkRunner::ConsumeInitialSceneInfo(bool  isSceneAuthority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ConsumeInitialSceneInfo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSceneAuthority);
}
inline void Fusion::NetworkRunner::SceneInfoUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SceneInfoUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::SceneInfoSyncSceneManager(::Fusion::NetworkSceneInfoChangeSource  changeSource, ::by_ref<::Fusion::NetworkSceneInfo>  sceneInfo, ::by_ref<::Fusion::NetworkSceneInfo>  prevInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SceneInfoSyncSceneManager", {}, {::i2c::type_of<::Fusion::NetworkSceneInfoChangeSource>(), ::i2c::type_of<::by_ref<::Fusion::NetworkSceneInfo>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkSceneInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changeSource, sceneInfo, prevInfo);
}
inline void Fusion::NetworkRunner::OnRemoteSceneLoadCompleted(::Fusion::NetworkSceneAsyncOp  asyncOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnRemoteSceneLoadCompleted", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOp);
}
inline void Fusion::NetworkRunner::OnRemoteSceneUnloadCompleted(::Fusion::NetworkSceneAsyncOp  asyncOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnRemoteSceneUnloadCompleted", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOp);
}
inline bool Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_get_CanReceivePlayerJoinLeaveCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.get_CanReceivePlayerJoinLeaveCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::PlayerRef Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_get_LocalPlayerRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.get_LocalPlayerRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_get_IsSharedModeMasterClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.get_IsSharedModeMasterClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectIsSimulatedChanged(::Fusion::NetworkId  id, bool  simulated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectIsSimulatedChanged", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, simulated);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectInputAuthorityChanged(::Fusion::NetworkId  id, bool  gained)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectInputAuthorityChanged", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, gained);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectStateAuthorityChanged(::Fusion::NetworkId  id, bool  gained)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectStateAuthorityChanged", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, gained);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectChanged(::Fusion::PlayerRef  player, ::Fusion::NetworkObjectMeta*  obj, ::GlobalNamespace::Simulation_ObjectChangeType  change)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectChanged", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::GlobalNamespace::Simulation_ObjectChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, obj, change);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_RemoteObjectCreated(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.RemoteObjectCreated", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta);
}
inline bool Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_RemoteObjectDestroyed(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.RemoteObjectDestroyed", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_UpdateRemotePrefabs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.UpdateRemotePrefabs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::ProcessSpawnQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ProcessSpawnQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnBeforeCopyPreviousState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnBeforeCopyPreviousState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnServerStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnServerStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnClientStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnClientStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnInputMissing(::Fusion::SimulationInput*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnInput(::Fusion::SimulationInput*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnInput", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Fusion::NetworkRunner::OnMessageUser(::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"OnMessageUser", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Fusion::SimulationMessageResult Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnMessage(::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnMessage", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationMessageResult>(this, ___internal_method, message);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnBeforeSimulation(int32_t  forwardTickCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnBeforeSimulation", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forwardTickCount);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnAfterSimulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnAfterSimulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnBeforeClientSidePredictionReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnBeforeClientSidePredictionReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnAfterClientSidePredictionReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnAfterClientSidePredictionReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnBeforeAllTicks(bool  resimulation, int32_t  tickCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnBeforeAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, tickCount);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnAfterAllTicks(bool  resimulation, int32_t  tickCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnAfterAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, tickCount);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnBeforeTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnBeforeTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnAfterTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnAfterTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectEnterAOI(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectEnterAOI", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, id);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_ObjectExitAOI(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.ObjectExitAOI", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, id);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnConnectedToServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnConnectedToServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnDisconnectedFromServer(::Fusion::Sockets::NetDisconnectReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnConnectionFailed(::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnConnectionFailed", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteAddress, reason);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnReliableData(::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableId  id, bool  local, ::ArrayW<uint8_t>  dataArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnReliableData", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, id, local, dataArray);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_PlayerJoined(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.PlayerJoined", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_PlayerLeft(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.PlayerLeft", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::Fusion::Sockets::OnConnectionRequestReply Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnConnectionRequest(::Fusion::Sockets::NetAddress  remoteAddress, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnConnectionRequest", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::OnConnectionRequestReply>(this, ___internal_method, remoteAddress, token);
}
inline void Fusion::NetworkRunner::Fusion_Simulation_ICallbacks_OnInternalConnectionAttempt(int32_t  attempt, int32_t  totalConnectionAttempts, ::by_ref<bool>  shouldChange, ::by_ref<::Fusion::Sockets::NetAddress>  newAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Fusion.Simulation.ICallbacks.OnInternalConnectionAttempt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetAddress>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attempt, totalConnectionAttempts, shouldChange, newAddress);
}
inline bool Fusion::NetworkRunner::get_CanSpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_CanSpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::NetworkSpawnOp Fusion::NetworkRunner::SpawnInternal(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnInternal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnOp>(this, ___internal_method, args);
}
inline void Fusion::NetworkRunner::ApplySpawnArgs(::Fusion::NetworkObject*  obj, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>  spawnArgs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ApplySpawnArgs", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, spawnArgs);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline T Fusion::NetworkRunner::Spawn(T  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"Spawn", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkRunner::Spawn(::UnityEngine::GameObject*  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Spawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, prefab, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkRunner::Spawn(::Fusion::NetworkObject*  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Spawn", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, prefab, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkRunner::Spawn(::Fusion::NetworkPrefabRef  prefabRef, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Spawn", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, prefabRef, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkRunner::Spawn(::Fusion::NetworkObjectGuid  prefabGuid, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Spawn", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, prefabGuid, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkRunner::Spawn(::Fusion::NetworkPrefabId  typeId, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"Spawn", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, typeId, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline ::Fusion::NetworkSpawnStatus Fusion::NetworkRunner::TrySpawn(T  prefab, ::by_ref<T>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"TrySpawn", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnStatus>(this, ___internal_method, prefab, obj, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
inline ::Fusion::NetworkSpawnStatus Fusion::NetworkRunner::TrySpawn(::UnityEngine::GameObject*  prefab, ::by_ref<::Fusion::NetworkObject*>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySpawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnStatus>(this, ___internal_method, prefab, obj, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
inline ::Fusion::NetworkSpawnStatus Fusion::NetworkRunner::TrySpawn(::Fusion::NetworkObject*  prefab, ::by_ref<::Fusion::NetworkObject*>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySpawn", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnStatus>(this, ___internal_method, prefab, obj, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
inline ::Fusion::NetworkSpawnStatus Fusion::NetworkRunner::TrySpawn(::Fusion::NetworkPrefabRef  prefabRef, ::by_ref<::Fusion::NetworkObject*>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySpawn", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnStatus>(this, ___internal_method, prefabRef, obj, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
inline ::Fusion::NetworkSpawnStatus Fusion::NetworkRunner::TrySpawn(::Fusion::NetworkObjectGuid  prefabGuid, ::by_ref<::Fusion::NetworkObject*>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySpawn", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnStatus>(this, ___internal_method, prefabGuid, obj, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
inline ::Fusion::NetworkSpawnStatus Fusion::NetworkRunner::TrySpawn(::Fusion::NetworkPrefabId  typeId, ::by_ref<::Fusion::NetworkObject*>  obj, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"TrySpawn", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnStatus>(this, ___internal_method, typeId, obj, position, rotation, inputAuthority, onBeforeSpawned, flags);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::SimulationBehaviour*>)
inline ::Fusion::NetworkSpawnOp Fusion::NetworkRunner::SpawnAsync(T  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner*>(),
                    {"SpawnAsync", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnOp>(this, ___internal_method, prefab, position, rotation, inputAuthority, onBeforeSpawned, flags, onCompleted);
}
inline ::Fusion::NetworkSpawnOp Fusion::NetworkRunner::SpawnAsync(::UnityEngine::GameObject*  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnAsync", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnOp>(this, ___internal_method, prefab, position, rotation, inputAuthority, onBeforeSpawned, flags, onCompleted);
}
inline ::Fusion::NetworkSpawnOp Fusion::NetworkRunner::SpawnAsync(::Fusion::NetworkObject*  prefab, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnAsync", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnOp>(this, ___internal_method, prefab, position, rotation, inputAuthority, onBeforeSpawned, flags, onCompleted);
}
inline ::Fusion::NetworkSpawnOp Fusion::NetworkRunner::SpawnAsync(::Fusion::NetworkPrefabRef  prefabRef, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnAsync", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnOp>(this, ___internal_method, prefabRef, position, rotation, inputAuthority, onBeforeSpawned, flags, onCompleted);
}
inline ::Fusion::NetworkSpawnOp Fusion::NetworkRunner::SpawnAsync(::Fusion::NetworkObjectGuid  prefabGuid, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnAsync", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnOp>(this, ___internal_method, prefabGuid, position, rotation, inputAuthority, onBeforeSpawned, flags, onCompleted);
}
inline ::Fusion::NetworkSpawnOp Fusion::NetworkRunner::SpawnAsync(::Fusion::NetworkPrefabId  typeId, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::Fusion::NetworkRunner_OnBeforeSpawned*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  onCompleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"SpawnAsync", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnOp>(this, ___internal_method, typeId, position, rotation, inputAuthority, onBeforeSpawned, flags, onCompleted);
}
inline bool Fusion::NetworkRunner::get_IsCloudReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsCloudReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsInSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsInSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Fusion::NetworkRunner::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::AuthenticationValues* Fusion::NetworkRunner::get_AuthenticationValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_AuthenticationValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::AuthenticationValues*>(this, ___internal_method);
}
inline ::Fusion::GameMode Fusion::NetworkRunner::get_GameMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_GameMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::GameMode>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::set_GameMode(::Fusion::GameMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"set_GameMode", {}, {::i2c::type_of<::Fusion::GameMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::SessionInfo* Fusion::NetworkRunner::get_SessionInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_SessionInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SessionInfo*>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::set_SessionInfo(::Fusion::SessionInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"set_SessionInfo", {}, {::i2c::type_of<::Fusion::SessionInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::LobbyInfo* Fusion::NetworkRunner::get_LobbyInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_LobbyInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LobbyInfo*>(this, ___internal_method);
}
inline void Fusion::NetworkRunner::set_LobbyInfo(::Fusion::LobbyInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"set_LobbyInfo", {}, {::i2c::type_of<::Fusion::LobbyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::ConnectionType Fusion::NetworkRunner::get_CurrentConnectionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_CurrentConnectionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ConnectionType>(this, ___internal_method);
}
inline ::Fusion::Sockets::Stun::NATType Fusion::NetworkRunner::get_NATType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_NATType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::Stun::NATType>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::get_IsSharedModeMasterClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"get_IsSharedModeMasterClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* Fusion::NetworkRunner::JoinSessionLobby(::Fusion::SessionLobby  sessionLobby, ::StringW  lobbyID, ::Fusion::Photon::Realtime::AuthenticationValues*  authentication, ::Fusion::Photon::Realtime::FusionAppSettings*  customAppSettings, ::System::Nullable_1<bool>  useDefaultCloudPorts, ::System::Threading::CancellationToken  cancellationToken, bool  useCachedRegions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"JoinSessionLobby", {}, {::i2c::type_of<::Fusion::SessionLobby>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), ::i2c::type_of<::Fusion::Photon::Realtime::FusionAppSettings*>(), ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>*>(this, ___internal_method, sessionLobby, lobbyID, authentication, customAppSettings, useDefaultCloudPorts, cancellationToken, useCachedRegions);
}
inline ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* Fusion::NetworkRunner::StartGame(::Fusion::StartGameArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"StartGame", {}, {::i2c::type_of<::Fusion::StartGameArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>*>(this, ___internal_method, args);
}
inline ::System::Threading::Tasks::Task* Fusion::NetworkRunner::ConnectToCloud(::Fusion::Photon::Realtime::AuthenticationValues*  authentication, ::Fusion::Photon::Realtime::FusionAppSettings*  customAppSettings, ::Fusion::CloudCommunicator*  externalCommunicator, ::System::Threading::CancellationToken  externalCancellationToken, ::System::Nullable_1<bool>  useDefaultCloudPorts, bool  useCachedRegions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ConnectToCloud", {}, {::i2c::type_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), ::i2c::type_of<::Fusion::Photon::Realtime::FusionAppSettings*>(), ::i2c::type_of<::Fusion::CloudCommunicator*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, authentication, customAppSettings, externalCommunicator, externalCancellationToken, useDefaultCloudPorts, useCachedRegions);
}
inline ::System::Threading::Tasks::Task* Fusion::NetworkRunner::DisconnectFromCloud()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"DisconnectFromCloud", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* Fusion::NetworkRunner::StartGameModeSinglePlayer(::Fusion::StartGameArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"StartGameModeSinglePlayer", {}, {::i2c::type_of<::Fusion::StartGameArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>*>(this, ___internal_method, args);
}
inline ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* Fusion::NetworkRunner::StartGameModeCloud(::Fusion::StartGameArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"StartGameModeCloud", {}, {::i2c::type_of<::Fusion::StartGameArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>*>(this, ___internal_method, args);
}
inline ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* Fusion::NetworkRunner::ShutdownAndBuildResult(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"ShutdownAndBuildResult", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>*>(this, ___internal_method, e);
}
inline void Fusion::NetworkRunner::InvokeSessionListUpdated(::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeSessionListUpdated", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionList);
}
inline void Fusion::NetworkRunner::InvokeCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"InvokeCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Fusion::NetworkRunner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::_RunHostMigrationResume_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<RunHostMigrationResume>b__11_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner::_SendHostMigrationSnapshot_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SendHostMigrationSnapshot>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkRunner::_UnloadScene_b__303_0(::Fusion::SceneRef  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<UnloadScene>b__303_0", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, x);
}
inline void Fusion::NetworkRunner::_SceneInfoSyncSceneManager_b__322_0(::Fusion::NetworkSceneAsyncOp  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SceneInfoSyncSceneManager>b__322_0", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void Fusion::NetworkRunner::_SceneInfoSyncSceneManager_b__322_1(::Fusion::NetworkSceneAsyncOp  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SceneInfoSyncSceneManager>b__322_1", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void Fusion::NetworkRunner::_Fusion_Simulation_ICallbacks_UpdateRemotePrefabs_g__InstanceAcquired_337_0(::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<Fusion.Simulation.ICallbacks.UpdateRemotePrefabs>g__InstanceAcquired|337_0", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta, instance);
}
inline ::Fusion::NetworkId Fusion::NetworkRunner::_SpawnInternal_g__CheckIdOrGetNewId_370_0(::Fusion::NetworkObject*  obj, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SpawnInternal>g__CheckIdOrGetNewId|370_0", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(this, ___internal_method, obj, _cordl_fixed_empty_name_whitespace);
}
inline ::Fusion::NetworkSpawnOp Fusion::NetworkRunner::_SpawnInternal_g__Failed_370_1(::Fusion::NetworkSpawnStatus  status, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SpawnInternal>g__Failed|370_1", {}, {::i2c::type_of<::Fusion::NetworkSpawnStatus>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnOp>(this, ___internal_method, status, _cordl_fixed_empty_name_whitespace);
}
inline ::Fusion::NetworkSpawnOp Fusion::NetworkRunner::_SpawnInternal_g__Complete_370_2(::Fusion::NetworkObject*  instance, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SpawnInternal>g__Complete|370_2", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnOp>(this, ___internal_method, instance, _cordl_fixed_empty_name_whitespace);
}
inline ::Fusion::NetworkSpawnOp Fusion::NetworkRunner::_SpawnInternal_g__Incomplete_370_3(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>  spawnArgs, ::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner*>(),
                        {"<SpawnInternal>g__Incomplete|370_3", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner___c__DisplayClass370_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnOp>(this, ___internal_method, spawnArgs, _cordl_fixed_empty_name_whitespace);
}
inline ::Fusion::NetworkRunner* Fusion::NetworkRunner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner*>());
}
/// @brief Convert operator to "::Fusion::Simulation_ICallbacks"
constexpr  Fusion::NetworkRunner::operator ::Fusion::Simulation_ICallbacks*() noexcept {
return static_cast<::Fusion::Simulation_ICallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Simulation_ICallbacks"
constexpr ::Fusion::Simulation_ICallbacks* Fusion::NetworkRunner::i___Fusion__Simulation_ICallbacks() noexcept {
return static_cast<::Fusion::Simulation_ICallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner::NetworkRunner()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::*)()>(&::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd6b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::*)()>(&::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::MoveNext)> {
  constexpr static std::size_t size = 0xac0;
  constexpr static std::size_t addrs = 0x5fd6ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd7660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*> const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::StartGameArgs& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get_args()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___args;
}
constexpr ::Fusion::StartGameArgs const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get_args() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___args;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set_args(::Fusion::StartGameArgs  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___args = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Object*& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::System::Object* const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set___s__1(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr int32_t& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr int32_t const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set___s__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
constexpr ::Fusion::NetworkRunnerInitializeArgs& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get__runnerArgs_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runnerArgs_5__3;
}
constexpr ::Fusion::NetworkRunnerInitializeArgs const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get__runnerArgs_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runnerArgs_5__3;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set__runnerArgs_5__3(::Fusion::NetworkRunnerInitializeArgs  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runnerArgs_5__3 = value;
}
constexpr ::Fusion::ShutdownReason& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get__result_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result_5__4;
}
constexpr ::Fusion::ShutdownReason const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get__result_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result_5__4;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set__result_5__4(::Fusion::ShutdownReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result_5__4 = value;
}
constexpr ::Fusion::ShutdownReason& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___s__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__5;
}
constexpr ::Fusion::ShutdownReason const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___s__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__5;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set___s__5(::Fusion::ShutdownReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__5 = value;
}
constexpr ::System::Exception*& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get__e_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__6;
}
constexpr ::System::Exception* const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get__e_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__6;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set__e_5__6(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____e_5__6 = value;
}
constexpr ::Fusion::StartGameResult*& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___s__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__7;
}
constexpr ::Fusion::StartGameResult* const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___s__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__7;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set___s__7(::Fusion::StartGameResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__7 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___u__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason> const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___u__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__2 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___u__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__3;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*> const& Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_get___u__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__3;
}
constexpr void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::__cordl_internal_set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__3 = value;
}
inline void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427* Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner__StartGameModeSinglePlayer_d__427::NetworkRunner__StartGameModeSinglePlayer_d__427()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner__StartGameModeCloud_d__428._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__StartGameModeCloud_d__428::*)()>(&::Fusion::NetworkRunner__StartGameModeCloud_d__428::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd5190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeCloud_d__428*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__StartGameModeCloud_d__428.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__StartGameModeCloud_d__428::*)()>(&::Fusion::NetworkRunner__StartGameModeCloud_d__428::MoveNext)> {
  constexpr static std::size_t size = 0x19fc;
  constexpr static std::size_t addrs = 0x5fd5198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeCloud_d__428*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__StartGameModeCloud_d__428.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__StartGameModeCloud_d__428::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::NetworkRunner__StartGameModeCloud_d__428::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd6b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeCloud_d__428*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*> const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::StartGameArgs& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get_args()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___args;
}
constexpr ::Fusion::StartGameArgs const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get_args() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___args;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set_args(::Fusion::StartGameArgs  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___args = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Nullable_1<::Fusion::SimulationModes>& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__simulationMode_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationMode_5__1;
}
constexpr ::System::Nullable_1<::Fusion::SimulationModes> const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__simulationMode_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationMode_5__1;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set__simulationMode_5__1(::System::Nullable_1<::Fusion::SimulationModes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulationMode_5__1 = value;
}
constexpr ::Fusion::GameMode& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr ::Fusion::GameMode const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___s__2(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
constexpr ::System::Object*& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___s__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__3;
}
constexpr ::System::Object* const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___s__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__3;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___s__3(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__3 = value;
}
constexpr int32_t& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___s__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr int32_t const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___s__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___s__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__4 = value;
}
constexpr ::Fusion::ShutdownReason& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__result_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result_5__5;
}
constexpr ::Fusion::ShutdownReason const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__result_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result_5__5;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set__result_5__5(::Fusion::ShutdownReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result_5__5 = value;
}
constexpr int32_t& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__customPropertiesSize_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPropertiesSize_5__6;
}
constexpr int32_t const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__customPropertiesSize_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPropertiesSize_5__6;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set__customPropertiesSize_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customPropertiesSize_5__6 = value;
}
constexpr ::GlobalNamespace::TickRate_Selection& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__configTickRate_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configTickRate_5__7;
}
constexpr ::GlobalNamespace::TickRate_Selection const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__configTickRate_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configTickRate_5__7;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set__configTickRate_5__7(::GlobalNamespace::TickRate_Selection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____configTickRate_5__7 = value;
}
constexpr ::GlobalNamespace::TickRate_Selection& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__sharedModeTickRate_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sharedModeTickRate_5__8;
}
constexpr ::GlobalNamespace::TickRate_Selection const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__sharedModeTickRate_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sharedModeTickRate_5__8;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set__sharedModeTickRate_5__8(::GlobalNamespace::TickRate_Selection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sharedModeTickRate_5__8 = value;
}
constexpr ::StringW& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__sharedModeResolved_5__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sharedModeResolved_5__9;
}
constexpr ::StringW const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__sharedModeResolved_5__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sharedModeResolved_5__9;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set__sharedModeResolved_5__9(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sharedModeResolved_5__9 = value;
}
constexpr ::Fusion::ShutdownReason& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___s__10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__10;
}
constexpr ::Fusion::ShutdownReason const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___s__10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__10;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___s__10(::Fusion::ShutdownReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__10 = value;
}
constexpr ::System::Exception*& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__e_5__11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__11;
}
constexpr ::System::Exception* const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get__e_5__11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__11;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set__e_5__11(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____e_5__11 = value;
}
constexpr ::Fusion::StartGameResult*& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___s__12()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__12;
}
constexpr ::Fusion::StartGameResult* const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___s__12() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__12;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___s__12(::Fusion::StartGameResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__12 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___u__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t> const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___u__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__2 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___u__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__3;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason> const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___u__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__3;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::ShutdownReason>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__3 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___u__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__4;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*> const& Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_get___u__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__4;
}
constexpr void Fusion::NetworkRunner__StartGameModeCloud_d__428::__cordl_internal_set___u__4(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__4 = value;
}
inline void Fusion::NetworkRunner__StartGameModeCloud_d__428::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeCloud_d__428*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__StartGameModeCloud_d__428::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeCloud_d__428*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__StartGameModeCloud_d__428::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__StartGameModeCloud_d__428*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::NetworkRunner__StartGameModeCloud_d__428* Fusion::NetworkRunner__StartGameModeCloud_d__428::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner__StartGameModeCloud_d__428*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::NetworkRunner__StartGameModeCloud_d__428::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::NetworkRunner__StartGameModeCloud_d__428::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner__StartGameModeCloud_d__428::NetworkRunner__StartGameModeCloud_d__428()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::*)()>(&::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd4bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::*)()>(&::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::MoveNext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5fd4be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd518c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*> const& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::System::Exception*& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get_e()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___e;
}
constexpr ::System::Exception* const& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get_e() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___e;
}
constexpr void Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_set_e(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___e = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::StartGameResult*& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get__result_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result_5__1;
}
constexpr ::Fusion::StartGameResult* const& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get__result_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result_5__1;
}
constexpr void Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_set__result_5__1(::Fusion::StartGameResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result_5__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429* Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner__ShutdownAndBuildResult_d__429::NetworkRunner__ShutdownAndBuildResult_d__429()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner__RunHostMigrationResume_d__11._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__RunHostMigrationResume_d__11::*)(int32_t)>(&::Fusion::NetworkRunner__RunHostMigrationResume_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fd4904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__RunHostMigrationResume_d__11.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__RunHostMigrationResume_d__11::*)()>(&::Fusion::NetworkRunner__RunHostMigrationResume_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fd492c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__RunHostMigrationResume_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner__RunHostMigrationResume_d__11::*)()>(&::Fusion::NetworkRunner__RunHostMigrationResume_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5fd4954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__RunHostMigrationResume_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkRunner__RunHostMigrationResume_d__11::*)()>(&::Fusion::NetworkRunner__RunHostMigrationResume_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd4b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__RunHostMigrationResume_d__11.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__RunHostMigrationResume_d__11::*)()>(&::Fusion::NetworkRunner__RunHostMigrationResume_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fd4b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__RunHostMigrationResume_d__11.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkRunner__RunHostMigrationResume_d__11::*)()>(&::Fusion::NetworkRunner__RunHostMigrationResume_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd4bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Fusion::NetworkRunnerInitializeArgs& Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_get_args()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___args;
}
constexpr ::Fusion::NetworkRunnerInitializeArgs const& Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_get_args() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___args;
}
constexpr void Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_set_args(::Fusion::NetworkRunnerInitializeArgs  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___args = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Simulation_Server*& Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_get__server_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server_5__1;
}
constexpr ::GlobalNamespace::Simulation_Server* const& Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_get__server_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server_5__1;
}
constexpr void Fusion::NetworkRunner__RunHostMigrationResume_d__11::__cordl_internal_set__server_5__1(::GlobalNamespace::Simulation_Server*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____server_5__1 = value;
}
inline void Fusion::NetworkRunner__RunHostMigrationResume_d__11::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::NetworkRunner__RunHostMigrationResume_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner__RunHostMigrationResume_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkRunner__RunHostMigrationResume_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__RunHostMigrationResume_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkRunner__RunHostMigrationResume_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::NetworkRunner__RunHostMigrationResume_d__11* Fusion::NetworkRunner__RunHostMigrationResume_d__11::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner__RunHostMigrationResume_d__11*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Fusion::NetworkRunner__RunHostMigrationResume_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Fusion::NetworkRunner__RunHostMigrationResume_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::NetworkRunner__RunHostMigrationResume_d__11::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::NetworkRunner__RunHostMigrationResume_d__11::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::NetworkRunner__RunHostMigrationResume_d__11::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::NetworkRunner__RunHostMigrationResume_d__11::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner__RunHostMigrationResume_d__11::NetworkRunner__RunHostMigrationResume_d__11()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::*)()>(&::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd45e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::*)()>(&::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5fd45ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd4900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr bool const& Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_set___s__1(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2* Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner__PushHostMigrationSnapshot_d__2::NetworkRunner__PushHostMigrationSnapshot_d__2()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner__JoinSessionLobby_d__423._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__JoinSessionLobby_d__423::*)()>(&::Fusion::NetworkRunner__JoinSessionLobby_d__423::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd3c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__JoinSessionLobby_d__423*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__JoinSessionLobby_d__423.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__JoinSessionLobby_d__423::*)()>(&::Fusion::NetworkRunner__JoinSessionLobby_d__423::MoveNext)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x5fd3c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__JoinSessionLobby_d__423*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__JoinSessionLobby_d__423.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__JoinSessionLobby_d__423::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::NetworkRunner__JoinSessionLobby_d__423::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd45e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__JoinSessionLobby_d__423*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*> const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::StartGameResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::SessionLobby& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_sessionLobby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionLobby;
}
constexpr ::Fusion::SessionLobby const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_sessionLobby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionLobby;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set_sessionLobby(::Fusion::SessionLobby  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionLobby = value;
}
constexpr ::StringW& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_lobbyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyID;
}
constexpr ::StringW const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_lobbyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyID;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set_lobbyID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyID = value;
}
constexpr ::Fusion::Photon::Realtime::AuthenticationValues*& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_authentication()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authentication;
}
constexpr ::Fusion::Photon::Realtime::AuthenticationValues* const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_authentication() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authentication;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set_authentication(::Fusion::Photon::Realtime::AuthenticationValues*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authentication = value;
}
constexpr ::Fusion::Photon::Realtime::FusionAppSettings*& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_customAppSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customAppSettings;
}
constexpr ::Fusion::Photon::Realtime::FusionAppSettings* const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_customAppSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customAppSettings;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set_customAppSettings(::Fusion::Photon::Realtime::FusionAppSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customAppSettings = value;
}
constexpr ::System::Nullable_1<bool>& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_useDefaultCloudPorts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDefaultCloudPorts;
}
constexpr ::System::Nullable_1<bool> const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_useDefaultCloudPorts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDefaultCloudPorts;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set_useDefaultCloudPorts(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useDefaultCloudPorts = value;
}
constexpr ::System::Threading::CancellationToken& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr bool& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_useCachedRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCachedRegions;
}
constexpr bool const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get_useCachedRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCachedRegions;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set_useCachedRegions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCachedRegions = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Object*& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::System::Object* const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set___s__1(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr int32_t& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr int32_t const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set___s__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
constexpr int16_t& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get__result_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result_5__3;
}
constexpr int16_t const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get__result_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result_5__3;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set__result_5__3(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result_5__3 = value;
}
constexpr int16_t& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___s__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr int16_t const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___s__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set___s__4(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__4 = value;
}
constexpr ::System::Exception*& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get__e_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__5;
}
constexpr ::System::Exception* const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get__e_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__5;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set__e_5__5(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____e_5__5 = value;
}
constexpr ::Fusion::StartGameResult*& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___s__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__6;
}
constexpr ::Fusion::StartGameResult* const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___s__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__6;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set___s__6(::Fusion::StartGameResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__6 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___u__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t> const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___u__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__2 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___u__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__3;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*> const& Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_get___u__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__3;
}
constexpr void Fusion::NetworkRunner__JoinSessionLobby_d__423::__cordl_internal_set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__3 = value;
}
inline void Fusion::NetworkRunner__JoinSessionLobby_d__423::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__JoinSessionLobby_d__423*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__JoinSessionLobby_d__423::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__JoinSessionLobby_d__423*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__JoinSessionLobby_d__423::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__JoinSessionLobby_d__423*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::NetworkRunner__JoinSessionLobby_d__423* Fusion::NetworkRunner__JoinSessionLobby_d__423::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner__JoinSessionLobby_d__423*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::NetworkRunner__JoinSessionLobby_d__423::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::NetworkRunner__JoinSessionLobby_d__423::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner__JoinSessionLobby_d__423::NetworkRunner__JoinSessionLobby_d__423()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::*)(int32_t)>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fd3540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fd3574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x5fd35f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fd3afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4.System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr___get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr> (::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd3b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.ValueTuple<Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr>>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fd3b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fd3b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4.System_Collections_Generic_IEnumerable_System_ValueTuple_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>* (::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_Collections_Generic_IEnumerable_System_ValueTuple_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr___GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fd3bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.Collections.Generic.IEnumerable<System.ValueTuple<Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr>>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd3c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr> const& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_set___2__current(::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Simulation_Server*& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get__server_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server_5__1;
}
constexpr ::GlobalNamespace::Simulation_Server* const& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get__server_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server_5__1;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_set__server_5__1(::GlobalNamespace::Simulation_Server*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____server_5__1 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get__headerMapping_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerMapping_5__2;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>* const& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get__headerMapping_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerMapping_5__2;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_set__headerMapping_5__2(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headerMapping_5__2 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get__nestedMapping_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nestedMapping_5__3;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>* const& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get__nestedMapping_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nestedMapping_5__3;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_set__nestedMapping_5__3(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nestedMapping_5__3 = value;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get___s__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr> const& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get___s__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_set___s__4(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__4 = value;
}
constexpr ::Fusion::NetworkObjectHeaderPtr& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get__header_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header_5__5;
}
constexpr ::Fusion::NetworkObjectHeaderPtr const& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get__header_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header_5__5;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_set__header_5__5(::Fusion::NetworkObjectHeaderPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____header_5__5 = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get__resumeObj_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resumeObj_5__6;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_get__resumeObj_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resumeObj_5__6;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__cordl_internal_set__resumeObj_5__6(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resumeObj_5__6 = value;
}
inline void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr> Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.ValueTuple<Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>* Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_Collections_Generic_IEnumerable_System_ValueTuple_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.Collections.Generic.IEnumerable<System.ValueTuple<Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4* Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>"
constexpr  Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>* Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___UnityW___Fusion__NetworkObject____Fusion__NetworkObjectHeaderPtr__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>"
constexpr  Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>* Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___UnityW___Fusion__NetworkObject____Fusion__NetworkObjectHeaderPtr__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityW<::Fusion::NetworkObject>,::Fusion::NetworkObjectHeaderPtr>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4::NetworkRunner__GetResumeSnapshotNetworkSceneObjects_d__4()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::*)(int32_t)>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fd2e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fd2e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x5fd2f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fd3400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3.System_Collections_Generic_IEnumerator_Fusion_NetworkObject__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_Collections_Generic_IEnumerator_Fusion_NetworkObject__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd3450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.NetworkObject>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fd3458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd3490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3.System_Collections_Generic_IEnumerable_Fusion_NetworkObject__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>* (::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_Collections_Generic_IEnumerable_Fusion_NetworkObject__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fd3498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.Collections.Generic.IEnumerable<Fusion.NetworkObject>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::*)()>(&::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd353c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_set___2__current(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Simulation_Server*& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get__server_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server_5__1;
}
constexpr ::GlobalNamespace::Simulation_Server* const& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get__server_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server_5__1;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_set__server_5__1(::GlobalNamespace::Simulation_Server*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____server_5__1 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get__headerMapping_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerMapping_5__2;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>* const& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get__headerMapping_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerMapping_5__2;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_set__headerMapping_5__2(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headerMapping_5__2 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get__nestedMapping_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nestedMapping_5__3;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>* const& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get__nestedMapping_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nestedMapping_5__3;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_set__nestedMapping_5__3(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nestedMapping_5__3 = value;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get___s__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr> const& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get___s__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_set___s__4(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__4 = value;
}
constexpr ::Fusion::NetworkObjectHeaderPtr& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get__header_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header_5__5;
}
constexpr ::Fusion::NetworkObjectHeaderPtr const& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get__header_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header_5__5;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_set__header_5__5(::Fusion::NetworkObjectHeaderPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____header_5__5 = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get__resumeObj_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resumeObj_5__6;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_get__resumeObj_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resumeObj_5__6;
}
constexpr void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__cordl_internal_set__resumeObj_5__6(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resumeObj_5__6 = value;
}
inline void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_Collections_Generic_IEnumerator_Fusion_NetworkObject__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.NetworkObject>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>* Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_Collections_Generic_IEnumerable_Fusion_NetworkObject__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.Collections.Generic.IEnumerable<Fusion.NetworkObject>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3* Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>"
constexpr  Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>* Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::i___System__Collections__Generic__IEnumerable_1___UnityW___Fusion__NetworkObject__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>"
constexpr  Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>* Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::i___System__Collections__Generic__IEnumerator_1___UnityW___Fusion__NetworkObject__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3::NetworkRunner__GetResumeSnapshotNetworkObjects_d__3()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner__DisconnectFromCloud_d__426._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__DisconnectFromCloud_d__426::*)()>(&::Fusion::NetworkRunner__DisconnectFromCloud_d__426::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd2bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__DisconnectFromCloud_d__426*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__DisconnectFromCloud_d__426.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__DisconnectFromCloud_d__426::*)()>(&::Fusion::NetworkRunner__DisconnectFromCloud_d__426::MoveNext)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5fd2bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__DisconnectFromCloud_d__426*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner__DisconnectFromCloud_d__426.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner__DisconnectFromCloud_d__426::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::NetworkRunner__DisconnectFromCloud_d__426::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd2e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__DisconnectFromCloud_d__426*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::NetworkRunner__DisconnectFromCloud_d__426::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::NetworkRunner__DisconnectFromCloud_d__426::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__DisconnectFromCloud_d__426*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__DisconnectFromCloud_d__426::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__DisconnectFromCloud_d__426*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner__DisconnectFromCloud_d__426::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner__DisconnectFromCloud_d__426*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::NetworkRunner__DisconnectFromCloud_d__426* Fusion::NetworkRunner__DisconnectFromCloud_d__426::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner__DisconnectFromCloud_d__426*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::NetworkRunner__DisconnectFromCloud_d__426::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::NetworkRunner__DisconnectFromCloud_d__426::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner__DisconnectFromCloud_d__426::NetworkRunner__DisconnectFromCloud_d__426()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner___c__DisplayClass370_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner___c__DisplayClass370_1::*)()>(&::Fusion::NetworkRunner___c__DisplayClass370_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd29a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass370_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner___c__DisplayClass370_1._SpawnInternal_b__4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner___c__DisplayClass370_1::*)(::Fusion::NetworkSpawnOp)>(&::Fusion::NetworkRunner___c__DisplayClass370_1::_SpawnInternal_b__4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fd29ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass370_1*>(),
                        {"<SpawnInternal>b__4", {}, {::i2c::type_of<::Fusion::NetworkSpawnOp>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkSpawnOp_AsyncOpData*& Fusion::NetworkRunner___c__DisplayClass370_1::__cordl_internal_get_asyncOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr ::Fusion::NetworkSpawnOp_AsyncOpData* const& Fusion::NetworkRunner___c__DisplayClass370_1::__cordl_internal_get_asyncOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr void Fusion::NetworkRunner___c__DisplayClass370_1::__cordl_internal_set_asyncOp(::Fusion::NetworkSpawnOp_AsyncOpData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOp = value;
}
inline void Fusion::NetworkRunner___c__DisplayClass370_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass370_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunner___c__DisplayClass370_1::_SpawnInternal_b__4(::Fusion::NetworkSpawnOp  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass370_1*>(),
                        {"<SpawnInternal>b__4", {}, {::i2c::type_of<::Fusion::NetworkSpawnOp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline ::Fusion::NetworkRunner___c__DisplayClass370_1* Fusion::NetworkRunner___c__DisplayClass370_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner___c__DisplayClass370_1*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner___c__DisplayClass370_1::NetworkRunner___c__DisplayClass370_1()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner___c__DisplayClass302_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner___c__DisplayClass302_0::*)()>(&::Fusion::NetworkRunner___c__DisplayClass302_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd28e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass302_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner___c__DisplayClass302_0._LoadScene_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkRunner___c__DisplayClass302_0::*)(::Fusion::SceneRef)>(&::Fusion::NetworkRunner___c__DisplayClass302_0::_LoadScene_b__0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fd28e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass302_0*>(),
                        {"<LoadScene>b__0", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkRunner___c__DisplayClass302_0::__cordl_internal_get_sceneParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneParameters;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkRunner___c__DisplayClass302_0::__cordl_internal_get_sceneParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneParameters;
}
constexpr void Fusion::NetworkRunner___c__DisplayClass302_0::__cordl_internal_set_sceneParameters(::Fusion::NetworkLoadSceneParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneParameters = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner___c__DisplayClass302_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner___c__DisplayClass302_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner___c__DisplayClass302_0::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Fusion::NetworkRunner___c__DisplayClass302_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass302_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkRunner___c__DisplayClass302_0::_LoadScene_b__0(::Fusion::SceneRef  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass302_0*>(),
                        {"<LoadScene>b__0", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, x);
}
inline ::Fusion::NetworkRunner___c__DisplayClass302_0* Fusion::NetworkRunner___c__DisplayClass302_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner___c__DisplayClass302_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner___c__DisplayClass302_0::NetworkRunner___c__DisplayClass302_0()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner___c__DisplayClass145_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner___c__DisplayClass145_0::*)()>(&::Fusion::NetworkRunner___c__DisplayClass145_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass145_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner___c__DisplayClass145_0._Shutdown_g__ContinueTasksWithDestroy_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::NetworkRunner___c__DisplayClass145_0::*)(::ArrayW<::System::Threading::Tasks::Task*>)>(&::Fusion::NetworkRunner___c__DisplayClass145_0::_Shutdown_g__ContinueTasksWithDestroy_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fd2454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass145_0*>(),
                        {"<Shutdown>g__ContinueTasksWithDestroy|0", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner___c__DisplayClass145_0._Shutdown_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::NetworkRunner___c__DisplayClass145_0::*)(::System::Threading::CancellationToken)>(&::Fusion::NetworkRunner___c__DisplayClass145_0::_Shutdown_b__2)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5fd2520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass145_0*>(),
                        {"<Shutdown>b__2", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner___c__DisplayClass145_0._Shutdown_g__InvokeOnShutdownCallbacks_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner___c__DisplayClass145_0::*)()>(&::Fusion::NetworkRunner___c__DisplayClass145_0::_Shutdown_g__InvokeOnShutdownCallbacks_1)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5fd26fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass145_0*>(),
                        {"<Shutdown>g__InvokeOnShutdownCallbacks|1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkRunner___c__DisplayClass145_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkRunner___c__DisplayClass145_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkRunner___c__DisplayClass145_0::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& Fusion::NetworkRunner___c__DisplayClass145_0::__cordl_internal_get_destroyGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyGameObject;
}
constexpr bool const& Fusion::NetworkRunner___c__DisplayClass145_0::__cordl_internal_get_destroyGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyGameObject;
}
constexpr void Fusion::NetworkRunner___c__DisplayClass145_0::__cordl_internal_set_destroyGameObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyGameObject = value;
}
constexpr ::Fusion::ShutdownReason& Fusion::NetworkRunner___c__DisplayClass145_0::__cordl_internal_get_shutdownReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutdownReason;
}
constexpr ::Fusion::ShutdownReason const& Fusion::NetworkRunner___c__DisplayClass145_0::__cordl_internal_get_shutdownReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutdownReason;
}
constexpr void Fusion::NetworkRunner___c__DisplayClass145_0::__cordl_internal_set_shutdownReason(::Fusion::ShutdownReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shutdownReason = value;
}
inline void Fusion::NetworkRunner___c__DisplayClass145_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass145_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::NetworkRunner___c__DisplayClass145_0::_Shutdown_g__ContinueTasksWithDestroy_0(::ArrayW<::System::Threading::Tasks::Task*>  precedingTasks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass145_0*>(),
                        {"<Shutdown>g__ContinueTasksWithDestroy|0", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, precedingTasks);
}
inline ::System::Threading::Tasks::Task* Fusion::NetworkRunner___c__DisplayClass145_0::_Shutdown_b__2(::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass145_0*>(),
                        {"<Shutdown>b__2", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token);
}
inline void Fusion::NetworkRunner___c__DisplayClass145_0::_Shutdown_g__InvokeOnShutdownCallbacks_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c__DisplayClass145_0*>(),
                        {"<Shutdown>g__InvokeOnShutdownCallbacks|1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkRunner___c__DisplayClass145_0* Fusion::NetworkRunner___c__DisplayClass145_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner___c__DisplayClass145_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner___c__DisplayClass145_0::NetworkRunner___c__DisplayClass145_0()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner___c::*)()>(&::Fusion::NetworkRunner___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd2390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner___c._RegisterSceneObjects_b__233_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner___c::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner___c::_RegisterSceneObjects_b__233_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fd2398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c*>(),
                        {"<RegisterSceneObjects>b__233_0", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner___c._FlagsFromInstance_b__239_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunner___c::*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkRunner___c::_FlagsFromInstance_b__239_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fd23c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c*>(),
                        {"<FlagsFromInstance>b__239_0", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner___c._Fusion_Simulation_ICallbacks_OnReliableData_b__361_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRunner___c::*)(::ArrayW<uint8_t>)>(&::Fusion::NetworkRunner___c::_Fusion_Simulation_ICallbacks_OnReliableData_b__361_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fd2438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c*>(),
                        {"<Fusion.Simulation.ICallbacks.OnReliableData>b__361_0", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkRunner___c::setStaticF___9(::Fusion::NetworkRunner___c*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkRunner___c*, "<>9", ::Fusion::NetworkRunner___c*>(std::forward<::Fusion::NetworkRunner___c*>(value));
}
inline ::Fusion::NetworkRunner___c* Fusion::NetworkRunner___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkRunner___c*, "<>9", ::Fusion::NetworkRunner___c*>();
}
inline void Fusion::NetworkRunner___c::setStaticF___9__233_0(::System::Func_2<::UnityW<::Fusion::NetworkObject>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Fusion::NetworkObject>,bool>*, "<>9__233_0", ::Fusion::NetworkRunner___c*>(std::forward<::System::Func_2<::UnityW<::Fusion::NetworkObject>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::Fusion::NetworkObject>,bool>* Fusion::NetworkRunner___c::getStaticF___9__233_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Fusion::NetworkObject>,bool>*, "<>9__233_0", ::Fusion::NetworkRunner___c*>();
}
inline void Fusion::NetworkRunner___c::setStaticF___9__239_0(::System::Func_2<::UnityW<::Fusion::NetworkBehaviour>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Fusion::NetworkBehaviour>,bool>*, "<>9__239_0", ::Fusion::NetworkRunner___c*>(std::forward<::System::Func_2<::UnityW<::Fusion::NetworkBehaviour>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::Fusion::NetworkBehaviour>,bool>* Fusion::NetworkRunner___c::getStaticF___9__239_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Fusion::NetworkBehaviour>,bool>*, "<>9__239_0", ::Fusion::NetworkRunner___c*>();
}
inline void Fusion::NetworkRunner___c::setStaticF___9__361_0(::System::Func_2<::ArrayW<uint8_t>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::ArrayW<uint8_t>,int32_t>*, "<>9__361_0", ::Fusion::NetworkRunner___c*>(std::forward<::System::Func_2<::ArrayW<uint8_t>,int32_t>*>(value));
}
inline ::System::Func_2<::ArrayW<uint8_t>,int32_t>* Fusion::NetworkRunner___c::getStaticF___9__361_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ArrayW<uint8_t>,int32_t>*, "<>9__361_0", ::Fusion::NetworkRunner___c*>();
}
inline void Fusion::NetworkRunner___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkRunner___c::_RegisterSceneObjects_b__233_0(::Fusion::NetworkObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c*>(),
                        {"<RegisterSceneObjects>b__233_0", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline bool Fusion::NetworkRunner___c::_FlagsFromInstance_b__239_0(::Fusion::NetworkBehaviour*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c*>(),
                        {"<FlagsFromInstance>b__239_0", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline int32_t Fusion::NetworkRunner___c::_Fusion_Simulation_ICallbacks_OnReliableData_b__361_0(::ArrayW<uint8_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner___c*>(),
                        {"<Fusion.Simulation.ICallbacks.OnReliableData>b__361_0", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::Fusion::NetworkRunner___c* Fusion::NetworkRunner___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner___c::NetworkRunner___c()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner_CloudConnectionLostHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner_CloudConnectionLostHandler::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::NetworkRunner_CloudConnectionLostHandler::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fd219c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner_CloudConnectionLostHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner_CloudConnectionLostHandler::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason, bool)>(&::Fusion::NetworkRunner_CloudConnectionLostHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fd2250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(),
                    {::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner_CloudConnectionLostHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::NetworkRunner_CloudConnectionLostHandler::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason, bool, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::NetworkRunner_CloudConnectionLostHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fd2264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(),
                    {::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner_CloudConnectionLostHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner_CloudConnectionLostHandler::*)(::System::IAsyncResult*)>(&::Fusion::NetworkRunner_CloudConnectionLostHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd231c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(),
                    {::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::NetworkRunner_CloudConnectionLostHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::NetworkRunner_CloudConnectionLostHandler::Invoke(::Fusion::NetworkRunner*  networkRunner, ::Fusion::ShutdownReason  shutdownReason, bool  reconnecting)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkRunner, shutdownReason, reconnecting);
}
inline ::System::IAsyncResult* Fusion::NetworkRunner_CloudConnectionLostHandler::BeginInvoke(::Fusion::NetworkRunner*  networkRunner, ::Fusion::ShutdownReason  shutdownReason, bool  reconnecting, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, networkRunner, shutdownReason, reconnecting, callback, object);
}
inline void Fusion::NetworkRunner_CloudConnectionLostHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Fusion::NetworkRunner_CloudConnectionLostHandler* Fusion::NetworkRunner_CloudConnectionLostHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner_CloudConnectionLostHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner_CloudConnectionLostHandler::NetworkRunner_CloudConnectionLostHandler()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner_ObjectDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner_ObjectDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::NetworkRunner_ObjectDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fd1a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner_ObjectDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner_ObjectDelegate::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner_ObjectDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fd1adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner_ObjectDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::NetworkRunner_ObjectDelegate::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::NetworkRunner_ObjectDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fd1af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner_ObjectDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner_ObjectDelegate::*)(::System::IAsyncResult*)>(&::Fusion::NetworkRunner_ObjectDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd1b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::NetworkRunner_ObjectDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::NetworkRunner_ObjectDelegate::Invoke(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj);
}
inline ::System::IAsyncResult* Fusion::NetworkRunner_ObjectDelegate::BeginInvoke(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, runner, obj, callback, object);
}
inline void Fusion::NetworkRunner_ObjectDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunner_ObjectDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Fusion::NetworkRunner_ObjectDelegate* Fusion::NetworkRunner_ObjectDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner_ObjectDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner_ObjectDelegate::NetworkRunner_ObjectDelegate()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunner_OnBeforeSpawned._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner_OnBeforeSpawned::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::NetworkRunner_OnBeforeSpawned::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fd192c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner_OnBeforeSpawned.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner_OnBeforeSpawned::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*)>(&::Fusion::NetworkRunner_OnBeforeSpawned::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fd19e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(),
                    {::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner_OnBeforeSpawned.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::NetworkRunner_OnBeforeSpawned::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::NetworkRunner_OnBeforeSpawned::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fd19f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(),
                    {::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunner_OnBeforeSpawned.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunner_OnBeforeSpawned::*)(::System::IAsyncResult*)>(&::Fusion::NetworkRunner_OnBeforeSpawned::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd1a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(),
                    {::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::NetworkRunner_OnBeforeSpawned::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::NetworkRunner_OnBeforeSpawned::Invoke(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj);
}
inline ::System::IAsyncResult* Fusion::NetworkRunner_OnBeforeSpawned::BeginInvoke(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, runner, obj, callback, object);
}
inline void Fusion::NetworkRunner_OnBeforeSpawned::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunner_OnBeforeSpawned*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Fusion::NetworkRunner_OnBeforeSpawned* Fusion::NetworkRunner_OnBeforeSpawned::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunner_OnBeforeSpawned*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunner_OnBeforeSpawned::NetworkRunner_OnBeforeSpawned()   {
}
