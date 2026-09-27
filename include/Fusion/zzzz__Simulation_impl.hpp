#pragma once
// IWYU pragma private; include "Fusion/Simulation.hpp"
#include "Fusion/zzzz__BitSet512_impl.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_ListMigration_impl.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_List_impl.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__SimulationConfig_DataConsistency_impl.hpp"
#include "Fusion/zzzz__SimulationModes_impl.hpp"
#include "Fusion/zzzz__SimulationStages_impl.hpp"
#include "Fusion/zzzz__Simulation_SimulationPacketHeader_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_ValueCollection_Enumerator_impl.hpp"
#include "System/Collections/Generic/zzzz__HashSet`1_Enumerator_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "Fusion/Sockets/zzzz__INetPeerGroupCallbacks_def.hpp"
#include "Fusion/Sockets/zzzz__INetSocket_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroup_def.hpp"
#include "Fusion/Sockets/zzzz__NetPeer_def.hpp"
#include "Fusion/Sockets/zzzz__NetSendEnvelope_def.hpp"
#include "Fusion/Sockets/zzzz__OnConnectionRequestReply_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableId_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__MemoryStatisticsSnapshot_TargetAllocator_def.hpp"
#include "Fusion/Statistics/zzzz__MemoryStatisticsSnapshot_def.hpp"
#include "Fusion/zzzz__Allocator_def.hpp"
#include "Fusion/zzzz__ILogSource_def.hpp"
#include "Fusion/zzzz__ITimeProvider_def.hpp"
#include "Fusion/zzzz__NetworkBufferSerializerInfo_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionData_def.hpp"
#include "Fusion/zzzz__NetworkObjectDestroyFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshotRef_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshot_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_List_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__NetworkObjectNestingKey_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__RpcSendMessageResult_def.hpp"
#include "Fusion/zzzz__RpcTargetStatus_def.hpp"
#include "Fusion/zzzz__SimulationArgs_def.hpp"
#include "Fusion/zzzz__SimulationConfig_def.hpp"
#include "Fusion/zzzz__SimulationConnection_def.hpp"
#include "Fusion/zzzz__SimulationHistoryEntryList_def.hpp"
#include "Fusion/zzzz__SimulationInputCollection_def.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "Fusion/zzzz__SimulationMessageEnvelope_def.hpp"
#include "Fusion/zzzz__SimulationMessageInternalTypes_def.hpp"
#include "Fusion/zzzz__SimulationMessageList_def.hpp"
#include "Fusion/zzzz__SimulationMessageResult_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__SimulationPacketEnvelope_def.hpp"
#include "Fusion/zzzz__SimulationRuntimeConfig_def.hpp"
#include "Fusion/zzzz__SimulationStages_def.hpp"
#include "Fusion/zzzz__Simulation_AreaOfInterest_def.hpp"
#include "Fusion/zzzz__Simulation_Client_def.hpp"
#include "Fusion/zzzz__Simulation_ObjectChangeType_def.hpp"
#include "Fusion/zzzz__Simulation_PlayerRefMapping_def.hpp"
#include "Fusion/zzzz__Simulation_PlayerSimulationData_def.hpp"
#include "Fusion/zzzz__Simulation_Server_def.hpp"
#include "Fusion/zzzz__Simulation_SimulationPacketHeader_def.hpp"
#include "Fusion/zzzz__Simulation_StateReplicator_WriteResult_def.hpp"
#include "Fusion/zzzz__Simulation_TargetObjectVerificationResult_def.hpp"
#include "Fusion/zzzz__Simulation_TimeFeedback_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__Topologies_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::Simulation.GetAreaOfInterestGizmoData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,int32_t,int32_t>>*)>(&::Fusion::Simulation::GetAreaOfInterestGizmoData)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5fe1b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetAreaOfInterestGizmoData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,int32_t,int32_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetObjectsInAreaOfInterestForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Fusion::NetworkId>* (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetObjectsInAreaOfInterestForPlayer)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5fe1e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetObjectsInAreaOfInterestForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetObjectsAndPlayersInAreaOfInterestCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(int32_t, ::System::Collections::Generic::List_1<::Fusion::PlayerRef>*, ::System::Collections::Generic::List_1<::Fusion::NetworkId>*)>(&::Fusion::Simulation::GetObjectsAndPlayersInAreaOfInterestCell)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5fe23b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetObjectsAndPlayersInAreaOfInterestCell", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::PlayerRef>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::NetworkId>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AOI_GetCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Simulation_AreaOfInterestCell* (::Fusion::Simulation::*)(int32_t, bool)>(&::Fusion::Simulation::AOI_GetCell)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5fe21c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_GetCell", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AOI_ReleaseCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Simulation_AreaOfInterestCell*)>(&::Fusion::Simulation::AOI_ReleaseCell)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5fe2658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_ReleaseCell", {}, {::i2c::type_of<::Fusion::Simulation_AreaOfInterestCell*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AOI_RemoveConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::SimulationConnection*)>(&::Fusion::Simulation::AOI_RemoveConnection)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5fe2734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_RemoveConnection", {}, {::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AOI_UpdateAreaOfInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::SimulationConnection*)>(&::Fusion::Simulation::AOI_UpdateAreaOfInterest)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x5fe2984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_UpdateAreaOfInterest", {}, {::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AOI_Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::SimulationConnection*, ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*, bool)>(&::Fusion::Simulation::AOI_Query)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5fe31fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_Query", {}, {::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AOI_RemoveFromAreaOfInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*, bool)>(&::Fusion::Simulation::AOI_RemoveFromAreaOfInterest)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5fe34c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_RemoveFromAreaOfInterest", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AOI_UpdateAreaOfInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*, int32_t)>(&::Fusion::Simulation::AOI_UpdateAreaOfInterest)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5fe3688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_UpdateAreaOfInterest", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.EnterAreaOfInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(int32_t, ::Fusion::NetworkId)>(&::Fusion::Simulation::EnterAreaOfInterest)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fe38f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"EnterAreaOfInterest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.EnterAreaOfInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::SimulationConnection*, ::Fusion::NetworkId)>(&::Fusion::Simulation::EnterAreaOfInterest)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5fe3034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"EnterAreaOfInterest", {}, {::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.ExitAreaOfInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(int32_t, ::Fusion::NetworkId)>(&::Fusion::Simulation::ExitAreaOfInterest)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fe3600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ExitAreaOfInterest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.ExitAreaOfInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::SimulationConnection*, ::Fusion::NetworkId)>(&::Fusion::Simulation::ExitAreaOfInterest)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5fe2ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ExitAreaOfInterest", {}, {::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_LatestServerTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_LatestServerTick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_RuntimeConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationRuntimeConfig (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_RuntimeConfig)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fe3a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_RuntimeConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_RuntimeConfigPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationRuntimeConfig* (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_RuntimeConfigPtr)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5fe3a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_RuntimeConfigPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.InterpolateSequenceIncrement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::InterpolateSequenceIncrement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fe3b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InterpolateSequenceIncrement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_InterpolateSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_InterpolateSequence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe3b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_InterpolateSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_HasRuntimeConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_HasRuntimeConfig)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fe3b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_HasRuntimeConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_TickStride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_TickStride)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fe3cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_TickStride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_TickRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_TickRate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fe3d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_TickRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_TickDeltaDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_TickDeltaDouble)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fe3d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_TickDeltaDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_TickDeltaFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_TickDeltaFloat)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fe3da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_TickDeltaFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_SendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_SendRate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fe3e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_SendRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_SendDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_SendDelta)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fe3e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_SendDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_DeltaTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fe3ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsShutdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe3f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_LocalAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_LocalAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe3f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_LocalAlpha", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsResimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsResimulation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe3f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsResimulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsLastTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsLastTick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe3f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsLastTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsFirstTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsFirstTick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe3f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsFirstTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsForward)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fe3f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsLocalPlayerFirstExecution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsLocalPlayerFirstExecution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fe3f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsLocalPlayerFirstExecution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_Tick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe3f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_TickPrevious
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_TickPrevious)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fe14a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_TickPrevious", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_Time)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fe3fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_InputCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_InputCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fe4018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_InputCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_Topology
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Topologies (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_Topology)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fe4030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Topology", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationModes (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationStages (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Stage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_Config
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationConfig* (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_Config)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Config", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_ProjectConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkProjectConfig* (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_ProjectConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_ProjectConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_RemoteAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_RemoteAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_RemoteAlpha", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_RemoteTickPrevious
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_RemoteTickPrevious)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_RemoteTickPrevious", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_RemoteTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_RemoteTick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_RemoteTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsClient)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fe4080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsServer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fe142c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsPlayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fe40f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsSinglePlayer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fe410c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsSinglePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsMasterClient)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fe4140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsMasterClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_ActivePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_ActivePlayers)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fe41e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsRunning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fe4258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_Replicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Simulation_StateReplicator* (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_Replicator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Replicator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_Callbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Simulation_ICallbacks* (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_Callbacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Callbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsResume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsResume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsResume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsInTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsInTick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe4280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsInTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsPaused)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fe4288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsWaitingForTheInitialTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsWaitingForTheInitialTick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe42f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsWaitingForTheInitialTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IsSceneInfoReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IsSceneInfoReady)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fe42fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsSceneInfoReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_Connections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>* (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_Connections)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fe432c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Connections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_LocalAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_LocalAddress)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fe43a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_LocalAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_NetConfigPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConfig* (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_NetConfigPointer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fe43bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_NetConfigPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_LocalPlayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetPlayerRtt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetPlayerRtt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.RecvPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::RecvPacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.WritePackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::WritePackets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInput* (::Fusion::Simulation::*)(::Fusion::Tick, ::Fusion::PlayerRef)>(&::Fusion::Simulation::GetInput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::SimulationArgs)>(&::Fusion::Simulation::_ctor)> {
  constexpr static std::size_t size = 0xa14;
  constexpr static std::size_t addrs = 0x5fe43c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Connection2Player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::Simulation::*)(::Fusion::SimulationConnection*)>(&::Fusion::Simulation::Connection2Player)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5fe5024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Connection2Player", {}, {::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Connection2Player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*)>(&::Fusion::Simulation::Connection2Player)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fe5114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Player2Connection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::Player2Connection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fe5188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.RegisterUniqueIdPlayerMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(int32_t, ::ArrayW<uint8_t>, ::Fusion::PlayerRef)>(&::Fusion::Simulation::RegisterUniqueIdPlayerMapping)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5fe5210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"RegisterUniqueIdPlayerMapping", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetPlayerRefMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::Simulation_PlayerRefMapping> (::Fusion::Simulation::*)(::ArrayW<uint8_t>)>(&::Fusion::Simulation::GetPlayerRefMapping)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5fe53a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerRefMapping", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetPlayerRefMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::Simulation_PlayerRefMapping> (::Fusion::Simulation::*)(uint8_t*)>(&::Fusion::Simulation::GetPlayerRefMapping)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fe551c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerRefMapping", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.CalculateUpdateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::CalculateUpdateTime)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5fe55d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"CalculateUpdateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.StepSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::SimulationStages, bool, bool, bool)>(&::Fusion::Simulation::StepSimulation)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5fe56e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"StepSimulation", {}, {::i2c::type_of<::Fusion::SimulationStages>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AfterUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::AfterUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fe63c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NetworkConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*)>(&::Fusion::Simulation::NetworkConnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fe63c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NetworkDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetDisconnectReason)>(&::Fusion::Simulation::NetworkDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fe63cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NetworkReceiveDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::NetworkReceiveDone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fe63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NoSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::NoSimulation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fe63d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.BeforeSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::BeforeSimulation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe63d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.BeforeFirstTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::BeforeFirstTick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fe63e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.SinglePlayerSetPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(bool)>(&::Fusion::Simulation::SinglePlayerSetPaused)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fe63e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SinglePlayerSetPaused", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.RequestStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkId, bool)>(&::Fusion::Simulation::RequestStateAuthority)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fe6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"RequestStateAuthority", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.SetPlayerAlwaysInterested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::PlayerRef, ::Fusion::NetworkId, bool)>(&::Fusion::Simulation::SetPlayerAlwaysInterested)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5fe652c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SetPlayerAlwaysInterested", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.TempAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::Fusion::Simulation::*)(int32_t)>(&::Fusion::Simulation::TempAlloc)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fe6728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TempAlloc", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.ShutdownNativeSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::ShutdownNativeSocket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fe6734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ShutdownNativeSocket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::Dispose)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fe68e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkId, ::Fusion::NetworkObjectDestroyFlags, ::Fusion::PlayerRef)>(&::Fusion::Simulation::Destroy)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x5fe6a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkObjectDestroyFlags>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.PlayerValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::PlayerValid)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fe66d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"PlayerValid", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.PlayerAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::PlayerRef, ::Fusion::SimulationConnection*)>(&::Fusion::Simulation::PlayerAdd)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5fe7384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"PlayerAdd", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.PlayerRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::PlayerRemove)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5fe7548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"PlayerRemove", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.IsHostPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::IsHostPlayer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5fe767c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsHostPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.TryGetHostPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::by_ref<::Fusion::PlayerRef>)>(&::Fusion::Simulation::TryGetHostPlayer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fe7754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetHostPlayer", {}, {::i2c::type_of<::by_ref<::Fusion::PlayerRef>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.IsInterestedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*, ::Fusion::PlayerRef)>(&::Fusion::Simulation::IsInterestedIn)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5fe7808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsInterestedIn", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.IsInputAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::PlayerRef, ::Fusion::PlayerRef)>(&::Fusion::Simulation::IsInputAuthority)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5fe7a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsInputAuthority", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.IsInputAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*, ::Fusion::PlayerRef)>(&::Fusion::Simulation::IsInputAuthority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fe7bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsInputAuthority", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.IsStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::PlayerRef, ::Fusion::PlayerRef)>(&::Fusion::Simulation::IsStateAuthority)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5fe7bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsStateAuthority", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.IsStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*, ::Fusion::PlayerRef)>(&::Fusion::Simulation::IsStateAuthority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fe7d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsStateAuthority", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.IsLocalSimulationInputAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::by_ref<::Fusion::NetworkObjectHeader>)>(&::Fusion::Simulation::IsLocalSimulationInputAuthority)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5fe7d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsLocalSimulationInputAuthority", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeader>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.IsLocalSimulationStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::by_ref<::Fusion::NetworkObjectHeader>)>(&::Fusion::Simulation::IsLocalSimulationStateAuthority)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fe7e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsLocalSimulationStateAuthority", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeader>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetStateAuthority)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5fe7e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetStateAuthority", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetPlayerConnectionToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetPlayerConnectionToken)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5fe7fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerConnectionToken", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetPlayerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetPlayerAddress)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5fe80e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerAddress", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetPlayerUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetPlayerUniqueId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fe81e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerUniqueId", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetInputForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInput* (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetInputForPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fe8284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetInputForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.DeletePlayerSimulationDataOnDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::DeletePlayerSimulationDataOnDisconnect)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fe82a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DeletePlayerSimulationDataOnDisconnect", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetPlayerSimulationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Simulation_PlayerSimulationData* (::Fusion::Simulation::*)(::Fusion::PlayerRef, bool)>(&::Fusion::Simulation::GetPlayerSimulationData)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x5fe8368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerSimulationData", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.InvokePlayerJoinedLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::InvokePlayerJoinedLeft)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x5fe8964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokePlayerJoinedLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetPlayerActorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetPlayerActorId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fe8f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerActorId", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetPlayerObjectId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetPlayerObjectId)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5fe8fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerObjectId", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.SetPlayerObjectId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::PlayerRef, ::Fusion::NetworkId)>(&::Fusion::Simulation::SetPlayerObjectId)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5fe9080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SetPlayerObjectId", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.HasAnyActiveConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)()>(&::Fusion::Simulation::HasAnyActiveConnections)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fe91dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"HasAnyActiveConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.InvokeOnBeforeSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(int32_t)>(&::Fusion::Simulation::InvokeOnBeforeSimulation)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5fe9234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokeOnBeforeSimulation", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.InvokeOnAfterSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::InvokeOnAfterSimulation)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5fe93b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokeOnAfterSimulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.InvokeOnBeforeAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(bool, int32_t)>(&::Fusion::Simulation::InvokeOnBeforeAllTicks)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5fe951c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokeOnBeforeAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.InvokeOnAfterAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(bool, int32_t)>(&::Fusion::Simulation::InvokeOnAfterAllTicks)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5fe96b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokeOnAfterAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.BeforeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::BeforeUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fe984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AfterSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::AfterSimulation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fe9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.UpdateSimulationStateForMasterClientObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(bool)>(&::Fusion::Simulation::UpdateSimulationStateForMasterClientObjects)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x5fe9854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"UpdateSimulationStateForMasterClientObjects", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.CalculateForwardTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::CalculateForwardTicks)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5fe9e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"CalculateForwardTicks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)(double_t)>(&::Fusion::Simulation::Update)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x5fea040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Update", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.UpdateAreaOfInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::UpdateAreaOfInterest)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5feabc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"UpdateAreaOfInterest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.PreparePackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::PreparePackets)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5fea878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"PreparePackets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.WriteMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::WriteMessages)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x5feb068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"WriteMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.InvokeTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::SimulationStages, bool)>(&::Fusion::Simulation::InvokeTick)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0x5fe5be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokeTick", {}, {::i2c::type_of<::Fusion::SimulationStages>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetMessageInternalType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::SimulationMessageInternalTypes> (*)(::Fusion::SimulationMessage*)>(&::Fusion::Simulation::GetMessageInternalType)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5fec8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetMessageInternalType", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.OnMessageInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::SimulationMessage*)>(&::Fusion::Simulation::OnMessageInternal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5feca28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"OnMessageInternal", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.DeliverMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(int32_t)>(&::Fusion::Simulation::DeliverMessages)> {
  constexpr static std::size_t size = 0xd58;
  constexpr static std::size_t addrs = 0x5febb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DeliverMessages", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.FreeMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::by_ref<::Fusion::SimulationMessageList>)>(&::Fusion::Simulation::FreeMessages)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5feccb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"FreeMessages", {}, {::i2c::type_of<::by_ref<::Fusion::SimulationMessageList>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.ConsumeAndWriteMessagesIntoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::by_ref<::Fusion::SimulationMessageList>, ::Fusion::Sockets::NetBitBuffer*, int32_t, ::by_ref<::Fusion::SimulationMessageList>, bool)>(&::Fusion::Simulation::ConsumeAndWriteMessagesIntoBuffer)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x5feb53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ConsumeAndWriteMessagesIntoBuffer", {}, {::i2c::type_of<::by_ref<::Fusion::SimulationMessageList>>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::SimulationMessageList>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.ResolveMessageSourceAndTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::SimulationMessage*, ::Fusion::PlayerRef)>(&::Fusion::Simulation::ResolveMessageSourceAndTarget)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5fecd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ResolveMessageSourceAndTarget", {}, {::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.RecvMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::RecvMessages)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x5fecee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"RecvMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetSimulationConnectionByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationConnection* (::Fusion::Simulation::*)(int32_t)>(&::Fusion::Simulation::GetSimulationConnectionByIndex)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fed724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetSimulationConnectionByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetSimulationConnectionForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationConnection* (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetSimulationConnectionForPlayer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fed79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetSimulationConnectionForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.TryGetSimulationConnectionForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::PlayerRef, ::by_ref<::Fusion::SimulationConnection*>)>(&::Fusion::Simulation::TryGetSimulationConnectionForPlayer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fed814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetSimulationConnectionForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<::Fusion::SimulationConnection*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetConnectionIndexForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetConnectionIndexForPlayer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fed87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetConnectionIndexForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.TryGetSimulationConnectionLogErrorIfFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::by_ref<::Fusion::SimulationConnection*>)>(&::Fusion::Simulation::TryGetSimulationConnectionLogErrorIfFailed)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fecaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetSimulationConnectionLogErrorIfFailed", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::SimulationConnection*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetSimulationConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationConnection* (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*)>(&::Fusion::Simulation::GetSimulationConnection)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetSimulationConnection", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AddToGlobalObjectInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::Simulation::AddToGlobalObjectInterest)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5fed9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AddToGlobalObjectInterest", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.RemoveFromGlobalObjectInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkId)>(&::Fusion::Simulation::RemoveFromGlobalObjectInterest)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5fedbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"RemoveFromGlobalObjectInterest", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.SendReliableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(int32_t, int32_t, ::Fusion::Sockets::ReliableKey, ::ArrayW<uint8_t>)>(&::Fusion::Simulation::SendReliableData)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5fedd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SendReliableData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NotifyWaitingForShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::NotifyWaitingForShutdown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fedf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NotifyWaitingForShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_ILogSource_GetUnityObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Fusion::Simulation::*)()>(&::Fusion::Simulation::Fusion_ILogSource_GetUnityObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fedf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.ILogSource.GetUnityObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.DumpObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkId, ::System::Text::StringBuilder*)>(&::Fusion::Simulation::DumpObject)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fedf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DumpObject", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.DumpObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*, ::System::Text::StringBuilder*)>(&::Fusion::Simulation::DumpObject)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5fedfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DumpObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.DumpObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Simulation::*)(::Fusion::NetworkId)>(&::Fusion::Simulation::DumpObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fee1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DumpObject", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.DumpObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::Simulation::DumpObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fee230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DumpObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_ReliableDataSendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_ReliableDataSendRate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fee2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_ReliableDataSendRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.set_ReliableDataSendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(int32_t)>(&::Fusion::Simulation::set_ReliableDataSendRate)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5fee2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"set_ReliableDataSendRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NetworkInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::INetSocket*, ::Fusion::Sockets::NetAddress)>(&::Fusion::Simulation::NetworkInit)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5fe4ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkInit", {}, {::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NetworkSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::NetworkSend)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5feab54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkSend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NetworkRecv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::NetworkRecv)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fea78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkRecv", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NetworkShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::NetworkShutdown)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5fe6744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.OnNetworkShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::OnNetworkShutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fee530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {::i2c::class_of<::Fusion::Simulation*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NetworkGetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::by_ref<::Fusion::Sockets::NetBitBuffer*>)>(&::Fusion::Simulation::NetworkGetBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fee534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkGetBuffer", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NetworkSendBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*, ::Fusion::SimulationPacketEnvelope*)>(&::Fusion::Simulation::NetworkSendBuffer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fee554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkSendBuffer", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<::Fusion::SimulationPacketEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.NetworkSendPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::Sockets::NetAddress, void*, int32_t)>(&::Fusion::Simulation::NetworkSendPing)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fee5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkSendPing", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, int32_t, int32_t)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionAttempt)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5fee64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnConnectionAttempt", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnUnconnectedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnUnconnectedData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fee7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnUnconnectedData", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnConnected)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5fee7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnConnected", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetDisconnectReason)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnDisconnected)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5feec20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnDisconnected", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnReliableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::ReliableId, uint8_t*)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnReliableData)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5feeff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnReliableData", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::ReliableId>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::OnConnectionRequestReply (::Fusion::Simulation::*)(::Fusion::Sockets::NetAddress, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5fef404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnConnectionRequest", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionFailed)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5fef57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnConnectionFailed", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnUnreliableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnUnreliableData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fef774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnUnreliableData", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyData)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5fef7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyData", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.OnEnvelopeLost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::Fusion::SimulationPacketEnvelope*)>(&::Fusion::Simulation::OnEnvelopeLost)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5fef9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"OnEnvelopeLost", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::SimulationPacketEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.OnEnvelopeDelivered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::Fusion::SimulationPacketEnvelope*)>(&::Fusion::Simulation::OnEnvelopeDelivered)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fefc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"OnEnvelopeDelivered", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::SimulationPacketEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::by_ref<::Fusion::Sockets::NetSendEnvelope>)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyDispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fefc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyDispose", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetSendEnvelope>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyLost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::by_ref<::Fusion::Sockets::NetSendEnvelope>)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyLost)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fefd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyLost", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetSendEnvelope>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyDelivered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::by_ref<::Fusion::Sockets::NetSendEnvelope>)>(&::Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyDelivered)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fefe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyDelivered", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetSendEnvelope>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_IdCounter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_IdCounter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5feff48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IdCounter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_ObjectCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_ObjectCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5feff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_ObjectCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.get_Objects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>* (::Fusion::Simulation::*)()>(&::Fusion::Simulation::get_Objects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5feffa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Objects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshot* (::Fusion::Simulation::*)()>(&::Fusion::Simulation::GetSnapshot)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5feffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetObjectsAllocatorUsedSegmentsInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::GetObjectsAllocatorUsedSegmentsInBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff0050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetObjectsAllocatorUsedSegmentsInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetGeneralAllocatorUsedSegmentsInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::GetGeneralAllocatorUsedSegmentsInBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff0068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetGeneralAllocatorUsedSegmentsInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetObjectsAllocatorFreeSegmentsInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::GetObjectsAllocatorFreeSegmentsInBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff0080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetObjectsAllocatorFreeSegmentsInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetGeneralAllocatorFreeSegmentsInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)()>(&::Fusion::Simulation::GetGeneralAllocatorFreeSegmentsInBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff0098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetGeneralAllocatorFreeSegmentsInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetMemorySnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator, ::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>)>(&::Fusion::Simulation::GetMemorySnapshot)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ff00b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetMemorySnapshot", {}, {::i2c::type_of<::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.SnapshotRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::Simulation::SnapshotRelease)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ff00dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SnapshotRelease", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.SnapshotRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::by_ref<::Fusion::NetworkObjectHeaderSnapshot*>)>(&::Fusion::Simulation::SnapshotRelease)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ff0144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SnapshotRelease", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeaderSnapshot*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.IsSimulated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::Simulation::IsSimulated)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ff0188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsSimulated", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.HasObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::NetworkId)>(&::Fusion::Simulation::HasObject)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ff0210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"HasObject", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.LogAllObjectIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::LogAllObjectIds)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5ff02cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"LogAllObjectIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.TryGetMeta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::NetworkId, ::by_ref<::Fusion::NetworkObjectMeta*>)>(&::Fusion::Simulation::TryGetMeta)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fe3980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetMeta", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectMeta*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetMeta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectMeta* (::Fusion::Simulation::*)(::Fusion::NetworkId)>(&::Fusion::Simulation::GetMeta)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ff0444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetMeta", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetNextId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::Simulation::*)()>(&::Fusion::Simulation::GetNextId)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5fe8850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetNextId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetLatestSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshotRef (::Fusion::Simulation::*)(::Fusion::NetworkId)>(&::Fusion::Simulation::GetLatestSnapshot)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ff04e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetLatestSnapshot", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.TryGetStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::NetworkId, ::by_ref<::Fusion::NetworkObjectMeta*>)>(&::Fusion::Simulation::TryGetStruct)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5fe3bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetStruct", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectMeta*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.TryGetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::NetworkId, ::by_ref<::Fusion::NetworkObject*>)>(&::Fusion::Simulation::TryGetInstance)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5ff051c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetInstance", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AllocateStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectMeta* (::Fusion::Simulation::*)(::Fusion::NetworkId, int32_t, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>)>(&::Fusion::Simulation::AllocateStruct)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5ff063c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AllocateStruct", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::Fusion::NetworkObjectTypeId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AllocateObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectMeta* (::Fusion::Simulation::*)(::by_ref<::Fusion::NetworkObjectHeader>)>(&::Fusion::Simulation::AllocateObject)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5ff0864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AllocateObject", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeader>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.AllocateObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectMeta* (::Fusion::Simulation::*)(::Fusion::NetworkId, int32_t, ::Fusion::NetworkObjectTypeId, int32_t, ::Fusion::NetworkId, ::Fusion::NetworkObjectNestingKey, ::Fusion::NetworkObjectHeaderFlags)>(&::Fusion::Simulation::AllocateObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ff07e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AllocateObject", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkObjectNestingKey>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.FreeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkId)>(&::Fusion::Simulation::FreeObject)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x5fe6e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"FreeObject", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetRpcSourceAuthorityMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*, ::Fusion::PlayerRef)>(&::Fusion::Simulation::GetRpcSourceAuthorityMask)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ff0cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetRpcSourceAuthorityMask", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetLocalAuthorityMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Simulation::*)(::by_ref<::Fusion::NetworkObjectHeader>)>(&::Fusion::Simulation::GetLocalAuthorityMask)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ff0d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetLocalAuthorityMask", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeader>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetRpcTargetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcTargetStatus (::Fusion::Simulation::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation::GetRpcTargetStatus)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5ff0e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetRpcTargetStatus", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.SendMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcSendMessageResult (::Fusion::Simulation::*)(::by_ref<::Fusion::SimulationMessage*>)>(&::Fusion::Simulation::SendMessage)> {
  constexpr static std::size_t size = 0xb8c;
  constexpr static std::size_t addrs = 0x5ff10c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SendMessage", {}, {::i2c::type_of<::by_ref<::Fusion::SimulationMessage*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.ForwardMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::SimulationMessage*, ::Fusion::PlayerRef, bool)>(&::Fusion::Simulation::ForwardMessage)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x5ff20d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ForwardMessage", {}, {::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.GetMessageTargetObjectIdForVerification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::Simulation::*)(::Fusion::SimulationMessage*)>(&::Fusion::Simulation::GetMessageTargetObjectIdForVerification)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ff1c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetMessageTargetObjectIdForVerification", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.VerifyMessageTargetObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::Sockets::NetConnection*, ::Fusion::NetworkId, ::by_ref<::GlobalNamespace::Simulation_TargetObjectVerificationResult>)>(&::Fusion::Simulation::VerifyMessageTargetObject)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ff1d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"VerifyMessageTargetObject", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Simulation_TargetObjectVerificationResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.SendMessageInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::SimulationMessage*, ::Fusion::Sockets::NetConnection*)>(&::Fusion::Simulation::SendMessageInternal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ff1f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SendMessageInternal", {}, {::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.HostMigrationAfterFreeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::Simulation::HostMigrationAfterFreeObject)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ff0b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"HostMigrationAfterFreeObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.HostMigrationAfterAllocateObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::Simulation::HostMigrationAfterAllocateObject)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ff0ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"HostMigrationAfterAllocateObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.HostMigrationDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation::*)()>(&::Fusion::Simulation::HostMigrationDispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fe6990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"HostMigrationDispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation.TryGetSceneInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation::*)(::Fusion::NetworkObjectTypeId, ::by_ref<::Fusion::NetworkObject*>)>(&::Fusion::Simulation::TryGetSceneInstance)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5ff2834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetSceneInstance", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation._UpdateAreaOfInterest_g__ResolveCellPosition_228_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::Fusion::Simulation::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::Simulation::_UpdateAreaOfInterest_g__ResolveCellPosition_228_0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5feaf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"<UpdateAreaOfInterest>g__ResolveCellPosition|228_0", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation._RecvMessages_g__CanAppendQueue_239_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::SimulationMessageList, ::Fusion::SimulationMessageEnvelope*, ::by_ref<::Fusion::SimulationMessageEnvelope*>)>(&::Fusion::Simulation::_RecvMessages_g__CanAppendQueue_239_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5fed624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"<RecvMessages>g__CanAppendQueue|239_0", {}, {::i2c::type_of<::Fusion::SimulationMessageList>(), ::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<::by_ref<::Fusion::SimulationMessageEnvelope*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation._SendMessage_g__VerifyResultToSendMessageResult_328_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcSendMessageResult (*)(::GlobalNamespace::Simulation_TargetObjectVerificationResult)>(&::Fusion::Simulation::_SendMessage_g__VerifyResultToSendMessageResult_328_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ff1ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"<SendMessage>g__VerifyResultToSendMessageResult|328_0", {}, {::i2c::type_of<::GlobalNamespace::Simulation_TargetObjectVerificationResult>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Simulation_AreaOfInterestCell*>*& Fusion::Simulation::__cordl_internal_get__aoiCells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiCells;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Simulation_AreaOfInterestCell*>* const& Fusion::Simulation::__cordl_internal_get__aoiCells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiCells;
}
constexpr void Fusion::Simulation::__cordl_internal_set__aoiCells(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Simulation_AreaOfInterestCell*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aoiCells = value;
}
constexpr ::System::Collections::Generic::Stack_1<::Fusion::Simulation_AreaOfInterestCell*>*& Fusion::Simulation::__cordl_internal_get__aoiCellsPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiCellsPool;
}
constexpr ::System::Collections::Generic::Stack_1<::Fusion::Simulation_AreaOfInterestCell*>* const& Fusion::Simulation::__cordl_internal_get__aoiCellsPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiCellsPool;
}
constexpr void Fusion::Simulation::__cordl_internal_set__aoiCellsPool(::System::Collections::Generic::Stack_1<::Fusion::Simulation_AreaOfInterestCell*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aoiCellsPool = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::HashSet_1<int32_t>*>*& Fusion::Simulation::__cordl_internal_get__aoiConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiConnections;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::HashSet_1<int32_t>*>* const& Fusion::Simulation::__cordl_internal_get__aoiConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiConnections;
}
constexpr void Fusion::Simulation::__cordl_internal_set__aoiConnections(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::HashSet_1<int32_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aoiConnections = value;
}
constexpr uint64_t& Fusion::Simulation::__cordl_internal_get__interpolateSequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpolateSequence;
}
constexpr uint64_t const& Fusion::Simulation::__cordl_internal_get__interpolateSequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpolateSequence;
}
constexpr void Fusion::Simulation::__cordl_internal_set__interpolateSequence(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpolateSequence = value;
}
constexpr bool& Fusion::Simulation::__cordl_internal_get__isShutdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isShutdown;
}
constexpr bool const& Fusion::Simulation::__cordl_internal_get__isShutdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isShutdown;
}
constexpr void Fusion::Simulation::__cordl_internal_set__isShutdown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isShutdown = value;
}
constexpr bool& Fusion::Simulation::__cordl_internal_get__isWaitingForShutdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWaitingForShutdown;
}
constexpr bool const& Fusion::Simulation::__cordl_internal_get__isWaitingForShutdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWaitingForShutdown;
}
constexpr void Fusion::Simulation::__cordl_internal_set__isWaitingForShutdown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isWaitingForShutdown = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::Simulation::__cordl_internal_get_Runner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Runner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::Simulation::__cordl_internal_get_Runner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Runner;
}
constexpr void Fusion::Simulation::__cordl_internal_set_Runner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Runner = value;
}
constexpr ::Fusion::Simulation_ICallbacks*& Fusion::Simulation::__cordl_internal_get__callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
constexpr ::Fusion::Simulation_ICallbacks* const& Fusion::Simulation::__cordl_internal_get__callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
constexpr void Fusion::Simulation::__cordl_internal_set__callbacks(::Fusion::Simulation_ICallbacks*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callbacks = value;
}
constexpr ::Fusion::Tick& Fusion::Simulation::__cordl_internal_get__tick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tick;
}
constexpr ::Fusion::Tick const& Fusion::Simulation::__cordl_internal_get__tick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tick;
}
constexpr void Fusion::Simulation::__cordl_internal_set__tick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tick = value;
}
constexpr ::Fusion::SimulationModes& Fusion::Simulation::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr ::Fusion::SimulationModes const& Fusion::Simulation::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr void Fusion::Simulation::__cordl_internal_set__mode(::Fusion::SimulationModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
constexpr ::Fusion::SimulationStages& Fusion::Simulation::__cordl_internal_get__stage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stage;
}
constexpr ::Fusion::SimulationStages const& Fusion::Simulation::__cordl_internal_get__stage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stage;
}
constexpr void Fusion::Simulation::__cordl_internal_set__stage(::Fusion::SimulationStages  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stage = value;
}
constexpr ::Fusion::SimulationConfig*& Fusion::Simulation::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::Fusion::SimulationConfig* const& Fusion::Simulation::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Fusion::Simulation::__cordl_internal_set__config(::Fusion::SimulationConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr ::Fusion::NetworkProjectConfig*& Fusion::Simulation::__cordl_internal_get__projectConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____projectConfig;
}
constexpr ::Fusion::NetworkProjectConfig* const& Fusion::Simulation::__cordl_internal_get__projectConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____projectConfig;
}
constexpr void Fusion::Simulation::__cordl_internal_set__projectConfig(::Fusion::NetworkProjectConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____projectConfig = value;
}
constexpr ::Fusion::ITimeProvider*& Fusion::Simulation::__cordl_internal_get__time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr ::Fusion::ITimeProvider* const& Fusion::Simulation::__cordl_internal_get__time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr void Fusion::Simulation::__cordl_internal_set__time(::Fusion::ITimeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time = value;
}
constexpr ::Fusion::Tick& Fusion::Simulation::__cordl_internal_get__interpTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpTo;
}
constexpr ::Fusion::Tick const& Fusion::Simulation::__cordl_internal_get__interpTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpTo;
}
constexpr void Fusion::Simulation::__cordl_internal_set__interpTo(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpTo = value;
}
constexpr ::Fusion::Tick& Fusion::Simulation::__cordl_internal_get__interpFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpFrom;
}
constexpr ::Fusion::Tick const& Fusion::Simulation::__cordl_internal_get__interpFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpFrom;
}
constexpr void Fusion::Simulation::__cordl_internal_set__interpFrom(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpFrom = value;
}
constexpr float_t& Fusion::Simulation::__cordl_internal_get__remoteAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteAlpha;
}
constexpr float_t const& Fusion::Simulation::__cordl_internal_get__remoteAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteAlpha;
}
constexpr void Fusion::Simulation::__cordl_internal_set__remoteAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remoteAlpha = value;
}
constexpr float_t& Fusion::Simulation::__cordl_internal_get__localAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAlpha;
}
constexpr float_t const& Fusion::Simulation::__cordl_internal_get__localAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAlpha;
}
constexpr void Fusion::Simulation::__cordl_internal_set__localAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localAlpha = value;
}
constexpr ::Fusion::Tick& Fusion::Simulation::__cordl_internal_get__interpToPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpToPrev;
}
constexpr ::Fusion::Tick const& Fusion::Simulation::__cordl_internal_get__interpToPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpToPrev;
}
constexpr void Fusion::Simulation::__cordl_internal_set__interpToPrev(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpToPrev = value;
}
constexpr ::Fusion::Tick& Fusion::Simulation::__cordl_internal_get__interpFromPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpFromPrev;
}
constexpr ::Fusion::Tick const& Fusion::Simulation::__cordl_internal_get__interpFromPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpFromPrev;
}
constexpr void Fusion::Simulation::__cordl_internal_set__interpFromPrev(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpFromPrev = value;
}
constexpr float_t& Fusion::Simulation::__cordl_internal_get__remoteAlphaPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteAlphaPrev;
}
constexpr float_t const& Fusion::Simulation::__cordl_internal_get__remoteAlphaPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteAlphaPrev;
}
constexpr void Fusion::Simulation::__cordl_internal_set__remoteAlphaPrev(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remoteAlphaPrev = value;
}
constexpr float_t& Fusion::Simulation::__cordl_internal_get__localAlphaPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAlphaPrev;
}
constexpr float_t const& Fusion::Simulation::__cordl_internal_get__localAlphaPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAlphaPrev;
}
constexpr void Fusion::Simulation::__cordl_internal_set__localAlphaPrev(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localAlphaPrev = value;
}
constexpr ::Fusion::SimulationInput*& Fusion::Simulation::__cordl_internal_get__inputRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputRoot;
}
constexpr ::Fusion::SimulationInput* const& Fusion::Simulation::__cordl_internal_get__inputRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputRoot;
}
constexpr void Fusion::Simulation::__cordl_internal_set__inputRoot(::Fusion::SimulationInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputRoot = value;
}
constexpr ::Fusion::SimulationInput_Pool*& Fusion::Simulation::__cordl_internal_get__inputPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputPool;
}
constexpr ::Fusion::SimulationInput_Pool* const& Fusion::Simulation::__cordl_internal_get__inputPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputPool;
}
constexpr void Fusion::Simulation::__cordl_internal_set__inputPool(::Fusion::SimulationInput_Pool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputPool = value;
}
constexpr ::Fusion::SimulationInputCollection*& Fusion::Simulation::__cordl_internal_get__inputCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputCollection;
}
constexpr ::Fusion::SimulationInputCollection* const& Fusion::Simulation::__cordl_internal_get__inputCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputCollection;
}
constexpr void Fusion::Simulation::__cordl_internal_set__inputCollection(::Fusion::SimulationInputCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputCollection = value;
}
constexpr ::Fusion::Simulation_StateReplicator*& Fusion::Simulation::__cordl_internal_get__stateReplicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateReplicator;
}
constexpr ::Fusion::Simulation_StateReplicator* const& Fusion::Simulation::__cordl_internal_get__stateReplicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateReplicator;
}
constexpr void Fusion::Simulation::__cordl_internal_set__stateReplicator(::Fusion::Simulation_StateReplicator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateReplicator = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::SimulationConnection*>*& Fusion::Simulation::__cordl_internal_get__connections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connections;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::SimulationConnection*>* const& Fusion::Simulation::__cordl_internal_get__connections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connections;
}
constexpr void Fusion::Simulation::__cordl_internal_set__connections(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::SimulationConnection*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connections = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationConnection*>*& Fusion::Simulation::__cordl_internal_get__playersConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playersConnections;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationConnection*>* const& Fusion::Simulation::__cordl_internal_get__playersConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playersConnections;
}
constexpr void Fusion::Simulation::__cordl_internal_set__playersConnections(::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationConnection*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playersConnections = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::PlayerRef>*& Fusion::Simulation::__cordl_internal_get__players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::PlayerRef>* const& Fusion::Simulation::__cordl_internal_get__players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr void Fusion::Simulation::__cordl_internal_set__players(::System::Collections::Generic::HashSet_1<::Fusion::PlayerRef>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____players = value;
}
constexpr double_t& Fusion::Simulation::__cordl_internal_get__updateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateTime;
}
constexpr double_t const& Fusion::Simulation::__cordl_internal_get__updateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateTime;
}
constexpr void Fusion::Simulation::__cordl_internal_set__updateTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateTime = value;
}
constexpr bool& Fusion::Simulation::__cordl_internal_get__isResume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isResume;
}
constexpr bool const& Fusion::Simulation::__cordl_internal_get__isResume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isResume;
}
constexpr void Fusion::Simulation::__cordl_internal_set__isResume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isResume = value;
}
constexpr ::Fusion::Tick& Fusion::Simulation::__cordl_internal_get__sendTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendTick;
}
constexpr ::Fusion::Tick const& Fusion::Simulation::__cordl_internal_get__sendTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendTick;
}
constexpr void Fusion::Simulation::__cordl_internal_set__sendTick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sendTick = value;
}
constexpr bool& Fusion::Simulation::__cordl_internal_get__isLastTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLastTick;
}
constexpr bool const& Fusion::Simulation::__cordl_internal_get__isLastTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLastTick;
}
constexpr void Fusion::Simulation::__cordl_internal_set__isLastTick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLastTick = value;
}
constexpr bool& Fusion::Simulation::__cordl_internal_get__isFirstTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFirstTick;
}
constexpr bool const& Fusion::Simulation::__cordl_internal_get__isFirstTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFirstTick;
}
constexpr void Fusion::Simulation::__cordl_internal_set__isFirstTick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFirstTick = value;
}
constexpr bool& Fusion::Simulation::__cordl_internal_get__isResimulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isResimulation;
}
constexpr bool const& Fusion::Simulation::__cordl_internal_get__isResimulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isResimulation;
}
constexpr void Fusion::Simulation::__cordl_internal_set__isResimulation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isResimulation = value;
}
constexpr bool& Fusion::Simulation::__cordl_internal_get__isInTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInTick;
}
constexpr bool const& Fusion::Simulation::__cordl_internal_get__isInTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInTick;
}
constexpr void Fusion::Simulation::__cordl_internal_set__isInTick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInTick = value;
}
constexpr bool& Fusion::Simulation::__cordl_internal_get__isInitialLocalTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialLocalTick;
}
constexpr bool const& Fusion::Simulation::__cordl_internal_get__isInitialLocalTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialLocalTick;
}
constexpr void Fusion::Simulation::__cordl_internal_set__isInitialLocalTick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialLocalTick = value;
}
constexpr ::System::Nullable_1<bool>& Fusion::Simulation::__cordl_internal_get__isPaused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPaused;
}
constexpr ::System::Nullable_1<bool> const& Fusion::Simulation::__cordl_internal_get__isPaused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPaused;
}
constexpr void Fusion::Simulation::__cordl_internal_set__isPaused(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPaused = value;
}
constexpr ::Fusion::Statistics::FusionStatisticsManager*& Fusion::Simulation::__cordl_internal_get__fusionStatsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fusionStatsManager;
}
constexpr ::Fusion::Statistics::FusionStatisticsManager* const& Fusion::Simulation::__cordl_internal_get__fusionStatsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fusionStatsManager;
}
constexpr void Fusion::Simulation::__cordl_internal_set__fusionStatsManager(::Fusion::Statistics::FusionStatisticsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fusionStatsManager = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*& Fusion::Simulation::__cordl_internal_get__tickUpdateTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tickUpdateTimes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>* const& Fusion::Simulation::__cordl_internal_get__tickUpdateTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tickUpdateTimes;
}
constexpr void Fusion::Simulation::__cordl_internal_set__tickUpdateTimes(::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tickUpdateTimes = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef,bool>>*& Fusion::Simulation::__cordl_internal_get__invokeJoinedLeaveQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invokeJoinedLeaveQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef,bool>>* const& Fusion::Simulation::__cordl_internal_get__invokeJoinedLeaveQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invokeJoinedLeaveQueue;
}
constexpr void Fusion::Simulation::__cordl_internal_set__invokeJoinedLeaveQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef,bool>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invokeJoinedLeaveQueue = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*& Fusion::Simulation::__cordl_internal_get__globalInterestObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalInterestObjects;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>* const& Fusion::Simulation::__cordl_internal_get__globalInterestObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalInterestObjects;
}
constexpr void Fusion::Simulation::__cordl_internal_set__globalInterestObjects(::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____globalInterestObjects = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::Simulation_PlayerRefMapping>*& Fusion::Simulation::__cordl_internal_get__uniqueIdPlayerRefMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueIdPlayerRefMapping;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::Simulation_PlayerRefMapping>* const& Fusion::Simulation::__cordl_internal_get__uniqueIdPlayerRefMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueIdPlayerRefMapping;
}
constexpr void Fusion::Simulation::__cordl_internal_set__uniqueIdPlayerRefMapping(::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::Simulation_PlayerRefMapping>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uniqueIdPlayerRefMapping = value;
}
constexpr ::Fusion::Simulation_SendContext*& Fusion::Simulation::__cordl_internal_get__sendContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendContext;
}
constexpr ::Fusion::Simulation_SendContext* const& Fusion::Simulation::__cordl_internal_get__sendContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendContext;
}
constexpr void Fusion::Simulation::__cordl_internal_set__sendContext(::Fusion::Simulation_SendContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sendContext = value;
}
constexpr ::Fusion::Simulation_RecvContext*& Fusion::Simulation::__cordl_internal_get__recvContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvContext;
}
constexpr ::Fusion::Simulation_RecvContext* const& Fusion::Simulation::__cordl_internal_get__recvContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvContext;
}
constexpr void Fusion::Simulation::__cordl_internal_set__recvContext(::Fusion::Simulation_RecvContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recvContext = value;
}
constexpr int32_t& Fusion::Simulation::__cordl_internal_get__reliableSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reliableSend;
}
constexpr int32_t const& Fusion::Simulation::__cordl_internal_get__reliableSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reliableSend;
}
constexpr void Fusion::Simulation::__cordl_internal_set__reliableSend(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reliableSend = value;
}
constexpr ::Fusion::Sockets::INetSocket*& Fusion::Simulation::__cordl_internal_get__netSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netSocket;
}
constexpr ::Fusion::Sockets::INetSocket* const& Fusion::Simulation::__cordl_internal_get__netSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netSocket;
}
constexpr void Fusion::Simulation::__cordl_internal_set__netSocket(::Fusion::Sockets::INetSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____netSocket = value;
}
constexpr ::Fusion::Sockets::NetPeer*& Fusion::Simulation::__cordl_internal_get__netPeer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netPeer;
}
constexpr ::Fusion::Sockets::NetPeer* const& Fusion::Simulation::__cordl_internal_get__netPeer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netPeer;
}
constexpr void Fusion::Simulation::__cordl_internal_set__netPeer(::Fusion::Sockets::NetPeer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____netPeer = value;
}
constexpr ::Fusion::Sockets::NetPeerGroup*& Fusion::Simulation::__cordl_internal_get__netPeerGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netPeerGroup;
}
constexpr ::Fusion::Sockets::NetPeerGroup* const& Fusion::Simulation::__cordl_internal_get__netPeerGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netPeerGroup;
}
constexpr void Fusion::Simulation::__cordl_internal_set__netPeerGroup(::Fusion::Sockets::NetPeerGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____netPeerGroup = value;
}
constexpr ::System::Random*& Fusion::Simulation::__cordl_internal_get__netPeerRng()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netPeerRng;
}
constexpr ::System::Random* const& Fusion::Simulation::__cordl_internal_get__netPeerRng() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netPeerRng;
}
constexpr void Fusion::Simulation::__cordl_internal_set__netPeerRng(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____netPeerRng = value;
}
constexpr ::System::Collections::Generic::Stack_1<::Fusion::NetworkObjectHeaderSnapshot*>*& Fusion::Simulation::__cordl_internal_get__snapshotsPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotsPool;
}
constexpr ::System::Collections::Generic::Stack_1<::Fusion::NetworkObjectHeaderSnapshot*>* const& Fusion::Simulation::__cordl_internal_get__snapshotsPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotsPool;
}
constexpr void Fusion::Simulation::__cordl_internal_set__snapshotsPool(::System::Collections::Generic::Stack_1<::Fusion::NetworkObjectHeaderSnapshot*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshotsPool = value;
}
constexpr uint32_t& Fusion::Simulation::__cordl_internal_get__idCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idCounter;
}
constexpr uint32_t const& Fusion::Simulation::__cordl_internal_get__idCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idCounter;
}
constexpr void Fusion::Simulation::__cordl_internal_set__idCounter(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____idCounter = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>*& Fusion::Simulation::__cordl_internal_get__metaLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metaLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>* const& Fusion::Simulation::__cordl_internal_get__metaLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metaLookup;
}
constexpr void Fusion::Simulation::__cordl_internal_set__metaLookup(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metaLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*& Fusion::Simulation::__cordl_internal_get__playerDataLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerDataLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>* const& Fusion::Simulation::__cordl_internal_get__playerDataLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerDataLookup;
}
constexpr void Fusion::Simulation::__cordl_internal_set__playerDataLookup(::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerDataLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*& Fusion::Simulation::__cordl_internal_get__playerLeftTempObjectCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerLeftTempObjectCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>* const& Fusion::Simulation::__cordl_internal_get__playerLeftTempObjectCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerLeftTempObjectCache;
}
constexpr void Fusion::Simulation::__cordl_internal_set__playerLeftTempObjectCache(::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerLeftTempObjectCache = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*& Fusion::Simulation::__cordl_internal_get__structs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____structs;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>* const& Fusion::Simulation::__cordl_internal_get__structs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____structs;
}
constexpr void Fusion::Simulation::__cordl_internal_set__structs(::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____structs = value;
}
constexpr int32_t& Fusion::Simulation::__cordl_internal_get__structsVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____structsVersion;
}
constexpr int32_t const& Fusion::Simulation::__cordl_internal_get__structsVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____structsVersion;
}
constexpr void Fusion::Simulation::__cordl_internal_set__structsVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____structsVersion = value;
}
constexpr ::Fusion::Allocator*& Fusion::Simulation::__cordl_internal_get__allocator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocator;
}
constexpr ::Fusion::Allocator* const& Fusion::Simulation::__cordl_internal_get__allocator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocator;
}
constexpr void Fusion::Simulation::__cordl_internal_set__allocator(::Fusion::Allocator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allocator = value;
}
constexpr ::Fusion::Allocator*& Fusion::Simulation::__cordl_internal_get__allocatorObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocatorObjects;
}
constexpr ::Fusion::Allocator* const& Fusion::Simulation::__cordl_internal_get__allocatorObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocatorObjects;
}
constexpr void Fusion::Simulation::__cordl_internal_set__allocatorObjects(::Fusion::Allocator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allocatorObjects = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::Fusion::NetworkObjectMeta*>*& Fusion::Simulation::__cordl_internal_get__metaSceneLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metaSceneLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::Fusion::NetworkObjectMeta*>* const& Fusion::Simulation::__cordl_internal_get__metaSceneLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metaSceneLookup;
}
constexpr void Fusion::Simulation::__cordl_internal_set__metaSceneLookup(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectTypeId,::Fusion::NetworkObjectMeta*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metaSceneLookup = value;
}
constexpr ::GlobalNamespace::NetworkObjectMeta_ListMigration& Fusion::Simulation::__cordl_internal_get__metaMigration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metaMigration;
}
constexpr ::GlobalNamespace::NetworkObjectMeta_ListMigration const& Fusion::Simulation::__cordl_internal_get__metaMigration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metaMigration;
}
constexpr void Fusion::Simulation::__cordl_internal_set__metaMigration(::GlobalNamespace::NetworkObjectMeta_ListMigration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metaMigration = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*& Fusion::Simulation::__cordl_internal_get__metaMigrationRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metaMigrationRemoved;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>* const& Fusion::Simulation::__cordl_internal_get__metaMigrationRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metaMigrationRemoved;
}
constexpr void Fusion::Simulation::__cordl_internal_set__metaMigrationRemoved(::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metaMigrationRemoved = value;
}
inline void Fusion::Simulation::GetAreaOfInterestGizmoData(/* [TupleElementNames(new[] { "center", "size", "playerCount", "objectCount" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,int32_t,int32_t>>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetAreaOfInterestGizmoData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,int32_t,int32_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Collections::Generic::List_1<::Fusion::NetworkId>* Fusion::Simulation::GetObjectsInAreaOfInterestForPlayer(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetObjectsInAreaOfInterestForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Fusion::NetworkId>*>(this, ___internal_method, player);
}
inline void Fusion::Simulation::GetObjectsAndPlayersInAreaOfInterestCell(int32_t  cellKey, ::System::Collections::Generic::List_1<::Fusion::PlayerRef>*  players, ::System::Collections::Generic::List_1<::Fusion::NetworkId>*  objects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetObjectsAndPlayersInAreaOfInterestCell", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::PlayerRef>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::NetworkId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellKey, players, objects);
}
inline ::Fusion::Simulation_AreaOfInterestCell* Fusion::Simulation::AOI_GetCell(int32_t  cellKey, bool  create)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_GetCell", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Simulation_AreaOfInterestCell*>(this, ___internal_method, cellKey, create);
}
inline void Fusion::Simulation::AOI_ReleaseCell(::Fusion::Simulation_AreaOfInterestCell*  cell)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_ReleaseCell", {}, {::i2c::type_of<::Fusion::Simulation_AreaOfInterestCell*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell);
}
inline void Fusion::Simulation::AOI_RemoveConnection(::Fusion::SimulationConnection*  sc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_RemoveConnection", {}, {::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sc);
}
inline void Fusion::Simulation::AOI_UpdateAreaOfInterest(::Fusion::SimulationConnection*  sc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_UpdateAreaOfInterest", {}, {::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sc);
}
inline bool Fusion::Simulation::AOI_Query(::Fusion::SimulationConnection*  sc, ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*  result, bool  clearResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_Query", {}, {::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sc, result, clearResult);
}
inline void Fusion::Simulation::AOI_RemoveFromAreaOfInterest(::Fusion::NetworkObjectMeta*  meta, bool  invokeExit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_RemoveFromAreaOfInterest", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta, invokeExit);
}
inline void Fusion::Simulation::AOI_UpdateAreaOfInterest(::Fusion::NetworkObjectMeta*  meta, int32_t  newCellKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AOI_UpdateAreaOfInterest", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta, newCellKey);
}
inline void Fusion::Simulation::EnterAreaOfInterest(int32_t  connection, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"EnterAreaOfInterest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, id);
}
inline void Fusion::Simulation::EnterAreaOfInterest(::Fusion::SimulationConnection*  connection, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"EnterAreaOfInterest", {}, {::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, id);
}
inline void Fusion::Simulation::ExitAreaOfInterest(int32_t  connection, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ExitAreaOfInterest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, id);
}
inline void Fusion::Simulation::ExitAreaOfInterest(::Fusion::SimulationConnection*  connection, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ExitAreaOfInterest", {}, {::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, id);
}
inline ::Fusion::Tick Fusion::Simulation::get_LatestServerTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline ::Fusion::SimulationRuntimeConfig Fusion::Simulation::get_RuntimeConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_RuntimeConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationRuntimeConfig>(this, ___internal_method);
}
inline ::Fusion::SimulationRuntimeConfig* Fusion::Simulation::get_RuntimeConfigPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_RuntimeConfigPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationRuntimeConfig*>(this, ___internal_method);
}
inline void Fusion::Simulation::InterpolateSequenceIncrement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InterpolateSequenceIncrement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint64_t Fusion::Simulation::get_InterpolateSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_InterpolateSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_HasRuntimeConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_HasRuntimeConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::get_TickStride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_TickStride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::get_TickRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_TickRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline double_t Fusion::Simulation::get_TickDeltaDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_TickDeltaDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t Fusion::Simulation::get_TickDeltaFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_TickDeltaFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::get_SendRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_SendRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline double_t Fusion::Simulation::get_SendDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_SendDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t Fusion::Simulation::get_DeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Fusion::Simulation::get_LocalAlpha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_LocalAlpha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsResimulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsResimulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsLastTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsLastTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsFirstTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsFirstTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsLocalPlayerFirstExecution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsLocalPlayerFirstExecution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::Tick Fusion::Simulation::get_Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline ::Fusion::Tick Fusion::Simulation::get_TickPrevious()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_TickPrevious", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline double_t Fusion::Simulation::get_Time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::get_InputCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_InputCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Fusion::Topologies Fusion::Simulation::get_Topology()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Topology", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Topologies>(this, ___internal_method);
}
inline ::Fusion::SimulationModes Fusion::Simulation::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationModes>(this, ___internal_method);
}
inline ::Fusion::SimulationStages Fusion::Simulation::get_Stage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Stage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationStages>(this, ___internal_method);
}
inline ::Fusion::SimulationConfig* Fusion::Simulation::get_Config()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Config", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationConfig*>(this, ___internal_method);
}
inline ::Fusion::NetworkProjectConfig* Fusion::Simulation::get_ProjectConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_ProjectConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkProjectConfig*>(this, ___internal_method);
}
inline float_t Fusion::Simulation::get_RemoteAlpha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_RemoteAlpha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Fusion::Tick Fusion::Simulation::get_RemoteTickPrevious()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_RemoteTickPrevious", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline ::Fusion::Tick Fusion::Simulation::get_RemoteTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_RemoteTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsSinglePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsSinglePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsMasterClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsMasterClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* Fusion::Simulation::get_ActivePlayers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::Simulation_StateReplicator* Fusion::Simulation::get_Replicator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Replicator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Simulation_StateReplicator*>(this, ___internal_method);
}
inline ::Fusion::Simulation_ICallbacks* Fusion::Simulation::get_Callbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Callbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Simulation_ICallbacks*>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsResume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsResume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsInTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsInTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsWaitingForTheInitialTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsWaitingForTheInitialTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation::get_IsSceneInfoReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IsSceneInfoReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>* Fusion::Simulation::get_Connections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Connections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>*>(this, ___internal_method);
}
inline ::Fusion::Sockets::NetAddress Fusion::Simulation::get_LocalAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_LocalAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method);
}
inline ::Fusion::Sockets::NetConfig* Fusion::Simulation::get_NetConfigPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_NetConfigPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConfig*>(this, ___internal_method);
}
inline ::Fusion::PlayerRef Fusion::Simulation::get_LocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline double_t Fusion::Simulation::GetPlayerRtt(::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, player);
}
inline void Fusion::Simulation::RecvPacket()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::WritePackets()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationInput* Fusion::Simulation::GetInput(::Fusion::Tick  tick, ::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInput*>(this, ___internal_method, tick, player);
}
inline void Fusion::Simulation::_ctor(::Fusion::SimulationArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::Fusion::PlayerRef Fusion::Simulation::Connection2Player(::Fusion::SimulationConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Connection2Player", {}, {::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method, c);
}
inline ::Fusion::PlayerRef Fusion::Simulation::Connection2Player(::Fusion::Sockets::NetConnection*  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method, c);
}
inline int32_t Fusion::Simulation::Player2Connection(::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player);
}
inline void Fusion::Simulation::RegisterUniqueIdPlayerMapping(int32_t  actorid, ::ArrayW<uint8_t>  id, ::Fusion::PlayerRef  playerRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"RegisterUniqueIdPlayerMapping", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorid, id, playerRef);
}
inline ::System::Nullable_1<::GlobalNamespace::Simulation_PlayerRefMapping> Fusion::Simulation::GetPlayerRefMapping(::ArrayW<uint8_t>  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerRefMapping", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::Simulation_PlayerRefMapping>>(this, ___internal_method, id);
}
inline ::System::Nullable_1<::GlobalNamespace::Simulation_PlayerRefMapping> Fusion::Simulation::GetPlayerRefMapping(uint8_t*  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerRefMapping", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::Simulation_PlayerRefMapping>>(this, ___internal_method, id);
}
inline void Fusion::Simulation::CalculateUpdateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"CalculateUpdateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::StepSimulation(::Fusion::SimulationStages  stage, bool  lastTick, bool  firstTick, bool  freeInput)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"StepSimulation", {}, {::i2c::type_of<::Fusion::SimulationStages>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage, lastTick, firstTick, freeInput);
}
inline void Fusion::Simulation::AfterUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::NetworkConnected(::Fusion::Sockets::NetConnection*  connection)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection);
}
inline void Fusion::Simulation::NetworkDisconnected(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetDisconnectReason  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, reason);
}
inline void Fusion::Simulation::NetworkReceiveDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::NoSimulation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::BeforeSimulation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Simulation::BeforeFirstTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::SinglePlayerSetPaused(bool  paused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SinglePlayerSetPaused", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paused);
}
inline void Fusion::Simulation::RequestStateAuthority(::Fusion::NetworkId  id, bool  wants)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"RequestStateAuthority", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, wants);
}
inline void Fusion::Simulation::SetPlayerAlwaysInterested(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id, bool  alwaysInterested)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SetPlayerAlwaysInterested", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, id, alwaysInterested);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::Simulation::TempFree(::by_ref<T*>  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {"TempFree", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline void* Fusion::Simulation::TempAlloc(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TempAlloc", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, size);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Simulation::TempAlloc()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {"TempAlloc", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Simulation::TempAllocArray(int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {"TempAllocArray", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(this, ___internal_method, length);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Simulation::TempDoubleArray(::by_ref<T*>  oldArray, int32_t  oldLength)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {"TempDoubleArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T*>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(this, ___internal_method, oldArray, oldLength);
}
inline void Fusion::Simulation::ShutdownNativeSocket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ShutdownNativeSocket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::Destroy(::Fusion::NetworkId  id, ::Fusion::NetworkObjectDestroyFlags  flags, ::Fusion::PlayerRef  destroyingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkObjectDestroyFlags>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, flags, destroyingPlayer);
}
inline bool Fusion::Simulation::PlayerValid(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"PlayerValid", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void Fusion::Simulation::PlayerAdd(::Fusion::PlayerRef  player, ::Fusion::SimulationConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"PlayerAdd", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, connection);
}
inline void Fusion::Simulation::PlayerRemove(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"PlayerRemove", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline bool Fusion::Simulation::IsHostPlayer(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsHostPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool Fusion::Simulation::TryGetHostPlayer(::by_ref<::Fusion::PlayerRef>  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetHostPlayer", {}, {::i2c::type_of<::by_ref<::Fusion::PlayerRef>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::System::Nullable_1<bool> Fusion::Simulation::IsInterestedIn(::Fusion::NetworkObjectMeta*  meta, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsInterestedIn", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method, meta, player);
}
inline bool Fusion::Simulation::IsInputAuthority(::Fusion::PlayerRef  inputAuthority, ::Fusion::PlayerRef  playerRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsInputAuthority", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inputAuthority, playerRef);
}
inline bool Fusion::Simulation::IsInputAuthority(/* [NotNull] */ ::Fusion::NetworkObjectMeta*  meta, ::Fusion::PlayerRef  playerRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsInputAuthority", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, meta, playerRef);
}
inline bool Fusion::Simulation::IsStateAuthority(::Fusion::PlayerRef  stateSource, ::Fusion::PlayerRef  playerRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsStateAuthority", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stateSource, playerRef);
}
inline bool Fusion::Simulation::IsStateAuthority(/* [NotNull] */ ::Fusion::NetworkObjectMeta*  meta, ::Fusion::PlayerRef  playerRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsStateAuthority", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, meta, playerRef);
}
inline bool Fusion::Simulation::IsLocalSimulationInputAuthority(/* [RequiresLocation] */ ::by_ref<::Fusion::NetworkObjectHeader>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsLocalSimulationInputAuthority", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Fusion::Simulation::IsLocalSimulationStateAuthority(/* [RequiresLocation] */ ::by_ref<::Fusion::NetworkObjectHeader>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsLocalSimulationStateAuthority", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::Fusion::PlayerRef Fusion::Simulation::GetStateAuthority(::Fusion::PlayerRef  objectStateAuthority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetStateAuthority", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method, objectStateAuthority);
}
inline ::ArrayW<uint8_t> Fusion::Simulation::GetPlayerConnectionToken(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerConnectionToken", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, player);
}
inline ::Fusion::Sockets::NetAddress Fusion::Simulation::GetPlayerAddress(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerAddress", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method, player);
}
inline int64_t Fusion::Simulation::GetPlayerUniqueId(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerUniqueId", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, player);
}
inline ::Fusion::SimulationInput* Fusion::Simulation::GetInputForPlayer(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetInputForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInput*>(this, ___internal_method, player);
}
inline void Fusion::Simulation::DeletePlayerSimulationDataOnDisconnect(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DeletePlayerSimulationDataOnDisconnect", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::GlobalNamespace::Simulation_PlayerSimulationData* Fusion::Simulation::GetPlayerSimulationData(::Fusion::PlayerRef  player, bool  create)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerSimulationData", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Simulation_PlayerSimulationData*>(this, ___internal_method, player, create);
}
inline void Fusion::Simulation::InvokePlayerJoinedLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokePlayerJoinedLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Fusion::Simulation::GetPlayerActorId(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerActorId", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method, player);
}
inline ::Fusion::NetworkId Fusion::Simulation::GetPlayerObjectId(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetPlayerObjectId", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(this, ___internal_method, player);
}
inline void Fusion::Simulation::SetPlayerObjectId(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SetPlayerObjectId", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, id);
}
inline bool Fusion::Simulation::HasAnyActiveConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"HasAnyActiveConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Simulation::InvokeOnBeforeSimulation(int32_t  forwardTickCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokeOnBeforeSimulation", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forwardTickCount);
}
inline void Fusion::Simulation::InvokeOnAfterSimulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokeOnAfterSimulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::InvokeOnBeforeAllTicks(bool  resimulation, int32_t  ticks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokeOnBeforeAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, ticks);
}
inline void Fusion::Simulation::InvokeOnAfterAllTicks(bool  resimulation, int32_t  ticks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokeOnAfterAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, ticks);
}
inline void Fusion::Simulation::BeforeUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::AfterSimulation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::UpdateSimulationStateForMasterClientObjects(bool  isMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"UpdateSimulationStateForMasterClientObjects", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isMasterClient);
}
inline int32_t Fusion::Simulation::CalculateForwardTicks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"CalculateForwardTicks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::Update(double_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Update", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dt);
}
inline void Fusion::Simulation::UpdateAreaOfInterest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"UpdateAreaOfInterest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::PreparePackets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"PreparePackets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::WriteMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"WriteMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::InvokeTick(::Fusion::SimulationStages  stage, bool  releaseAllInputs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"InvokeTick", {}, {::i2c::type_of<::Fusion::SimulationStages>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage, releaseAllInputs);
}
inline ::by_ref<::Fusion::SimulationMessageInternalTypes> Fusion::Simulation::GetMessageInternalType(::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetMessageInternalType", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::SimulationMessageInternalTypes>>(nullptr, ___internal_method, message);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> Fusion::Simulation::GetMessageInternalData(::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {"GetMessageInternalData", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, message);
}
inline void Fusion::Simulation::OnMessageInternal(::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"OnMessageInternal", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::Simulation::DeliverMessages(int32_t  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DeliverMessages", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tick);
}
inline void Fusion::Simulation::FreeMessages(::by_ref<::Fusion::SimulationMessageList>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"FreeMessages", {}, {::i2c::type_of<::by_ref<::Fusion::SimulationMessageList>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline void Fusion::Simulation::ConsumeAndWriteMessagesIntoBuffer(::by_ref<::Fusion::SimulationMessageList>  inList, ::Fusion::Sockets::NetBitBuffer*  buffer, int32_t  bitCapacity, ::by_ref<::Fusion::SimulationMessageList>  outList, bool  allowFirstMessageOverflow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ConsumeAndWriteMessagesIntoBuffer", {}, {::i2c::type_of<::by_ref<::Fusion::SimulationMessageList>>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::SimulationMessageList>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inList, buffer, bitCapacity, outList, allowFirstMessageOverflow);
}
inline void Fusion::Simulation::ResolveMessageSourceAndTarget(::Fusion::SimulationMessage*  msg, ::Fusion::PlayerRef  sourcePlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ResolveMessageSourceAndTarget", {}, {::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, sourcePlayer);
}
inline void Fusion::Simulation::RecvMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"RecvMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationConnection* Fusion::Simulation::GetSimulationConnectionByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetSimulationConnectionByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationConnection*>(this, ___internal_method, index);
}
inline ::Fusion::SimulationConnection* Fusion::Simulation::GetSimulationConnectionForPlayer(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetSimulationConnectionForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationConnection*>(this, ___internal_method, player);
}
inline bool Fusion::Simulation::TryGetSimulationConnectionForPlayer(::Fusion::PlayerRef  player, ::by_ref<::Fusion::SimulationConnection*>  sc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetSimulationConnectionForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<::Fusion::SimulationConnection*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, sc);
}
inline ::System::Nullable_1<int32_t> Fusion::Simulation::GetConnectionIndexForPlayer(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetConnectionIndexForPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method, player);
}
inline bool Fusion::Simulation::TryGetSimulationConnectionLogErrorIfFailed(::Fusion::Sockets::NetConnection*  c, ::by_ref<::Fusion::SimulationConnection*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetSimulationConnectionLogErrorIfFailed", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::SimulationConnection*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c, result);
}
inline ::Fusion::SimulationConnection* Fusion::Simulation::GetSimulationConnection(::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetSimulationConnection", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationConnection*>(this, ___internal_method, c);
}
inline void Fusion::Simulation::AddToGlobalObjectInterest(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AddToGlobalObjectInterest", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta);
}
inline void Fusion::Simulation::RemoveFromGlobalObjectInterest(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"RemoveFromGlobalObjectInterest", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Fusion::Simulation::SendReliableData(int32_t  connection, int32_t  target, ::Fusion::Sockets::ReliableKey  key, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SendReliableData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, target, key, data);
}
inline void Fusion::Simulation::NotifyWaitingForShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NotifyWaitingForShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> Fusion::Simulation::Fusion_ILogSource_GetUnityObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.ILogSource.GetUnityObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void Fusion::Simulation::DumpObject(::Fusion::NetworkId  id, ::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DumpObject", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, sb);
}
inline void Fusion::Simulation::DumpObject(::Fusion::NetworkObjectMeta*  meta, ::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DumpObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta, sb);
}
inline ::StringW Fusion::Simulation::DumpObject(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DumpObject", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id);
}
inline ::StringW Fusion::Simulation::DumpObject(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"DumpObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, meta);
}
inline int32_t Fusion::Simulation::get_ReliableDataSendRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_ReliableDataSendRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Simulation::set_ReliableDataSendRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"set_ReliableDataSendRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Simulation::NetworkInit(::Fusion::Sockets::INetSocket*  socket, ::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkInit", {}, {::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket, address);
}
inline void Fusion::Simulation::NetworkSend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkSend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::NetworkRecv()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkRecv", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::NetworkShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation::OnNetworkShutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Simulation::NetworkGetBuffer(::Fusion::Sockets::NetConnection*  connection, ::by_ref<::Fusion::Sockets::NetBitBuffer*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkGetBuffer", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, connection, buffer);
}
inline bool Fusion::Simulation::NetworkSendBuffer(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetBitBuffer*  buffer, ::Fusion::SimulationPacketEnvelope*  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkSendBuffer", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<::Fusion::SimulationPacketEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, connection, buffer, envelope);
}
inline bool Fusion::Simulation::NetworkSendPing(::Fusion::Sockets::NetAddress  address, void*  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"NetworkSendPing", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, address, data, length);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionAttempt(::Fusion::Sockets::NetConnection*  connection, int32_t  attempt, int32_t  totalConnectionAttempts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnConnectionAttempt", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, attempt, totalConnectionAttempts);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnUnconnectedData(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnUnconnectedData", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnConnected(::Fusion::Sockets::NetConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnConnected", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnDisconnected(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetDisconnectReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnDisconnected", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, reason);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnReliableData(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::ReliableId  id, uint8_t*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnReliableData", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::ReliableId>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, id, data);
}
inline ::Fusion::Sockets::OnConnectionRequestReply Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionRequest(::Fusion::Sockets::NetAddress  remoteAddres, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnConnectionRequest", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::OnConnectionRequestReply>(this, ___internal_method, remoteAddres, token, uniqueid);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnConnectionFailed(::Fusion::Sockets::NetAddress  address, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnConnectionFailed", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, reason);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnUnreliableData(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnUnreliableData", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, buffer);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyData(::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyData", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, buffer);
}
inline void Fusion::Simulation::OnEnvelopeLost(::Fusion::Sockets::NetConnection*  connection, ::Fusion::SimulationPacketEnvelope*  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"OnEnvelopeLost", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::SimulationPacketEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, envelope);
}
inline void Fusion::Simulation::OnEnvelopeDelivered(::Fusion::Sockets::NetConnection*  connection, ::Fusion::SimulationPacketEnvelope*  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"OnEnvelopeDelivered", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::SimulationPacketEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, envelope);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyDispose(::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyDispose", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetSendEnvelope>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, envelope);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyLost(::Fusion::Sockets::NetConnection*  connection, ::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyLost", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetSendEnvelope>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, envelope);
}
inline void Fusion::Simulation::Fusion_Sockets_INetPeerGroupCallbacks_OnNotifyDelivered(::Fusion::Sockets::NetConnection*  connection, ::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"Fusion.Sockets.INetPeerGroupCallbacks.OnNotifyDelivered", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetSendEnvelope>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, envelope);
}
inline uint32_t Fusion::Simulation::get_IdCounter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_IdCounter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::get_ObjectCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_ObjectCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>* Fusion::Simulation::get_Objects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"get_Objects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>*>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshot* Fusion::Simulation::GetSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshot*>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::GetObjectsAllocatorUsedSegmentsInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetObjectsAllocatorUsedSegmentsInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::GetGeneralAllocatorUsedSegmentsInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetGeneralAllocatorUsedSegmentsInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::GetObjectsAllocatorFreeSegmentsInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetObjectsAllocatorFreeSegmentsInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::Simulation::GetGeneralAllocatorFreeSegmentsInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetGeneralAllocatorFreeSegmentsInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Simulation::GetMemorySnapshot(::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator  targetAllocator, ::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetMemorySnapshot", {}, {::i2c::type_of<::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetAllocator, snapshot);
}
inline void Fusion::Simulation::SnapshotRelease(::Fusion::NetworkObjectHeaderSnapshot*  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SnapshotRelease", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot);
}
inline void Fusion::Simulation::SnapshotRelease(::by_ref<::Fusion::NetworkObjectHeaderSnapshot*>  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SnapshotRelease", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeaderSnapshot*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot);
}
inline bool Fusion::Simulation::IsSimulated(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"IsSimulated", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, meta);
}
inline bool Fusion::Simulation::HasObject(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"HasObject", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void Fusion::Simulation::LogAllObjectIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"LogAllObjectIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Simulation::TryGetMeta(::Fusion::NetworkId  id, ::by_ref<::Fusion::NetworkObjectMeta*>  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetMeta", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectMeta*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, meta);
}
inline ::Fusion::NetworkObjectMeta* Fusion::Simulation::GetMeta(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetMeta", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectMeta*>(this, ___internal_method, id);
}
inline ::Fusion::NetworkId Fusion::Simulation::GetNextId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetNextId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshotRef Fusion::Simulation::GetLatestSnapshot(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetLatestSnapshot", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshotRef>(this, ___internal_method, id);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Fusion::Simulation::TryGetStructData(::Fusion::NetworkId  id, ::by_ref<T*>  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {"TryGetStructData", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<T*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, data);
}
inline bool Fusion::Simulation::TryGetStruct(::Fusion::NetworkId  id, ::by_ref<::Fusion::NetworkObjectMeta*>  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetStruct", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectMeta*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, meta);
}
inline bool Fusion::Simulation::TryGetInstance(::Fusion::NetworkId  id, ::by_ref<::Fusion::NetworkObject*>  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetInstance", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, instance);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Simulation::AllocateStruct(::Fusion::NetworkId  id, int32_t  extraWords, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  objectTypeId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {"AllocateStruct", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::Fusion::NetworkObjectTypeId>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(this, ___internal_method, id, extraWords, objectTypeId);
}
inline ::Fusion::NetworkObjectMeta* Fusion::Simulation::AllocateStruct(::Fusion::NetworkId  id, int32_t  words, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  objectTypeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AllocateStruct", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::Fusion::NetworkObjectTypeId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectMeta*>(this, ___internal_method, id, words, objectTypeId);
}
inline ::Fusion::NetworkObjectMeta* Fusion::Simulation::AllocateObject(/* [IsReadOnly] */ ::by_ref<::Fusion::NetworkObjectHeader>  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AllocateObject", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectMeta*>(this, ___internal_method, header);
}
inline ::Fusion::NetworkObjectMeta* Fusion::Simulation::AllocateObject(::Fusion::NetworkId  id, int32_t  wordCount, ::Fusion::NetworkObjectTypeId  type, int32_t  behaviourCount, ::Fusion::NetworkId  nestingRoot, ::Fusion::NetworkObjectNestingKey  nestingKey, ::Fusion::NetworkObjectHeaderFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"AllocateObject", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkObjectNestingKey>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectMeta*>(this, ___internal_method, id, wordCount, type, behaviourCount, nestingRoot, nestingKey, flags);
}
inline void Fusion::Simulation::FreeObject(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"FreeObject", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline int32_t Fusion::Simulation::GetRpcSourceAuthorityMask(::Fusion::NetworkObjectMeta*  meta, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetRpcSourceAuthorityMask", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, meta, player);
}
inline int32_t Fusion::Simulation::GetLocalAuthorityMask(/* [RequiresLocation] */ ::by_ref<::Fusion::NetworkObjectHeader>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetLocalAuthorityMask", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline ::Fusion::RpcTargetStatus Fusion::Simulation::GetRpcTargetStatus(::Fusion::PlayerRef  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetRpcTargetStatus", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcTargetStatus>(this, ___internal_method, target);
}
inline ::Fusion::RpcSendMessageResult Fusion::Simulation::SendMessage(::by_ref<::Fusion::SimulationMessage*>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SendMessage", {}, {::i2c::type_of<::by_ref<::Fusion::SimulationMessage*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcSendMessageResult>(this, ___internal_method, message);
}
inline bool Fusion::Simulation::ForwardMessage(::Fusion::SimulationMessage*  message, ::Fusion::PlayerRef  target, bool  required)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"ForwardMessage", {}, {::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, target, required);
}
inline ::Fusion::NetworkId Fusion::Simulation::GetMessageTargetObjectIdForVerification(::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"GetMessageTargetObjectIdForVerification", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(this, ___internal_method, message);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::Simulation::SendInternalSimulationMessage(::Fusion::SimulationMessageInternalTypes  type, T  buffer, ::System::Nullable_1<::Fusion::PlayerRef>  target)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation*>(),
                    {"SendInternalSimulationMessage", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::SimulationMessageInternalTypes>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, buffer, target);
}
inline bool Fusion::Simulation::VerifyMessageTargetObject(::Fusion::Sockets::NetConnection*  netConnection, ::Fusion::NetworkId  id, ::by_ref<::GlobalNamespace::Simulation_TargetObjectVerificationResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"VerifyMessageTargetObject", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Simulation_TargetObjectVerificationResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, netConnection, id, result);
}
inline void Fusion::Simulation::SendMessageInternal(::Fusion::SimulationMessage*  message, ::Fusion::Sockets::NetConnection*  netConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"SendMessageInternal", {}, {::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, netConnection);
}
inline void Fusion::Simulation::HostMigrationAfterFreeObject(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"HostMigrationAfterFreeObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta);
}
inline void Fusion::Simulation::HostMigrationAfterAllocateObject(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"HostMigrationAfterAllocateObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta);
}
inline void Fusion::Simulation::HostMigrationDispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"HostMigrationDispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Simulation::TryGetSceneInstance(::Fusion::NetworkObjectTypeId  sceneObjectTypeId, ::by_ref<::Fusion::NetworkObject*>  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"TryGetSceneInstance", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneObjectTypeId, instance);
}
inline ::System::Nullable_1<::UnityEngine::Vector3> Fusion::Simulation::_UpdateAreaOfInterest_g__ResolveCellPosition_228_0(::Fusion::NetworkObjectMeta*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"<UpdateAreaOfInterest>g__ResolveCellPosition|228_0", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(this, ___internal_method, m);
}
inline bool Fusion::Simulation::_RecvMessages_g__CanAppendQueue_239_0(::Fusion::SimulationMessageList  list, ::Fusion::SimulationMessageEnvelope*  messageEnvelope, ::by_ref<::Fusion::SimulationMessageEnvelope*>  followingMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"<RecvMessages>g__CanAppendQueue|239_0", {}, {::i2c::type_of<::Fusion::SimulationMessageList>(), ::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<::by_ref<::Fusion::SimulationMessageEnvelope*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, messageEnvelope, followingMessage);
}
inline ::Fusion::RpcSendMessageResult Fusion::Simulation::_SendMessage_g__VerifyResultToSendMessageResult_328_0(::GlobalNamespace::Simulation_TargetObjectVerificationResult  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation*>(),
                        {"<SendMessage>g__VerifyResultToSendMessageResult|328_0", {}, {::i2c::type_of<::GlobalNamespace::Simulation_TargetObjectVerificationResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcSendMessageResult>(nullptr, ___internal_method, status);
}
inline ::Fusion::Simulation* Fusion::Simulation::New_ctor(::Fusion::SimulationArgs  args)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Simulation*>(args));
}
/// @brief Convert operator to "::Fusion::ILogSource"
constexpr  Fusion::Simulation::operator ::Fusion::ILogSource*() noexcept {
return static_cast<::Fusion::ILogSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::ILogSource"
constexpr ::Fusion::ILogSource* Fusion::Simulation::i___Fusion__ILogSource() noexcept {
return static_cast<::Fusion::ILogSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Sockets::INetPeerGroupCallbacks"
constexpr  Fusion::Simulation::operator ::Fusion::Sockets::INetPeerGroupCallbacks*() noexcept {
return static_cast<::Fusion::Sockets::INetPeerGroupCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Sockets::INetPeerGroupCallbacks"
constexpr ::Fusion::Sockets::INetPeerGroupCallbacks* Fusion::Simulation::i___Fusion__Sockets__INetPeerGroupCallbacks() noexcept {
return static_cast<::Fusion::Sockets::INetPeerGroupCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Simulation::Simulation()   {
}
//  Writing Method size for method: ::Fusion::Simulation__get_Connections_d__156._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation__get_Connections_d__156::*)(int32_t)>(&::Fusion::Simulation__get_Connections_d__156::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6001510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_Connections_d__156.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation__get_Connections_d__156::*)()>(&::Fusion::Simulation__get_Connections_d__156::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6001544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_Connections_d__156.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation__get_Connections_d__156::*)()>(&::Fusion::Simulation__get_Connections_d__156::MoveNext)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x600158c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_Connections_d__156.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation__get_Connections_d__156::*)()>(&::Fusion::Simulation__get_Connections_d__156::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x60017b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_Connections_d__156.System_Collections_Generic_IEnumerator_Fusion_SimulationConnection__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationConnection* (::Fusion::Simulation__get_Connections_d__156::*)()>(&::Fusion::Simulation__get_Connections_d__156::System_Collections_Generic_IEnumerator_Fusion_SimulationConnection__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6001800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.SimulationConnection>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_Connections_d__156.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation__get_Connections_d__156::*)()>(&::Fusion::Simulation__get_Connections_d__156::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6001808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_Connections_d__156.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::Simulation__get_Connections_d__156::*)()>(&::Fusion::Simulation__get_Connections_d__156::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6001840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_Connections_d__156.System_Collections_Generic_IEnumerable_Fusion_SimulationConnection__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>* (::Fusion::Simulation__get_Connections_d__156::*)()>(&::Fusion::Simulation__get_Connections_d__156::System_Collections_Generic_IEnumerable_Fusion_SimulationConnection__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6001848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.Collections.Generic.IEnumerable<Fusion.SimulationConnection>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_Connections_d__156.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::Simulation__get_Connections_d__156::*)()>(&::Fusion::Simulation__get_Connections_d__156::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60018ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Simulation__get_Connections_d__156::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Fusion::SimulationConnection*& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Fusion::SimulationConnection* const& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::Simulation__get_Connections_d__156::__cordl_internal_set___2__current(::Fusion::SimulationConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::Simulation__get_Connections_d__156::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Fusion::Simulation*& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::Simulation* const& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::Simulation__get_Connections_d__156::__cordl_internal_set___4__this(::Fusion::Simulation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*> const& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::Simulation__get_Connections_d__156::__cordl_internal_set___s__1(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr ::Fusion::SimulationConnection*& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get__value_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_5__2;
}
constexpr ::Fusion::SimulationConnection* const& Fusion::Simulation__get_Connections_d__156::__cordl_internal_get__value_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_5__2;
}
constexpr void Fusion::Simulation__get_Connections_d__156::__cordl_internal_set__value_5__2(::Fusion::SimulationConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value_5__2 = value;
}
inline void Fusion::Simulation__get_Connections_d__156::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::Simulation__get_Connections_d__156::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Simulation__get_Connections_d__156::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Simulation__get_Connections_d__156::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationConnection* Fusion::Simulation__get_Connections_d__156::System_Collections_Generic_IEnumerator_Fusion_SimulationConnection__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.SimulationConnection>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationConnection*>(this, ___internal_method);
}
inline void Fusion::Simulation__get_Connections_d__156::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::Simulation__get_Connections_d__156::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>* Fusion::Simulation__get_Connections_d__156::System_Collections_Generic_IEnumerable_Fusion_SimulationConnection__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.Collections.Generic.IEnumerable<Fusion.SimulationConnection>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::Simulation__get_Connections_d__156::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_Connections_d__156*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::Simulation__get_Connections_d__156* Fusion::Simulation__get_Connections_d__156::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Simulation__get_Connections_d__156*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>"
constexpr  Fusion::Simulation__get_Connections_d__156::operator ::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>* Fusion::Simulation__get_Connections_d__156::i___System__Collections__Generic__IEnumerable_1___Fusion__SimulationConnection__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::SimulationConnection*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::Simulation__get_Connections_d__156::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::Simulation__get_Connections_d__156::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>"
constexpr  Fusion::Simulation__get_Connections_d__156::operator ::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>* Fusion::Simulation__get_Connections_d__156::i___System__Collections__Generic__IEnumerator_1___Fusion__SimulationConnection__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::SimulationConnection*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::Simulation__get_Connections_d__156::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::Simulation__get_Connections_d__156::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::Simulation__get_Connections_d__156::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::Simulation__get_Connections_d__156::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Simulation__get_Connections_d__156::Simulation__get_Connections_d__156()   {
}
//  Writing Method size for method: ::Fusion::Simulation__get_ActivePlayers_d__138._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation__get_ActivePlayers_d__138::*)(int32_t)>(&::Fusion::Simulation__get_ActivePlayers_d__138::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6001058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_ActivePlayers_d__138.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation__get_ActivePlayers_d__138::*)()>(&::Fusion::Simulation__get_ActivePlayers_d__138::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x600108c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_ActivePlayers_d__138.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation__get_ActivePlayers_d__138::*)()>(&::Fusion::Simulation__get_ActivePlayers_d__138::MoveNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x60010d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_ActivePlayers_d__138.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation__get_ActivePlayers_d__138::*)()>(&::Fusion::Simulation__get_ActivePlayers_d__138::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x600137c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_ActivePlayers_d__138.System_Collections_Generic_IEnumerator_Fusion_PlayerRef__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::Simulation__get_ActivePlayers_d__138::*)()>(&::Fusion::Simulation__get_ActivePlayers_d__138::System_Collections_Generic_IEnumerator_Fusion_PlayerRef__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60013cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.PlayerRef>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_ActivePlayers_d__138.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation__get_ActivePlayers_d__138::*)()>(&::Fusion::Simulation__get_ActivePlayers_d__138::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60013d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_ActivePlayers_d__138.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::Simulation__get_ActivePlayers_d__138::*)()>(&::Fusion::Simulation__get_ActivePlayers_d__138::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x600140c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_ActivePlayers_d__138.System_Collections_Generic_IEnumerable_Fusion_PlayerRef__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* (::Fusion::Simulation__get_ActivePlayers_d__138::*)()>(&::Fusion::Simulation__get_ActivePlayers_d__138::System_Collections_Generic_IEnumerable_Fusion_PlayerRef__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6001468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.Collections.Generic.IEnumerable<Fusion.PlayerRef>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation__get_ActivePlayers_d__138.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::Simulation__get_ActivePlayers_d__138::*)()>(&::Fusion::Simulation__get_ActivePlayers_d__138::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600150c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Fusion::PlayerRef& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Fusion::PlayerRef const& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_set___2__current(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Fusion::Simulation*& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::Simulation* const& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_set___4__this(::Fusion::Simulation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*> const& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_set___s__1(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<int32_t,::Fusion::SimulationConnection*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr ::Fusion::SimulationConnection*& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get__value_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_5__2;
}
constexpr ::Fusion::SimulationConnection* const& Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_get__value_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_5__2;
}
constexpr void Fusion::Simulation__get_ActivePlayers_d__138::__cordl_internal_set__value_5__2(::Fusion::SimulationConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value_5__2 = value;
}
inline void Fusion::Simulation__get_ActivePlayers_d__138::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::Simulation__get_ActivePlayers_d__138::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Simulation__get_ActivePlayers_d__138::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Simulation__get_ActivePlayers_d__138::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::PlayerRef Fusion::Simulation__get_ActivePlayers_d__138::System_Collections_Generic_IEnumerator_Fusion_PlayerRef__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.PlayerRef>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline void Fusion::Simulation__get_ActivePlayers_d__138::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::Simulation__get_ActivePlayers_d__138::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* Fusion::Simulation__get_ActivePlayers_d__138::System_Collections_Generic_IEnumerable_Fusion_PlayerRef__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.Collections.Generic.IEnumerable<Fusion.PlayerRef>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::Simulation__get_ActivePlayers_d__138::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation__get_ActivePlayers_d__138*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::Simulation__get_ActivePlayers_d__138* Fusion::Simulation__get_ActivePlayers_d__138::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Simulation__get_ActivePlayers_d__138*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>"
constexpr  Fusion::Simulation__get_ActivePlayers_d__138::operator ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* Fusion::Simulation__get_ActivePlayers_d__138::i___System__Collections__Generic__IEnumerable_1___Fusion__PlayerRef_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::Simulation__get_ActivePlayers_d__138::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::Simulation__get_ActivePlayers_d__138::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>"
constexpr  Fusion::Simulation__get_ActivePlayers_d__138::operator ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* Fusion::Simulation__get_ActivePlayers_d__138::i___System__Collections__Generic__IEnumerator_1___Fusion__PlayerRef_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::Simulation__get_ActivePlayers_d__138::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::Simulation__get_ActivePlayers_d__138::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::Simulation__get_ActivePlayers_d__138::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::Simulation__get_ActivePlayers_d__138::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Simulation__get_ActivePlayers_d__138::Simulation__get_ActivePlayers_d__138()   {
}
//  Writing Method size for method: ::Fusion::Simulation___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation___c::*)()>(&::Fusion::Simulation___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6000f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation___c._LogAllObjectIds_b__312_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Simulation___c::*)(::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>)>(&::Fusion::Simulation___c::_LogAllObjectIds_b__312_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6000f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation___c*>(),
                        {"<LogAllObjectIds>b__312_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Simulation___c::setStaticF___9(::Fusion::Simulation___c*  value)  {
::cordl_internals::setStaticField<::Fusion::Simulation___c*, "<>9", ::Fusion::Simulation___c*>(std::forward<::Fusion::Simulation___c*>(value));
}
inline ::Fusion::Simulation___c* Fusion::Simulation___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::Simulation___c*, "<>9", ::Fusion::Simulation___c*>();
}
inline void Fusion::Simulation___c::setStaticF___9__312_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>,::StringW>*, "<>9__312_0", ::Fusion::Simulation___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>,::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>,::StringW>* Fusion::Simulation___c::getStaticF___9__312_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>,::StringW>*, "<>9__312_0", ::Fusion::Simulation___c*>();
}
inline void Fusion::Simulation___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Fusion::Simulation___c::_LogAllObjectIds_b__312_0(::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation___c*>(),
                        {"<LogAllObjectIds>b__312_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::Fusion::NetworkId,::Fusion::NetworkObjectMeta*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::Fusion::Simulation___c* Fusion::Simulation___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Simulation___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::Simulation___c::Simulation___c()   {
}
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(::Fusion::Simulation*)>(&::Fusion::Simulation_StateReplicator::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ffb798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.SendPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)()>(&::Fusion::Simulation_StateReplicator::SendPacket)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ff4e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"SendPacket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.RecvPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)()>(&::Fusion::Simulation_StateReplicator::RecvPacket)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ff40d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"RecvPacket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.ReadHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeader (::Fusion::Simulation_StateReplicator::*)(::Fusion::Simulation_RecvContext*, ::Fusion::NetworkId)>(&::Fusion::Simulation_StateReplicator::ReadHeader)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5ffdd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ReadHeader", {}, {::i2c::type_of<::Fusion::Simulation_RecvContext*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.SkipObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(::Fusion::Simulation_RecvContext*, ::ArrayW<::Fusion::NetworkBufferSerializerInfo>, int32_t, bool)>(&::Fusion::Simulation_StateReplicator::SkipObjectData)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5ffde84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"SkipObjectData", {}, {::i2c::type_of<::Fusion::Simulation_RecvContext*>(), ::i2c::type_of<::ArrayW<::Fusion::NetworkBufferSerializerInfo>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.SkipObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(::Fusion::Simulation_RecvContext*, ::Fusion::NetworkId, ::Fusion::NetworkObjectMeta*, bool)>(&::Fusion::Simulation_StateReplicator::SkipObject)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5ffdfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"SkipObject", {}, {::i2c::type_of<::Fusion::Simulation_RecvContext*>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.ForceResendChangedWords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(::Fusion::Simulation_RecvContext*, ::Fusion::NetworkId)>(&::Fusion::Simulation_StateReplicator::ForceResendChangedWords)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ffe18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ForceResendChangedWords", {}, {::i2c::type_of<::Fusion::Simulation_RecvContext*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.ReadObjectDataIntoPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation_StateReplicator::*)(::Fusion::NetworkObjectMeta*, ::System::Span_1<int32_t>, int32_t)>(&::Fusion::Simulation_StateReplicator::ReadObjectDataIntoPtr)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x5ffe1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ReadObjectDataIntoPtr", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::System::Span_1<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.ReadObjectUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)()>(&::Fusion::Simulation_StateReplicator::ReadObjectUpdates)> {
  constexpr static std::size_t size = 0x1914;
  constexpr static std::size_t addrs = 0x5ffc40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ReadObjectUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.OnObjectSpawnedLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(::Fusion::NetworkId)>(&::Fusion::Simulation_StateReplicator::OnObjectSpawnedLocal)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5ffeb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"OnObjectSpawnedLocal", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.WriteObjectDestroys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)()>(&::Fusion::Simulation_StateReplicator::WriteObjectDestroys)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5ffb8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteObjectDestroys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.ReadObjectDestroys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)()>(&::Fusion::Simulation_StateReplicator::ReadObjectDestroys)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5ffc2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ReadObjectDestroys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.WriteUsingAllObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)()>(&::Fusion::Simulation_StateReplicator::WriteUsingAllObjects)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5ffc0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteUsingAllObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.WriteLevelUsingScheduling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(int32_t, ::by_ref<::Fusion::NetworkObjectConnectionData*>)>(&::Fusion::Simulation_StateReplicator::WriteLevelUsingScheduling)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5fff5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteLevelUsingScheduling", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectConnectionData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.WriteUsingScheduling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)()>(&::Fusion::Simulation_StateReplicator::WriteUsingScheduling)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5ffbf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteUsingScheduling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.HasObjectInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation_StateReplicator::*)(::Fusion::PlayerRef, ::Fusion::NetworkId)>(&::Fusion::Simulation_StateReplicator::HasObjectInterest)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5fff840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"HasObjectInterest", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.UpdateChangedStructSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)()>(&::Fusion::Simulation_StateReplicator::UpdateChangedStructSet)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5fff9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"UpdateChangedStructSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.WriteStructs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)()>(&::Fusion::Simulation_StateReplicator::WriteStructs)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x5ffba38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteStructs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.ScanStructForChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation_StateReplicator::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::Simulation_StateReplicator::ScanStructForChanges)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5fffbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ScanStructForChanges", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.ScanAndWriteObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StateReplicator_Simulation_WriteResult (::Fusion::Simulation_StateReplicator::*)(::Fusion::NetworkObjectMeta*, ::Fusion::NetworkObjectConnectionData*)>(&::Fusion::Simulation_StateReplicator::ScanAndWriteObject)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x5fff030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ScanAndWriteObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.WriteWord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetBitBuffer*, ::System::ReadOnlySpan_1<int32_t>, int32_t, int32_t)>(&::Fusion::Simulation_StateReplicator::WriteWord)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x60006f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteWord", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.CheckNothingToSendTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectMeta*, ::Fusion::NetworkObjectConnectionData*)>(&::Fusion::Simulation_StateReplicator::CheckNothingToSendTicks)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6000934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"CheckNothingToSendTicks", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.WriteObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StateReplicator_Simulation_WriteResult (::Fusion::Simulation_StateReplicator::*)(::Fusion::NetworkObjectMeta*, ::Fusion::NetworkObjectConnectionData*)>(&::Fusion::Simulation_StateReplicator::WriteObject)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x5fffd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.OnPacketLost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(::Fusion::Sockets::NetConnection*, ::Fusion::SimulationPacketEnvelope*)>(&::Fusion::Simulation_StateReplicator::OnPacketLost)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6000994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"OnPacketLost", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::SimulationPacketEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.OnPacketDelivered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(::Fusion::Sockets::NetConnection*, ::Fusion::SimulationPacketEnvelope*)>(&::Fusion::Simulation_StateReplicator::OnPacketDelivered)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6000c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"OnPacketDelivered", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::SimulationPacketEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.AddDebugWord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(int32_t, int32_t)>(&::Fusion::Simulation_StateReplicator::AddDebugWord)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6000f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"AddDebugWord", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.ClearDebugWords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)()>(&::Fusion::Simulation_StateReplicator::ClearDebugWords)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6000f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ClearDebugWords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.DumpDebugWordsReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(::Fusion::NetworkObjectMeta*, bool, bool)>(&::Fusion::Simulation_StateReplicator::DumpDebugWordsReceive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6000f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"DumpDebugWordsReceive", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_StateReplicator.DumpDebugWordsSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_StateReplicator::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::Simulation_StateReplicator::DumpDebugWordsSend)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6000f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"DumpDebugWordsSend", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Simulation*& Fusion::Simulation_StateReplicator::__cordl_internal_get__simulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr ::Fusion::Simulation* const& Fusion::Simulation_StateReplicator::__cordl_internal_get__simulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr void Fusion::Simulation_StateReplicator::__cordl_internal_set__simulation(::Fusion::Simulation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulation = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*& Fusion::Simulation_StateReplicator::__cordl_internal_get__aoiQuery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiQuery;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>* const& Fusion::Simulation_StateReplicator::__cordl_internal_get__aoiQuery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiQuery;
}
constexpr void Fusion::Simulation_StateReplicator::__cordl_internal_set__aoiQuery(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectMeta_List>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aoiQuery = value;
}
constexpr bool& Fusion::Simulation_StateReplicator::__cordl_internal_get__notUsingAreaOfInterest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notUsingAreaOfInterest;
}
constexpr bool const& Fusion::Simulation_StateReplicator::__cordl_internal_get__notUsingAreaOfInterest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notUsingAreaOfInterest;
}
constexpr void Fusion::Simulation_StateReplicator::__cordl_internal_set__notUsingAreaOfInterest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notUsingAreaOfInterest = value;
}
constexpr ::GlobalNamespace::SimulationConfig_DataConsistency& Fusion::Simulation_StateReplicator::__cordl_internal_get__dataConsistency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataConsistency;
}
constexpr ::GlobalNamespace::SimulationConfig_DataConsistency const& Fusion::Simulation_StateReplicator::__cordl_internal_get__dataConsistency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataConsistency;
}
constexpr void Fusion::Simulation_StateReplicator::__cordl_internal_set__dataConsistency(::GlobalNamespace::SimulationConfig_DataConsistency  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataConsistency = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Fusion::Simulation_StateReplicator::__cordl_internal_get__changedWords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changedWords;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Fusion::Simulation_StateReplicator::__cordl_internal_get__changedWords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changedWords;
}
constexpr void Fusion::Simulation_StateReplicator::__cordl_internal_set__changedWords(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____changedWords = value;
}
constexpr bool& Fusion::Simulation_StateReplicator::__cordl_internal_get__loggedWordCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loggedWordCheck;
}
constexpr bool const& Fusion::Simulation_StateReplicator::__cordl_internal_get__loggedWordCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loggedWordCheck;
}
constexpr void Fusion::Simulation_StateReplicator::__cordl_internal_set__loggedWordCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loggedWordCheck = value;
}
constexpr bool& Fusion::Simulation_StateReplicator::__cordl_internal_get__logged0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logged0;
}
constexpr bool const& Fusion::Simulation_StateReplicator::__cordl_internal_get__logged0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logged0;
}
constexpr void Fusion::Simulation_StateReplicator::__cordl_internal_set__logged0(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logged0 = value;
}
constexpr ::Fusion::NetworkObjectMeta*& Fusion::Simulation_StateReplicator::__cordl_internal_get__runtimeConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeConfig;
}
constexpr ::Fusion::NetworkObjectMeta* const& Fusion::Simulation_StateReplicator::__cordl_internal_get__runtimeConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeConfig;
}
constexpr void Fusion::Simulation_StateReplicator::__cordl_internal_set__runtimeConfig(::Fusion::NetworkObjectMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runtimeConfig = value;
}
constexpr ::Fusion::NetworkObjectMeta*& Fusion::Simulation_StateReplicator::__cordl_internal_get__sceneInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfo;
}
constexpr ::Fusion::NetworkObjectMeta* const& Fusion::Simulation_StateReplicator::__cordl_internal_get__sceneInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfo;
}
constexpr void Fusion::Simulation_StateReplicator::__cordl_internal_set__sceneInfo(::Fusion::NetworkObjectMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneInfo = value;
}
constexpr ::Fusion::NetworkObjectMeta*& Fusion::Simulation_StateReplicator::__cordl_internal_get__physicsInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physicsInfo;
}
constexpr ::Fusion::NetworkObjectMeta* const& Fusion::Simulation_StateReplicator::__cordl_internal_get__physicsInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physicsInfo;
}
constexpr void Fusion::Simulation_StateReplicator::__cordl_internal_set__physicsInfo(::Fusion::NetworkObjectMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____physicsInfo = value;
}
inline void Fusion::Simulation_StateReplicator::_ctor(::Fusion::Simulation*  simulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation);
}
inline void Fusion::Simulation_StateReplicator::SendPacket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"SendPacket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_StateReplicator::RecvPacket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"RecvPacket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeader Fusion::Simulation_StateReplicator::ReadHeader(::Fusion::Simulation_RecvContext*  rc, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ReadHeader", {}, {::i2c::type_of<::Fusion::Simulation_RecvContext*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeader>(this, ___internal_method, rc, id);
}
inline void Fusion::Simulation_StateReplicator::SkipObjectData(::Fusion::Simulation_RecvContext*  rc, ::ArrayW<::Fusion::NetworkBufferSerializerInfo>  serializers, int32_t  word, bool  clearChangedWords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"SkipObjectData", {}, {::i2c::type_of<::Fusion::Simulation_RecvContext*>(), ::i2c::type_of<::ArrayW<::Fusion::NetworkBufferSerializerInfo>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rc, serializers, word, clearChangedWords);
}
inline void Fusion::Simulation_StateReplicator::SkipObject(::Fusion::Simulation_RecvContext*  rc, ::Fusion::NetworkId  id, ::Fusion::NetworkObjectMeta*  meta, bool  skipHeader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"SkipObject", {}, {::i2c::type_of<::Fusion::Simulation_RecvContext*>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rc, id, meta, skipHeader);
}
inline void Fusion::Simulation_StateReplicator::ForceResendChangedWords(::Fusion::Simulation_RecvContext*  rc, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ForceResendChangedWords", {}, {::i2c::type_of<::Fusion::Simulation_RecvContext*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rc, id);
}
inline bool Fusion::Simulation_StateReplicator::ReadObjectDataIntoPtr(::Fusion::NetworkObjectMeta*  meta, ::System::Span_1<int32_t>  p, int32_t  word)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ReadObjectDataIntoPtr", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::System::Span_1<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, meta, p, word);
}
inline void Fusion::Simulation_StateReplicator::ReadObjectUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ReadObjectUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_StateReplicator::OnObjectSpawnedLocal(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"OnObjectSpawnedLocal", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Fusion::Simulation_StateReplicator::WriteObjectDestroys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteObjectDestroys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_StateReplicator::ReadObjectDestroys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ReadObjectDestroys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_StateReplicator::WriteUsingAllObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteUsingAllObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_StateReplicator::WriteLevelUsingScheduling(int32_t  level, ::by_ref<::Fusion::NetworkObjectConnectionData*>  sent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteLevelUsingScheduling", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectConnectionData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, sent);
}
inline void Fusion::Simulation_StateReplicator::WriteUsingScheduling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteUsingScheduling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Simulation_StateReplicator::HasObjectInterest(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"HasObjectInterest", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, id);
}
inline void Fusion::Simulation_StateReplicator::UpdateChangedStructSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"UpdateChangedStructSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_StateReplicator::WriteStructs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteStructs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Simulation_StateReplicator::ScanStructForChanges(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ScanStructForChanges", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, meta);
}
inline ::GlobalNamespace::StateReplicator_Simulation_WriteResult Fusion::Simulation_StateReplicator::ScanAndWriteObject(::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkObjectConnectionData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ScanAndWriteObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateReplicator_Simulation_WriteResult>(this, ___internal_method, meta, data);
}
inline void Fusion::Simulation_StateReplicator::WriteWord(::Fusion::Sockets::NetBitBuffer*  buffer, ::System::ReadOnlySpan_1<int32_t>  ptr, int32_t  word, int32_t  previous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteWord", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, ptr, word, previous);
}
inline bool Fusion::Simulation_StateReplicator::CheckNothingToSendTicks(::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkObjectConnectionData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"CheckNothingToSendTicks", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, meta, data);
}
inline ::GlobalNamespace::StateReplicator_Simulation_WriteResult Fusion::Simulation_StateReplicator::WriteObject(::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkObjectConnectionData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"WriteObject", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateReplicator_Simulation_WriteResult>(this, ___internal_method, meta, data);
}
inline void Fusion::Simulation_StateReplicator::OnPacketLost(::Fusion::Sockets::NetConnection*  c, ::Fusion::SimulationPacketEnvelope*  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"OnPacketLost", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::SimulationPacketEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, envelope);
}
inline void Fusion::Simulation_StateReplicator::OnPacketDelivered(::Fusion::Sockets::NetConnection*  c, ::Fusion::SimulationPacketEnvelope*  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"OnPacketDelivered", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::SimulationPacketEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, envelope);
}
inline void Fusion::Simulation_StateReplicator::AddDebugWord(int32_t  word, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"AddDebugWord", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, word, value);
}
inline void Fusion::Simulation_StateReplicator::ClearDebugWords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"ClearDebugWords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_StateReplicator::DumpDebugWordsReceive(::Fusion::NetworkObjectMeta*  meta, bool  unconfirmed, bool  created)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"DumpDebugWordsReceive", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta, unconfirmed, created);
}
inline void Fusion::Simulation_StateReplicator::DumpDebugWordsSend(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_StateReplicator*>(),
                        {"DumpDebugWordsSend", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta);
}
inline ::Fusion::Simulation_StateReplicator* Fusion::Simulation_StateReplicator::New_ctor(::Fusion::Simulation*  simulation)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Simulation_StateReplicator*>(simulation));
}
// Ctor Parameters []
constexpr ::Fusion::Simulation_StateReplicator::Simulation_StateReplicator()   {
}
//  Writing Method size for method: ::Fusion::Simulation_SendContext.get_IsWriting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation_SendContext::*)()>(&::Fusion::Simulation_SendContext::get_IsWriting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ff6f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_SendContext*>(),
                        {"get_IsWriting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_SendContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_SendContext::*)(::Fusion::Simulation*)>(&::Fusion::Simulation_SendContext::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ff6f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_SendContext*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_SendContext.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation_SendContext::*)(::Fusion::SimulationConnection*, ::Fusion::Tick)>(&::Fusion::Simulation_SendContext::Init)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5ff6fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_SendContext*>(),
                        {"Init", {}, {::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_SendContext.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_SendContext::*)()>(&::Fusion::Simulation_SendContext::Send)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ff7200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_SendContext*>(),
                        {"Send", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_SendContext.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_SendContext::*)()>(&::Fusion::Simulation_SendContext::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ff71ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_SendContext*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Simulation*& Fusion::Simulation_SendContext::__cordl_internal_get__simulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr ::Fusion::Simulation* const& Fusion::Simulation_SendContext::__cordl_internal_get__simulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr void Fusion::Simulation_SendContext::__cordl_internal_set__simulation(::Fusion::Simulation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulation = value;
}
constexpr ::GlobalNamespace::Simulation_SimulationPacketHeader& Fusion::Simulation_SendContext::__cordl_internal_get_Header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Header;
}
constexpr ::GlobalNamespace::Simulation_SimulationPacketHeader const& Fusion::Simulation_SendContext::__cordl_internal_get_Header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Header;
}
constexpr void Fusion::Simulation_SendContext::__cordl_internal_set_Header(::GlobalNamespace::Simulation_SimulationPacketHeader  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Header = value;
}
constexpr ::Fusion::Sockets::NetBitBuffer*& Fusion::Simulation_SendContext::__cordl_internal_get_Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Buffer;
}
constexpr ::Fusion::Sockets::NetBitBuffer* const& Fusion::Simulation_SendContext::__cordl_internal_get_Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Buffer;
}
constexpr void Fusion::Simulation_SendContext::__cordl_internal_set_Buffer(::Fusion::Sockets::NetBitBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Buffer = value;
}
constexpr ::Fusion::SimulationPacketEnvelope*& Fusion::Simulation_SendContext::__cordl_internal_get_Envelope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Envelope;
}
constexpr ::Fusion::SimulationPacketEnvelope* const& Fusion::Simulation_SendContext::__cordl_internal_get_Envelope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Envelope;
}
constexpr void Fusion::Simulation_SendContext::__cordl_internal_set_Envelope(::Fusion::SimulationPacketEnvelope*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Envelope = value;
}
constexpr ::Fusion::Tick& Fusion::Simulation_SendContext::__cordl_internal_get_Tick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr ::Fusion::Tick const& Fusion::Simulation_SendContext::__cordl_internal_get_Tick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr void Fusion::Simulation_SendContext::__cordl_internal_set_Tick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tick = value;
}
constexpr ::Fusion::PlayerRef& Fusion::Simulation_SendContext::__cordl_internal_get_Player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr ::Fusion::PlayerRef const& Fusion::Simulation_SendContext::__cordl_internal_get_Player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr void Fusion::Simulation_SendContext::__cordl_internal_set_Player(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Player = value;
}
constexpr ::Fusion::SimulationConnection*& Fusion::Simulation_SendContext::__cordl_internal_get_Connection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Connection;
}
constexpr ::Fusion::SimulationConnection* const& Fusion::Simulation_SendContext::__cordl_internal_get_Connection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Connection;
}
constexpr void Fusion::Simulation_SendContext::__cordl_internal_set_Connection(::Fusion::SimulationConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Connection = value;
}
constexpr int32_t& Fusion::Simulation_SendContext::__cordl_internal_get_ObjPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjPrev;
}
constexpr int32_t const& Fusion::Simulation_SendContext::__cordl_internal_get_ObjPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjPrev;
}
constexpr void Fusion::Simulation_SendContext::__cordl_internal_set_ObjPrev(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObjPrev = value;
}
inline bool Fusion::Simulation_SendContext::get_IsWriting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_SendContext*>(),
                        {"get_IsWriting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Simulation_SendContext::_ctor(::Fusion::Simulation*  simulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_SendContext*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation);
}
inline bool Fusion::Simulation_SendContext::Init(::Fusion::SimulationConnection*  connection, ::Fusion::Tick  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_SendContext*>(),
                        {"Init", {}, {::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, connection, tick);
}
inline void Fusion::Simulation_SendContext::Send()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_SendContext*>(),
                        {"Send", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_SendContext::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_SendContext*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Simulation_SendContext* Fusion::Simulation_SendContext::New_ctor(::Fusion::Simulation*  simulation)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Simulation_SendContext*>(simulation));
}
// Ctor Parameters []
constexpr ::Fusion::Simulation_SendContext::Simulation_SendContext()   {
}
//  Writing Method size for method: ::Fusion::Simulation_RecvContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_RecvContext::*)(::Fusion::Simulation*)>(&::Fusion::Simulation_RecvContext::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ff6e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_RecvContext*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_RecvContext.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_RecvContext::*)(::Fusion::SimulationConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Simulation_RecvContext::Init)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ff6eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_RecvContext*>(),
                        {"Init", {}, {::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_RecvContext.Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_RecvContext::*)()>(&::Fusion::Simulation_RecvContext::Done)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ff6f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_RecvContext*>(),
                        {"Done", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Simulation*& Fusion::Simulation_RecvContext::__cordl_internal_get__simulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr ::Fusion::Simulation* const& Fusion::Simulation_RecvContext::__cordl_internal_get__simulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr void Fusion::Simulation_RecvContext::__cordl_internal_set__simulation(::Fusion::Simulation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulation = value;
}
constexpr ::Fusion::PlayerRef& Fusion::Simulation_RecvContext::__cordl_internal_get_Player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr ::Fusion::PlayerRef const& Fusion::Simulation_RecvContext::__cordl_internal_get_Player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr void Fusion::Simulation_RecvContext::__cordl_internal_set_Player(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Player = value;
}
constexpr ::GlobalNamespace::Simulation_SimulationPacketHeader& Fusion::Simulation_RecvContext::__cordl_internal_get_Header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Header;
}
constexpr ::GlobalNamespace::Simulation_SimulationPacketHeader const& Fusion::Simulation_RecvContext::__cordl_internal_get_Header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Header;
}
constexpr void Fusion::Simulation_RecvContext::__cordl_internal_set_Header(::GlobalNamespace::Simulation_SimulationPacketHeader  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Header = value;
}
constexpr ::Fusion::Sockets::NetBitBuffer*& Fusion::Simulation_RecvContext::__cordl_internal_get_Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Buffer;
}
constexpr ::Fusion::Sockets::NetBitBuffer* const& Fusion::Simulation_RecvContext::__cordl_internal_get_Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Buffer;
}
constexpr void Fusion::Simulation_RecvContext::__cordl_internal_set_Buffer(::Fusion::Sockets::NetBitBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Buffer = value;
}
constexpr ::Fusion::SimulationConnection*& Fusion::Simulation_RecvContext::__cordl_internal_get_Connection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Connection;
}
constexpr ::Fusion::SimulationConnection* const& Fusion::Simulation_RecvContext::__cordl_internal_get_Connection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Connection;
}
constexpr void Fusion::Simulation_RecvContext::__cordl_internal_set_Connection(::Fusion::SimulationConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Connection = value;
}
inline void Fusion::Simulation_RecvContext::_ctor(::Fusion::Simulation*  simulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_RecvContext*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation);
}
inline void Fusion::Simulation_RecvContext::Init(::Fusion::SimulationConnection*  connection, ::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_RecvContext*>(),
                        {"Init", {}, {::i2c::type_of<::Fusion::SimulationConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, buffer);
}
inline void Fusion::Simulation_RecvContext::Done()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_RecvContext*>(),
                        {"Done", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Simulation_RecvContext* Fusion::Simulation_RecvContext::New_ctor(::Fusion::Simulation*  simulation)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Simulation_RecvContext*>(simulation));
}
// Ctor Parameters []
constexpr ::Fusion::Simulation_RecvContext::Simulation_RecvContext()   {
}
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::OnTick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnServerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::OnServerStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnClientStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::OnClientStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationMessageResult (::Fusion::Simulation_ICallbacks::*)(::Fusion::SimulationMessage*)>(&::Fusion::Simulation_ICallbacks::OnMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnAfterClientSidePredictionReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::OnAfterClientSidePredictionReset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnBeforeClientSidePredictionReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::OnBeforeClientSidePredictionReset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnAfterTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::OnAfterTick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnBeforeTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::OnBeforeTick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnAfterAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(bool, int32_t)>(&::Fusion::Simulation_ICallbacks::OnAfterAllTicks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnBeforeAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(bool, int32_t)>(&::Fusion::Simulation_ICallbacks::OnBeforeAllTicks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnAfterSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::OnAfterSimulation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnBeforeSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(int32_t)>(&::Fusion::Simulation_ICallbacks::OnBeforeSimulation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnBeforeCopyPreviousState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::OnBeforeCopyPreviousState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::OnConnectedToServer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::Sockets::NetDisconnectReason)>(&::Fusion::Simulation_ICallbacks::OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnConnectionRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::OnConnectionRequestReply (::Fusion::Simulation_ICallbacks::*)(::Fusion::Sockets::NetAddress, ::ArrayW<uint8_t>)>(&::Fusion::Simulation_ICallbacks::OnConnectionRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::Fusion::Simulation_ICallbacks::OnConnectionFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnReliableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::PlayerRef, ::Fusion::Sockets::ReliableId, bool, ::ArrayW<uint8_t>)>(&::Fusion::Simulation_ICallbacks::OnReliableData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.PlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation_ICallbacks::PlayerJoined)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.PlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::PlayerRef)>(&::Fusion::Simulation_ICallbacks::PlayerLeft)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnInternalConnectionAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(int32_t, int32_t, ::by_ref<bool>, ::by_ref<::Fusion::Sockets::NetAddress>)>(&::Fusion::Simulation_ICallbacks::OnInternalConnectionAttempt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.get_IsSharedModeMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::get_IsSharedModeMasterClient)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.get_CanReceivePlayerJoinLeaveCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::get_CanReceivePlayerJoinLeaveCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.ObjectStateAuthorityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::NetworkId, bool)>(&::Fusion::Simulation_ICallbacks::ObjectStateAuthorityChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.ObjectInputAuthorityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::NetworkId, bool)>(&::Fusion::Simulation_ICallbacks::ObjectInputAuthorityChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.ObjectIsSimulatedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::NetworkId, bool)>(&::Fusion::Simulation_ICallbacks::ObjectIsSimulatedChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.ObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::PlayerRef, ::Fusion::NetworkId)>(&::Fusion::Simulation_ICallbacks::ObjectEnterAOI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.ObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::PlayerRef, ::Fusion::NetworkId)>(&::Fusion::Simulation_ICallbacks::ObjectExitAOI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.ObjectChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::PlayerRef, ::Fusion::NetworkObjectMeta*, ::GlobalNamespace::Simulation_ObjectChangeType)>(&::Fusion::Simulation_ICallbacks::ObjectChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.get_LocalPlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::get_LocalPlayerRef)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.RemoteObjectCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::Simulation_ICallbacks::RemoteObjectCreated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.RemoteObjectDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation_ICallbacks::*)(::Fusion::NetworkId)>(&::Fusion::Simulation_ICallbacks::RemoteObjectDestroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.UpdateRemotePrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)()>(&::Fusion::Simulation_ICallbacks::UpdateRemotePrefabs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::SimulationInput*)>(&::Fusion::Simulation_ICallbacks::OnInput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_ICallbacks.OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_ICallbacks::*)(::Fusion::SimulationInput*)>(&::Fusion::Simulation_ICallbacks::OnInputMissing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Simulation_ICallbacks*>(),
                    {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 34}
                ));
    return ___internal_method;
  }
};
inline void Fusion::Simulation_ICallbacks::OnTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::OnServerStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::OnClientStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationMessageResult Fusion::Simulation_ICallbacks::OnMessage(::Fusion::SimulationMessage*  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationMessageResult>(this, ___internal_method, message);
}
inline void Fusion::Simulation_ICallbacks::OnAfterClientSidePredictionReset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::OnBeforeClientSidePredictionReset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::OnAfterTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::OnBeforeTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::OnAfterAllTicks(bool  resimulation, int32_t  tickCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, tickCount);
}
inline void Fusion::Simulation_ICallbacks::OnBeforeAllTicks(bool  resimulation, int32_t  tickCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, tickCount);
}
inline void Fusion::Simulation_ICallbacks::OnAfterSimulation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::OnBeforeSimulation(int32_t  forwardTickCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forwardTickCount);
}
inline void Fusion::Simulation_ICallbacks::OnBeforeCopyPreviousState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::OnConnectedToServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::OnDisconnectedFromServer(::Fusion::Sockets::NetDisconnectReason  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline ::Fusion::Sockets::OnConnectionRequestReply Fusion::Simulation_ICallbacks::OnConnectionRequest(::Fusion::Sockets::NetAddress  remoteAddress, ::ArrayW<uint8_t>  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::OnConnectionRequestReply>(this, ___internal_method, remoteAddress, token);
}
inline void Fusion::Simulation_ICallbacks::OnConnectionFailed(::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteAddress, reason);
}
inline void Fusion::Simulation_ICallbacks::OnReliableData(::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableId  id, bool  local, ::ArrayW<uint8_t>  dataArray)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, id, local, dataArray);
}
inline void Fusion::Simulation_ICallbacks::PlayerJoined(::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Fusion::Simulation_ICallbacks::PlayerLeft(::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Fusion::Simulation_ICallbacks::OnInternalConnectionAttempt(int32_t  attempt, int32_t  totalConnectionAttempts, ::by_ref<bool>  shouldChange, ::by_ref<::Fusion::Sockets::NetAddress>  newAddress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attempt, totalConnectionAttempts, shouldChange, newAddress);
}
inline bool Fusion::Simulation_ICallbacks::get_IsSharedModeMasterClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Simulation_ICallbacks::get_CanReceivePlayerJoinLeaveCallbacks()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::ObjectStateAuthorityChanged(::Fusion::NetworkId  id, bool  gained)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, gained);
}
inline void Fusion::Simulation_ICallbacks::ObjectInputAuthorityChanged(::Fusion::NetworkId  id, bool  gained)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, gained);
}
inline void Fusion::Simulation_ICallbacks::ObjectIsSimulatedChanged(::Fusion::NetworkId  id, bool  simulated)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, simulated);
}
inline void Fusion::Simulation_ICallbacks::ObjectEnterAOI(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, id);
}
inline void Fusion::Simulation_ICallbacks::ObjectExitAOI(::Fusion::PlayerRef  player, ::Fusion::NetworkId  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, id);
}
inline void Fusion::Simulation_ICallbacks::ObjectChanged(::Fusion::PlayerRef  player, ::Fusion::NetworkObjectMeta*  obj, ::GlobalNamespace::Simulation_ObjectChangeType  changeType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, obj, changeType);
}
inline ::Fusion::PlayerRef Fusion::Simulation_ICallbacks::get_LocalPlayerRef()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::RemoteObjectCreated(::Fusion::NetworkObjectMeta*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool Fusion::Simulation_ICallbacks::RemoteObjectDestroyed(::Fusion::NetworkId  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void Fusion::Simulation_ICallbacks::UpdateRemotePrefabs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Simulation_ICallbacks::OnInput(::Fusion::SimulationInput*  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Fusion::Simulation_ICallbacks::OnInputMissing(::Fusion::SimulationInput*  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Simulation_ICallbacks*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
//  Writing Method size for method: ::Fusion::Simulation_History.get_Latest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::History_Simulation_Entry* (::Fusion::Simulation_History::*)()>(&::Fusion::Simulation_History::get_Latest)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff6330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_History*>(),
                        {"get_Latest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_History.get_Oldest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::History_Simulation_Entry* (::Fusion::Simulation_History::*)()>(&::Fusion::Simulation_History::get_Oldest)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff6348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_History*>(),
                        {"get_Oldest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_History._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_History::*)(int32_t)>(&::Fusion::Simulation_History::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ff6360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_History*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_History.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::History_Simulation_Entry* (::Fusion::Simulation_History::*)(::Fusion::Tick, double_t)>(&::Fusion::Simulation_History::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ff6438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_History*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::SimulationHistoryEntryList*& Fusion::Simulation_History::__cordl_internal_get__entryList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryList;
}
constexpr ::Fusion::SimulationHistoryEntryList* const& Fusion::Simulation_History::__cordl_internal_get__entryList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryList;
}
constexpr void Fusion::Simulation_History::__cordl_internal_set__entryList(::Fusion::SimulationHistoryEntryList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entryList = value;
}
inline ::Fusion::History_Simulation_Entry* Fusion::Simulation_History::get_Latest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_History*>(),
                        {"get_Latest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::History_Simulation_Entry*>(this, ___internal_method);
}
inline ::Fusion::History_Simulation_Entry* Fusion::Simulation_History::get_Oldest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_History*>(),
                        {"get_Oldest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::History_Simulation_Entry*>(this, ___internal_method);
}
inline void Fusion::Simulation_History::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_History*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::Fusion::History_Simulation_Entry* Fusion::Simulation_History::Add(::Fusion::Tick  tick, double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_History*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::History_Simulation_Entry*>(this, ___internal_method, tick, time);
}
inline ::Fusion::Simulation_History* Fusion::Simulation_History::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Simulation_History*>(capacity));
}
// Ctor Parameters []
constexpr ::Fusion::Simulation_History::Simulation_History()   {
}
//  Writing Method size for method: ::Fusion::History_Simulation_Entry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::History_Simulation_Entry::*)()>(&::Fusion::History_Simulation_Entry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff6430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::History_Simulation_Entry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::History_Simulation_Entry*& Fusion::History_Simulation_Entry::__cordl_internal_get_Prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr ::Fusion::History_Simulation_Entry* const& Fusion::History_Simulation_Entry::__cordl_internal_get_Prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr void Fusion::History_Simulation_Entry::__cordl_internal_set_Prev(::Fusion::History_Simulation_Entry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prev = value;
}
constexpr ::Fusion::History_Simulation_Entry*& Fusion::History_Simulation_Entry::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Fusion::History_Simulation_Entry* const& Fusion::History_Simulation_Entry::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Fusion::History_Simulation_Entry::__cordl_internal_set_Next(::Fusion::History_Simulation_Entry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
constexpr ::Fusion::Tick& Fusion::History_Simulation_Entry::__cordl_internal_get_Tick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr ::Fusion::Tick const& Fusion::History_Simulation_Entry::__cordl_internal_get_Tick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr void Fusion::History_Simulation_Entry::__cordl_internal_set_Tick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tick = value;
}
constexpr double_t& Fusion::History_Simulation_Entry::__cordl_internal_get_Time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Time;
}
constexpr double_t const& Fusion::History_Simulation_Entry::__cordl_internal_get_Time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Time;
}
constexpr void Fusion::History_Simulation_Entry::__cordl_internal_set_Time(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Time = value;
}
inline void Fusion::History_Simulation_Entry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::History_Simulation_Entry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::History_Simulation_Entry* Fusion::History_Simulation_Entry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::History_Simulation_Entry*>());
}
// Ctor Parameters []
constexpr ::Fusion::History_Simulation_Entry::History_Simulation_Entry()   {
}
//  Writing Method size for method: ::Fusion::Client_Simulation__get_ActivePlayers_d__24._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Client_Simulation__get_ActivePlayers_d__24::*)(int32_t)>(&::Fusion::Client_Simulation__get_ActivePlayers_d__24::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ff38c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Client_Simulation__get_ActivePlayers_d__24.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Client_Simulation__get_ActivePlayers_d__24::*)()>(&::Fusion::Client_Simulation__get_ActivePlayers_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ff5fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Client_Simulation__get_ActivePlayers_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Client_Simulation__get_ActivePlayers_d__24::*)()>(&::Fusion::Client_Simulation__get_ActivePlayers_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5ff6004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Client_Simulation__get_ActivePlayers_d__24.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Client_Simulation__get_ActivePlayers_d__24::*)()>(&::Fusion::Client_Simulation__get_ActivePlayers_d__24::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ff619c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Client_Simulation__get_ActivePlayers_d__24.System_Collections_Generic_IEnumerator_Fusion_PlayerRef__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::Client_Simulation__get_ActivePlayers_d__24::*)()>(&::Fusion::Client_Simulation__get_ActivePlayers_d__24::System_Collections_Generic_IEnumerator_Fusion_PlayerRef__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff61ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.PlayerRef>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Client_Simulation__get_ActivePlayers_d__24.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Client_Simulation__get_ActivePlayers_d__24::*)()>(&::Fusion::Client_Simulation__get_ActivePlayers_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ff61f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Client_Simulation__get_ActivePlayers_d__24.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::Client_Simulation__get_ActivePlayers_d__24::*)()>(&::Fusion::Client_Simulation__get_ActivePlayers_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ff622c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Client_Simulation__get_ActivePlayers_d__24.System_Collections_Generic_IEnumerable_Fusion_PlayerRef__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* (::Fusion::Client_Simulation__get_ActivePlayers_d__24::*)()>(&::Fusion::Client_Simulation__get_ActivePlayers_d__24::System_Collections_Generic_IEnumerable_Fusion_PlayerRef__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ff6288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.Collections.Generic.IEnumerable<Fusion.PlayerRef>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Client_Simulation__get_ActivePlayers_d__24.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::Client_Simulation__get_ActivePlayers_d__24::*)()>(&::Fusion::Client_Simulation__get_ActivePlayers_d__24::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ff632c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Fusion::PlayerRef& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Fusion::PlayerRef const& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_set___2__current(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::GlobalNamespace::Simulation_Client*& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::GlobalNamespace::Simulation_Client* const& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_set___4__this(::GlobalNamespace::Simulation_Client*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::HashSet_1_Enumerator<::Fusion::PlayerRef>& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::GlobalNamespace::HashSet_1_Enumerator<::Fusion::PlayerRef> const& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_set___s__1(::GlobalNamespace::HashSet_1_Enumerator<::Fusion::PlayerRef>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr ::Fusion::PlayerRef& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get__player_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player_5__2;
}
constexpr ::Fusion::PlayerRef const& Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_get__player_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player_5__2;
}
constexpr void Fusion::Client_Simulation__get_ActivePlayers_d__24::__cordl_internal_set__player_5__2(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player_5__2 = value;
}
inline void Fusion::Client_Simulation__get_ActivePlayers_d__24::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::Client_Simulation__get_ActivePlayers_d__24::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Client_Simulation__get_ActivePlayers_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Client_Simulation__get_ActivePlayers_d__24::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::PlayerRef Fusion::Client_Simulation__get_ActivePlayers_d__24::System_Collections_Generic_IEnumerator_Fusion_PlayerRef__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.PlayerRef>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline void Fusion::Client_Simulation__get_ActivePlayers_d__24::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::Client_Simulation__get_ActivePlayers_d__24::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* Fusion::Client_Simulation__get_ActivePlayers_d__24::System_Collections_Generic_IEnumerable_Fusion_PlayerRef__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.Collections.Generic.IEnumerable<Fusion.PlayerRef>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::Client_Simulation__get_ActivePlayers_d__24::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::Client_Simulation__get_ActivePlayers_d__24* Fusion::Client_Simulation__get_ActivePlayers_d__24::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Client_Simulation__get_ActivePlayers_d__24*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>"
constexpr  Fusion::Client_Simulation__get_ActivePlayers_d__24::operator ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* Fusion::Client_Simulation__get_ActivePlayers_d__24::i___System__Collections__Generic__IEnumerable_1___Fusion__PlayerRef_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::Client_Simulation__get_ActivePlayers_d__24::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::Client_Simulation__get_ActivePlayers_d__24::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>"
constexpr  Fusion::Client_Simulation__get_ActivePlayers_d__24::operator ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* Fusion::Client_Simulation__get_ActivePlayers_d__24::i___System__Collections__Generic__IEnumerator_1___Fusion__PlayerRef_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::Client_Simulation__get_ActivePlayers_d__24::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::Client_Simulation__get_ActivePlayers_d__24::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::Client_Simulation__get_ActivePlayers_d__24::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::Client_Simulation__get_ActivePlayers_d__24::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Client_Simulation__get_ActivePlayers_d__24::Client_Simulation__get_ActivePlayers_d__24()   {
}
//  Writing Method size for method: ::Fusion::Simulation_AreaOfInterestCell.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Simulation_AreaOfInterestCell::*)()>(&::Fusion::Simulation_AreaOfInterestCell::get_Empty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ff2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_AreaOfInterestCell*>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Simulation_AreaOfInterestCell._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Simulation_AreaOfInterestCell::*)()>(&::Fusion::Simulation_AreaOfInterestCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff2c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_AreaOfInterestCell*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Simulation_AreaOfInterestCell::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr int32_t const& Fusion::Simulation_AreaOfInterestCell::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr void Fusion::Simulation_AreaOfInterestCell::__cordl_internal_set_Key(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Key = value;
}
constexpr ::GlobalNamespace::NetworkObjectMeta_List& Fusion::Simulation_AreaOfInterestCell::__cordl_internal_get_Objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Objects;
}
constexpr ::GlobalNamespace::NetworkObjectMeta_List const& Fusion::Simulation_AreaOfInterestCell::__cordl_internal_get_Objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Objects;
}
constexpr void Fusion::Simulation_AreaOfInterestCell::__cordl_internal_set_Objects(::GlobalNamespace::NetworkObjectMeta_List  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Objects = value;
}
constexpr ::Fusion::BitSet512& Fusion::Simulation_AreaOfInterestCell::__cordl_internal_get_Connections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Connections;
}
constexpr ::Fusion::BitSet512 const& Fusion::Simulation_AreaOfInterestCell::__cordl_internal_get_Connections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Connections;
}
constexpr void Fusion::Simulation_AreaOfInterestCell::__cordl_internal_set_Connections(::Fusion::BitSet512  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Connections = value;
}
inline bool Fusion::Simulation_AreaOfInterestCell::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_AreaOfInterestCell*>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Simulation_AreaOfInterestCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Simulation_AreaOfInterestCell*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Simulation_AreaOfInterestCell* Fusion::Simulation_AreaOfInterestCell::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Simulation_AreaOfInterestCell*>());
}
// Ctor Parameters []
constexpr ::Fusion::Simulation_AreaOfInterestCell::Simulation_AreaOfInterestCell()   {
}
