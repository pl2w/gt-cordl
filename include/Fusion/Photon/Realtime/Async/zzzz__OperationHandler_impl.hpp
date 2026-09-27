#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/OperationHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__OperationHandler_def.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__PhotonConnectionCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__PhotonLobbyCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__PhotonMatchmakingCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.get_Task
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::get_Task)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f69ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"get_Task", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.get_CompletionSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<int16_t>* (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::get_CompletionSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6b15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"get_CompletionSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::get_Token)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f6a984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.get_IsCancellationRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::get_IsCancellationRequested)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f6b164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"get_IsCancellationRequested", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::OperationHandler::_ctor)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5f6a69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.SetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(int16_t)>(&::Fusion::Photon::Realtime::Async::OperationHandler::SetResult)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f6adf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"SetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.SetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(::System::Exception*)>(&::Fusion::Photon::Realtime::Async::OperationHandler::SetException)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f6b17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.Expire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::Expire)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f6b218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"Expire", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::Cancel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f6b290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnConnected)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f6b30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f6b338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnCustomAuthenticationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(::StringW)>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f6b368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f6b3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnDisconnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f6b424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnRegionListReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnRegionListReceived)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f6b4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnCreatedRoom)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f6b4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(int16_t, ::StringW)>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f6b50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnFriendListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*)>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f6b608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f6b634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(int16_t, ::StringW)>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f6b664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(int16_t, ::StringW)>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f6b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnLeftRoom)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f6b85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnJoinedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnJoinedLobby)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f6b88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnLeftLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)()>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnLeftLobby)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f6b8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnRoomListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*)>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnRoomListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f6b8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationHandler.OnLobbyStatisticsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationHandler::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*)>(&::Fusion::Photon::Realtime::Async::OperationHandler::OnLobbyStatisticsUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f6b8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get_ConnectionCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionCallbacks;
}
constexpr ::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks* const& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get_ConnectionCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionCallbacks;
}
constexpr void Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_set_ConnectionCallbacks(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionCallbacks = value;
}
constexpr ::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get_MatchmakingCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchmakingCallbacks;
}
constexpr ::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks* const& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get_MatchmakingCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchmakingCallbacks;
}
constexpr void Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_set_MatchmakingCallbacks(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MatchmakingCallbacks = value;
}
constexpr ::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get_LobbyCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyCallbacks;
}
constexpr ::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks* const& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get_LobbyCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyCallbacks;
}
constexpr void Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_set_LobbyCallbacks(::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LobbyCallbacks = value;
}
constexpr bool& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get__throwOnErrors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throwOnErrors;
}
constexpr bool const& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get__throwOnErrors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throwOnErrors;
}
constexpr void Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_set__throwOnErrors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____throwOnErrors = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get__result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>* const& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get__result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
constexpr void Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_set__result(::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get__cancellation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellation;
}
constexpr ::System::Threading::CancellationTokenSource* const& Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_get__cancellation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellation;
}
constexpr void Fusion::Photon::Realtime::Async::OperationHandler::__cordl_internal_set__cancellation(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellation = value;
}
inline ::System::Threading::Tasks::Task_1<int16_t>* Fusion::Photon::Realtime::Async::OperationHandler::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int16_t>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>* Fusion::Photon::Realtime::Async::OperationHandler::get_CompletionSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"get_CompletionSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*>(this, ___internal_method);
}
inline ::System::Threading::CancellationToken Fusion::Photon::Realtime::Async::OperationHandler::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::Async::OperationHandler::get_IsCancellationRequested()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"get_IsCancellationRequested", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::_ctor(bool  throwOnErrors, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, throwOnErrors, externalCancellationToken);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::SetResult(int16_t  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"SetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::SetException(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::Expire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"Expire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnConnectedToMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnCustomAuthenticationFailed(::StringW  debugMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMessage);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler*  regionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandler);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnCreatedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnFriendListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*  friendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendList);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnJoinedLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnLeftLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomList);
}
inline void Fusion::Photon::Realtime::Async::OperationHandler::OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationHandler*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyStatistics);
}
inline ::Fusion::Photon::Realtime::Async::OperationHandler* Fusion::Photon::Realtime::Async::OperationHandler::New_ctor(bool  throwOnErrors, ::System::Threading::CancellationToken  externalCancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::OperationHandler*>(throwOnErrors, externalCancellationToken));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr  Fusion::Photon::Realtime::Async::OperationHandler::operator ::Fusion::Photon::Realtime::IConnectionCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr ::Fusion::Photon::Realtime::IConnectionCallbacks* Fusion::Photon::Realtime::Async::OperationHandler::i___Fusion__Photon__Realtime__IConnectionCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr  Fusion::Photon::Realtime::Async::OperationHandler::operator ::Fusion::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Fusion::Photon::Realtime::IMatchmakingCallbacks* Fusion::Photon::Realtime::Async::OperationHandler::i___Fusion__Photon__Realtime__IMatchmakingCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr  Fusion::Photon::Realtime::Async::OperationHandler::operator ::Fusion::Photon::Realtime::ILobbyCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr ::Fusion::Photon::Realtime::ILobbyCallbacks* Fusion::Photon::Realtime::Async::OperationHandler::i___Fusion__Photon__Realtime__ILobbyCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::OperationHandler::OperationHandler()   {
}
