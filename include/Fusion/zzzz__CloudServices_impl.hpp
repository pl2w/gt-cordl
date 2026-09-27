#pragma once
// IWYU pragma private; include "Fusion/CloudServices.hpp"
#include "Fusion/Protocol/zzzz__PeerMode_impl.hpp"
#include "Fusion/Protocol/zzzz__PluginGameMode_impl.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/zzzz__GameMode_impl.hpp"
#include "Fusion/zzzz__JoinProcessStage_impl.hpp"
#include "Fusion/zzzz__NetworkRunnerInitializeArgs_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__CloudServices_def.hpp"
#include "Fusion/Async/zzzz__AsyncOperationHandler_1_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FusionAppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LobbyType_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Region_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "Fusion/Protocol/zzzz__Disconnect_def.hpp"
#include "Fusion/Protocol/zzzz__DummyTrafficSync_def.hpp"
#include "Fusion/Protocol/zzzz__HostMigration_def.hpp"
#include "Fusion/Protocol/zzzz__ICommunicator_def.hpp"
#include "Fusion/Protocol/zzzz__Join_def.hpp"
#include "Fusion/Protocol/zzzz__NetworkConfigSync_def.hpp"
#include "Fusion/Protocol/zzzz__PlayerRefMapping_def.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
#include "Fusion/Protocol/zzzz__ReflexiveInfo_def.hpp"
#include "Fusion/Protocol/zzzz__Snapshot_def.hpp"
#include "Fusion/Protocol/zzzz__Start_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__NATType_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunResult_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/zzzz__CloudCommunicator_def.hpp"
#include "Fusion/zzzz__CloudServicesMetadata_def.hpp"
#include "Fusion/zzzz__CloudServices_def.hpp"
#include "Fusion/zzzz__JoinProcessStage_def.hpp"
#include "Fusion/zzzz__NATPunchStage_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_def.hpp"
#include "Fusion/zzzz__NetworkRunnerInitializeArgs_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SessionInfo_def.hpp"
#include "Fusion/zzzz__SessionLobby_def.hpp"
#include "Fusion/zzzz__SessionProperty_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "Fusion/zzzz__StartGameArgs_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::CloudServices.OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::OnConnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f707fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f70800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnCustomAuthenticationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::StringW)>(&::Fusion::CloudServices::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f70804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::CloudServices::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f70984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::CloudServices::OnDisconnected)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5f70998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnRegionListReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&::Fusion::CloudServices::OnRegionListReceived)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5f70fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::OnCreatedRoom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f71190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::OnJoinedRoom)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f71258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::OnLeftRoom)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f7137c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnFriendListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*)>(&::Fusion::CloudServices::OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f71430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int16_t, ::StringW)>(&::Fusion::CloudServices::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f71434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int16_t, ::StringW)>(&::Fusion::CloudServices::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f71438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int16_t, ::StringW)>(&::Fusion::CloudServices::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f7143c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnJoinedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::OnJoinedLobby)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f71440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnLeftLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::OnLeftLobby)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f715b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnRoomListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*)>(&::Fusion::CloudServices::OnRoomListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f71674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnLobbyStatisticsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*)>(&::Fusion::CloudServices::OnLobbyStatisticsUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f719ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OperationFailHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int16_t, ::StringW)>(&::Fusion::CloudServices::OperationFailHandler)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f70810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OperationFailHandler", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.HandlePhotonCloudDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)(::Fusion::ShutdownReason)>(&::Fusion::CloudServices::HandlePhotonCloudDisconnect)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5f70c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandlePhotonCloudDisconnect", {}, {::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_IsCloudReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_IsCloudReady)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f71b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsCloudReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_UserId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f71b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_IsInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_IsInRoom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f71bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsInRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_IsInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_IsInLobby)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f71c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsInLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_CurrentJoinStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::JoinProcessStage (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_CurrentJoinStage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f71c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_CurrentJoinStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_CurrentProtocolMessageVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Protocol::ProtocolMessageVersion (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_CurrentProtocolMessageVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f71c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_CurrentProtocolMessageVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_SessionSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_SessionSlots)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f71c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_SessionSlots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_IsMasterClient)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f71cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsMasterClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_AuthenticationValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::AuthenticationValues* (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_AuthenticationValues)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f71d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_AuthenticationValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_Communicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Protocol::ICommunicator* (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_Communicator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f71d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_Communicator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_CachedRegionSummary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_CachedRegionSummary)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f71d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_CachedRegionSummary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_IsNATPunchthroughEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_IsNATPunchthroughEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f71d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsNATPunchthroughEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.set_IsNATPunchthroughEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(bool)>(&::Fusion::CloudServices::set_IsNATPunchthroughEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f71d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"set_IsNATPunchthroughEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_IsEncryptionEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_IsEncryptionEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f71d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsEncryptionEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_CustomSTUNServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_CustomSTUNServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f71de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_CustomSTUNServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.set_CustomSTUNServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::StringW)>(&::Fusion::CloudServices::set_CustomSTUNServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f71df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"set_CustomSTUNServer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_NATType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::Stun::NATType (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_NATType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f71df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_NATType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_LocalPlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_LocalPlayerRef)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f71e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_LocalPlayerRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.get_IsServerOrMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::get_IsServerOrMasterClient)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f71ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsServerOrMasterClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::Fusion::NetworkRunner*, ::Fusion::Photon::Realtime::FusionAppSettings*, ::Fusion::CloudCommunicator*)>(&::Fusion::CloudServices::_ctor)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x5f71f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Photon::Realtime::FusionAppSettings*>(), ::i2c::type_of<::Fusion::CloudCommunicator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.ExtractCommunicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::CloudCommunicator* (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::ExtractCommunicator)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f72694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"ExtractCommunicator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::Update)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f72778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.ConnectToCloud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::CloudServices::*)(::Fusion::Photon::Realtime::AppSettings*, ::Fusion::Photon::Realtime::AuthenticationValues*, ::System::Threading::CancellationToken, ::System::Nullable_1<bool>)>(&::Fusion::CloudServices::ConnectToCloud)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5f727a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"ConnectToCloud", {}, {::i2c::type_of<::Fusion::Photon::Realtime::AppSettings*>(), ::i2c::type_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.JoinSessionLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (::Fusion::CloudServices::*)(::Fusion::SessionLobby, ::StringW, ::Fusion::Photon::Realtime::LobbyType)>(&::Fusion::CloudServices::JoinSessionLobby)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5f72914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"JoinSessionLobby", {}, {::i2c::type_of<::Fusion::SessionLobby>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Photon::Realtime::LobbyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.EnterRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (::Fusion::CloudServices::*)(::Fusion::StartGameArgs, ::System::Threading::CancellationToken)>(&::Fusion::CloudServices::EnterRoom)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x5f72b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"EnterRoom", {}, {::i2c::type_of<::Fusion::StartGameArgs>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.DisconnectFromCloud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::DisconnectFromCloud)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f733d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"DisconnectFromCloud", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.GetActorUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::CloudServices::*)(int32_t)>(&::Fusion::CloudServices::GetActorUserID)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f734f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"GetActorUserID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.TryGetActorIdByUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)(int64_t, ::by_ref<int32_t>)>(&::Fusion::CloudServices::TryGetActorIdByUniqueId)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f735a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"TryGetActorIdByUniqueId", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnInternalConnectionAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t, int32_t, ::by_ref<bool>, ::by_ref<::Fusion::Sockets::NetAddress>)>(&::Fusion::CloudServices::OnInternalConnectionAttempt)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5f73640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnInternalConnectionAttempt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetAddress>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::Fusion::NATPunchStage, ::Fusion::Sockets::NetAddress)>(&::Fusion::CloudServices::Connect)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f7382c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::NATPunchStage>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f73984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnRoomChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::OnRoomChanged)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f739bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnRoomChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.UpdateRoomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*)>(&::Fusion::CloudServices::UpdateRoomProperties)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f73c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"UpdateRoomProperties", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.UpdateRoomIsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)(bool)>(&::Fusion::CloudServices::UpdateRoomIsOpen)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f73ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"UpdateRoomIsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.UpdateRoomIsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)(bool)>(&::Fusion::CloudServices::UpdateRoomIsVisible)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f73d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"UpdateRoomIsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.OnRoomListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*)>(&::Fusion::CloudServices::OnRoomListChanged)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5f71678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnRoomListChanged", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::CloudServices::*)(::System::Threading::CancellationToken)>(&::Fusion::CloudServices::Join)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f73e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Join", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.SendNetworkSyncMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::Fusion::NetworkProjectConfig*)>(&::Fusion::CloudServices::SendNetworkSyncMessage)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f73f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"SendNetworkSyncMessage", {}, {::i2c::type_of<::Fusion::NetworkProjectConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.SendReflexiveInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::Fusion::Sockets::Stun::StunResult*)>(&::Fusion::CloudServices::SendReflexiveInfo)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f74070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"SendReflexiveInfo", {}, {::i2c::type_of<::Fusion::Sockets::Stun::StunResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.SendChangeMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t)>(&::Fusion::CloudServices::SendChangeMasterClient)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f741b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"SendChangeMasterClient", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.SendStateSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::ArrayW<uint8_t>, int32_t, int32_t, uint32_t)>(&::Fusion::CloudServices::SendStateSnapshot)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5f74244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"SendStateSnapshot", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.HandleJoinMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t, ::Fusion::Protocol::Join*)>(&::Fusion::CloudServices::HandleJoinMessage)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f743f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleJoinMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::Join*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.HandleStartMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t, ::Fusion::Protocol::Start*)>(&::Fusion::CloudServices::HandleStartMessage)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f744b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleStartMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::Start*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.HandleDisconnectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t, ::Fusion::Protocol::Disconnect*)>(&::Fusion::CloudServices::HandleDisconnectMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f745b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleDisconnectMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::Disconnect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.HandleNetworkConfigMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t, ::Fusion::Protocol::NetworkConfigSync*)>(&::Fusion::CloudServices::HandleNetworkConfigMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f7464c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleNetworkConfigMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::NetworkConfigSync*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.HandleReflexiveInfoMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t, ::Fusion::Protocol::ReflexiveInfo*)>(&::Fusion::CloudServices::HandleReflexiveInfoMessage)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f74650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleReflexiveInfoMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::ReflexiveInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.HandleHostMigrationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t, ::Fusion::Protocol::HostMigration*)>(&::Fusion::CloudServices::HandleHostMigrationMessage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f74750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleHostMigrationMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::HostMigration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.HandleSnapshotMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t, ::Fusion::Protocol::Snapshot*)>(&::Fusion::CloudServices::HandleSnapshotMessage)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5f74820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleSnapshotMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::Snapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.HandleDummyTrafficSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t, ::Fusion::Protocol::DummyTrafficSync*)>(&::Fusion::CloudServices::HandleDummyTrafficSync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f74a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleDummyTrafficSync", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::DummyTrafficSync*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.ConfirmJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::ConfirmJoin)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f74d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"ConfirmJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.HandlePlayerRefMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(int32_t, ::Fusion::Protocol::PlayerRefMapping*)>(&::Fusion::CloudServices::HandlePlayerRefMapping)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f74ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandlePlayerRefMapping", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::PlayerRefMapping*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.StartBackgroundCloudServices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::StartBackgroundCloudServices)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5f74f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"StartBackgroundCloudServices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.Service_KeepAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::Service_KeepAlive)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f750f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Service_KeepAlive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.Service_HostMigrationSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::Service_HostMigrationSnapshot)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f75268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Service_HostMigrationSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.Run_ReversePing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::CloudServices::Run_ReversePing)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f753ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Run_ReversePing", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.SetupDummyTraffic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::Fusion::Protocol::DummyTrafficSync*)>(&::Fusion::CloudServices::SetupDummyTraffic)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5f74ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"SetupDummyTraffic", {}, {::i2c::type_of<::Fusion::Protocol::DummyTrafficSync*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.QueryReflexiveInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunResult*>* (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::QueryReflexiveInfo)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f75514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"QueryReflexiveInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.UpdateInitializeArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::Fusion::NetworkRunnerInitializeArgs)>(&::Fusion::CloudServices::UpdateInitializeArgs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f75658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"UpdateInitializeArgs", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.CheckSubnet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::CloudServices::CheckSubnet)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f75684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"CheckSubnet", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices.UpdateSessionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::Fusion::SessionInfo*, ::Fusion::Photon::Realtime::RoomInfo*, ::StringW)>(&::Fusion::CloudServices::UpdateSessionInfo)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5f73a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"UpdateSessionInfo", {}, {::i2c::type_of<::Fusion::SessionInfo*>(), ::i2c::type_of<::Fusion::Photon::Realtime::RoomInfo*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices._HandleReflexiveInfoMessage_b__92_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::CloudServices::*)(::System::Threading::CancellationToken)>(&::Fusion::CloudServices::_HandleReflexiveInfoMessage_b__92_0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f757d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"<HandleReflexiveInfoMessage>b__92_0", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices._SetupDummyTraffic_b__105_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::_SetupDummyTraffic_b__105_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f75904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"<SetupDummyTraffic>b__105_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices._SetupDummyTraffic_g__SendDummyTraffic_105_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices::*)(::ArrayW<uint8_t>)>(&::Fusion::CloudServices::_SetupDummyTraffic_g__SendDummyTraffic_105_1)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5f759bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"<SetupDummyTraffic>g__SendDummyTraffic|105_1", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices._QueryReflexiveInfo_g__KeepRunning_106_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)()>(&::Fusion::CloudServices::_QueryReflexiveInfo_g__KeepRunning_106_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f75b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"<QueryReflexiveInfo>g__KeepRunning|106_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices._QueryReflexiveInfo_g__SendAnyData_106_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices::*)(::ArrayW<uint8_t>, ::Fusion::Sockets::NetAddress)>(&::Fusion::CloudServices::_QueryReflexiveInfo_g__SendAnyData_106_1)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5f75b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"<QueryReflexiveInfo>g__SendAnyData|106_1", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::CloudServices::__cordl_internal_get__IsNATPunchthroughEnabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsNATPunchthroughEnabled_k__BackingField;
}
constexpr bool const& Fusion::CloudServices::__cordl_internal_get__IsNATPunchthroughEnabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsNATPunchthroughEnabled_k__BackingField;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__IsNATPunchthroughEnabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsNATPunchthroughEnabled_k__BackingField = value;
}
constexpr ::StringW& Fusion::CloudServices::__cordl_internal_get__CustomSTUNServer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CustomSTUNServer_k__BackingField;
}
constexpr ::StringW const& Fusion::CloudServices::__cordl_internal_get__CustomSTUNServer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CustomSTUNServer_k__BackingField;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__CustomSTUNServer_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CustomSTUNServer_k__BackingField = value;
}
constexpr ::Fusion::CloudServicesMetadata*& Fusion::CloudServices::__cordl_internal_get__metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadata;
}
constexpr ::Fusion::CloudServicesMetadata* const& Fusion::CloudServices::__cordl_internal_get__metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadata;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__metadata(::Fusion::CloudServicesMetadata*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metadata = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::CloudServices::__cordl_internal_get__runner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::CloudServices::__cordl_internal_get__runner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runner = value;
}
constexpr ::Fusion::CloudCommunicator*& Fusion::CloudServices::__cordl_internal_get__communicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____communicator;
}
constexpr ::Fusion::CloudCommunicator* const& Fusion::CloudServices::__cordl_internal_get__communicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____communicator;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__communicator(::Fusion::CloudCommunicator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____communicator = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionInfo*>*& Fusion::CloudServices::__cordl_internal_get__cachedSessionList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedSessionList;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionInfo*>* const& Fusion::CloudServices::__cordl_internal_get__cachedSessionList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedSessionList;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__cachedSessionList(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedSessionList = value;
}
constexpr bool& Fusion::CloudServices::__cordl_internal_get__cloudServerDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloudServerDisconnected;
}
constexpr bool const& Fusion::CloudServices::__cordl_internal_get__cloudServerDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloudServerDisconnected;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__cloudServerDisconnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cloudServerDisconnected = value;
}
constexpr bool& Fusion::CloudServices::__cordl_internal_get__tryingToReconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tryingToReconnect;
}
constexpr bool const& Fusion::CloudServices::__cordl_internal_get__tryingToReconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tryingToReconnect;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__tryingToReconnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tryingToReconnect = value;
}
constexpr int32_t& Fusion::CloudServices::__cordl_internal_get__rejoinAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rejoinAttempts;
}
constexpr int32_t const& Fusion::CloudServices::__cordl_internal_get__rejoinAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rejoinAttempts;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__rejoinAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rejoinAttempts = value;
}
constexpr ::Fusion::Async::AsyncOperationHandler_1<::Fusion::Protocol::Join*>*& Fusion::CloudServices::__cordl_internal_get__joinAsyncHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinAsyncHandler;
}
constexpr ::Fusion::Async::AsyncOperationHandler_1<::Fusion::Protocol::Join*>* const& Fusion::CloudServices::__cordl_internal_get__joinAsyncHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinAsyncHandler;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__joinAsyncHandler(::Fusion::Async::AsyncOperationHandler_1<::Fusion::Protocol::Join*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joinAsyncHandler = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::CloudServices::__cordl_internal_get__dummyData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyData;
}
constexpr ::ArrayW<uint8_t> const& Fusion::CloudServices::__cordl_internal_get__dummyData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyData;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__dummyData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dummyData = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Fusion::CloudServices::__cordl_internal_get__dummyTrafficCts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyTrafficCts;
}
constexpr ::System::Threading::CancellationTokenSource* const& Fusion::CloudServices::__cordl_internal_get__dummyTrafficCts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyTrafficCts;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__dummyTrafficCts(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dummyTrafficCts = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Fusion::CloudServices::__cordl_internal_get__dummyTrafficLinkCts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyTrafficLinkCts;
}
constexpr ::System::Threading::CancellationTokenSource* const& Fusion::CloudServices::__cordl_internal_get__dummyTrafficLinkCts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyTrafficLinkCts;
}
constexpr void Fusion::CloudServices::__cordl_internal_set__dummyTrafficLinkCts(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dummyTrafficLinkCts = value;
}
inline void Fusion::CloudServices::OnConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices::OnConnectedToMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices::OnCustomAuthenticationFailed(::StringW  debugMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMessage);
}
inline void Fusion::CloudServices::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Fusion::CloudServices::OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Fusion::CloudServices::OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler*  regionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandler);
}
inline void Fusion::CloudServices::OnCreatedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices::OnFriendListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*  friendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendList);
}
inline void Fusion::CloudServices::OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::CloudServices::OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::CloudServices::OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::CloudServices::OnJoinedLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices::OnLeftLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices::OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomList);
}
inline void Fusion::CloudServices::OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyStatistics);
}
inline void Fusion::CloudServices::OperationFailHandler(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OperationFailHandler", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline bool Fusion::CloudServices::HandlePhotonCloudDisconnect(::Fusion::ShutdownReason  shutdownReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandlePhotonCloudDisconnect", {}, {::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shutdownReason);
}
inline bool Fusion::CloudServices::get_IsCloudReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsCloudReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Fusion::CloudServices::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Fusion::CloudServices::get_IsInRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsInRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::CloudServices::get_IsInLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsInLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::JoinProcessStage Fusion::CloudServices::get_CurrentJoinStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_CurrentJoinStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::JoinProcessStage>(this, ___internal_method);
}
inline ::Fusion::Protocol::ProtocolMessageVersion Fusion::CloudServices::get_CurrentProtocolMessageVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_CurrentProtocolMessageVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Protocol::ProtocolMessageVersion>(this, ___internal_method);
}
inline int32_t Fusion::CloudServices::get_SessionSlots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_SessionSlots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::CloudServices::get_IsMasterClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsMasterClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::AuthenticationValues* Fusion::CloudServices::get_AuthenticationValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_AuthenticationValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::AuthenticationValues*>(this, ___internal_method);
}
inline ::Fusion::Protocol::ICommunicator* Fusion::CloudServices::get_Communicator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_Communicator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Protocol::ICommunicator*>(this, ___internal_method);
}
inline ::StringW Fusion::CloudServices::get_CachedRegionSummary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_CachedRegionSummary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Fusion::CloudServices::get_IsNATPunchthroughEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsNATPunchthroughEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::CloudServices::set_IsNATPunchthroughEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"set_IsNATPunchthroughEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::CloudServices::get_IsEncryptionEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsEncryptionEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Fusion::CloudServices::get_CustomSTUNServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_CustomSTUNServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::CloudServices::set_CustomSTUNServer(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"set_CustomSTUNServer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Sockets::Stun::NATType Fusion::CloudServices::get_NATType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_NATType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::Stun::NATType>(this, ___internal_method);
}
inline ::Fusion::PlayerRef Fusion::CloudServices::get_LocalPlayerRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_LocalPlayerRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline bool Fusion::CloudServices::get_IsServerOrMasterClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"get_IsServerOrMasterClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::CloudServices::_ctor(::Fusion::NetworkRunner*  runner, ::Fusion::Photon::Realtime::FusionAppSettings*  customAppSettings, ::Fusion::CloudCommunicator*  communicator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Photon::Realtime::FusionAppSettings*>(), ::i2c::type_of<::Fusion::CloudCommunicator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, customAppSettings, communicator);
}
inline ::Fusion::CloudCommunicator* Fusion::CloudServices::ExtractCommunicator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"ExtractCommunicator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::CloudCommunicator*>(this, ___internal_method);
}
inline void Fusion::CloudServices::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::CloudServices::ConnectToCloud(::Fusion::Photon::Realtime::AppSettings*  appSettings, ::Fusion::Photon::Realtime::AuthenticationValues*  authentication, ::System::Threading::CancellationToken  externalCancellationToken, ::System::Nullable_1<bool>  useDefaultCloudPorts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"ConnectToCloud", {}, {::i2c::type_of<::Fusion::Photon::Realtime::AppSettings*>(), ::i2c::type_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, appSettings, authentication, externalCancellationToken, useDefaultCloudPorts);
}
inline ::System::Threading::Tasks::Task_1<int16_t>* Fusion::CloudServices::JoinSessionLobby(::Fusion::SessionLobby  sessionLobby, ::StringW  lobbyID, ::Fusion::Photon::Realtime::LobbyType  lobbyType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"JoinSessionLobby", {}, {::i2c::type_of<::Fusion::SessionLobby>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Photon::Realtime::LobbyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int16_t>*>(this, ___internal_method, sessionLobby, lobbyID, lobbyType);
}
inline ::System::Threading::Tasks::Task_1<int16_t>* Fusion::CloudServices::EnterRoom(::Fusion::StartGameArgs  args, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"EnterRoom", {}, {::i2c::type_of<::Fusion::StartGameArgs>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int16_t>*>(this, ___internal_method, args, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task* Fusion::CloudServices::DisconnectFromCloud()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"DisconnectFromCloud", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::StringW Fusion::CloudServices::GetActorUserID(int32_t  actorID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"GetActorUserID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, actorID);
}
inline bool Fusion::CloudServices::TryGetActorIdByUniqueId(int64_t  uniqueId, ::by_ref<int32_t>  actorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"TryGetActorIdByUniqueId", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uniqueId, actorId);
}
inline void Fusion::CloudServices::OnInternalConnectionAttempt(int32_t  attempt, int32_t  totalConnectionAttempts, ::by_ref<bool>  shouldChange, ::by_ref<::Fusion::Sockets::NetAddress>  newAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnInternalConnectionAttempt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetAddress>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attempt, totalConnectionAttempts, shouldChange, newAddress);
}
inline void Fusion::CloudServices::Connect(::Fusion::NATPunchStage  punchStage, ::Fusion::Sockets::NetAddress  endPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::NATPunchStage>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, punchStage, endPoint);
}
inline void Fusion::CloudServices::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices::OnRoomChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnRoomChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::CloudServices::UpdateRoomProperties(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"UpdateRoomProperties", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, customProperties);
}
inline bool Fusion::CloudServices::UpdateRoomIsOpen(bool  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"UpdateRoomIsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, status);
}
inline bool Fusion::CloudServices::UpdateRoomIsVisible(bool  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"UpdateRoomIsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, status);
}
inline void Fusion::CloudServices::OnRoomListChanged(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"OnRoomListChanged", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomList);
}
inline ::System::Threading::Tasks::Task* Fusion::CloudServices::Join(::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Join", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, externalCancellationToken);
}
inline void Fusion::CloudServices::SendNetworkSyncMessage(::Fusion::NetworkProjectConfig*  projectConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"SendNetworkSyncMessage", {}, {::i2c::type_of<::Fusion::NetworkProjectConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectConfig);
}
inline void Fusion::CloudServices::SendReflexiveInfo(::Fusion::Sockets::Stun::StunResult*  stunResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"SendReflexiveInfo", {}, {::i2c::type_of<::Fusion::Sockets::Stun::StunResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stunResult);
}
inline void Fusion::CloudServices::SendChangeMasterClient(int32_t  newCandidate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"SendChangeMasterClient", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCandidate);
}
inline void Fusion::CloudServices::SendStateSnapshot(::ArrayW<uint8_t>  data, int32_t  snapshotSize, int32_t  tick, uint32_t  lastId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"SendStateSnapshot", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, snapshotSize, tick, lastId);
}
inline void Fusion::CloudServices::HandleJoinMessage(int32_t  sender, ::Fusion::Protocol::Join*  join)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleJoinMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::Join*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, join);
}
inline void Fusion::CloudServices::HandleStartMessage(int32_t  sender, ::Fusion::Protocol::Start*  start)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleStartMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::Start*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, start);
}
inline void Fusion::CloudServices::HandleDisconnectMessage(int32_t  sender, ::Fusion::Protocol::Disconnect*  disconnect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleDisconnectMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::Disconnect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, disconnect);
}
inline void Fusion::CloudServices::HandleNetworkConfigMessage(int32_t  sender, ::Fusion::Protocol::NetworkConfigSync*  configSync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleNetworkConfigMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::NetworkConfigSync*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, configSync);
}
inline void Fusion::CloudServices::HandleReflexiveInfoMessage(int32_t  sender, ::Fusion::Protocol::ReflexiveInfo*  reflexiveInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleReflexiveInfoMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::ReflexiveInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, reflexiveInfo);
}
inline void Fusion::CloudServices::HandleHostMigrationMessage(int32_t  sender, ::Fusion::Protocol::HostMigration*  hostMigration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleHostMigrationMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::HostMigration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, hostMigration);
}
inline void Fusion::CloudServices::HandleSnapshotMessage(int32_t  sender, ::Fusion::Protocol::Snapshot*  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleSnapshotMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::Snapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, snapshot);
}
inline void Fusion::CloudServices::HandleDummyTrafficSync(int32_t  sender, ::Fusion::Protocol::DummyTrafficSync*  dummyTrafficSync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandleDummyTrafficSync", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::DummyTrafficSync*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, dummyTrafficSync);
}
inline ::System::Threading::Tasks::Task_1<bool>* Fusion::CloudServices::ConfirmJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"ConfirmJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline void Fusion::CloudServices::HandlePlayerRefMapping(int32_t  sender, ::Fusion::Protocol::PlayerRefMapping*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"HandlePlayerRefMapping", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::PlayerRefMapping*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, msg);
}
inline void Fusion::CloudServices::StartBackgroundCloudServices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"StartBackgroundCloudServices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Fusion::CloudServices::Service_KeepAlive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Service_KeepAlive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Fusion::CloudServices::Service_HostMigrationSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Service_HostMigrationSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline void Fusion::CloudServices::Run_ReversePing(::Fusion::Sockets::NetAddress  remoteAddr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"Run_ReversePing", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteAddr);
}
inline void Fusion::CloudServices::SetupDummyTraffic(::Fusion::Protocol::DummyTrafficSync*  dummyTrafficSyncMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"SetupDummyTraffic", {}, {::i2c::type_of<::Fusion::Protocol::DummyTrafficSync*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dummyTrafficSyncMessage);
}
inline ::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunResult*>* Fusion::CloudServices::QueryReflexiveInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"QueryReflexiveInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunResult*>*>(this, ___internal_method);
}
inline void Fusion::CloudServices::UpdateInitializeArgs(::Fusion::NetworkRunnerInitializeArgs  newArgs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"UpdateInitializeArgs", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newArgs);
}
inline bool Fusion::CloudServices::CheckSubnet(::Fusion::Sockets::NetAddress  remotePrivateEndPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"CheckSubnet", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, remotePrivateEndPoint);
}
inline void Fusion::CloudServices::UpdateSessionInfo(::Fusion::SessionInfo*  sessionInfo, ::Fusion::Photon::Realtime::RoomInfo*  roomInfo, ::StringW  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"UpdateSessionInfo", {}, {::i2c::type_of<::Fusion::SessionInfo*>(), ::i2c::type_of<::Fusion::Photon::Realtime::RoomInfo*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionInfo, roomInfo, region);
}
inline ::System::Threading::Tasks::Task* Fusion::CloudServices::_HandleReflexiveInfoMessage_b__92_0(::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"<HandleReflexiveInfoMessage>b__92_0", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task_1<bool>* Fusion::CloudServices::_SetupDummyTraffic_b__105_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"<SetupDummyTraffic>b__105_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline void Fusion::CloudServices::_SetupDummyTraffic_g__SendDummyTraffic_105_1(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"<SetupDummyTraffic>g__SendDummyTraffic|105_1", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline bool Fusion::CloudServices::_QueryReflexiveInfo_g__KeepRunning_106_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"<QueryReflexiveInfo>g__KeepRunning|106_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::CloudServices::_QueryReflexiveInfo_g__SendAnyData_106_1(::ArrayW<uint8_t>  requestBytes, ::Fusion::Sockets::NetAddress  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices*>(),
                        {"<QueryReflexiveInfo>g__SendAnyData|106_1", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, requestBytes, target);
}
inline ::Fusion::CloudServices* Fusion::CloudServices::New_ctor(::Fusion::NetworkRunner*  runner, ::Fusion::Photon::Realtime::FusionAppSettings*  customAppSettings, ::Fusion::CloudCommunicator*  communicator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices*>(runner, customAppSettings, communicator));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr  Fusion::CloudServices::operator ::Fusion::Photon::Realtime::IConnectionCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr ::Fusion::Photon::Realtime::IConnectionCallbacks* Fusion::CloudServices::i___Fusion__Photon__Realtime__IConnectionCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr  Fusion::CloudServices::operator ::Fusion::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Fusion::Photon::Realtime::IMatchmakingCallbacks* Fusion::CloudServices::i___Fusion__Photon__Realtime__IMatchmakingCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr  Fusion::CloudServices::operator ::Fusion::Photon::Realtime::ILobbyCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr ::Fusion::Photon::Realtime::ILobbyCallbacks* Fusion::CloudServices::i___Fusion__Photon__Realtime__ILobbyCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::CloudServices::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::CloudServices::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices::CloudServices()   {
}
//  Writing Method size for method: ::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::*)()>(&::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f753a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::*)()>(&::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5f7a0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f7a434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::CloudServices*& Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices* const& Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_set___4__this(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100* Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100::CloudServices__Service_HostMigrationSnapshot_d__100()   {
}
//  Writing Method size for method: ::Fusion::CloudServices__QueryReflexiveInfo_d__106._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__QueryReflexiveInfo_d__106::*)()>(&::Fusion::CloudServices__QueryReflexiveInfo_d__106::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f75650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__QueryReflexiveInfo_d__106*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__QueryReflexiveInfo_d__106.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__QueryReflexiveInfo_d__106::*)()>(&::Fusion::CloudServices__QueryReflexiveInfo_d__106::MoveNext)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x5f79b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__QueryReflexiveInfo_d__106*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__QueryReflexiveInfo_d__106.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__QueryReflexiveInfo_d__106::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::CloudServices__QueryReflexiveInfo_d__106::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f7a0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__QueryReflexiveInfo_d__106*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*> const& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::CloudServices*& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices* const& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_set___4__this(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get__boundLocalAddress_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundLocalAddress_5__1;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get__boundLocalAddress_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundLocalAddress_5__1;
}
constexpr void Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_set__boundLocalAddress_5__1(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boundLocalAddress_5__1 = value;
}
constexpr ::Fusion::Sockets::Stun::StunResult*& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr ::Fusion::Sockets::Stun::StunResult* const& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr void Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_set___s__2(::Fusion::Sockets::Stun::StunResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunResult*>& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunResult*> const& Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::CloudServices__QueryReflexiveInfo_d__106::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::CloudServices__QueryReflexiveInfo_d__106::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__QueryReflexiveInfo_d__106*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__QueryReflexiveInfo_d__106::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__QueryReflexiveInfo_d__106*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__QueryReflexiveInfo_d__106::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__QueryReflexiveInfo_d__106*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::CloudServices__QueryReflexiveInfo_d__106* Fusion::CloudServices__QueryReflexiveInfo_d__106::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices__QueryReflexiveInfo_d__106*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::CloudServices__QueryReflexiveInfo_d__106::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::CloudServices__QueryReflexiveInfo_d__106::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices__QueryReflexiveInfo_d__106::CloudServices__QueryReflexiveInfo_d__106()   {
}
//  Writing Method size for method: ::Fusion::CloudServices__Join_d__83._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__Join_d__83::*)()>(&::Fusion::CloudServices__Join_d__83::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f73f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Join_d__83*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__Join_d__83.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__Join_d__83::*)()>(&::Fusion::CloudServices__Join_d__83::MoveNext)> {
  constexpr static std::size_t size = 0xcf0;
  constexpr static std::size_t addrs = 0x5f78ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Join_d__83*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__Join_d__83.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__Join_d__83::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::CloudServices__Join_d__83::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f79b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Join_d__83*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::CloudServices__Join_d__83::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::CloudServices__Join_d__83::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::CloudServices__Join_d__83::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::CloudServices__Join_d__83::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::System::Threading::CancellationToken& Fusion::CloudServices__Join_d__83::__cordl_internal_get_externalCancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___externalCancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Fusion::CloudServices__Join_d__83::__cordl_internal_get_externalCancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___externalCancellationToken;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set_externalCancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___externalCancellationToken = value;
}
constexpr ::Fusion::CloudServices*& Fusion::CloudServices__Join_d__83::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices* const& Fusion::CloudServices__Join_d__83::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set___4__this(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::Protocol::PeerMode& Fusion::CloudServices__Join_d__83::__cordl_internal_get__peerMode_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peerMode_5__1;
}
constexpr ::Fusion::Protocol::PeerMode const& Fusion::CloudServices__Join_d__83::__cordl_internal_get__peerMode_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peerMode_5__1;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set__peerMode_5__1(::Fusion::Protocol::PeerMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peerMode_5__1 = value;
}
constexpr ::Fusion::Protocol::PluginGameMode& Fusion::CloudServices__Join_d__83::__cordl_internal_get__joinMode_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinMode_5__2;
}
constexpr ::Fusion::Protocol::PluginGameMode const& Fusion::CloudServices__Join_d__83::__cordl_internal_get__joinMode_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinMode_5__2;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set__joinMode_5__2(::Fusion::Protocol::PluginGameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joinMode_5__2 = value;
}
constexpr ::Fusion::Protocol::Join*& Fusion::CloudServices__Join_d__83::__cordl_internal_get__joinRequest_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinRequest_5__3;
}
constexpr ::Fusion::Protocol::Join* const& Fusion::CloudServices__Join_d__83::__cordl_internal_get__joinRequest_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinRequest_5__3;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set__joinRequest_5__3(::Fusion::Protocol::Join*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joinRequest_5__3 = value;
}
constexpr ::Fusion::Protocol::Join*& Fusion::CloudServices__Join_d__83::__cordl_internal_get__joinResponse_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinResponse_5__4;
}
constexpr ::Fusion::Protocol::Join* const& Fusion::CloudServices__Join_d__83::__cordl_internal_get__joinResponse_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinResponse_5__4;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set__joinResponse_5__4(::Fusion::Protocol::Join*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joinResponse_5__4 = value;
}
constexpr ::Fusion::GameMode& Fusion::CloudServices__Join_d__83::__cordl_internal_get___s__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__5;
}
constexpr ::Fusion::GameMode const& Fusion::CloudServices__Join_d__83::__cordl_internal_get___s__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__5;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set___s__5(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__5 = value;
}
constexpr ::Fusion::Protocol::Join*& Fusion::CloudServices__Join_d__83::__cordl_internal_get___s__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__6;
}
constexpr ::Fusion::Protocol::Join* const& Fusion::CloudServices__Join_d__83::__cordl_internal_get___s__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__6;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set___s__6(::Fusion::Protocol::Join*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__6 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Protocol::Join*>& Fusion::CloudServices__Join_d__83::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Protocol::Join*> const& Fusion::CloudServices__Join_d__83::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::CloudServices__Join_d__83::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Protocol::Join*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::CloudServices__Join_d__83::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Join_d__83*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__Join_d__83::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Join_d__83*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__Join_d__83::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__Join_d__83*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::CloudServices__Join_d__83* Fusion::CloudServices__Join_d__83::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices__Join_d__83*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::CloudServices__Join_d__83::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::CloudServices__Join_d__83::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices__Join_d__83::CloudServices__Join_d__83()   {
}
//  Writing Method size for method: ::Fusion::CloudServices__HandleStartMessage_d__89._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__HandleStartMessage_d__89::*)()>(&::Fusion::CloudServices__HandleStartMessage_d__89::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f745a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleStartMessage_d__89*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__HandleStartMessage_d__89.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__HandleStartMessage_d__89::*)()>(&::Fusion::CloudServices__HandleStartMessage_d__89::MoveNext)> {
  constexpr static std::size_t size = 0xe50;
  constexpr static std::size_t addrs = 0x5f77f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleStartMessage_d__89*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__HandleStartMessage_d__89.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__HandleStartMessage_d__89::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::CloudServices__HandleStartMessage_d__89::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f78e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleStartMessage_d__89*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr int32_t& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get_sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr int32_t const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get_sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set_sender(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sender = value;
}
constexpr ::Fusion::Protocol::Start*& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::Fusion::Protocol::Start* const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set_start(::Fusion::Protocol::Start*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr ::Fusion::CloudServices*& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices* const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set___4__this(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr bool const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set___s__1(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr bool& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get__result_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result_5__2;
}
constexpr bool const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get__result_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result_5__2;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set__result_5__2(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result_5__2 = value;
}
constexpr ::Fusion::NetworkRunnerInitializeArgs& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get__initArgs_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initArgs_5__3;
}
constexpr ::Fusion::NetworkRunnerInitializeArgs const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get__initArgs_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initArgs_5__3;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set__initArgs_5__3(::Fusion::NetworkRunnerInitializeArgs  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initArgs_5__3 = value;
}
constexpr bool& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___s__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr bool const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___s__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set___s__4(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__4 = value;
}
constexpr ::Fusion::GameMode& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___s__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__5;
}
constexpr ::Fusion::GameMode const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___s__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__5;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set___s__5(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__5 = value;
}
constexpr ::Fusion::CloudServicesMetadata*& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___s__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__6;
}
constexpr ::Fusion::CloudServicesMetadata* const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___s__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__6;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set___s__6(::Fusion::CloudServicesMetadata*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__6 = value;
}
constexpr ::Fusion::Sockets::Stun::StunResult*& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___s__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__7;
}
constexpr ::Fusion::Sockets::Stun::StunResult* const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___s__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__7;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set___s__7(::Fusion::Sockets::Stun::StunResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__7 = value;
}
constexpr ::System::Exception*& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get__ex_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ex_5__8;
}
constexpr ::System::Exception* const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get__ex_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ex_5__8;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set__ex_5__8(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ex_5__8 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
constexpr ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Fusion::Sockets::Stun::StunResult*>& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___u__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Fusion::Sockets::Stun::StunResult*> const& Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_get___u__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr void Fusion::CloudServices__HandleStartMessage_d__89::__cordl_internal_set___u__2(::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Fusion::Sockets::Stun::StunResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__2 = value;
}
inline void Fusion::CloudServices__HandleStartMessage_d__89::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleStartMessage_d__89*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__HandleStartMessage_d__89::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleStartMessage_d__89*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__HandleStartMessage_d__89::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleStartMessage_d__89*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::CloudServices__HandleStartMessage_d__89* Fusion::CloudServices__HandleStartMessage_d__89::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices__HandleStartMessage_d__89*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::CloudServices__HandleStartMessage_d__89::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::CloudServices__HandleStartMessage_d__89::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices__HandleStartMessage_d__89::CloudServices__HandleStartMessage_d__89()   {
}
//  Writing Method size for method: ::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::*)()>(&::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f74748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::*)()>(&::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::MoveNext)> {
  constexpr static std::size_t size = 0xc48;
  constexpr static std::size_t addrs = 0x5f7734c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f77f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr int32_t& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get_sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr int32_t const& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get_sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_set_sender(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sender = value;
}
constexpr ::Fusion::Protocol::ReflexiveInfo*& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get_reflexiveInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflexiveInfo;
}
constexpr ::Fusion::Protocol::ReflexiveInfo* const& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get_reflexiveInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflexiveInfo;
}
constexpr void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_set_reflexiveInfo(::Fusion::Protocol::ReflexiveInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reflexiveInfo = value;
}
constexpr ::Fusion::CloudServices*& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices* const& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_set___4__this(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr bool const& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_set___s__1(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr ::Fusion::GameMode& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr ::Fusion::GameMode const& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_set___s__2(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
constexpr int64_t& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get__uniqueId_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueId_5__3;
}
constexpr int64_t const& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get__uniqueId_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueId_5__3;
}
constexpr void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_set__uniqueId_5__3(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uniqueId_5__3 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___u__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_get___u__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::__cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__2 = value;
}
inline void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92* Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92::CloudServices__HandleReflexiveInfoMessage_d__92()   {
}
//  Writing Method size for method: ::Fusion::CloudServices__DisconnectFromCloud_d__70._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__DisconnectFromCloud_d__70::*)()>(&::Fusion::CloudServices__DisconnectFromCloud_d__70::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f734ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__DisconnectFromCloud_d__70*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__DisconnectFromCloud_d__70.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__DisconnectFromCloud_d__70::*)()>(&::Fusion::CloudServices__DisconnectFromCloud_d__70::MoveNext)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x5f76f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__DisconnectFromCloud_d__70*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__DisconnectFromCloud_d__70.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__DisconnectFromCloud_d__70::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::CloudServices__DisconnectFromCloud_d__70::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f77348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__DisconnectFromCloud_d__70*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::CloudServices*& Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices* const& Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_set___4__this(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::CloudServices__DisconnectFromCloud_d__70::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::CloudServices__DisconnectFromCloud_d__70::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__DisconnectFromCloud_d__70*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__DisconnectFromCloud_d__70::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__DisconnectFromCloud_d__70*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__DisconnectFromCloud_d__70::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__DisconnectFromCloud_d__70*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::CloudServices__DisconnectFromCloud_d__70* Fusion::CloudServices__DisconnectFromCloud_d__70::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices__DisconnectFromCloud_d__70*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::CloudServices__DisconnectFromCloud_d__70::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::CloudServices__DisconnectFromCloud_d__70::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices__DisconnectFromCloud_d__70::CloudServices__DisconnectFromCloud_d__70()   {
}
//  Writing Method size for method: ::Fusion::CloudServices__ConnectToCloud_d__67._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__ConnectToCloud_d__67::*)()>(&::Fusion::CloudServices__ConnectToCloud_d__67::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7290c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConnectToCloud_d__67*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__ConnectToCloud_d__67.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__ConnectToCloud_d__67::*)()>(&::Fusion::CloudServices__ConnectToCloud_d__67::MoveNext)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5f76b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConnectToCloud_d__67*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__ConnectToCloud_d__67.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__ConnectToCloud_d__67::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::CloudServices__ConnectToCloud_d__67::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f76f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConnectToCloud_d__67*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::Photon::Realtime::AppSettings*& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get_appSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appSettings;
}
constexpr ::Fusion::Photon::Realtime::AppSettings* const& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get_appSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appSettings;
}
constexpr void Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_set_appSettings(::Fusion::Photon::Realtime::AppSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appSettings = value;
}
constexpr ::Fusion::Photon::Realtime::AuthenticationValues*& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get_authentication()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authentication;
}
constexpr ::Fusion::Photon::Realtime::AuthenticationValues* const& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get_authentication() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authentication;
}
constexpr void Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_set_authentication(::Fusion::Photon::Realtime::AuthenticationValues*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authentication = value;
}
constexpr ::System::Threading::CancellationToken& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get_externalCancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___externalCancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get_externalCancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___externalCancellationToken;
}
constexpr void Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_set_externalCancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___externalCancellationToken = value;
}
constexpr ::System::Nullable_1<bool>& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get_useDefaultCloudPorts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDefaultCloudPorts;
}
constexpr ::System::Nullable_1<bool> const& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get_useDefaultCloudPorts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDefaultCloudPorts;
}
constexpr void Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_set_useDefaultCloudPorts(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useDefaultCloudPorts = value;
}
constexpr ::Fusion::CloudServices*& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices* const& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_set___4__this(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::CloudServices__ConnectToCloud_d__67::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::CloudServices__ConnectToCloud_d__67::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConnectToCloud_d__67*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__ConnectToCloud_d__67::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConnectToCloud_d__67*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__ConnectToCloud_d__67::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConnectToCloud_d__67*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::CloudServices__ConnectToCloud_d__67* Fusion::CloudServices__ConnectToCloud_d__67::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices__ConnectToCloud_d__67*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::CloudServices__ConnectToCloud_d__67::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::CloudServices__ConnectToCloud_d__67::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices__ConnectToCloud_d__67::CloudServices__ConnectToCloud_d__67()   {
}
//  Writing Method size for method: ::Fusion::CloudServices__ConfirmJoin_d__96._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__ConfirmJoin_d__96::*)()>(&::Fusion::CloudServices__ConfirmJoin_d__96::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f74ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConfirmJoin_d__96*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__ConfirmJoin_d__96.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__ConfirmJoin_d__96::*)()>(&::Fusion::CloudServices__ConfirmJoin_d__96::MoveNext)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x5f76744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConfirmJoin_d__96*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices__ConfirmJoin_d__96.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices__ConfirmJoin_d__96::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::CloudServices__ConfirmJoin_d__96::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f76b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConfirmJoin_d__96*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::CloudServices*& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices* const& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_set___4__this(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get__timer_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timer_5__1;
}
constexpr ::System::Diagnostics::Stopwatch* const& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get__timer_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timer_5__1;
}
constexpr void Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_set__timer_5__1(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timer_5__1 = value;
}
constexpr ::Fusion::JoinProcessStage& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr ::Fusion::JoinProcessStage const& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr void Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_set___s__2(::Fusion::JoinProcessStage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::CloudServices__ConfirmJoin_d__96::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::CloudServices__ConfirmJoin_d__96::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConfirmJoin_d__96*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__ConfirmJoin_d__96::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConfirmJoin_d__96*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices__ConfirmJoin_d__96::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices__ConfirmJoin_d__96*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::CloudServices__ConfirmJoin_d__96* Fusion::CloudServices__ConfirmJoin_d__96::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices__ConfirmJoin_d__96*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::CloudServices__ConfirmJoin_d__96::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::CloudServices__ConfirmJoin_d__96::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices__ConfirmJoin_d__96::CloudServices__ConfirmJoin_d__96()   {
}
//  Writing Method size for method: ::Fusion::CloudServices___c__DisplayClass101_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices___c__DisplayClass101_0::*)()>(&::Fusion::CloudServices___c__DisplayClass101_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7550c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___c__DisplayClass101_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices___c__DisplayClass101_0._Run_ReversePing_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::CloudServices___c__DisplayClass101_0::*)(::System::Threading::CancellationToken)>(&::Fusion::CloudServices___c__DisplayClass101_0::_Run_ReversePing_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f76104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___c__DisplayClass101_0*>(),
                        {"<Run_ReversePing>b__0", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices___c__DisplayClass101_0._Run_ReversePing_g__SendPing_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudServices___c__DisplayClass101_0::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::CloudServices___c__DisplayClass101_0::_Run_ReversePing_g__SendPing_1)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f76234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___c__DisplayClass101_0*>(),
                        {"<Run_ReversePing>g__SendPing|1", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::CloudServices*& Fusion::CloudServices___c__DisplayClass101_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices* const& Fusion::CloudServices___c__DisplayClass101_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::CloudServices___c__DisplayClass101_0::__cordl_internal_set___4__this(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::CloudServices___c__DisplayClass101_0::__cordl_internal_get_remoteAddr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteAddr;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::CloudServices___c__DisplayClass101_0::__cordl_internal_get_remoteAddr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteAddr;
}
constexpr void Fusion::CloudServices___c__DisplayClass101_0::__cordl_internal_set_remoteAddr(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteAddr = value;
}
inline void Fusion::CloudServices___c__DisplayClass101_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___c__DisplayClass101_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::CloudServices___c__DisplayClass101_0::_Run_ReversePing_b__0(::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___c__DisplayClass101_0*>(),
                        {"<Run_ReversePing>b__0", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token);
}
inline bool Fusion::CloudServices___c__DisplayClass101_0::_Run_ReversePing_g__SendPing_1(::Fusion::Sockets::NetAddress  netAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___c__DisplayClass101_0*>(),
                        {"<Run_ReversePing>g__SendPing|1", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, netAddress);
}
inline ::Fusion::CloudServices___c__DisplayClass101_0* Fusion::CloudServices___c__DisplayClass101_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices___c__DisplayClass101_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices___c__DisplayClass101_0::CloudServices___c__DisplayClass101_0()   {
}
//  Writing Method size for method: ::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::*)()>(&::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7622c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::*)()>(&::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5f76330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f76740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::System::Threading::CancellationToken& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get_token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr ::System::Threading::CancellationToken const& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get_token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr void Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_set_token(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token = value;
}
constexpr ::Fusion::CloudServices___c__DisplayClass101_0*& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices___c__DisplayClass101_0* const& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_set___4__this(::Fusion::CloudServices___c__DisplayClass101_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get__i_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__1;
}
constexpr int32_t const& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get__i_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__1;
}
constexpr void Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_set__i_5__1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d* Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d()   {
}
//  Writing Method size for method: ::Fusion::CloudServices___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices___c::*)()>(&::Fusion::CloudServices___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7608c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices___c._OnRegionListReceived_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::CloudServices___c::*)(::Fusion::Photon::Realtime::Region*)>(&::Fusion::CloudServices___c::_OnRegionListReceived_b__5_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f76094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___c*>(),
                        {"<OnRegionListReceived>b__5_0", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::CloudServices___c::setStaticF___9(::Fusion::CloudServices___c*  value)  {
::cordl_internals::setStaticField<::Fusion::CloudServices___c*, "<>9", ::Fusion::CloudServices___c*>(std::forward<::Fusion::CloudServices___c*>(value));
}
inline ::Fusion::CloudServices___c* Fusion::CloudServices___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::CloudServices___c*, "<>9", ::Fusion::CloudServices___c*>();
}
inline void Fusion::CloudServices___c::setStaticF___9__5_0(::System::Func_2<::Fusion::Photon::Realtime::Region*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Fusion::Photon::Realtime::Region*,::StringW>*, "<>9__5_0", ::Fusion::CloudServices___c*>(std::forward<::System::Func_2<::Fusion::Photon::Realtime::Region*,::StringW>*>(value));
}
inline ::System::Func_2<::Fusion::Photon::Realtime::Region*,::StringW>* Fusion::CloudServices___c::getStaticF___9__5_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Fusion::Photon::Realtime::Region*,::StringW>*, "<>9__5_0", ::Fusion::CloudServices___c*>();
}
inline void Fusion::CloudServices___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Fusion::CloudServices___c::_OnRegionListReceived_b__5_0(::Fusion::Photon::Realtime::Region*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___c*>(),
                        {"<OnRegionListReceived>b__5_0", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, region);
}
inline ::Fusion::CloudServices___c* Fusion::CloudServices___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices___c::CloudServices___c()   {
}
//  Writing Method size for method: ::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::*)()>(&::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f758fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::*)()>(&::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5f75da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f76020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::System::Threading::CancellationToken& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get_token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr ::System::Threading::CancellationToken const& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get_token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr void Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_set_token(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token = value;
}
constexpr ::Fusion::CloudServices*& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::CloudServices* const& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_set___4__this(::Fusion::CloudServices*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get__timeout_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeout_5__1;
}
constexpr int32_t const& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get__timeout_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeout_5__1;
}
constexpr void Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_set__timeout_5__1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeout_5__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d* Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d::CloudServices___HandleReflexiveInfoMessage_b__92_0_d()   {
}
// Ctor Parameters []
constexpr ::Fusion::CloudServices_ErrorMessages::CloudServices_ErrorMessages()   {
}
