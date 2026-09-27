#pragma once
// IWYU pragma private; include "Photon/Pun/MonoBehaviourPunCallbacks.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Photon/Realtime/zzzz__ErrorInfo_def.hpp"
#include "Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__IErrorInfoCallback_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__IWebRpcCallback_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa72b744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa72b798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnConnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(int16_t, ::StringW)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(int16_t, ::StringW)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnCreatedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnJoinedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnJoinedLobby)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnLeftLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnLeftLobby)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::Photon::Realtime::DisconnectCause)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnRegionListReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::Photon::Realtime::RegionHandler*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnRegionListReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnRoomListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnRoomListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(int16_t, ::StringW)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnFriendListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnCustomAuthenticationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::StringW)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnWebRpcResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnWebRpcResponse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnLobbyStatisticsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnLobbyStatisticsUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnErrorInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)(::Photon::Realtime::ErrorInfo*)>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnErrorInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks.OnPreLeavingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::OnPreLeavingRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72b84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPunCallbacks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::MonoBehaviourPunCallbacks::*)()>(&::Photon::Pun::MonoBehaviourPunCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72b850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnLeftRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnCreatedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnJoinedLobby()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnLeftLobby()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnDisconnected(::Photon::Realtime::DisconnectCause  cause)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnRegionListReceived(::Photon::Realtime::RegionHandler*  regionHandler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandler);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*  roomList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomList);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnConnectedToMaster()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*  friendList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendList);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnCustomAuthenticationFailed(::StringW  debugMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMessage);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyStatistics);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnErrorInfo(::Photon::Realtime::ErrorInfo*  errorInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorInfo);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::OnPreLeavingRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::MonoBehaviourPunCallbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::MonoBehaviourPunCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::MonoBehaviourPunCallbacks* Photon::Pun::MonoBehaviourPunCallbacks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::MonoBehaviourPunCallbacks*>());
}
/// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
constexpr  Photon::Pun::MonoBehaviourPunCallbacks::operator ::Photon::Realtime::IConnectionCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
constexpr ::Photon::Realtime::IConnectionCallbacks* Photon::Pun::MonoBehaviourPunCallbacks::i___Photon__Realtime__IConnectionCallbacks() noexcept {
return static_cast<::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr  Photon::Pun::MonoBehaviourPunCallbacks::operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* Photon::Pun::MonoBehaviourPunCallbacks::i___Photon__Realtime__IMatchmakingCallbacks() noexcept {
return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr  Photon::Pun::MonoBehaviourPunCallbacks::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* Photon::Pun::MonoBehaviourPunCallbacks::i___Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::ILobbyCallbacks"
constexpr  Photon::Pun::MonoBehaviourPunCallbacks::operator ::Photon::Realtime::ILobbyCallbacks*() noexcept {
return static_cast<::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::ILobbyCallbacks"
constexpr ::Photon::Realtime::ILobbyCallbacks* Photon::Pun::MonoBehaviourPunCallbacks::i___Photon__Realtime__ILobbyCallbacks() noexcept {
return static_cast<::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IWebRpcCallback"
constexpr  Photon::Pun::MonoBehaviourPunCallbacks::operator ::Photon::Realtime::IWebRpcCallback*() noexcept {
return static_cast<::Photon::Realtime::IWebRpcCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IWebRpcCallback"
constexpr ::Photon::Realtime::IWebRpcCallback* Photon::Pun::MonoBehaviourPunCallbacks::i___Photon__Realtime__IWebRpcCallback() noexcept {
return static_cast<::Photon::Realtime::IWebRpcCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IErrorInfoCallback"
constexpr  Photon::Pun::MonoBehaviourPunCallbacks::operator ::Photon::Realtime::IErrorInfoCallback*() noexcept {
return static_cast<::Photon::Realtime::IErrorInfoCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IErrorInfoCallback"
constexpr ::Photon::Realtime::IErrorInfoCallback* Photon::Pun::MonoBehaviourPunCallbacks::i___Photon__Realtime__IErrorInfoCallback() noexcept {
return static_cast<::Photon::Realtime::IErrorInfoCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::MonoBehaviourPunCallbacks::MonoBehaviourPunCallbacks()   {
}
