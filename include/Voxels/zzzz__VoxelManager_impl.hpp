#pragma once
// IWYU pragma private; include "Voxels/VoxelManager.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "Voxels/zzzz__VoxelManager_VoxelMineOperation_impl.hpp"
#include "Voxels/zzzz__VoxelManager_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__StaticArrayBag_1_def.hpp"
#include "GlobalNamespace/zzzz__VoxelAction_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Voxels/zzzz__Chunk_def.hpp"
#include "Voxels/zzzz__VoxelManager_RPC_def.hpp"
#include "Voxels/zzzz__VoxelManager_VoxelMineOperation_def.hpp"
#include "Voxels/zzzz__VoxelManager_VoxelOperationResult_def.hpp"
#include "Voxels/zzzz__VoxelManager_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
#include "Voxels/zzzz__Voxel_def.hpp"
//  Writing Method size for method: ::Voxels::VoxelManager.get_HasAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Voxels::VoxelManager::get_HasAuthority)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5dc41c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.get_InRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Voxels::VoxelManager::get_InRoom)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dc4254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"get_InRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5dc42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelManager*>(),
                    {::i2c::class_of<::Voxels::VoxelManager*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::OnEnable)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5dc4334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelManager*>(),
                    {::i2c::class_of<::Voxels::VoxelManager*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::OnDisable)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5dc4658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelManager*>(),
                    {::i2c::class_of<::Voxels::VoxelManager*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::Update)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x5dc497c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::LateUpdate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5dc571c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnLowMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::OnLowMemory)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5dc5bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnLowMemory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.UpdateTransferLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Voxels::VoxelManager::UpdateTransferLog)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5dc4e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"UpdateTransferLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.EnqueueTransferLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Voxels::VoxelManager::EnqueueTransferLog)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5dc5ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"EnqueueTransferLog", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.GetIntArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(int32_t)>(&::Voxels::VoxelManager::GetIntArray)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5dc5db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetIntArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*)>(&::Voxels::VoxelManager::Register)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5dc5e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"Register", {}, {::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*)>(&::Voxels::VoxelManager::Unregister)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5dc60e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.ReplicateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*)>(&::Voxels::VoxelManager::ReplicateState)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5dc6204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"ReplicateState", {}, {::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnNetworkJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::OnNetworkJoinedRoom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5dc67fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnNetworkJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnNetworkLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::OnNetworkLeftRoom)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5dc69f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnNetworkLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)(::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager::OnPlayerLeft)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5dc6a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnOwnerSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)(::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager::OnOwnerSwitched)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5dc6d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelManager*>(),
                    {::i2c::class_of<::Voxels::VoxelManager*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dc6e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelManager*>(),
                    {::i2c::class_of<::Voxels::VoxelManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dc6e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelManager*>(),
                    {::i2c::class_of<::Voxels::VoxelManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Voxels::VoxelManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dc6e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelManager*>(),
                    {::i2c::class_of<::Voxels::VoxelManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Voxels::VoxelManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dc6e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelManager*>(),
                    {::i2c::class_of<::Voxels::VoxelManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.RequestVoxelWorldStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Voxels::VoxelManager::RequestVoxelWorldStates)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5dc686c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"RequestVoxelWorldStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.RequestWorldState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*)>(&::Voxels::VoxelManager::RequestWorldState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5dc6e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"RequestWorldState", {}, {::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnWorldStateRequestReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Voxels::VoxelManager::OnWorldStateRequestReceived)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5dc6e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnWorldStateRequestReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendWorldStateToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager::SendWorldStateToPlayer)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x5dc6410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendWorldStateToPlayer", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.WorldIsQueuedForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Voxels::VoxelWorld*, ::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager::WorldIsQueuedForPlayer)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5dc719c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"WorldIsQueuedForPlayer", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.ClearQueuesForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager::ClearQueuesForPlayer)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5dc6b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"ClearQueuesForPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.GetOrCreateQueueForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::VoxelManager_StateInitQueue* (*)(::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager::GetOrCreateQueueForPlayer)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5dc737c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetOrCreateQueueForPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.QueueChunkForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::Chunk*, ::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager::QueueChunkForPlayer)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5dc6f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"QueueChunkForPlayer", {}, {::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.QueueOperationForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::GlobalNamespace::NetPlayer*, ::UnityEngine::BoundsInt, ::ArrayW<uint8_t>)>(&::Voxels::VoxelManager::QueueOperationForPlayer)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5dc7600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"QueueOperationForPlayer", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.QueueMineOperationForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::VoxelManager_VoxelMineOperation)>(&::Voxels::VoxelManager::QueueMineOperationForPlayer)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5dc7998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"QueueMineOperationForPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.QueueMineCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::VoxelManager_VoxelMineOperation)>(&::Voxels::VoxelManager::QueueMineCommand)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5dc7b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"QueueMineCommand", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendQueuedMineCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Voxels::VoxelManager::SendQueuedMineCommands)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5dc5390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendQueuedMineCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.QueueMineOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VoxelManager_VoxelMineOperation, ::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager::QueueMineOperation)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5dc8068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"QueueMineOperation", {}, {::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.ExecuteQueuedLocalOperations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Voxels::VoxelManager::ExecuteQueuedLocalOperations)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5dc57e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"ExecuteQueuedLocalOperations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.ProcessMiningResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, ::Voxels::VoxelWorld*, ::ArrayW<int32_t>)>(&::Voxels::VoxelManager::ProcessMiningResult)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5dc81cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"ProcessMiningResult", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendNextChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelManager_StateInitQueue*)>(&::Voxels::VoxelManager::SendNextChunk)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5dc5008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendNextChunk", {}, {::i2c::type_of<::Voxels::VoxelManager_StateInitQueue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.GetSpanFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<::GlobalNamespace::VoxelManager_VoxelMineOperation> (*)(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*, int32_t, int32_t)>(&::Voxels::VoxelManager::GetSpanFor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5dc7db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetSpanFor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendNextPacketForChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelManager_ChunkInitState*, ::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager::SendNextPacketForChunk)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5dc8220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendNextPacketForChunk", {}, {::i2c::type_of<::Voxels::VoxelManager_ChunkInitState*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnStartChunkReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::Unity::Mathematics::int3, int32_t, int32_t)>(&::Voxels::VoxelManager::OnStartChunkReceived)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5dc898c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnStartChunkReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnChunkPacketReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::ArrayW<uint8_t>)>(&::Voxels::VoxelManager::OnChunkPacketReceived)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x5dc8d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnChunkPacketReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::BoundsInt)>(&::Voxels::VoxelManager::SendDensity)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5dc9168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendDensity", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.PerformOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, ::GlobalNamespace::VoxelAction)>(&::Voxels::VoxelManager::PerformOperation)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5dc96fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"PerformOperation", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OperateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, ::GlobalNamespace::VoxelAction)>(&::Voxels::VoxelManager::OperateAuthority)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5dc98f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OperateAuthority", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnOperationRequestReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Vector3, ::GlobalNamespace::VoxelAction, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Voxels::VoxelManager::OnOperationRequestReceived)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x5dc9c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnOperationRequestReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.Mine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::VoxelAction)>(&::Voxels::VoxelManager::Mine)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5dca020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"Mine", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.MineAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::GlobalNamespace::VoxelManager_VoxelMineOperation, ::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager::MineAuthority)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5dcaaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"MineAuthority", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnMineRequestReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VoxelManager_VoxelMineOperation, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Voxels::VoxelManager::OnMineRequestReceived)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5dcaf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnMineRequestReceived", {}, {::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.GetVoxelsForBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::BoundsInt, ::by_ref<::ArrayW<::Voxels::Voxel>>)>(&::Voxels::VoxelManager::GetVoxelsForBounds)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5dcb0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetVoxelsForBounds", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::by_ref<::ArrayW<::Voxels::Voxel>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.GetDensityForBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::BoundsInt, ::by_ref<::ArrayW<uint8_t>>)>(&::Voxels::VoxelManager::GetDensityForBounds)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5dc9468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetDensityForBounds", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnSetDensityReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::BoundsInt, ::ArrayW<uint8_t>)>(&::Voxels::VoxelManager::OnSetDensityReceived)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5dcb344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnSetDensityReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.OnMineCommandReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VoxelManager_VoxelMineOperation)>(&::Voxels::VoxelManager::OnMineCommandReceived)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5dcb6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnMineCommandReceived", {}, {::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PhotonMessageInfoWrapped, ::GlobalNamespace::VoxelManager_RPC)>(&::Voxels::VoxelManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5dcb728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_RPC>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PhotonMessageInfoWrapped, ::GlobalNamespace::VoxelManager_RPC)>(&::Voxels::VoxelManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5dcb8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_RPC>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.IsSpamming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PhotonMessageInfoWrapped, ::GlobalNamespace::VoxelManager_RPC)>(&::Voxels::VoxelManager::IsSpamming)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5dcb804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"IsSpamming", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_RPC>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.GetSpamChecksForUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::CallLimiter*> (*)(int32_t)>(&::Voxels::VoxelManager::GetSpamChecksForUser)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5dcb96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetSpamChecksForUser", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.RegisterNetEventCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Voxels::VoxelManager::RegisterNetEventCallbacks)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5dcbd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"RegisterNetEventCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendWorldStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Voxels::VoxelManager::SendWorldStateRequest)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5dc5fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendWorldStateRequest", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.DeserializeWorldStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Voxels::VoxelManager::DeserializeWorldStateRequest)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5dcc048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeWorldStateRequest", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Vector3, ::GlobalNamespace::VoxelAction)>(&::Voxels::VoxelManager::SendOperationRequest)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5dc9a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendOperationRequest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.DeserializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Voxels::VoxelManager::DeserializeOperationRequest)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5dcc194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeOperationRequest", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendMineOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VoxelManager_VoxelMineOperation)>(&::Voxels::VoxelManager::SendMineOperationRequest)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5dcae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendMineOperationRequest", {}, {::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.DeserializeMineOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Voxels::VoxelManager::DeserializeMineOperationRequest)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5dcc448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeMineOperationRequest", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendStartChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, int32_t, ::Unity::Mathematics::int3, int32_t, int32_t)>(&::Voxels::VoxelManager::SendStartChunk)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5dc8310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendStartChunk", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.DeserializeStartChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Voxels::VoxelManager::DeserializeStartChunk)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5dcc600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeStartChunk", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendContinueChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, int32_t, int32_t, ::ArrayW<uint8_t>)>(&::Voxels::VoxelManager::SendContinueChunk)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5dc877c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendContinueChunk", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.DeserializeContinueChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Voxels::VoxelManager::DeserializeContinueChunk)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5dcc7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeContinueChunk", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendSetDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, int32_t, ::UnityEngine::BoundsInt, ::ArrayW<uint8_t>)>(&::Voxels::VoxelManager::SendSetDensity)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5dc8524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendSetDensity", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.DeserializeSetDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Voxels::VoxelManager::DeserializeSetDensity)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5dcc964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeSetDensity", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.SendMineCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, ::System::Span_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>)>(&::Voxels::VoxelManager::SendMineCommand)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5dc7f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendMineCommand", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::System::Span_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.DeserializeMineCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Voxels::VoxelManager::DeserializeMineCommand)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5dccae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeMineCommand", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.TestHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::TestHitPoint)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dcccf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"TestHitPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dcd13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager._TestHitPoint_g__Test_103_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>)>(&::Voxels::VoxelManager::_TestHitPoint_g__Test_103_0)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5dccd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"<TestHitPoint>g__Test|103_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)(bool)>(&::Voxels::VoxelManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dcd5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelManager*>(),
                    {::i2c::class_of<::Voxels::VoxelManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager::*)()>(&::Voxels::VoxelManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dcd5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelManager*>(),
                    {::i2c::class_of<::Voxels::VoxelManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetPlayer*& Voxels::VoxelManager::__cordl_internal_get__owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____owner;
}
constexpr ::GlobalNamespace::NetPlayer* const& Voxels::VoxelManager::__cordl_internal_get__owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____owner;
}
constexpr void Voxels::VoxelManager::__cordl_internal_set__owner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____owner = value;
}
inline void Voxels::VoxelManager::setStaticF__instance(::UnityW<::Voxels::VoxelManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Voxels::VoxelManager>, "_instance", ::Voxels::VoxelManager*>(std::forward<::UnityW<::Voxels::VoxelManager>>(value));
}
inline ::UnityW<::Voxels::VoxelManager> Voxels::VoxelManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Voxels::VoxelManager>, "_instance", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__worlds(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*, "_worlds", ::Voxels::VoxelManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>* Voxels::VoxelManager::getStaticF__worlds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*, "_worlds", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__byteArrayBag(::GlobalNamespace::StaticArrayBag_1<uint8_t>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::StaticArrayBag_1<uint8_t>*, "_byteArrayBag", ::Voxels::VoxelManager*>(std::forward<::GlobalNamespace::StaticArrayBag_1<uint8_t>*>(value));
}
inline ::GlobalNamespace::StaticArrayBag_1<uint8_t>* Voxels::VoxelManager::getStaticF__byteArrayBag()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::StaticArrayBag_1<uint8_t>*, "_byteArrayBag", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__intArrayBag(::GlobalNamespace::StaticArrayBag_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::StaticArrayBag_1<int32_t>*, "_intArrayBag", ::Voxels::VoxelManager*>(std::forward<::GlobalNamespace::StaticArrayBag_1<int32_t>*>(value));
}
inline ::GlobalNamespace::StaticArrayBag_1<int32_t>* Voxels::VoxelManager::getStaticF__intArrayBag()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::StaticArrayBag_1<int32_t>*, "_intArrayBag", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__initQueues(::System::Collections::Generic::Dictionary_2<int32_t,::Voxels::VoxelManager_StateInitQueue*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::Voxels::VoxelManager_StateInitQueue*>*, "_initQueues", ::Voxels::VoxelManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::Voxels::VoxelManager_StateInitQueue*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Voxels::VoxelManager_StateInitQueue*>* Voxels::VoxelManager::getStaticF__initQueues()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::Voxels::VoxelManager_StateInitQueue*>*, "_initQueues", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__localInitQueue(::Voxels::VoxelManager_StateInitQueue*  value)  {
::cordl_internals::setStaticField<::Voxels::VoxelManager_StateInitQueue*, "_localInitQueue", ::Voxels::VoxelManager*>(std::forward<::Voxels::VoxelManager_StateInitQueue*>(value));
}
inline ::Voxels::VoxelManager_StateInitQueue* Voxels::VoxelManager::getStaticF__localInitQueue()  {
return ::cordl_internals::getStaticField<::Voxels::VoxelManager_StateInitQueue*, "_localInitQueue", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__packetData(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_packetData", ::Voxels::VoxelManager*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Voxels::VoxelManager::getStaticF__packetData()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_packetData", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__processInitQueus(bool  value)  {
::cordl_internals::setStaticField<bool, "_processInitQueus", ::Voxels::VoxelManager*>(std::forward<bool>(value));
}
inline bool Voxels::VoxelManager::getStaticF__processInitQueus()  {
return ::cordl_internals::getStaticField<bool, "_processInitQueus", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__sendHistory(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<float_t,int32_t>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::System::ValueTuple_2<float_t,int32_t>>*, "_sendHistory", ::Voxels::VoxelManager*>(std::forward<::System::Collections::Generic::Queue_1<::System::ValueTuple_2<float_t,int32_t>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<float_t,int32_t>>* Voxels::VoxelManager::getStaticF__sendHistory()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::System::ValueTuple_2<float_t,int32_t>>*, "_sendHistory", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__sendRate(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_sendRate", ::Voxels::VoxelManager*>(std::forward<int32_t>(value));
}
inline int32_t Voxels::VoxelManager::getStaticF__sendRate()  {
return ::cordl_internals::getStaticField<int32_t, "_sendRate", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__mineOpQueues(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*>*, "_mineOpQueues", ::Voxels::VoxelManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*>* Voxels::VoxelManager::getStaticF__mineOpQueues()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*>*, "_mineOpQueues", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__mineCommandInterval(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_mineCommandInterval", ::Voxels::VoxelManager*>(std::forward<float_t>(value));
}
inline float_t Voxels::VoxelManager::getStaticF__mineCommandInterval()  {
return ::cordl_internals::getStaticField<float_t, "_mineCommandInterval", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__nextMineCommandTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_nextMineCommandTime", ::Voxels::VoxelManager*>(std::forward<float_t>(value));
}
inline float_t Voxels::VoxelManager::getStaticF__nextMineCommandTime()  {
return ::cordl_internals::getStaticField<float_t, "_nextMineCommandTime", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__mineCommandsQueued(bool  value)  {
::cordl_internals::setStaticField<bool, "_mineCommandsQueued", ::Voxels::VoxelManager*>(std::forward<bool>(value));
}
inline bool Voxels::VoxelManager::getStaticF__mineCommandsQueued()  {
return ::cordl_internals::getStaticField<bool, "_mineCommandsQueued", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__localOperationQueue(::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::VoxelManager_VoxelMineOperation>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::VoxelManager_VoxelMineOperation>>*, "_localOperationQueue", ::Voxels::VoxelManager*>(std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::VoxelManager_VoxelMineOperation>>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::VoxelManager_VoxelMineOperation>>* Voxels::VoxelManager::getStaticF__localOperationQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::VoxelManager_VoxelMineOperation>>*, "_localOperationQueue", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__localOpInterval(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_localOpInterval", ::Voxels::VoxelManager*>(std::forward<float_t>(value));
}
inline float_t Voxels::VoxelManager::getStaticF__localOpInterval()  {
return ::cordl_internals::getStaticField<float_t, "_localOpInterval", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__nextLocalOpTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_nextLocalOpTime", ::Voxels::VoxelManager*>(std::forward<float_t>(value));
}
inline float_t Voxels::VoxelManager::getStaticF__nextLocalOpTime()  {
return ::cordl_internals::getStaticField<float_t, "_nextLocalOpTime", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__mineOpArray(::ArrayW<::GlobalNamespace::VoxelManager_VoxelMineOperation>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::VoxelManager_VoxelMineOperation>, "_mineOpArray", ::Voxels::VoxelManager*>(std::forward<::ArrayW<::GlobalNamespace::VoxelManager_VoxelMineOperation>>(value));
}
inline ::ArrayW<::GlobalNamespace::VoxelManager_VoxelMineOperation> Voxels::VoxelManager::getStaticF__mineOpArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::VoxelManager_VoxelMineOperation>, "_mineOpArray", ::Voxels::VoxelManager*>();
}
inline void Voxels::VoxelManager::setStaticF__spamChecks(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::CallLimiter*>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::CallLimiter*>>*, "_spamChecks", ::Voxels::VoxelManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::CallLimiter*>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::CallLimiter*>>* Voxels::VoxelManager::getStaticF__spamChecks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::CallLimiter*>>*, "_spamChecks", ::Voxels::VoxelManager*>();
}
inline bool Voxels::VoxelManager::get_HasAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Voxels::VoxelManager::get_InRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"get_InRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Voxels::VoxelManager::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelManager*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelManager*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelManager*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::OnLowMemory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnLowMemory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::UpdateTransferLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"UpdateTransferLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Voxels::VoxelManager::EnqueueTransferLog(int32_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"EnqueueTransferLog", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes);
}
inline ::ArrayW<int32_t> Voxels::VoxelManager::GetIntArray(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetIntArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, length);
}
inline void Voxels::VoxelManager::Register(::Voxels::VoxelWorld*  world)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"Register", {}, {::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world);
}
inline void Voxels::VoxelManager::Unregister(::Voxels::VoxelWorld*  world)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world);
}
inline void Voxels::VoxelManager::ReplicateState(::Voxels::VoxelWorld*  world)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"ReplicateState", {}, {::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world);
}
inline void Voxels::VoxelManager::OnNetworkJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnNetworkJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::OnNetworkLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnNetworkLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::OnPlayerLeft(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Voxels::VoxelManager::OnOwnerSwitched(::GlobalNamespace::NetPlayer*  newOwningPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelManager*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwningPlayer);
}
inline void Voxels::VoxelManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Voxels::VoxelManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Voxels::VoxelManager::RequestVoxelWorldStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"RequestVoxelWorldStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Voxels::VoxelManager::RequestWorldState(::Voxels::VoxelWorld*  world)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"RequestWorldState", {}, {::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world);
}
inline void Voxels::VoxelManager::OnWorldStateRequestReceived(int32_t  worldId, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnWorldStateRequestReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldId, info);
}
inline void Voxels::VoxelManager::SendWorldStateToPlayer(::Voxels::VoxelWorld*  world, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendWorldStateToPlayer", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, player);
}
inline bool Voxels::VoxelManager::WorldIsQueuedForPlayer(::Voxels::VoxelWorld*  world, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"WorldIsQueuedForPlayer", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, world, player);
}
inline void Voxels::VoxelManager::ClearQueuesForPlayer(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"ClearQueuesForPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player);
}
inline ::Voxels::VoxelManager_StateInitQueue* Voxels::VoxelManager::GetOrCreateQueueForPlayer(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetOrCreateQueueForPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::VoxelManager_StateInitQueue*>(nullptr, ___internal_method, player);
}
inline void Voxels::VoxelManager::QueueChunkForPlayer(::Voxels::Chunk*  chunk, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"QueueChunkForPlayer", {}, {::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, chunk, player);
}
inline void Voxels::VoxelManager::QueueOperationForPlayer(::Voxels::VoxelWorld*  world, ::GlobalNamespace::NetPlayer*  player, ::UnityEngine::BoundsInt  bounds, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"QueueOperationForPlayer", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, player, bounds, data);
}
inline void Voxels::VoxelManager::QueueMineOperationForPlayer(::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::VoxelManager_VoxelMineOperation  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"QueueMineOperationForPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, op);
}
inline void Voxels::VoxelManager::QueueMineCommand(::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::VoxelManager_VoxelMineOperation  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"QueueMineCommand", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, operation);
}
inline void Voxels::VoxelManager::SendQueuedMineCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendQueuedMineCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Voxels::VoxelManager::QueueMineOperation(::GlobalNamespace::VoxelManager_VoxelMineOperation  op, ::GlobalNamespace::NetPlayer*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"QueueMineOperation", {}, {::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, op, sender);
}
inline void Voxels::VoxelManager::ExecuteQueuedLocalOperations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"ExecuteQueuedLocalOperations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Voxels::VoxelManager::ProcessMiningResult(::GlobalNamespace::NetPlayer*  player, ::Voxels::VoxelWorld*  world, ::ArrayW<int32_t>  amounts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"ProcessMiningResult", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, world, amounts);
}
inline void Voxels::VoxelManager::SendNextChunk(::Voxels::VoxelManager_StateInitQueue*  queue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendNextChunk", {}, {::i2c::type_of<::Voxels::VoxelManager_StateInitQueue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, queue);
}
inline ::System::Span_1<::GlobalNamespace::VoxelManager_VoxelMineOperation> Voxels::VoxelManager::GetSpanFor(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*  ops, int32_t  start, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetSpanFor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>>(nullptr, ___internal_method, ops, start, count);
}
inline void Voxels::VoxelManager::SendNextPacketForChunk(::Voxels::VoxelManager_ChunkInitState*  chunkState, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendNextPacketForChunk", {}, {::i2c::type_of<::Voxels::VoxelManager_ChunkInitState*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, chunkState, player);
}
inline void Voxels::VoxelManager::OnStartChunkReceived(int32_t  worldId, ::Unity::Mathematics::int3  chunkId, int32_t  hash, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnStartChunkReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldId, chunkId, hash, size);
}
inline void Voxels::VoxelManager::OnChunkPacketReceived(int32_t  hash, int32_t  size, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnChunkPacketReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, size, data);
}
inline void Voxels::VoxelManager::SendDensity(::Voxels::VoxelWorld*  world, ::UnityEngine::BoundsInt  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendDensity", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, bounds);
}
inline void Voxels::VoxelManager::PerformOperation(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  position, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"PerformOperation", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, position, action);
}
inline void Voxels::VoxelManager::OperateAuthority(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  localPosition, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OperateAuthority", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, localPosition, action);
}
inline void Voxels::VoxelManager::OnOperationRequestReceived(int32_t  worldId, ::UnityEngine::Vector3  localPosition, ::GlobalNamespace::VoxelAction  action, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnOperationRequestReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldId, localPosition, action, info);
}
inline void Voxels::VoxelManager::Mine(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::UnityEngine::Vector3  origin, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"Mine", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, hitPoint, hitNormal, origin, action);
}
inline void Voxels::VoxelManager::MineAuthority(::Voxels::VoxelWorld*  world, ::GlobalNamespace::VoxelManager_VoxelMineOperation  op, ::GlobalNamespace::NetPlayer*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"MineAuthority", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, op, sender);
}
inline void Voxels::VoxelManager::OnMineRequestReceived(::GlobalNamespace::VoxelManager_VoxelMineOperation  op, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnMineRequestReceived", {}, {::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, op, info);
}
inline void Voxels::VoxelManager::GetVoxelsForBounds(::Voxels::VoxelWorld*  world, ::UnityEngine::BoundsInt  bounds, ::by_ref<::ArrayW<::Voxels::Voxel>>  voxels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetVoxelsForBounds", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::by_ref<::ArrayW<::Voxels::Voxel>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, bounds, voxels);
}
inline void Voxels::VoxelManager::GetDensityForBounds(::Voxels::VoxelWorld*  world, ::UnityEngine::BoundsInt  bounds, ::by_ref<::ArrayW<uint8_t>>  voxels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetDensityForBounds", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, bounds, voxels);
}
inline void Voxels::VoxelManager::OnSetDensityReceived(int32_t  worldId, ::UnityEngine::BoundsInt  bounds, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnSetDensityReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldId, bounds, data);
}
inline void Voxels::VoxelManager::OnMineCommandReceived(::GlobalNamespace::VoxelManager_VoxelMineOperation  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"OnMineCommandReceived", {}, {::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, op);
}
inline bool Voxels::VoxelManager::IsValidAuthorityRPC(::GlobalNamespace::PhotonMessageInfoWrapped  info, ::GlobalNamespace::VoxelManager_RPC  eventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_RPC>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, info, eventType);
}
inline bool Voxels::VoxelManager::IsValidClientRPC(::GlobalNamespace::PhotonMessageInfoWrapped  info, ::GlobalNamespace::VoxelManager_RPC  eventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_RPC>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, info, eventType);
}
inline bool Voxels::VoxelManager::IsSpamming(::GlobalNamespace::PhotonMessageInfoWrapped  info, ::GlobalNamespace::VoxelManager_RPC  eventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"IsSpamming", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_RPC>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, info, eventType);
}
inline ::ArrayW<::GlobalNamespace::CallLimiter*> Voxels::VoxelManager::GetSpamChecksForUser(int32_t  userID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"GetSpamChecksForUser", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::CallLimiter*>>(nullptr, ___internal_method, userID);
}
inline void Voxels::VoxelManager::RegisterNetEventCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"RegisterNetEventCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Voxels::VoxelManager::SendWorldStateRequest(int32_t  worldId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendWorldStateRequest", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldId);
}
inline void Voxels::VoxelManager::DeserializeWorldStateRequest(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeWorldStateRequest", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData, info);
}
inline void Voxels::VoxelManager::SendOperationRequest(int32_t  worldId, ::UnityEngine::Vector3  localPosition, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendOperationRequest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldId, localPosition, action);
}
inline void Voxels::VoxelManager::DeserializeOperationRequest(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeOperationRequest", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData, info);
}
inline void Voxels::VoxelManager::SendMineOperationRequest(::GlobalNamespace::VoxelManager_VoxelMineOperation  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendMineOperationRequest", {}, {::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, op);
}
inline void Voxels::VoxelManager::DeserializeMineOperationRequest(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeMineOperationRequest", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData, info);
}
inline void Voxels::VoxelManager::SendStartChunk(::GlobalNamespace::NetPlayer*  player, int32_t  worldId, ::Unity::Mathematics::int3  chunkId, int32_t  hash, int32_t  totalSerializedBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendStartChunk", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, worldId, chunkId, hash, totalSerializedBytes);
}
inline void Voxels::VoxelManager::DeserializeStartChunk(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeStartChunk", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData, info);
}
inline void Voxels::VoxelManager::SendContinueChunk(::GlobalNamespace::NetPlayer*  player, int32_t  hash, int32_t  size, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendContinueChunk", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, hash, size, data);
}
inline void Voxels::VoxelManager::DeserializeContinueChunk(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeContinueChunk", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData, info);
}
inline void Voxels::VoxelManager::SendSetDensity(::GlobalNamespace::NetPlayer*  player, int32_t  worldId, ::UnityEngine::BoundsInt  bounds, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendSetDensity", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, worldId, bounds, data);
}
inline void Voxels::VoxelManager::DeserializeSetDensity(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeSetDensity", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData, info);
}
inline void Voxels::VoxelManager::SendMineCommand(::GlobalNamespace::NetPlayer*  player, ::System::Span_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>  ops)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"SendMineCommand", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::System::Span_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, ops);
}
inline void Voxels::VoxelManager::DeserializeMineCommand(::ArrayW<::System::Object*>  eventData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"DeserializeMineCommand", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData, info);
}
inline void Voxels::VoxelManager::TestHitPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"TestHitPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager::_TestHitPoint_g__Test_103_0(::ArrayW<float_t>  magnitudes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager*>(),
                        {"<TestHitPoint>g__Test|103_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, magnitudes);
}
inline void Voxels::VoxelManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Voxels::VoxelManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::VoxelManager* Voxels::VoxelManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelManager*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelManager::VoxelManager()   {
}
//  Writing Method size for method: ::Voxels::VoxelManager_ChunkInitState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager_ChunkInitState::*)()>(&::Voxels::VoxelManager_ChunkInitState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dc75f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_ChunkInitState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_worldId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldId;
}
constexpr int32_t const& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_worldId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldId;
}
constexpr void Voxels::VoxelManager_ChunkInitState::__cordl_internal_set_worldId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldId = value;
}
constexpr ::Unity::Mathematics::int3& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_chunkId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkId;
}
constexpr ::Unity::Mathematics::int3 const& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_chunkId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkId;
}
constexpr void Voxels::VoxelManager_ChunkInitState::__cordl_internal_set_chunkId(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkId = value;
}
constexpr int32_t& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_hash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash;
}
constexpr int32_t const& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_hash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash;
}
constexpr void Voxels::VoxelManager_ChunkInitState::__cordl_internal_set_hash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hash = value;
}
constexpr ::ArrayW<uint8_t>& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_serializedChunkState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializedChunkState;
}
constexpr ::ArrayW<uint8_t> const& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_serializedChunkState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializedChunkState;
}
constexpr void Voxels::VoxelManager_ChunkInitState::__cordl_internal_set_serializedChunkState(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializedChunkState = value;
}
constexpr int32_t& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_numSerializedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numSerializedBytes;
}
constexpr int32_t const& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_numSerializedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numSerializedBytes;
}
constexpr void Voxels::VoxelManager_ChunkInitState::__cordl_internal_set_numSerializedBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numSerializedBytes = value;
}
constexpr int32_t& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_totalSerializedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalSerializedBytes;
}
constexpr int32_t const& Voxels::VoxelManager_ChunkInitState::__cordl_internal_get_totalSerializedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalSerializedBytes;
}
constexpr void Voxels::VoxelManager_ChunkInitState::__cordl_internal_set_totalSerializedBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalSerializedBytes = value;
}
inline void Voxels::VoxelManager_ChunkInitState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_ChunkInitState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::VoxelManager_ChunkInitState* Voxels::VoxelManager_ChunkInitState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelManager_ChunkInitState*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelManager_ChunkInitState::VoxelManager_ChunkInitState()   {
}
//  Writing Method size for method: ::Voxels::VoxelManager_StateInitQueue.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::VoxelManager_StateInitQueue::*)()>(&::Voxels::VoxelManager_StateInitQueue::get_IsEmpty)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dc4f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_StateInitQueue*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager_StateInitQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager_StateInitQueue::*)()>(&::Voxels::VoxelManager_StateInitQueue::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5dc7868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_StateInitQueue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager_StateInitQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelManager_StateInitQueue::*)(::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelManager_StateInitQueue::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5dc74b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_StateInitQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager_StateInitQueue.GetChunkIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Voxels::VoxelManager_StateInitQueue::*)(int32_t)>(&::Voxels::VoxelManager_StateInitQueue::GetChunkIndex)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5dc8cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_StateInitQueue*>(),
                        {"GetChunkIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelManager_StateInitQueue.GetChunkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::VoxelManager_ChunkInitState* (::Voxels::VoxelManager_StateInitQueue::*)(int32_t)>(&::Voxels::VoxelManager_StateInitQueue::GetChunkState)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5dcd5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_StateInitQueue*>(),
                        {"GetChunkState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetPlayer*& Voxels::VoxelManager_StateInitQueue::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::GlobalNamespace::NetPlayer* const& Voxels::VoxelManager_StateInitQueue::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void Voxels::VoxelManager_StateInitQueue::__cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::System::Collections::Generic::List_1<::Voxels::VoxelManager_ChunkInitState*>*& Voxels::VoxelManager_StateInitQueue::__cordl_internal_get_chunks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunks;
}
constexpr ::System::Collections::Generic::List_1<::Voxels::VoxelManager_ChunkInitState*>* const& Voxels::VoxelManager_StateInitQueue::__cordl_internal_get_chunks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunks;
}
constexpr void Voxels::VoxelManager_StateInitQueue::__cordl_internal_set_chunks(::System::Collections::Generic::List_1<::Voxels::VoxelManager_ChunkInitState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunks = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*& Voxels::VoxelManager_StateInitQueue::__cordl_internal_get_mineOps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mineOps;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>* const& Voxels::VoxelManager_StateInitQueue::__cordl_internal_get_mineOps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mineOps;
}
constexpr void Voxels::VoxelManager_StateInitQueue::__cordl_internal_set_mineOps(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelMineOperation>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mineOps = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelOperationResult>*& Voxels::VoxelManager_StateInitQueue::__cordl_internal_get_operations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___operations;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelOperationResult>* const& Voxels::VoxelManager_StateInitQueue::__cordl_internal_get_operations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___operations;
}
constexpr void Voxels::VoxelManager_StateInitQueue::__cordl_internal_set_operations(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelManager_VoxelOperationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___operations = value;
}
constexpr ::Voxels::VoxelManager_ChunkInitState*& Voxels::VoxelManager_StateInitQueue::__cordl_internal_get_currentChunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChunk;
}
constexpr ::Voxels::VoxelManager_ChunkInitState* const& Voxels::VoxelManager_StateInitQueue::__cordl_internal_get_currentChunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChunk;
}
constexpr void Voxels::VoxelManager_StateInitQueue::__cordl_internal_set_currentChunk(::Voxels::VoxelManager_ChunkInitState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentChunk = value;
}
inline bool Voxels::VoxelManager_StateInitQueue::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_StateInitQueue*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Voxels::VoxelManager_StateInitQueue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_StateInitQueue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelManager_StateInitQueue::_ctor(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_StateInitQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline int32_t Voxels::VoxelManager_StateInitQueue::GetChunkIndex(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_StateInitQueue*>(),
                        {"GetChunkIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash);
}
inline ::Voxels::VoxelManager_ChunkInitState* Voxels::VoxelManager_StateInitQueue::GetChunkState(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelManager_StateInitQueue*>(),
                        {"GetChunkState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::VoxelManager_ChunkInitState*>(this, ___internal_method, hash);
}
inline ::Voxels::VoxelManager_StateInitQueue* Voxels::VoxelManager_StateInitQueue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelManager_StateInitQueue*>());
}
inline ::Voxels::VoxelManager_StateInitQueue* Voxels::VoxelManager_StateInitQueue::New_ctor(::GlobalNamespace::NetPlayer*  player)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelManager_StateInitQueue*>(player));
}
// Ctor Parameters []
constexpr ::Voxels::VoxelManager_StateInitQueue::VoxelManager_StateInitQueue()   {
}
