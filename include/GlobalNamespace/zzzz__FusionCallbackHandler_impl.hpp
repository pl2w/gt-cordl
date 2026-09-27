#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionCallbackHandler.hpp"
#include "Fusion/zzzz__SimulationBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FusionCallbackHandler_def.hpp"
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
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SessionInfo_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "Fusion/zzzz__SimulationMessagePtr_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__FusionCallbackHandler__RemoveCallbacks_d__3_def.hpp"
#include "GlobalNamespace/zzzz__NetEventOptions_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::GlobalNamespace::NetworkSystemFusion*)>(&::GlobalNamespace::FusionCallbackHandler::Setup)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56d51a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystemFusion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)()>(&::GlobalNamespace::FusionCallbackHandler::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x56d5270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.RemoveCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)()>(&::GlobalNamespace::FusionCallbackHandler::RemoveCallbacks)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56d5340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"RemoveCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::FusionCallbackHandler::OnConnectedToServer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56d53e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::GlobalNamespace::FusionCallbackHandler::OnConnectFailed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56d5400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*, ::ArrayW<uint8_t>)>(&::GlobalNamespace::FusionCallbackHandler::OnConnectRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d541c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::GlobalNamespace::FusionCallbackHandler::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x56d5420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::FusionCallbackHandler::OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56d562c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::HostMigrationToken*)>(&::GlobalNamespace::FusionCallbackHandler::OnHostMigration)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56d5644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkInput)>(&::GlobalNamespace::FusionCallbackHandler::OnInput)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56d565c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::NetworkInput)>(&::GlobalNamespace::FusionCallbackHandler::OnInputMissing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d56f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::GlobalNamespace::FusionCallbackHandler::OnPlayerJoined)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56d56fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::GlobalNamespace::FusionCallbackHandler::OnPlayerLeft)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56d5718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::System::ArraySegment_1<uint8_t>)>(&::GlobalNamespace::FusionCallbackHandler::OnReliableDataReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d5734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::FusionCallbackHandler::OnSceneLoadDone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d5738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::FusionCallbackHandler::OnSceneLoadStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d573c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::GlobalNamespace::FusionCallbackHandler::OnSessionListUpdated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d5740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason)>(&::GlobalNamespace::FusionCallbackHandler::OnShutdown)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56d5744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessagePtr)>(&::GlobalNamespace::FusionCallbackHandler::OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.RPC_OnEventRaisedReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, uint8_t, ::ArrayW<uint8_t>, bool, ::ArrayW<uint8_t>, ::Fusion::RpcInfo)>(&::GlobalNamespace::FusionCallbackHandler::RPC_OnEventRaisedReliable)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x56d5760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"RPC_OnEventRaisedReliable", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.RPC_OnEventRaisedUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, uint8_t, ::ArrayW<uint8_t>, bool, ::ArrayW<uint8_t>, ::Fusion::RpcInfo)>(&::GlobalNamespace::FusionCallbackHandler::RPC_OnEventRaisedUnreliable)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x56d5c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"RPC_OnEventRaisedUnreliable", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.CanRecieveEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkRunner*, ::GlobalNamespace::NetEventOptions*, ::Fusion::RpcInfo)>(&::GlobalNamespace::FusionCallbackHandler::CanRecieveEvent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x56d5b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"CanRecieveEvent", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::GlobalNamespace::NetEventOptions*>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::GlobalNamespace::FusionCallbackHandler::OnObjectExitAOI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d6030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::GlobalNamespace::FusionCallbackHandler::OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d6034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetDisconnectReason)>(&::GlobalNamespace::FusionCallbackHandler::OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d6038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, ::System::ArraySegment_1<uint8_t>)>(&::GlobalNamespace::FusionCallbackHandler::OnReliableDataReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d603c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, float_t)>(&::GlobalNamespace::FusionCallbackHandler::OnReliableDataProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d6040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionCallbackHandler::*)()>(&::GlobalNamespace::FusionCallbackHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d6044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.RPC_OnEventRaisedReliable@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::FusionCallbackHandler::RPC_OnEventRaisedReliable@Invoker)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x56d604c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"RPC_OnEventRaisedReliable@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionCallbackHandler.RPC_OnEventRaisedUnreliable@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::FusionCallbackHandler::RPC_OnEventRaisedUnreliable@Invoker)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x56d6188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"RPC_OnEventRaisedUnreliable@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkSystemFusion>& GlobalNamespace::FusionCallbackHandler::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::GlobalNamespace::NetworkSystemFusion> const& GlobalNamespace::FusionCallbackHandler::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void GlobalNamespace::FusionCallbackHandler::__cordl_internal_set_parent(::UnityW<::GlobalNamespace::NetworkSystemFusion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
inline void GlobalNamespace::FusionCallbackHandler::Setup(::GlobalNamespace::NetworkSystemFusion*  parentController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystemFusion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentController);
}
inline void GlobalNamespace::FusionCallbackHandler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionCallbackHandler::RemoveCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"RemoveCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionCallbackHandler::OnConnectedToServer(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void GlobalNamespace::FusionCallbackHandler::OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, remoteAddress, reason);
}
inline void GlobalNamespace::FusionCallbackHandler::OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, request, token);
}
inline void GlobalNamespace::FusionCallbackHandler::OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, data);
}
inline void GlobalNamespace::FusionCallbackHandler::OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void GlobalNamespace::FusionCallbackHandler::OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hostMigrationToken);
}
inline void GlobalNamespace::FusionCallbackHandler::OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, input);
}
inline void GlobalNamespace::FusionCallbackHandler::OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, input);
}
inline void GlobalNamespace::FusionCallbackHandler::OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void GlobalNamespace::FusionCallbackHandler::OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void GlobalNamespace::FusionCallbackHandler::OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, data);
}
inline void GlobalNamespace::FusionCallbackHandler::OnSceneLoadDone(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void GlobalNamespace::FusionCallbackHandler::OnSceneLoadStart(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void GlobalNamespace::FusionCallbackHandler::OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void GlobalNamespace::FusionCallbackHandler::OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, shutdownReason);
}
inline void GlobalNamespace::FusionCallbackHandler::OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, message);
}
inline void GlobalNamespace::FusionCallbackHandler::RPC_OnEventRaisedReliable(::Fusion::NetworkRunner*  runner, uint8_t  eventCode, ::ArrayW<uint8_t>  byteData, bool  hasOps, ::ArrayW<uint8_t>  netOptsData, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"RPC_OnEventRaisedReliable", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, eventCode, byteData, hasOps, netOptsData, info);
}
inline void GlobalNamespace::FusionCallbackHandler::RPC_OnEventRaisedUnreliable(::Fusion::NetworkRunner*  runner, uint8_t  eventCode, ::ArrayW<uint8_t>  byteData, bool  hasOps, ::ArrayW<uint8_t>  netOptsData, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"RPC_OnEventRaisedUnreliable", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, eventCode, byteData, hasOps, netOptsData, info);
}
inline bool GlobalNamespace::FusionCallbackHandler::CanRecieveEvent(::Fusion::NetworkRunner*  runner, ::GlobalNamespace::NetEventOptions*  opts, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"CanRecieveEvent", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::GlobalNamespace::NetEventOptions*>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, runner, opts, info);
}
inline void GlobalNamespace::FusionCallbackHandler::OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void GlobalNamespace::FusionCallbackHandler::OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void GlobalNamespace::FusionCallbackHandler::OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, reason);
}
inline void GlobalNamespace::FusionCallbackHandler::OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, data);
}
inline void GlobalNamespace::FusionCallbackHandler::OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, progress);
}
inline void GlobalNamespace::FusionCallbackHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionCallbackHandler::RPC_OnEventRaisedReliable@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"RPC_OnEventRaisedReliable@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, message);
}
inline void GlobalNamespace::FusionCallbackHandler::RPC_OnEventRaisedUnreliable@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionCallbackHandler*>(),
                        {"RPC_OnEventRaisedUnreliable@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, message);
}
inline ::GlobalNamespace::FusionCallbackHandler* GlobalNamespace::FusionCallbackHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionCallbackHandler*>());
}
/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr  GlobalNamespace::FusionCallbackHandler::operator ::Fusion::INetworkRunnerCallbacks*() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* GlobalNamespace::FusionCallbackHandler::i___Fusion__INetworkRunnerCallbacks() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  GlobalNamespace::FusionCallbackHandler::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* GlobalNamespace::FusionCallbackHandler::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionCallbackHandler::FusionCallbackHandler()   {
}
