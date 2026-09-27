#pragma once
// IWYU pragma private; include "GlobalNamespace/RequestableOwnershipGuardHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuardHandler_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey_def.hpp"
#include "Fusion/zzzz__HostMigrationToken_def.hpp"
#include "Fusion/zzzz__INetworkRunnerCallbacks_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__NetworkInput_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunnerCallbackArgs_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SessionInfo_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "Fusion/zzzz__SimulationMessagePtr_def.hpp"
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuardHandler_def.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuard_def.hpp"
#include "Photon/Pun/zzzz__IPunOwnershipCallbacks_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.RegisterView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetworkView*, ::GlobalNamespace::RequestableOwnershipGuard*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::RegisterView)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x56a80f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"RegisterView", {}, {::i2c::type_of<::GlobalNamespace::NetworkView*>(), ::i2c::type_of<::GlobalNamespace::RequestableOwnershipGuard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.RemoveView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetworkView*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::RemoveView)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56a823c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"RemoveView", {}, {::i2c::type_of<::GlobalNamespace::NetworkView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.RegisterViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::GlobalNamespace::NetworkView*>, ::GlobalNamespace::RequestableOwnershipGuard*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::RegisterViews)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56a8330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"RegisterViews", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NetworkView*>>(), ::i2c::type_of<::GlobalNamespace::RequestableOwnershipGuard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.RemoveViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::GlobalNamespace::NetworkView*>, ::GlobalNamespace::RequestableOwnershipGuard*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::RemoveViews)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56a83e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"RemoveViews", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NetworkView*>>(), ::i2c::type_of<::GlobalNamespace::RequestableOwnershipGuard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x56a8480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a8718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::HostMigrationToken*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnHostMigration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnHostChangedShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)()>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnHostChangedShared)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x56a871c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnHostChangedShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnObjectExitAOI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnPlayerJoined)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnPlayerLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkInput)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::NetworkInput)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnInputMissing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnShutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnConnectedToServer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetDisconnectReason)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*, ::ArrayW<uint8_t>)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnConnectRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a89fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnConnectFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a8a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessagePtr)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a8a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnSessionListUpdated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a8a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a8a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, ::System::ArraySegment_1<uint8_t>)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnReliableDataReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a8a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, float_t)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnReliableDataProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a8a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnSceneLoadDone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a8a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler.OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler::OnSceneLoadStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a8a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler::*)()>(&::GlobalNamespace::RequestableOwnershipGuardHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a80e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RequestableOwnershipGuardHandler::setStaticF_gaurdedViews(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::NetworkView>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::NetworkView>>*, "gaurdedViews", ::GlobalNamespace::RequestableOwnershipGuardHandler*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::NetworkView>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::NetworkView>>* GlobalNamespace::RequestableOwnershipGuardHandler::getStaticF_gaurdedViews()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::NetworkView>>*, "gaurdedViews", ::GlobalNamespace::RequestableOwnershipGuardHandler*>();
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::setStaticF_callbackInstance(::GlobalNamespace::RequestableOwnershipGuardHandler*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RequestableOwnershipGuardHandler*, "callbackInstance", ::GlobalNamespace::RequestableOwnershipGuardHandler*>(std::forward<::GlobalNamespace::RequestableOwnershipGuardHandler*>(value));
}
inline ::GlobalNamespace::RequestableOwnershipGuardHandler* GlobalNamespace::RequestableOwnershipGuardHandler::getStaticF_callbackInstance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RequestableOwnershipGuardHandler*, "callbackInstance", ::GlobalNamespace::RequestableOwnershipGuardHandler*>();
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::setStaticF_guardingLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NetworkView>,::UnityW<::GlobalNamespace::RequestableOwnershipGuard>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NetworkView>,::UnityW<::GlobalNamespace::RequestableOwnershipGuard>>*, "guardingLookup", ::GlobalNamespace::RequestableOwnershipGuardHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NetworkView>,::UnityW<::GlobalNamespace::RequestableOwnershipGuard>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NetworkView>,::UnityW<::GlobalNamespace::RequestableOwnershipGuard>>* GlobalNamespace::RequestableOwnershipGuardHandler::getStaticF_guardingLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NetworkView>,::UnityW<::GlobalNamespace::RequestableOwnershipGuard>>*, "guardingLookup", ::GlobalNamespace::RequestableOwnershipGuardHandler*>();
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::RegisterView(::GlobalNamespace::NetworkView*  view, ::GlobalNamespace::RequestableOwnershipGuard*  guard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"RegisterView", {}, {::i2c::type_of<::GlobalNamespace::NetworkView*>(), ::i2c::type_of<::GlobalNamespace::RequestableOwnershipGuard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, view, guard);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::RemoveView(::GlobalNamespace::NetworkView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"RemoveView", {}, {::i2c::type_of<::GlobalNamespace::NetworkView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, view);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::RegisterViews(::ArrayW<::GlobalNamespace::NetworkView*>  views, ::GlobalNamespace::RequestableOwnershipGuard*  guard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"RegisterViews", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NetworkView*>>(), ::i2c::type_of<::GlobalNamespace::RequestableOwnershipGuard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, views, guard);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::RemoveViews(::ArrayW<::GlobalNamespace::NetworkView*>  views, ::GlobalNamespace::RequestableOwnershipGuard*  guard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"RemoveViews", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NetworkView*>>(), ::i2c::type_of<::GlobalNamespace::RequestableOwnershipGuard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, views, guard);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  previousOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, previousOwner);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hostMigrationToken);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnHostChangedShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnHostChangedShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  requestingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, requestingPlayer);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  senderOfFailedRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, senderOfFailedRequest);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, input);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, input);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, shutdownReason);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnConnectedToServer(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, reason);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, request, token);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, remoteAddress, reason);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, message);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, data);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, data);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, progress);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnSceneLoadDone(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::OnSceneLoadStart(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {"OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RequestableOwnershipGuardHandler* GlobalNamespace::RequestableOwnershipGuardHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RequestableOwnershipGuardHandler*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr  GlobalNamespace::RequestableOwnershipGuardHandler::operator ::Photon::Pun::IPunOwnershipCallbacks*() noexcept {
return static_cast<::Photon::Pun::IPunOwnershipCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr ::Photon::Pun::IPunOwnershipCallbacks* GlobalNamespace::RequestableOwnershipGuardHandler::i___Photon__Pun__IPunOwnershipCallbacks() noexcept {
return static_cast<::Photon::Pun::IPunOwnershipCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr  GlobalNamespace::RequestableOwnershipGuardHandler::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* GlobalNamespace::RequestableOwnershipGuardHandler::i___Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr  GlobalNamespace::RequestableOwnershipGuardHandler::operator ::Fusion::INetworkRunnerCallbacks*() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* GlobalNamespace::RequestableOwnershipGuardHandler::i___Fusion__INetworkRunnerCallbacks() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  GlobalNamespace::RequestableOwnershipGuardHandler::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* GlobalNamespace::RequestableOwnershipGuardHandler::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RequestableOwnershipGuardHandler::RequestableOwnershipGuardHandler()   {
}
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::*)()>(&::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0._Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::*)(::GlobalNamespace::NetworkView*)>(&::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::_Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56a8a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0*>(),
                        {"<Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered>b__0", {}, {::i2c::type_of<::GlobalNamespace::NetworkView*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::__cordl_internal_get_targetView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::__cordl_internal_get_targetView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetView;
}
constexpr void GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::__cordl_internal_set_targetView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetView = value;
}
inline void GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::_Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered_b__0(::GlobalNamespace::NetworkView*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0*>(),
                        {"<Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered>b__0", {}, {::i2c::type_of<::GlobalNamespace::NetworkView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0* GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0::RequestableOwnershipGuardHandler___c__DisplayClass8_0()   {
}
