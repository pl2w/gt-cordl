#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/SupportLogger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__SupportLogger_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ErrorInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IErrorInfoCallback_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Player_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.get_Client
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::LoadBalancingClient* (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::get_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f65774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"get_Client", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.set_Client
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::Fusion::Photon::Realtime::LoadBalancingClient*)>(&::Fusion::Photon::Realtime::SupportLogger::set_Client)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f6577c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"set_Client", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f657e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::OnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f664a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(bool)>(&::Fusion::Photon::Realtime::SupportLogger::OnApplicationPause)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f664a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f667dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.StartLogStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::StartLogStats)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f667e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"StartLogStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.StopLogStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::StopLogStats)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f66838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"StopLogStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.StartTrackValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::StartTrackValues)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f66884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"StartTrackValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.StopTrackValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::StopTrackValues)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f668d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"StopTrackValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.GetFormattedTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::GetFormattedTimestamp)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5f665c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"GetFormattedTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.TrackValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::TrackValues)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f66924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"TrackValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.LogStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::LogStats)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5f66970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"LogStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.LogBasics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::LogBasics)> {
  constexpr static std::size_t size = 0xc2c;
  constexpr static std::size_t addrs = 0x5f65874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"LogBasics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::OnConnected)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f66b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f66c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnFriendListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*)>(&::Fusion::Photon::Realtime::SupportLogger::OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f66c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnJoinedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::OnJoinedLobby)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f66cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnLeftLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::OnLeftLobby)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f66d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(int16_t, ::StringW)>(&::Fusion::Photon::Realtime::SupportLogger::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5f66ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5f66f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(int16_t, ::StringW)>(&::Fusion::Photon::Realtime::SupportLogger::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5f67130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(int16_t, ::StringW)>(&::Fusion::Photon::Realtime::SupportLogger::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5f672b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::OnCreatedRoom)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5f67440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::OnLeftRoom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f6760c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::Photon::Realtime::SupportLogger::OnDisconnected)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f67664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnRegionListReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&::Fusion::Photon::Realtime::SupportLogger::OnRegionListReceived)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f67750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnRoomListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*)>(&::Fusion::Photon::Realtime::SupportLogger::OnRoomListUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f677a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::SupportLogger::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f67848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::SupportLogger::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f678f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::SupportLogger::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f67998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::Fusion::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::SupportLogger::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f679f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::SupportLogger::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f67a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::Photon::Realtime::SupportLogger::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f67af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnCustomAuthenticationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::StringW)>(&::Fusion::Photon::Realtime::SupportLogger::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f67bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnLobbyStatisticsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*)>(&::Fusion::Photon::Realtime::SupportLogger::OnLobbyStatisticsUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f67c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger.OnErrorInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)(::Fusion::Photon::Realtime::ErrorInfo*)>(&::Fusion::Photon::Realtime::SupportLogger::OnErrorInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f67c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnErrorInfo", {}, {::i2c::type_of<::Fusion::Photon::Realtime::ErrorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SupportLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SupportLogger::*)()>(&::Fusion::Photon::Realtime::SupportLogger::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f67cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_LogTrafficStats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogTrafficStats;
}
constexpr bool const& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_LogTrafficStats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogTrafficStats;
}
constexpr void Fusion::Photon::Realtime::SupportLogger::__cordl_internal_set_LogTrafficStats(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogTrafficStats = value;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Fusion::Photon::Realtime::SupportLogger::__cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_startStopwatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startStopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_startStopwatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startStopwatch;
}
constexpr void Fusion::Photon::Realtime::SupportLogger::__cordl_internal_set_startStopwatch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startStopwatch = value;
}
constexpr bool& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_initialOnApplicationPauseSkipped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialOnApplicationPauseSkipped;
}
constexpr bool const& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_initialOnApplicationPauseSkipped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialOnApplicationPauseSkipped;
}
constexpr void Fusion::Photon::Realtime::SupportLogger::__cordl_internal_set_initialOnApplicationPauseSkipped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialOnApplicationPauseSkipped = value;
}
constexpr int32_t& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_pingMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingMax;
}
constexpr int32_t const& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_pingMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingMax;
}
constexpr void Fusion::Photon::Realtime::SupportLogger::__cordl_internal_set_pingMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pingMax = value;
}
constexpr int32_t& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_pingMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingMin;
}
constexpr int32_t const& Fusion::Photon::Realtime::SupportLogger::__cordl_internal_get_pingMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingMin;
}
constexpr void Fusion::Photon::Realtime::SupportLogger::__cordl_internal_set_pingMin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pingMin = value;
}
inline ::Fusion::Photon::Realtime::LoadBalancingClient* Fusion::Photon::Realtime::SupportLogger::get_Client()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"get_Client", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::LoadBalancingClient*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::set_Client(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"set_Client", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::SupportLogger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnApplicationPause(bool  pause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::StartLogStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"StartLogStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::StopLogStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"StopLogStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::StartTrackValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"StartTrackValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::StopTrackValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"StopTrackValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::SupportLogger::GetFormattedTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"GetFormattedTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::TrackValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"TrackValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::LogStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"LogStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::LogBasics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"LogBasics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnConnectedToMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnFriendListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*  friendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendList);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnJoinedLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnLeftLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnCreatedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler*  regionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandler);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomList);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnPlayerEnteredRoom(::Fusion::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnPlayerLeftRoom(::Fusion::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnPlayerPropertiesUpdate(::Fusion::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnMasterClientSwitched(::Fusion::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnCustomAuthenticationFailed(::StringW  debugMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMessage);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyStatistics);
}
inline void Fusion::Photon::Realtime::SupportLogger::OnErrorInfo(::Fusion::Photon::Realtime::ErrorInfo*  errorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {"OnErrorInfo", {}, {::i2c::type_of<::Fusion::Photon::Realtime::ErrorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorInfo);
}
inline void Fusion::Photon::Realtime::SupportLogger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SupportLogger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::SupportLogger* Fusion::Photon::Realtime::SupportLogger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::SupportLogger*>());
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr  Fusion::Photon::Realtime::SupportLogger::operator ::Fusion::Photon::Realtime::IConnectionCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr ::Fusion::Photon::Realtime::IConnectionCallbacks* Fusion::Photon::Realtime::SupportLogger::i___Fusion__Photon__Realtime__IConnectionCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr  Fusion::Photon::Realtime::SupportLogger::operator ::Fusion::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Fusion::Photon::Realtime::IMatchmakingCallbacks* Fusion::Photon::Realtime::SupportLogger::i___Fusion__Photon__Realtime__IMatchmakingCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IInRoomCallbacks"
constexpr  Fusion::Photon::Realtime::SupportLogger::operator ::Fusion::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IInRoomCallbacks"
constexpr ::Fusion::Photon::Realtime::IInRoomCallbacks* Fusion::Photon::Realtime::SupportLogger::i___Fusion__Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr  Fusion::Photon::Realtime::SupportLogger::operator ::Fusion::Photon::Realtime::ILobbyCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr ::Fusion::Photon::Realtime::ILobbyCallbacks* Fusion::Photon::Realtime::SupportLogger::i___Fusion__Photon__Realtime__ILobbyCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IErrorInfoCallback"
constexpr  Fusion::Photon::Realtime::SupportLogger::operator ::Fusion::Photon::Realtime::IErrorInfoCallback*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IErrorInfoCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IErrorInfoCallback"
constexpr ::Fusion::Photon::Realtime::IErrorInfoCallback* Fusion::Photon::Realtime::SupportLogger::i___Fusion__Photon__Realtime__IErrorInfoCallback() noexcept {
return static_cast<::Fusion::Photon::Realtime::IErrorInfoCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::SupportLogger::SupportLogger()   {
}
