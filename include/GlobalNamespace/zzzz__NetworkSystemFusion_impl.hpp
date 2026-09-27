#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemFusion.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion_InternalState_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
#include "Fusion/zzzz__GameMode_def.hpp"
#include "Fusion/zzzz__HostMigrationToken_def.hpp"
#include "Fusion/zzzz__INetworkRunnerCallbacks_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "GlobalNamespace/zzzz__CustomObjectProvider_def.hpp"
#include "GlobalNamespace/zzzz__FusionCallbackHandler_def.hpp"
#include "GlobalNamespace/zzzz__FusionInternalRPCs_def.hpp"
#include "GlobalNamespace/zzzz__FusionNetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__FusionRegionCrawler_def.hpp"
#include "GlobalNamespace/zzzz__NetEventOptions_def.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion_InternalState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__AttachSceneObjects_d__76_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__AwaitAuth_d__57_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__AwaitSceneReady_d__95_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__CloseRunner_d__66_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__ConnectToRoom_d__59_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__Connect_d__60_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__Initialise_d__55_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__JoinFriendsRoom_d__63_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__JoinRandomPublicRoom_d__62_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__MakeOrJoinRoom_d__61_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__MigrateHost_d__67_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__ResetSystem_d__68_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__ReturnToSinglePlayer_d__65_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_def.hpp"
#include "GlobalNamespace/zzzz__RPCArgBuffer_1_def.hpp"
#include "GlobalNamespace/zzzz__RoomConfig_def.hpp"
#include "GorillaTag/zzzz__ObjectPool_1_def.hpp"
#include "Photon/Voice/Unity/zzzz__RemoteVoiceLink_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetSharedGroupDataResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__SharedGroupDataRecord_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_runner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkRunner> (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_runner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d9608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"get_runner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.set_runner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::NetworkSystemFusion::set_runner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d9610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"set_runner", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_IsOnline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_IsOnline)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56d9618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_InRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_InRoom)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56d96a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_RoomName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56d9758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.RoomStringStripped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::RoomStringStripped)> {
  constexpr static std::size_t size = 0x7cc;
  constexpr static std::size_t addrs = 0x56d9780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_GameModeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_GameModeString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56d9f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_CurrentRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_CurrentRegion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56da000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_SessionIsPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_SessionIsPrivate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56da028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_SessionIsSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_SessionIsSubscription)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x56da0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_LocalPlayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_LocalPlayerID)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56da14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_CurrentPhotonBackend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_CurrentPhotonBackend)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x56da1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_SimTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_SimTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56da208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_SimDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_SimDeltaTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56da22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_SimTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_SimTick)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56da244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_TickRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_TickRate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56da26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_ServerTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_ServerTimestamp)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56da284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_RoomPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_RoomPlayerCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56da2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_VoiceConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::VoiceConnection> (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_VoiceConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56da2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_IsMasterClient)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56da2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.get_MasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::get_MasterClient)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x56da2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.Initialise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::Initialise)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56da47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.CreateRegionCrawler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::CreateRegionCrawler)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56da524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"CreateRegionCrawler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.AwaitAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::AwaitAuth)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56da5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"AwaitAuth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.FinishAuthenticating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::FinishAuthenticating)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56da6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.ConnectToRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* (::GlobalNamespace::NetworkSystemFusion::*)(::StringW, ::GlobalNamespace::RoomConfig*, int32_t)>(&::GlobalNamespace::NetworkSystemFusion::ConnectToRoom)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x56da778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NetworkSystemFusion::*)(::Fusion::GameMode, ::StringW, ::GlobalNamespace::RoomConfig*)>(&::GlobalNamespace::NetworkSystemFusion::Connect)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x56da8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::GameMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.MakeOrJoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* (::GlobalNamespace::NetworkSystemFusion::*)(::StringW, ::GlobalNamespace::RoomConfig*)>(&::GlobalNamespace::NetworkSystemFusion::MakeOrJoinRoom)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x56da9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"MakeOrJoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.JoinRandomPublicRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* (::GlobalNamespace::NetworkSystemFusion::*)(::GlobalNamespace::RoomConfig*)>(&::GlobalNamespace::NetworkSystemFusion::JoinRandomPublicRoom)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x56dab3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"JoinRandomPublicRoom", {}, {::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.JoinFriendsRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemFusion::*)(::StringW, int32_t, ::StringW, ::StringW)>(&::GlobalNamespace::NetworkSystemFusion::JoinFriendsRoom)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56dac5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.JoinPubWithFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::JoinPubWithFriends)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56dad94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.ReturnToSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::ReturnToSinglePlayer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56dadcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.CloseRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemFusion::*)(::Fusion::ShutdownReason)>(&::GlobalNamespace::NetworkSystemFusion::CloseRunner)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x56daea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"CloseRunner", {}, {::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.MigrateHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::Fusion::NetworkRunner*, ::Fusion::HostMigrationToken*)>(&::GlobalNamespace::NetworkSystemFusion::MigrateHost)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56daf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"MigrateHost", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.ResetSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::ResetSystem)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56db03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"ResetSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.AddVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::AddVoice)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56db0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"AddVoice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.SetupVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::SetupVoice)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x56db0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"SetupVoice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.AddRemoteVoiceAddedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*)>(&::GlobalNamespace::NetworkSystemFusion::AddRemoteVoiceAddedCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56db560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.AttachCallbackTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::AttachCallbackTargets)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56db60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"AttachCallbackTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.RegisterForNetworkCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::Fusion::INetworkRunnerCallbacks*)>(&::GlobalNamespace::NetworkSystemFusion::RegisterForNetworkCallbacks)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x56db674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"RegisterForNetworkCallbacks", {}, {::i2c::type_of<::Fusion::INetworkRunnerCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.AttachSceneObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(bool)>(&::GlobalNamespace::NetworkSystemFusion::AttachSceneObjects)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56db810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"AttachSceneObjects", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.AttachObjectInGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemFusion::AttachObjectInGame)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x56db8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.ProcessRegistrationQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::ProcessRegistrationQueue)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x56dba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"ProcessRegistrationQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&::GlobalNamespace::NetworkSystemFusion::NetInstantiate)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x56dbe3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, bool)>(&::GlobalNamespace::NetworkSystemFusion::NetInstantiate)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x56dc0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, uint8_t, ::ArrayW<::System::Object*>, ::Fusion::NetworkRunner_OnBeforeSpawned*)>(&::GlobalNamespace::NetworkSystemFusion::NetInstantiate)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x56dc64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.NetDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemFusion::NetDestroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.ShouldSpawnLocally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)(int32_t)>(&::GlobalNamespace::NetworkSystemFusion::ShouldSpawnLocally)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56dc8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_RPC*, bool)>(&::GlobalNamespace::NetworkSystemFusion::CallRPC)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x56dc9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_StringRPC*, ::StringW, bool)>(&::GlobalNamespace::NetworkSystemFusion::CallRPC)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x56dcd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(int32_t, ::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_RPC*)>(&::GlobalNamespace::NetworkSystemFusion::CallRPC)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56dd010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(int32_t, ::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_StringRPC*, ::StringW)>(&::GlobalNamespace::NetworkSystemFusion::CallRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56dd4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.NetRaiseEventReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(uint8_t, ::System::Object*)>(&::GlobalNamespace::NetworkSystemFusion::NetRaiseEventReliable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56dd4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.NetRaiseEventUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(uint8_t, ::System::Object*)>(&::GlobalNamespace::NetworkSystemFusion::NetRaiseEventUnreliable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56dd518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.NetRaiseEventReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(uint8_t, ::System::Object*, ::GlobalNamespace::NetEventOptions*)>(&::GlobalNamespace::NetworkSystemFusion::NetRaiseEventReliable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56dd564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.NetRaiseEventUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(uint8_t, ::System::Object*, ::GlobalNamespace::NetEventOptions*)>(&::GlobalNamespace::NetworkSystemFusion::NetRaiseEventUnreliable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56dd5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetRandomWeightedRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::GetRandomWeightedRegion)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56dd634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.AwaitSceneReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::AwaitSceneReady)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56dd66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.OnJoinedSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::OnJoinedSession)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56dd744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnJoinedSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.OnJoinFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::Fusion::Sockets::NetConnectFailedReason)>(&::GlobalNamespace::NetworkSystemFusion::OnJoinFailed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56dd748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnJoinFailed", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.OnDisconnectedFromSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::OnDisconnectedFromSession)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56dd760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnDisconnectedFromSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.OnRunnerShutDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::OnRunnerShutDown)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56dd7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnRunnerShutDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.OnFusionPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::NetworkSystemFusion::OnFusionPlayerJoined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56dd87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnFusionPlayerJoined", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.AwaitJoiningPlayerClientReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemFusion::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::NetworkSystemFusion::AwaitJoiningPlayerClientReady)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x56dd884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"AwaitJoiningPlayerClientReady", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.OnFusionPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::NetworkSystemFusion::OnFusionPlayerLeft)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x56dd96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnFusionPlayerLeft", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.UpdateNetPlayerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::UpdateNetPlayerList)> {
  constexpr static std::size_t size = 0xd24;
  constexpr static std::size_t addrs = 0x56ddc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.SetPlayerObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*, ::System::Nullable_1<int32_t>)>(&::GlobalNamespace::NetworkSystemFusion::SetPlayerObject)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56de9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetPlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::GlobalNamespace::NetworkSystemFusion::*)(int32_t)>(&::GlobalNamespace::NetworkSystemFusion::GetPlayerRef)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x56dd0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"GetPlayerRef", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::GetLocalPlayer)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x56dea88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystemFusion::*)(int32_t)>(&::GlobalNamespace::NetworkSystemFusion::GetPlayer)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x56dec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.SetMyNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::StringW)>(&::GlobalNamespace::NetworkSystemFusion::SetMyNickName)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x56def94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetMyNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::GetMyNickName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56df37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetMyDefaultName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::GetMyDefaultName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56df3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)(int32_t)>(&::GlobalNamespace::NetworkSystemFusion::GetNickName)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56df44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemFusion::GetNickName)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x56df480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetMyUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::GetMyUserID)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56df69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)(int32_t)>(&::GlobalNamespace::NetworkSystemFusion::GetUserID)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56df6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemFusion::GetUserID)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x56df78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.SetMyTutorialComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::SetMyTutorialComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56df884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetMyTutorialCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::GetMyTutorialCompletion)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56df934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetPlayerTutorialCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)(int32_t)>(&::GlobalNamespace::NetworkSystemFusion::GetPlayerTutorialCompletion)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x56df9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetPlayerPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemFusion::GetPlayerPlatform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x56dfbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetPlayerMothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemFusion::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemFusion::GetPlayerMothershipId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x56dfc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GlobalPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::GlobalPlayerCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56dfc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.GetOwningPlayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemFusion::GetOwningPlayerID)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56dfcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.IsObjectLocallyOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemFusion::IsObjectLocallyOwned)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56dfdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.IsTotalAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::IsTotalAuthority)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56dfeb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.ShouldWriteObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemFusion::ShouldWriteObjectData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56dff1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.ShouldUpdateObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemFusion::ShouldUpdateObject)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x56dff98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.IsObjectRoomObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemFusion::IsObjectRoomObject)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56e00f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.OnMasterSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemFusion::OnMasterSwitch)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56e01a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnMasterSwitch", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x56e03a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion.__n__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)()>(&::GlobalNamespace::NetworkSystemFusion::__n__0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56e078c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"<>n__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion._SetupVoice_b__70_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*)>(&::GlobalNamespace::NetworkSystemFusion::_SetupVoice_b__70_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56e08d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"<SetupVoice>b__70_0", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion._AttachSceneObjects_b__76_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemFusion::_AttachSceneObjects_b__76_0)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x56e08f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"<AttachSceneObjects>b__76_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion._UpdateNetPlayerList_b__103_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemFusion::_UpdateNetPlayerList_b__103_1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56e0b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"<UpdateNetPlayerList>b__103_1", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Fusion::NetworkRunner>& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get__runner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner_k__BackingField;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get__runner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner_k__BackingField;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set__runner_k__BackingField(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runner_k__BackingField = value;
}
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_internalState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalState;
}
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_internalState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalState;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_internalState(::GlobalNamespace::NetworkSystemFusion_InternalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalState = value;
}
constexpr ::UnityW<::GlobalNamespace::FusionInternalRPCs>& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_internalRPCProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalRPCProvider;
}
constexpr ::UnityW<::GlobalNamespace::FusionInternalRPCs> const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_internalRPCProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalRPCProvider;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_internalRPCProvider(::UnityW<::GlobalNamespace::FusionInternalRPCs>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalRPCProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::FusionCallbackHandler>& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_callbackHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackHandler;
}
constexpr ::UnityW<::GlobalNamespace::FusionCallbackHandler> const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_callbackHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackHandler;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_callbackHandler(::UnityW<::GlobalNamespace::FusionCallbackHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackHandler = value;
}
constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler>& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_regionCrawler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionCrawler;
}
constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler> const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_regionCrawler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionCrawler;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_regionCrawler(::UnityW<::GlobalNamespace::FusionRegionCrawler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regionCrawler = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_volatileNetObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volatileNetObj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_volatileNetObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volatileNetObj;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_volatileNetObj(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volatileNetObj = value;
}
constexpr ::Fusion::Photon::Realtime::AuthenticationValues*& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_cachedPlayfabAuth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedPlayfabAuth;
}
constexpr ::Fusion::Photon::Realtime::AuthenticationValues* const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_cachedPlayfabAuth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedPlayfabAuth;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_cachedPlayfabAuth(::Fusion::Photon::Realtime::AuthenticationValues*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedPlayfabAuth = value;
}
constexpr bool& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_lastConnectAttempt_WasFull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastConnectAttempt_WasFull;
}
constexpr bool const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_lastConnectAttempt_WasFull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastConnectAttempt_WasFull;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_lastConnectAttempt_WasFull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastConnectAttempt_WasFull = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_FusionVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FusionVoice;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_FusionVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FusionVoice;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_FusionVoice(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FusionVoice = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomObjectProvider>& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_myObjectProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myObjectProvider;
}
constexpr ::UnityW<::GlobalNamespace::CustomObjectProvider> const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_myObjectProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myObjectProvider;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_myObjectProvider(::UnityW<::GlobalNamespace::CustomObjectProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myObjectProvider = value;
}
constexpr ::GorillaTag::ObjectPool_1<::GlobalNamespace::FusionNetPlayer*>*& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_playerPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPool;
}
constexpr ::GorillaTag::ObjectPool_1<::GlobalNamespace::FusionNetPlayer*>* const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_playerPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPool;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_playerPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::FusionNetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPool = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_cachedNetSceneObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedNetSceneObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_cachedNetSceneObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedNetSceneObjects;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_cachedNetSceneObjects(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedNetSceneObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_objectsThatNeedCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsThatNeedCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>* const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_objectsThatNeedCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsThatNeedCallbacks;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_objectsThatNeedCallbacks(::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsThatNeedCallbacks = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::Fusion::NetworkObject>>*& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_registrationQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registrationQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::Fusion::NetworkObject>>* const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_registrationQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registrationQueue;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_registrationQueue(::System::Collections::Generic::Queue_1<::UnityW<::Fusion::NetworkObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registrationQueue = value;
}
constexpr bool& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_isProcessingQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isProcessingQueue;
}
constexpr bool const& GlobalNamespace::NetworkSystemFusion::__cordl_internal_get_isProcessingQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isProcessingQueue;
}
constexpr void GlobalNamespace::NetworkSystemFusion::__cordl_internal_set_isProcessingQueue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isProcessingQueue = value;
}
inline ::UnityW<::Fusion::NetworkRunner> GlobalNamespace::NetworkSystemFusion::get_runner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"get_runner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkRunner>>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::set_runner(::Fusion::NetworkRunner*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"set_runner", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::NetworkSystemFusion::get_IsOnline()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemFusion::get_InRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::get_RoomName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::RoomStringStripped()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::get_GameModeString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::get_CurrentRegion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemFusion::get_SessionIsPrivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemFusion::get_SessionIsSubscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemFusion::get_LocalPlayerID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::get_CurrentPhotonBackend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline double_t GlobalNamespace::NetworkSystemFusion::get_SimTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::NetworkSystemFusion::get_SimDeltaTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemFusion::get_SimTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemFusion::get_TickRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemFusion::get_ServerTimestamp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemFusion::get_RoomPlayerCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::Photon::Voice::Unity::VoiceConnection> GlobalNamespace::NetworkSystemFusion::get_VoiceConnection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::VoiceConnection>>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemFusion::get_IsMasterClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystemFusion::get_MasterClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::Initialise()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::CreateRegionCrawler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"CreateRegionCrawler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemFusion::AwaitAuth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"AwaitAuth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::FinishAuthenticating()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* GlobalNamespace::NetworkSystemFusion::ConnectToRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, int32_t  regionIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*>(this, ___internal_method, roomName, opts, regionIndex);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NetworkSystemFusion::Connect(::Fusion::GameMode  mode, ::StringW  targetSessionName, ::GlobalNamespace::RoomConfig*  opts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::GameMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, mode, targetSessionName, opts);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* GlobalNamespace::NetworkSystemFusion::MakeOrJoinRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"MakeOrJoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*>(this, ___internal_method, roomName, opts);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* GlobalNamespace::NetworkSystemFusion::JoinRandomPublicRoom(::GlobalNamespace::RoomConfig*  opts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"JoinRandomPublicRoom", {}, {::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*>(this, ___internal_method, opts);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemFusion::JoinFriendsRoom(::StringW  userID, int32_t  actorIDToFollow, ::StringW  keyToFollow, ::StringW  shufflerToFollow)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, userID, actorIDToFollow, keyToFollow, shufflerToFollow);
}
inline void GlobalNamespace::NetworkSystemFusion::JoinPubWithFriends()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemFusion::ReturnToSinglePlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemFusion::CloseRunner(::Fusion::ShutdownReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"CloseRunner", {}, {::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, reason);
}
inline void GlobalNamespace::NetworkSystemFusion::MigrateHost(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"MigrateHost", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hostMigrationToken);
}
inline void GlobalNamespace::NetworkSystemFusion::ResetSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"ResetSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::AddVoice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"AddVoice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::SetupVoice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"SetupVoice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::AddRemoteVoiceAddedCallback(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::NetworkSystemFusion::AttachCallbackTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"AttachCallbackTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::RegisterForNetworkCallbacks(::Fusion::INetworkRunnerCallbacks*  callbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"RegisterForNetworkCallbacks", {}, {::i2c::type_of<::Fusion::INetworkRunnerCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbacks);
}
inline void GlobalNamespace::NetworkSystemFusion::AttachSceneObjects(bool  onlyCached)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"AttachSceneObjects", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onlyCached);
}
inline void GlobalNamespace::NetworkSystemFusion::AttachObjectInGame(::UnityEngine::GameObject*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void GlobalNamespace::NetworkSystemFusion::ProcessRegistrationQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"ProcessRegistrationQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystemFusion::NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, isRoomObject);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystemFusion::NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  playerAuthID, bool  isRoomObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, playerAuthID, isRoomObject);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystemFusion::NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject, uint8_t  group, ::ArrayW<::System::Object*>  data, ::Fusion::NetworkRunner_OnBeforeSpawned*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, isRoomObject, group, data, callback);
}
inline void GlobalNamespace::NetworkSystemFusion::NetDestroy(::UnityEngine::GameObject*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline bool GlobalNamespace::NetworkSystemFusion::ShouldSpawnLocally(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerID);
}
inline void GlobalNamespace::NetworkSystemFusion::CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, bool  sendToSelf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, rpcMethod, sendToSelf);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::NetworkSystemFusion::CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args, bool  sendToSelf)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 23}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, rpcMethod, args, sendToSelf);
}
inline void GlobalNamespace::NetworkSystemFusion::CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message, bool  sendToSelf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, rpcMethod, message, sendToSelf);
}
inline void GlobalNamespace::NetworkSystemFusion::CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerID, component, rpcMethod);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::NetworkSystemFusion::CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 26}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerID, component, rpcMethod, args);
}
inline void GlobalNamespace::NetworkSystemFusion::CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerID, component, rpcMethod, message);
}
inline void GlobalNamespace::NetworkSystemFusion::NetRaiseEventReliable(uint8_t  eventCode, ::System::Object*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, data);
}
inline void GlobalNamespace::NetworkSystemFusion::NetRaiseEventUnreliable(uint8_t  eventCode, ::System::Object*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, data);
}
inline void GlobalNamespace::NetworkSystemFusion::NetRaiseEventReliable(uint8_t  eventCode, ::System::Object*  data, ::GlobalNamespace::NetEventOptions*  opts)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, data, opts);
}
inline void GlobalNamespace::NetworkSystemFusion::NetRaiseEventUnreliable(uint8_t  eventCode, ::System::Object*  data, ::GlobalNamespace::NetEventOptions*  opts)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, data, opts);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::GetRandomWeightedRegion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemFusion::AwaitSceneReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::OnJoinedSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnJoinedSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::OnJoinFailed(::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnJoinFailed", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void GlobalNamespace::NetworkSystemFusion::OnDisconnectedFromSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnDisconnectedFromSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::OnRunnerShutDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnRunnerShutDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::OnFusionPlayerJoined(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnFusionPlayerJoined", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemFusion::AwaitJoiningPlayerClientReady(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"AwaitJoiningPlayerClientReady", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, player);
}
inline void GlobalNamespace::NetworkSystemFusion::OnFusionPlayerLeft(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnFusionPlayerLeft", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::NetworkSystemFusion::UpdateNetPlayerList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::SetPlayerObject(::UnityEngine::GameObject*  playerInstance, ::System::Nullable_1<int32_t>  owningPlayerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerInstance, owningPlayerID);
}
inline ::Fusion::PlayerRef GlobalNamespace::NetworkSystemFusion::GetPlayerRef(int32_t  playerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"GetPlayerRef", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method, playerID);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystemFusion::GetLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystemFusion::GetPlayer(int32_t  PlayerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method, PlayerID);
}
inline void GlobalNamespace::NetworkSystemFusion::SetMyNickName(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::GetMyNickName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::GetMyDefaultName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::GetNickName(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::GetNickName(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::GetMyUserID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::GetUserID(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::GetUserID(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline void GlobalNamespace::NetworkSystemFusion::SetMyTutorialComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemFusion::GetMyTutorialCompletion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemFusion::GetPlayerTutorialCompletion(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::GetPlayerPlatform(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::NetworkSystemFusion::GetPlayerMothershipId(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline int32_t GlobalNamespace::NetworkSystemFusion::GlobalPlayerCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemFusion::GetOwningPlayerID(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystemFusion::IsObjectLocallyOwned(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystemFusion::IsTotalAuthority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemFusion::ShouldWriteObjectData(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystemFusion::ShouldUpdateObject(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystemFusion::IsObjectRoomObject(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void GlobalNamespace::NetworkSystemFusion::OnMasterSwitch(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"OnMasterSwitch", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::NetworkSystemFusion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::__n__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"<>n__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion::_SetupVoice_b__70_0(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"<SetupVoice>b__70_0", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::NetworkSystemFusion::_AttachSceneObjects_b__76_0(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"<AttachSceneObjects>b__76_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::NetworkSystemFusion::_UpdateNetPlayerList_b__103_1(::GlobalNamespace::NetPlayer*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion*>(),
                        {"<UpdateNetPlayerList>b__103_1", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::GlobalNamespace::NetworkSystemFusion* GlobalNamespace::NetworkSystemFusion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystemFusion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemFusion::NetworkSystemFusion()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::*)()>(&::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e0b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0._AttachSceneObjects_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::*)(::Fusion::NetworkObject*)>(&::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::_AttachSceneObjects_b__1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56e0e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0*>(),
                        {"<AttachSceneObjects>b__1", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::__cordl_internal_get_obj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::__cordl_internal_get_obj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obj;
}
constexpr void GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::__cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obj = value;
}
inline void GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::_AttachSceneObjects_b__1(::Fusion::NetworkObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0*>(),
                        {"<AttachSceneObjects>b__1", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0* GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0::NetworkSystemFusion___c__DisplayClass76_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::*)()>(&::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e0cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0._JoinFriendsRoom_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::*)(::PlayFab::ClientModels::GetSharedGroupDataResult*)>(&::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::_JoinFriendsRoom_b__0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56e0cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*>(),
                        {"<JoinFriendsRoom>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0._JoinFriendsRoom_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::_JoinFriendsRoom_b__1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56e0dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*>(),
                        {"<JoinFriendsRoom>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*& GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>* const& GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::__cordl_internal_set_data(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr bool& GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::__cordl_internal_get_callbackFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackFinished;
}
constexpr bool const& GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::__cordl_internal_get_callbackFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackFinished;
}
constexpr void GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::__cordl_internal_set_callbackFinished(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackFinished = value;
}
inline void GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::_JoinFriendsRoom_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*>(),
                        {"<JoinFriendsRoom>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::_JoinFriendsRoom_b__1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*>(),
                        {"<JoinFriendsRoom>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0* GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0::NetworkSystemFusion___c__DisplayClass63_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion___c::*)()>(&::GlobalNamespace::NetworkSystemFusion___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e0c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion___c._UpdateNetPlayerList_b__103_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemFusion___c::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemFusion___c::_UpdateNetPlayerList_b__103_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56e0c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c*>(),
                        {"<UpdateNetPlayerList>b__103_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystemFusion___c::setStaticF___9(::GlobalNamespace::NetworkSystemFusion___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::NetworkSystemFusion___c*, "<>9", ::GlobalNamespace::NetworkSystemFusion___c*>(std::forward<::GlobalNamespace::NetworkSystemFusion___c*>(value));
}
inline ::GlobalNamespace::NetworkSystemFusion___c* GlobalNamespace::NetworkSystemFusion___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::NetworkSystemFusion___c*, "<>9", ::GlobalNamespace::NetworkSystemFusion___c*>();
}
inline void GlobalNamespace::NetworkSystemFusion___c::setStaticF___9__103_0(::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*, "<>9__103_0", ::GlobalNamespace::NetworkSystemFusion___c*>(std::forward<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::NetworkSystemFusion___c::getStaticF___9__103_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*, "<>9__103_0", ::GlobalNamespace::NetworkSystemFusion___c*>();
}
inline void GlobalNamespace::NetworkSystemFusion___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemFusion___c::_UpdateNetPlayerList_b__103_0(::GlobalNamespace::NetPlayer*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion___c*>(),
                        {"<UpdateNetPlayerList>b__103_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::GlobalNamespace::NetworkSystemFusion___c* GlobalNamespace::NetworkSystemFusion___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystemFusion___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemFusion___c::NetworkSystemFusion___c()   {
}
