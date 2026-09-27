#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionRegionCrawler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FusionRegionCrawler_def.hpp"
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
#include "GlobalNamespace/zzzz__FusionRegionCrawler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.get_PlayerCountGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FusionRegionCrawler::*)()>(&::GlobalNamespace::FusionRegionCrawler::get_PlayerCountGlobal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d86ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"get_PlayerCountGlobal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)()>(&::GlobalNamespace::FusionRegionCrawler::Start)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x56d86f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FusionRegionCrawler::*)()>(&::GlobalNamespace::FusionRegionCrawler::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56d87f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.UpdatePlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FusionRegionCrawler::*)()>(&::GlobalNamespace::FusionRegionCrawler::UpdatePlayerCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56d8888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"UpdatePlayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::GlobalNamespace::FusionRegionCrawler::OnSessionListUpdated)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x56d891c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnPlayerJoined)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnPlayerLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d894c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkInput)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::NetworkInput)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnInputMissing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnShutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnConnectedToServer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d895c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*, ::ArrayW<uint8_t>)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnConnectRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnConnectFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessagePtr)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d896c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::HostMigrationToken*)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnHostMigration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.Fusion_INetworkRunnerCallbacks_OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d897c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::GlobalNamespace::FusionRegionCrawler::OnObjectExitAOI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::GlobalNamespace::FusionRegionCrawler::OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetDisconnectReason)>(&::GlobalNamespace::FusionRegionCrawler::OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, ::System::ArraySegment_1<uint8_t>)>(&::GlobalNamespace::FusionRegionCrawler::OnReliableDataReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d898c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler.OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, float_t)>(&::GlobalNamespace::FusionRegionCrawler::OnReliableDataProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler::*)()>(&::GlobalNamespace::FusionRegionCrawler::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56d8994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_OnPlayerCountUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerCountUpdated;
}
constexpr ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated* const& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_OnPlayerCountUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerCountUpdated;
}
constexpr void GlobalNamespace::FusionRegionCrawler::__cordl_internal_set_OnPlayerCountUpdated(::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerCountUpdated = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_regionRunner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionRunner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_regionRunner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionRunner;
}
constexpr void GlobalNamespace::FusionRegionCrawler::__cordl_internal_set_regionRunner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regionRunner = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_sessionInfoCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionInfoCache;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>* const& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_sessionInfoCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionInfoCache;
}
constexpr void GlobalNamespace::FusionRegionCrawler::__cordl_internal_set_sessionInfoCache(::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionInfoCache = value;
}
constexpr bool& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_waitingForSessionListUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForSessionListUpdate;
}
constexpr bool const& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_waitingForSessionListUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForSessionListUpdate;
}
constexpr void GlobalNamespace::FusionRegionCrawler::__cordl_internal_set_waitingForSessionListUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForSessionListUpdate = value;
}
constexpr int32_t& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_globalPlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalPlayerCount;
}
constexpr int32_t const& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_globalPlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalPlayerCount;
}
constexpr void GlobalNamespace::FusionRegionCrawler::__cordl_internal_set_globalPlayerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalPlayerCount = value;
}
constexpr float_t& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_UpdateFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateFrequency;
}
constexpr float_t const& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_UpdateFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateFrequency;
}
constexpr void GlobalNamespace::FusionRegionCrawler::__cordl_internal_set_UpdateFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateFrequency = value;
}
constexpr bool& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_refreshPlayerCountAutomatically()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refreshPlayerCountAutomatically;
}
constexpr bool const& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_refreshPlayerCountAutomatically() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refreshPlayerCountAutomatically;
}
constexpr void GlobalNamespace::FusionRegionCrawler::__cordl_internal_set_refreshPlayerCountAutomatically(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___refreshPlayerCountAutomatically = value;
}
constexpr int32_t& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_tempSessionPlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSessionPlayerCount;
}
constexpr int32_t const& GlobalNamespace::FusionRegionCrawler::__cordl_internal_get_tempSessionPlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSessionPlayerCount;
}
constexpr void GlobalNamespace::FusionRegionCrawler::__cordl_internal_set_tempSessionPlayerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempSessionPlayerCount = value;
}
inline int32_t GlobalNamespace::FusionRegionCrawler::get_PlayerCountGlobal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"get_PlayerCountGlobal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::FusionRegionCrawler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FusionRegionCrawler::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FusionRegionCrawler::UpdatePlayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"UpdatePlayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::FusionRegionCrawler::OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, input);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, input);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, shutdownReason);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, request, token);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, remoteAddress, reason);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, message);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, data);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hostMigrationToken);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void GlobalNamespace::FusionRegionCrawler::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void GlobalNamespace::FusionRegionCrawler::OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void GlobalNamespace::FusionRegionCrawler::OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void GlobalNamespace::FusionRegionCrawler::OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, reason);
}
inline void GlobalNamespace::FusionRegionCrawler::OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, data);
}
inline void GlobalNamespace::FusionRegionCrawler::OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {"OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, progress);
}
inline void GlobalNamespace::FusionRegionCrawler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FusionRegionCrawler* GlobalNamespace::FusionRegionCrawler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionRegionCrawler*>());
}
/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr  GlobalNamespace::FusionRegionCrawler::operator ::Fusion::INetworkRunnerCallbacks*() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* GlobalNamespace::FusionRegionCrawler::i___Fusion__INetworkRunnerCallbacks() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  GlobalNamespace::FusionRegionCrawler::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* GlobalNamespace::FusionRegionCrawler::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionRegionCrawler::FusionRegionCrawler()   {
}
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::*)(int32_t)>(&::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56d88f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::*)()>(&::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::*)()>(&::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x56d8bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::*)()>(&::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d9024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::*)()>(&::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56d902c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::*)()>(&::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d9064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler>& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler> const& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FusionRegionCrawler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get__tempGlobalPlayerCount_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempGlobalPlayerCount_5__2;
}
constexpr int32_t const& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get__tempGlobalPlayerCount_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempGlobalPlayerCount_5__2;
}
constexpr void GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_set__tempGlobalPlayerCount_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempGlobalPlayerCount_5__2 = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr void GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_set___7__wrap2(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
constexpr int32_t& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get___7__wrap3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap3;
}
constexpr int32_t const& GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_get___7__wrap3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap3;
}
constexpr void GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::__cordl_internal_set___7__wrap3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap3 = value;
}
inline void GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13* GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13::FusionRegionCrawler__UpdatePlayerCount_d__13()   {
}
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::*)(int32_t)>(&::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56d8860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::*)()>(&::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::*)()>(&::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::MoveNext)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56d8acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::*)()>(&::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d8bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::*)()>(&::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56d8bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::*)()>(&::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d8bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler>& GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler> const& GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FusionRegionCrawler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12* GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12::FusionRegionCrawler__OccasionalUpdate_d__12()   {
}
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56d89ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::*)(int32_t)>(&::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56d8a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::*)(int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56d8a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::*)(::System::IAsyncResult*)>(&::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56d8abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::Invoke(int32_t  playerCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCount);
}
inline ::System::IAsyncResult* GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::BeginInvoke(int32_t  playerCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, playerCount, callback, object);
}
inline void GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated* GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated::FusionRegionCrawler_PlayerCountUpdated()   {
}
