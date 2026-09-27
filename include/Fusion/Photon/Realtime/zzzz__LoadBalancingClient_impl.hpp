#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/LoadBalancingClient.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthModeOption_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__ClientAppType_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__ClientState_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__EncryptionMode_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__JoinType_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__PhotonPortDefinition_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__ServerConnection_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StatusCode_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ClientAppType_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ClientState_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ConnectionCallbacksContainer_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ErrorInfoCallbacksContainer_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FindFriendsOptions_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__InRoomCallbacksContainer_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingPeer_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LobbyCallbacksContainer_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__MatchMakingCallbacksContainer_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__OpJoinRandomRoomParams_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Player_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Room_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ServerConnection_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__SystemConnectionSummary_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__WebFlags_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__WebRpcCallbacksContainer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_LoadBalancingPeer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::LoadBalancingPeer* (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_LoadBalancingPeer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4ef84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_LoadBalancingPeer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_LoadBalancingPeer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::LoadBalancingPeer*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_LoadBalancingPeer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4ef8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_LoadBalancingPeer", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingPeer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_SerializationProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::SerializationProtocol (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_SerializationProtocol)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f4ef94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_SerializationProtocol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_SerializationProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::SerializationProtocol)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_SerializationProtocol)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f490d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_SerializationProtocol", {}, {::i2c::type_of<::ExitGames::Client::Photon::SerializationProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_AppVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_AppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4efac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_AppVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_AppVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_AppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4efb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_AppVersion", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_AppId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_AppId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4efbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_AppId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_AppId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_AppId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4efc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_AppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_ClientType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::ClientAppType (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_ClientType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4efcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_ClientType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_ClientType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::ClientAppType)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_ClientType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4efd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_ClientType", {}, {::i2c::type_of<::Fusion::Photon::Realtime::ClientAppType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_AuthValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::AuthenticationValues* (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_AuthValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4efdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_AuthValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_AuthValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::AuthenticationValues*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_AuthValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4efe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_AuthValues", {}, {::i2c::type_of<::Fusion::Photon::Realtime::AuthenticationValues*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_ExpectedProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_ExpectedProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4efec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_ExpectedProtocol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_ExpectedProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_ExpectedProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4eff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_ExpectedProtocol", {}, {::i2c::type_of<::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_TokenForInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_TokenForInit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f4effc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_TokenForInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_IsUsingNameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_IsUsingNameServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_IsUsingNameServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_IsUsingNameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(bool)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_IsUsingNameServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_IsUsingNameServer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_NameServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_NameServerAddress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4f02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_NameServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_UseAlternativeUdpPorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_UseAlternativeUdpPorts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_UseAlternativeUdpPorts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_UseAlternativeUdpPorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(bool)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_UseAlternativeUdpPorts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_UseAlternativeUdpPorts", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_EnableProtocolFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_EnableProtocolFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_EnableProtocolFallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_EnableProtocolFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(bool)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_EnableProtocolFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_EnableProtocolFallback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_CurrentServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_CurrentServerAddress)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f4f180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_CurrentServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_MasterServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_MasterServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_MasterServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_MasterServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_MasterServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_MasterServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_GameServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_GameServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_GameServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_GameServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_GameServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_GameServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_Server
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::ServerConnection (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_Server)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_Server", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_Server
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::ServerConnection)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_Server)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_Server", {}, {::i2c::type_of<::Fusion::Photon::Realtime::ServerConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_ConnectCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_ConnectCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_ConnectCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_ConnectCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(int32_t)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_ConnectCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_ConnectCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::ClientState (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4c714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::ClientState)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_State)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f4f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_State", {}, {::i2c::type_of<::Fusion::Photon::Realtime::ClientState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_IsConnected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f4c0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_IsConnectedAndReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_IsConnectedAndReady)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f48a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_IsConnectedAndReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.add_StateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::add_StateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f4f20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"add_StateChanged", {}, {::i2c::type_of<::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.remove_StateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::remove_StateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f4f2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"remove_StateChanged", {}, {::i2c::type_of<::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.add_EventReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Action_1<::ExitGames::Client::Photon::EventData*>*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::add_EventReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f496c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"add_EventReceived", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::EventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.remove_EventReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Action_1<::ExitGames::Client::Photon::EventData*>*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::remove_EventReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f4f36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"remove_EventReceived", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::EventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.add_OpResponseReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::add_OpResponseReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f4f41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"add_OpResponseReceived", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.remove_OpResponseReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::remove_OpResponseReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f4f4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"remove_OpResponseReceived", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_DisconnectedCause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::DisconnectCause (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_DisconnectedCause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_DisconnectedCause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_DisconnectedCause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_DisconnectedCause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_DisconnectedCause", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_InLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_InLobby)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4f58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_InLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_CurrentLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::TypedLobby* (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_CurrentLobby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_CurrentLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_CurrentLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::TypedLobby*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_CurrentLobby)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4f5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_CurrentLobby", {}, {::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Player* (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_LocalPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_LocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_LocalPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4f5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_LocalPlayer", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_NickName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f4f5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_NickName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_NickName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f4f5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_NickName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_UserId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f4f5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_UserId)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f4f610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_UserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_CurrentRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Room* (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_CurrentRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_CurrentRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_CurrentRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::Room*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_CurrentRoom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4f69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_CurrentRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Room*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_InRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_InRoom)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f48ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_InRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_PlayersOnMasterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_PlayersOnMasterCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_PlayersOnMasterCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_PlayersOnMasterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(int32_t)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_PlayersOnMasterCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_PlayersOnMasterCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_PlayersInRoomsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_PlayersInRoomsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_PlayersInRoomsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_PlayersInRoomsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(int32_t)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_PlayersInRoomsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_PlayersInRoomsCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_RoomsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_RoomsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_RoomsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_RoomsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(int32_t)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_RoomsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_RoomsCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_IsFetchingFriendList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_IsFetchingFriendList)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4f6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_IsFetchingFriendList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_CloudRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_CloudRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_CloudRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_CloudRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_CloudRegion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4f6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_CloudRegion", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.get_CurrentCluster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::get_CurrentCluster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_CurrentCluster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.set_CurrentCluster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::set_CurrentCluster)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4f70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_CurrentCluster", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::ConnectionProtocol)>(&::Fusion::Photon::Realtime::LoadBalancingClient::_ctor)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5f478f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW, ::StringW, ::StringW, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::Fusion::Photon::Realtime::LoadBalancingClient::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f4f82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.GetNameServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::GetNameServerAddress)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f4f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"GetNameServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ToProtocolAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW, int32_t, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::Fusion::Photon::Realtime::LoadBalancingClient::ToProtocolAddress)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5f4f88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ToProtocolAddress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ConnectUsingSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::AppSettings*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::ConnectUsingSettings)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5f49ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::Connect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f4fc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ConnectToMasterServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::ConnectToMasterServer)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5f4fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ConnectToNameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::ConnectToNameServer)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5f4fe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ConnectToNameServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ConnectToRegionMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::ConnectToRegionMaster)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5f500a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ConnectToRegionMaster", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.CheckConnectSetupWebGl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::CheckConnectSetupWebGl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f4fbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CheckConnectSetupWebGl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW, ::StringW, ::Fusion::Photon::Realtime::ServerConnection)>(&::Fusion::Photon::Realtime::LoadBalancingClient::Connect)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5f50674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Photon::Realtime::ServerConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ReconnectToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::ReconnectToMaster)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5f50914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ReconnectToMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ReconnectAndRejoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::ReconnectAndRejoin)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5f50af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ReconnectAndRejoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::Disconnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4c71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::Photon::Realtime::LoadBalancingClient::Disconnect)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5f4c0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.DisconnectToReconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::DisconnectToReconnect)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f50d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"DisconnectToReconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.SimulateConnectionLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(bool)>(&::Fusion::Photon::Realtime::LoadBalancingClient::SimulateConnectionLoss)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f50dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"SimulateConnectionLoss", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.CallAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::CallAuthenticate)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5f50320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CallAuthenticate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::Service)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f4acc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"Service", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpGetRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpGetRegions)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f511ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpGetRegions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpFindFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ArrayW<::StringW>, ::Fusion::Photon::Realtime::FindFriendsOptions*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpFindFriends)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x5f51270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpFindFriends", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Fusion::Photon::Realtime::FindFriendsOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpJoinLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::TypedLobby*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpJoinLobby)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f51690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpJoinLobby", {}, {::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpLeaveLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpLeaveLobby)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f51798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpLeaveLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpJoinRandomRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::OpJoinRandomRoomParams*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpJoinRandomRoom)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5f51818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpJoinRandomRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpJoinRandomOrCreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::OpJoinRandomRoomParams*, ::Fusion::Photon::Realtime::EnterRoomParams*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpJoinRandomOrCreateRoom)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5f51988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpJoinRandomOrCreateRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>(), ::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpCreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::EnterRoomParams*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpCreateRoom)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f51b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpCreateRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpJoinOrCreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::EnterRoomParams*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpJoinOrCreateRoom)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f51c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpJoinOrCreateRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpJoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::EnterRoomParams*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpJoinRoom)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5f51d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpJoinRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpRejoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW, ::System::Object*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpRejoinRoom)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f51e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpRejoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpLeaveRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(bool, bool)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpLeaveRoom)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f51f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpLeaveRoom", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpGetGameList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::TypedLobby*, ::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpGetGameList)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f52048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpGetGameList", {}, {::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpSetCustomPropertiesOfActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(int32_t, ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Fusion::Photon::Realtime::WebFlags*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpSetCustomPropertiesOfActor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5f5214c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpSetCustomPropertiesOfActor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Fusion::Photon::Realtime::WebFlags*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpSetPropertiesOfActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(int32_t, ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Fusion::Photon::Realtime::WebFlags*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpSetPropertiesOfActor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5f52394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpSetPropertiesOfActor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Fusion::Photon::Realtime::WebFlags*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpSetCustomPropertiesOfRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Fusion::Photon::Realtime::WebFlags*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpSetCustomPropertiesOfRoom)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f5250c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpSetCustomPropertiesOfRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Fusion::Photon::Realtime::WebFlags*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpSetPropertyOfRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(uint8_t, ::System::Object*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpSetPropertyOfRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f527a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpSetPropertyOfRoom", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpSetPropertiesOfRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Fusion::Photon::Realtime::WebFlags*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpSetPropertiesOfRoom)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5f5265c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpSetPropertiesOfRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Fusion::Photon::Realtime::WebFlags*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpRaiseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(uint8_t, ::System::Object*, ::Fusion::Photon::Realtime::RaiseEventOptions*, ::ExitGames::Client::Photon::SendOptions)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpRaiseEvent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f52838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpChangeGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpChangeGroups)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f528f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ReadoutProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, int32_t)>(&::Fusion::Photon::Realtime::LoadBalancingClient::ReadoutProperties)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5f5298c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ReadoutProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ReadoutPropertiesForActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::Hashtable* (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::Hashtable*, int32_t)>(&::Fusion::Photon::Realtime::LoadBalancingClient::ReadoutPropertiesForActorNr)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f52d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ReadoutPropertiesForActorNr", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ChangeLocalID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(int32_t, bool)>(&::Fusion::Photon::Realtime::LoadBalancingClient::ChangeLocalID)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5f52e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ChangeLocalID", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.GameEnteredOnGameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::GameEnteredOnGameServer)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5f52fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"GameEnteredOnGameServer", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.UpdatedActorList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ArrayW<int32_t>)>(&::Fusion::Photon::Realtime::LoadBalancingClient::UpdatedActorList)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f532d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"UpdatedActorList", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.CreatePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Player* (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW, int32_t, bool, ::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::CreatePlayer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f536fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.CreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Room* (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW, ::Fusion::Photon::Realtime::RoomOptions*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::CreateRoom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f53780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.CheckIfOpAllowedOnServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(uint8_t, ::Fusion::Photon::Realtime::ServerConnection)>(&::Fusion::Photon::Realtime::LoadBalancingClient::CheckIfOpAllowedOnServer)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f537f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CheckIfOpAllowedOnServer", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::Fusion::Photon::Realtime::ServerConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.CheckIfOpCanBeSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(uint8_t, ::Fusion::Photon::Realtime::ServerConnection, ::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::CheckIfOpCanBeSent)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5f50ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CheckIfOpCanBeSent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::Fusion::Photon::Realtime::ServerConnection>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.CheckIfClientIsReadyToCallOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(uint8_t)>(&::Fusion::Photon::Realtime::LoadBalancingClient::CheckIfClientIsReadyToCallOperation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5f5390c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CheckIfClientIsReadyToCallOperation", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.DebugReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::DebugLevel, ::StringW)>(&::Fusion::Photon::Realtime::LoadBalancingClient::DebugReturn)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f53a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.CallbackRoomEnterFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::CallbackRoomEnterFailed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f53acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CallbackRoomEnterFailed", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OnOperationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OnOperationResponse)> {
  constexpr static std::size_t size = 0x14a0;
  constexpr static std::size_t addrs = 0x5f54084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OnStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::StatusCode)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OnStatusChanged)> {
  constexpr static std::size_t size = 0xbe4;
  constexpr static std::size_t addrs = 0x5f560ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::EventData*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OnEvent)> {
  constexpr static std::size_t size = 0xc0c;
  constexpr static std::size_t addrs = 0x5f57194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Object*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OnMessage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f580e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OnDisconnectMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::DisconnectMessage*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OnDisconnectMessageReceived)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5f5815c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OnDisconnectMessageReceived", {}, {::i2c::type_of<::ExitGames::Client::Photon::DisconnectMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OnRegionPingCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OnRegionPingCompleted)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5f582a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OnRegionPingCompleted", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.ReplacePortWithAlternative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, uint16_t)>(&::Fusion::Photon::Realtime::LoadBalancingClient::ReplacePortWithAlternative)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5f55864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ReplacePortWithAlternative", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.SetupEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::SetupEncryption)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5f556dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.OpWebRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::StringW, ::System::Object*, bool)>(&::Fusion::Photon::Realtime::LoadBalancingClient::OpWebRpc)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5f584b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpWebRpc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.AddCallbackTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Object*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::AddCallbackTarget)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f49774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"AddCallbackTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.RemoveCallbackTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)(::System::Object*)>(&::Fusion::Photon::Realtime::LoadBalancingClient::RemoveCallbackTarget)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f586bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"RemoveCallbackTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient.UpdateCallbackTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient::UpdateCallbackTargets)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5f57da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"UpdateCallbackTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::LoadBalancingPeer*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__LoadBalancingPeer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadBalancingPeer_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingPeer* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__LoadBalancingPeer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadBalancingPeer_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__LoadBalancingPeer_k__BackingField(::Fusion::Photon::Realtime::LoadBalancingPeer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LoadBalancingPeer_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AppVersion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AppVersion_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AppVersion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AppVersion_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__AppVersion_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AppVersion_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AppId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AppId_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AppId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AppId_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__AppId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AppId_k__BackingField = value;
}
constexpr ::Fusion::Photon::Realtime::ClientAppType& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__ClientType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClientType_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::ClientAppType const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__ClientType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClientType_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__ClientType_k__BackingField(::Fusion::Photon::Realtime::ClientAppType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClientType_k__BackingField = value;
}
constexpr ::Fusion::Photon::Realtime::AuthenticationValues*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AuthValues_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AuthValues_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::AuthenticationValues* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AuthValues_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AuthValues_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__AuthValues_k__BackingField(::Fusion::Photon::Realtime::AuthenticationValues*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AuthValues_k__BackingField = value;
}
constexpr ::Fusion::Photon::Realtime::AuthModeOption& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_AuthMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthMode;
}
constexpr ::Fusion::Photon::Realtime::AuthModeOption const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_AuthMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthMode;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_AuthMode(::Fusion::Photon::Realtime::AuthModeOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthMode = value;
}
constexpr ::Fusion::Photon::Realtime::EncryptionMode& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EncryptionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptionMode;
}
constexpr ::Fusion::Photon::Realtime::EncryptionMode const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EncryptionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptionMode;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_EncryptionMode(::Fusion::Photon::Realtime::EncryptionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EncryptionMode = value;
}
constexpr ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__ExpectedProtocol_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExpectedProtocol_k__BackingField;
}
constexpr ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__ExpectedProtocol_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExpectedProtocol_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__ExpectedProtocol_k__BackingField(::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExpectedProtocol_k__BackingField = value;
}
constexpr ::System::Object*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_tokenCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tokenCache;
}
constexpr ::System::Object* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_tokenCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tokenCache;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_tokenCache(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tokenCache = value;
}
constexpr bool& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__IsUsingNameServer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsUsingNameServer_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__IsUsingNameServer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsUsingNameServer_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__IsUsingNameServer_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsUsingNameServer_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_NameServerHost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameServerHost;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_NameServerHost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameServerHost;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_NameServerHost(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NameServerHost = value;
}
constexpr bool& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__UseAlternativeUdpPorts_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseAlternativeUdpPorts_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__UseAlternativeUdpPorts_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseAlternativeUdpPorts_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__UseAlternativeUdpPorts_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseAlternativeUdpPorts_k__BackingField = value;
}
constexpr ::Fusion::Photon::Realtime::PhotonPortDefinition& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ServerPortOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPortOverrides;
}
constexpr ::Fusion::Photon::Realtime::PhotonPortDefinition const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ServerPortOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPortOverrides;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_ServerPortOverrides(::Fusion::Photon::Realtime::PhotonPortDefinition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerPortOverrides = value;
}
constexpr bool& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__EnableProtocolFallback_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableProtocolFallback_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__EnableProtocolFallback_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableProtocolFallback_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__EnableProtocolFallback_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableProtocolFallback_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__MasterServerAddress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MasterServerAddress_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__MasterServerAddress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MasterServerAddress_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__MasterServerAddress_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MasterServerAddress_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__GameServerAddress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GameServerAddress_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__GameServerAddress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GameServerAddress_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__GameServerAddress_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GameServerAddress_k__BackingField = value;
}
constexpr ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_AddressRewriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddressRewriter;
}
constexpr ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_AddressRewriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddressRewriter;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_AddressRewriter(::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddressRewriter = value;
}
constexpr ::Fusion::Photon::Realtime::ServerConnection& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__Server_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Server_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::ServerConnection const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__Server_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Server_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__Server_k__BackingField(::Fusion::Photon::Realtime::ServerConnection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Server_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ProxyServerAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProxyServerAddress;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ProxyServerAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProxyServerAddress;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_ProxyServerAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProxyServerAddress = value;
}
constexpr int32_t& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__ConnectCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectCount_k__BackingField;
}
constexpr int32_t const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__ConnectCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectCount_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__ConnectCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ConnectCount_k__BackingField = value;
}
constexpr ::Fusion::Photon::Realtime::ClientState& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::Fusion::Photon::Realtime::ClientState const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_state(::Fusion::Photon::Realtime::ClientState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_StateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateChanged;
}
constexpr ::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_StateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateChanged;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_StateChanged(::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StateChanged = value;
}
constexpr ::System::Action_1<::ExitGames::Client::Photon::EventData*>*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EventReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventReceived;
}
constexpr ::System::Action_1<::ExitGames::Client::Photon::EventData*>* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EventReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventReceived;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventReceived = value;
}
constexpr ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_OpResponseReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpResponseReceived;
}
constexpr ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_OpResponseReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpResponseReceived;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OpResponseReceived = value;
}
constexpr ::Fusion::Photon::Realtime::ConnectionCallbacksContainer*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ConnectionCallbackTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionCallbackTargets;
}
constexpr ::Fusion::Photon::Realtime::ConnectionCallbacksContainer* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ConnectionCallbackTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionCallbackTargets;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_ConnectionCallbackTargets(::Fusion::Photon::Realtime::ConnectionCallbacksContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionCallbackTargets = value;
}
constexpr ::Fusion::Photon::Realtime::MatchMakingCallbacksContainer*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_MatchMakingCallbackTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchMakingCallbackTargets;
}
constexpr ::Fusion::Photon::Realtime::MatchMakingCallbacksContainer* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_MatchMakingCallbackTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchMakingCallbackTargets;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_MatchMakingCallbackTargets(::Fusion::Photon::Realtime::MatchMakingCallbacksContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MatchMakingCallbackTargets = value;
}
constexpr ::Fusion::Photon::Realtime::InRoomCallbacksContainer*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_InRoomCallbackTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InRoomCallbackTargets;
}
constexpr ::Fusion::Photon::Realtime::InRoomCallbacksContainer* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_InRoomCallbackTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InRoomCallbackTargets;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_InRoomCallbackTargets(::Fusion::Photon::Realtime::InRoomCallbacksContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InRoomCallbackTargets = value;
}
constexpr ::Fusion::Photon::Realtime::LobbyCallbacksContainer*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_LobbyCallbackTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyCallbackTargets;
}
constexpr ::Fusion::Photon::Realtime::LobbyCallbacksContainer* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_LobbyCallbackTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyCallbackTargets;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_LobbyCallbackTargets(::Fusion::Photon::Realtime::LobbyCallbacksContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LobbyCallbackTargets = value;
}
constexpr ::Fusion::Photon::Realtime::WebRpcCallbacksContainer*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_WebRpcCallbackTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WebRpcCallbackTargets;
}
constexpr ::Fusion::Photon::Realtime::WebRpcCallbacksContainer* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_WebRpcCallbackTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WebRpcCallbackTargets;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_WebRpcCallbackTargets(::Fusion::Photon::Realtime::WebRpcCallbacksContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WebRpcCallbackTargets = value;
}
constexpr ::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ErrorInfoCallbackTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorInfoCallbackTargets;
}
constexpr ::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ErrorInfoCallbackTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorInfoCallbackTargets;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_ErrorInfoCallbackTargets(::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorInfoCallbackTargets = value;
}
constexpr ::Fusion::Photon::Realtime::DisconnectCause& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__DisconnectedCause_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisconnectedCause_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::DisconnectCause const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__DisconnectedCause_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisconnectedCause_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__DisconnectedCause_k__BackingField(::Fusion::Photon::Realtime::DisconnectCause  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisconnectedCause_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_DisconnectMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisconnectMessage;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_DisconnectMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisconnectMessage;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_DisconnectMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisconnectMessage = value;
}
constexpr bool& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_TelemetryEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TelemetryEnabled;
}
constexpr bool const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_TelemetryEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TelemetryEnabled;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_TelemetryEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TelemetryEnabled = value;
}
constexpr bool& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_telemetrySent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telemetrySent;
}
constexpr bool const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_telemetrySent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telemetrySent;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_telemetrySent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___telemetrySent = value;
}
constexpr ::Fusion::Photon::Realtime::SystemConnectionSummary*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_SystemConnectionSummary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SystemConnectionSummary;
}
constexpr ::Fusion::Photon::Realtime::SystemConnectionSummary* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_SystemConnectionSummary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SystemConnectionSummary;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_SystemConnectionSummary(::Fusion::Photon::Realtime::SystemConnectionSummary*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SystemConnectionSummary = value;
}
constexpr ::Fusion::Photon::Realtime::TypedLobby*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentLobby_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentLobby_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::TypedLobby* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentLobby_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentLobby_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__CurrentLobby_k__BackingField(::Fusion::Photon::Realtime::TypedLobby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentLobby_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EnableLobbyStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableLobbyStatistics;
}
constexpr bool const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EnableLobbyStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableLobbyStatistics;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_EnableLobbyStatistics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableLobbyStatistics = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_lobbyStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyStatistics;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_lobbyStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyStatistics;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_lobbyStatistics(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyStatistics = value;
}
constexpr ::Fusion::Photon::Realtime::Player*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__LocalPlayer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalPlayer_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::Player* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__LocalPlayer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalPlayer_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__LocalPlayer_k__BackingField(::Fusion::Photon::Realtime::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalPlayer_k__BackingField = value;
}
constexpr ::Fusion::Photon::Realtime::Room*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentRoom_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentRoom_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::Room* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentRoom_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentRoom_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__CurrentRoom_k__BackingField(::Fusion::Photon::Realtime::Room*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentRoom_k__BackingField = value;
}
constexpr int32_t& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__PlayersOnMasterCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayersOnMasterCount_k__BackingField;
}
constexpr int32_t const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__PlayersOnMasterCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayersOnMasterCount_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__PlayersOnMasterCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayersOnMasterCount_k__BackingField = value;
}
constexpr int32_t& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__PlayersInRoomsCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayersInRoomsCount_k__BackingField;
}
constexpr int32_t const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__PlayersInRoomsCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayersInRoomsCount_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__PlayersInRoomsCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayersInRoomsCount_k__BackingField = value;
}
constexpr int32_t& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__RoomsCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomsCount_k__BackingField;
}
constexpr int32_t const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__RoomsCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomsCount_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__RoomsCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoomsCount_k__BackingField = value;
}
constexpr ::Fusion::Photon::Realtime::JoinType& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_lastJoinType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastJoinType;
}
constexpr ::Fusion::Photon::Realtime::JoinType const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_lastJoinType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastJoinType;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_lastJoinType(::Fusion::Photon::Realtime::JoinType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastJoinType = value;
}
constexpr ::Fusion::Photon::Realtime::EnterRoomParams*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_enterRoomParamsCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterRoomParamsCache;
}
constexpr ::Fusion::Photon::Realtime::EnterRoomParams* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_enterRoomParamsCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterRoomParamsCache;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_enterRoomParamsCache(::Fusion::Photon::Realtime::EnterRoomParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterRoomParamsCache = value;
}
constexpr ::ExitGames::Client::Photon::OperationResponse*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_failedRoomEntryOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failedRoomEntryOperation;
}
constexpr ::ExitGames::Client::Photon::OperationResponse* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_failedRoomEntryOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failedRoomEntryOperation;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_failedRoomEntryOperation(::ExitGames::Client::Photon::OperationResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failedRoomEntryOperation = value;
}
constexpr ::ArrayW<::StringW>& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_friendListRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendListRequested;
}
constexpr ::ArrayW<::StringW> const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_friendListRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendListRequested;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_friendListRequested(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendListRequested = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CloudRegion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloudRegion_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CloudRegion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloudRegion_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__CloudRegion_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CloudRegion_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentCluster_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentCluster_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentCluster_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentCluster_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set__CurrentCluster_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentCluster_k__BackingField = value;
}
constexpr ::Fusion::Photon::Realtime::RegionHandler*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_RegionHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionHandler;
}
constexpr ::Fusion::Photon::Realtime::RegionHandler* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_RegionHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionHandler;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_RegionHandler(::Fusion::Photon::Realtime::RegionHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RegionHandler = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_bestRegionSummaryFromStorage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestRegionSummaryFromStorage;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_bestRegionSummaryFromStorage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestRegionSummaryFromStorage;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_bestRegionSummaryFromStorage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestRegionSummaryFromStorage = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_SummaryToCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SummaryToCache;
}
constexpr ::StringW const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_SummaryToCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SummaryToCache;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_SummaryToCache(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SummaryToCache = value;
}
constexpr bool& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_connectToBestRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectToBestRegion;
}
constexpr bool const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_connectToBestRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectToBestRegion;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_connectToBestRegion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectToBestRegion = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_callbackTargetChanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackTargetChanges;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_callbackTargetChanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackTargetChanges;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_callbackTargetChanges(::System::Collections::Generic::Queue_1<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackTargetChanges = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_callbackTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackTargets;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_callbackTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackTargets;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_callbackTargets(::System::Collections::Generic::HashSet_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackTargets = value;
}
constexpr int32_t& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_NameServerPortInAppSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameServerPortInAppSettings;
}
constexpr int32_t const& Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_get_NameServerPortInAppSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameServerPortInAppSettings;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient::__cordl_internal_set_NameServerPortInAppSettings(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NameServerPortInAppSettings = value;
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::setStaticF_ProtocolToNameServerPort(::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,int32_t>*, "ProtocolToNameServerPort", ::Fusion::Photon::Realtime::LoadBalancingClient*>(std::forward<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,int32_t>* Fusion::Photon::Realtime::LoadBalancingClient::getStaticF_ProtocolToNameServerPort()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,int32_t>*, "ProtocolToNameServerPort", ::Fusion::Photon::Realtime::LoadBalancingClient*>();
}
inline ::Fusion::Photon::Realtime::LoadBalancingPeer* Fusion::Photon::Realtime::LoadBalancingClient::get_LoadBalancingPeer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_LoadBalancingPeer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::LoadBalancingPeer*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_LoadBalancingPeer(::Fusion::Photon::Realtime::LoadBalancingPeer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_LoadBalancingPeer", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingPeer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::SerializationProtocol Fusion::Photon::Realtime::LoadBalancingClient::get_SerializationProtocol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_SerializationProtocol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::SerializationProtocol>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_SerializationProtocol(::ExitGames::Client::Photon::SerializationProtocol  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_SerializationProtocol", {}, {::i2c::type_of<::ExitGames::Client::Photon::SerializationProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::get_AppVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_AppVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_AppVersion(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_AppVersion", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::get_AppId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_AppId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_AppId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_AppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Photon::Realtime::ClientAppType Fusion::Photon::Realtime::LoadBalancingClient::get_ClientType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_ClientType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::ClientAppType>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_ClientType(::Fusion::Photon::Realtime::ClientAppType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_ClientType", {}, {::i2c::type_of<::Fusion::Photon::Realtime::ClientAppType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Photon::Realtime::AuthenticationValues* Fusion::Photon::Realtime::LoadBalancingClient::get_AuthValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_AuthValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::AuthenticationValues*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_AuthValues(::Fusion::Photon::Realtime::AuthenticationValues*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_AuthValues", {}, {::i2c::type_of<::Fusion::Photon::Realtime::AuthenticationValues*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> Fusion::Photon::Realtime::LoadBalancingClient::get_ExpectedProtocol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_ExpectedProtocol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_ExpectedProtocol(::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_ExpectedProtocol", {}, {::i2c::type_of<::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Fusion::Photon::Realtime::LoadBalancingClient::get_TokenForInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_TokenForInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::get_IsUsingNameServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_IsUsingNameServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_IsUsingNameServer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_IsUsingNameServer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::get_NameServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_NameServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::get_UseAlternativeUdpPorts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_UseAlternativeUdpPorts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_UseAlternativeUdpPorts(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_UseAlternativeUdpPorts", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::get_EnableProtocolFallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_EnableProtocolFallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_EnableProtocolFallback(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_EnableProtocolFallback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::get_CurrentServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_CurrentServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::get_MasterServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_MasterServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_MasterServerAddress(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_MasterServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::get_GameServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_GameServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_GameServerAddress(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_GameServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Photon::Realtime::ServerConnection Fusion::Photon::Realtime::LoadBalancingClient::get_Server()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_Server", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::ServerConnection>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_Server(::Fusion::Photon::Realtime::ServerConnection  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_Server", {}, {::i2c::type_of<::Fusion::Photon::Realtime::ServerConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::LoadBalancingClient::get_ConnectCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_ConnectCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_ConnectCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_ConnectCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Photon::Realtime::ClientState Fusion::Photon::Realtime::LoadBalancingClient::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::ClientState>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_State(::Fusion::Photon::Realtime::ClientState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_State", {}, {::i2c::type_of<::Fusion::Photon::Realtime::ClientState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::get_IsConnectedAndReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_IsConnectedAndReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::add_StateChanged(::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"add_StateChanged", {}, {::i2c::type_of<::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::remove_StateChanged(::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"remove_StateChanged", {}, {::i2c::type_of<::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::add_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"add_EventReceived", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::EventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::remove_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"remove_EventReceived", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::EventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::add_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"add_OpResponseReceived", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::remove_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"remove_OpResponseReceived", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Photon::Realtime::DisconnectCause Fusion::Photon::Realtime::LoadBalancingClient::get_DisconnectedCause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_DisconnectedCause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::DisconnectCause>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_DisconnectedCause(::Fusion::Photon::Realtime::DisconnectCause  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_DisconnectedCause", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::get_InLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_InLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::TypedLobby* Fusion::Photon::Realtime::LoadBalancingClient::get_CurrentLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_CurrentLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::TypedLobby*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_CurrentLobby(::Fusion::Photon::Realtime::TypedLobby*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_CurrentLobby", {}, {::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Photon::Realtime::Player* Fusion::Photon::Realtime::LoadBalancingClient::get_LocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_LocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Player*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_LocalPlayer(::Fusion::Photon::Realtime::Player*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_LocalPlayer", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::get_NickName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_NickName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_NickName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_NickName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_UserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_UserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Photon::Realtime::Room* Fusion::Photon::Realtime::LoadBalancingClient::get_CurrentRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_CurrentRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Room*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_CurrentRoom(::Fusion::Photon::Realtime::Room*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_CurrentRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Room*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::get_InRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_InRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Fusion::Photon::Realtime::LoadBalancingClient::get_PlayersOnMasterCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_PlayersOnMasterCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_PlayersOnMasterCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_PlayersOnMasterCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::LoadBalancingClient::get_PlayersInRoomsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_PlayersInRoomsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_PlayersInRoomsCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_PlayersInRoomsCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::LoadBalancingClient::get_RoomsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_RoomsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_RoomsCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_RoomsCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::get_IsFetchingFriendList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_IsFetchingFriendList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::get_CloudRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_CloudRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_CloudRegion(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_CloudRegion", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::get_CurrentCluster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"get_CurrentCluster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::set_CurrentCluster(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"set_CurrentCluster", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::_ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, protocol);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::_ctor(::StringW  masterAddress, ::StringW  appId, ::StringW  gameVersion, ::ExitGames::Client::Photon::ConnectionProtocol  protocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, masterAddress, appId, gameVersion, protocol);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::GetNameServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"GetNameServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::ToProtocolAddress(::StringW  address, int32_t  port, ::ExitGames::Client::Photon::ConnectionProtocol  protocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ToProtocolAddress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, address, port, protocol);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::ConnectUsingSettings(::Fusion::Photon::Realtime::AppSettings*  appSettings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, appSettings);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::ConnectToMasterServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::ConnectToNameServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ConnectToNameServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::ConnectToRegionMaster(::StringW  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ConnectToRegionMaster", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, region);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::CheckConnectSetupWebGl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CheckConnectSetupWebGl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::Connect(::StringW  serverAddress, ::StringW  proxyServerAddress, ::Fusion::Photon::Realtime::ServerConnection  serverType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Photon::Realtime::ServerConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, serverAddress, proxyServerAddress, serverType);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::ReconnectToMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ReconnectToMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::ReconnectAndRejoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ReconnectAndRejoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::Disconnect(::Fusion::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::DisconnectToReconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"DisconnectToReconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::SimulateConnectionLoss(bool  simulateTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"SimulateConnectionLoss", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulateTimeout);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::CallAuthenticate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CallAuthenticate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::Service()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"Service", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpGetRegions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpGetRegions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpFindFriends(::ArrayW<::StringW>  friendsToFind, ::Fusion::Photon::Realtime::FindFriendsOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpFindFriends", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Fusion::Photon::Realtime::FindFriendsOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, friendsToFind, options);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpJoinLobby(::Fusion::Photon::Realtime::TypedLobby*  lobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpJoinLobby", {}, {::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lobby);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpLeaveLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpLeaveLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpJoinRandomRoom(::Fusion::Photon::Realtime::OpJoinRandomRoomParams*  opJoinRandomRoomParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpJoinRandomRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opJoinRandomRoomParams);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpJoinRandomOrCreateRoom(::Fusion::Photon::Realtime::OpJoinRandomRoomParams*  opJoinRandomRoomParams, ::Fusion::Photon::Realtime::EnterRoomParams*  createRoomParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpJoinRandomOrCreateRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>(), ::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opJoinRandomRoomParams, createRoomParams);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpCreateRoom(::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpCreateRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enterRoomParams);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpJoinOrCreateRoom(::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpJoinOrCreateRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enterRoomParams);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpJoinRoom(::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpJoinRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enterRoomParams);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpRejoinRoom(::StringW  roomName, ::System::Object*  ticket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpRejoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomName, ticket);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpLeaveRoom(bool  becomeInactive, bool  sendAuthCookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpLeaveRoom", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, becomeInactive, sendAuthCookie);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpGetGameList(::Fusion::Photon::Realtime::TypedLobby*  typedLobby, ::StringW  sqlLobbyFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpGetGameList", {}, {::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, typedLobby, sqlLobbyFilter);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpSetCustomPropertiesOfActor(int32_t  actorNr, ::ExitGames::Client::Photon::Hashtable*  propertiesToSet, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpSetCustomPropertiesOfActor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Fusion::Photon::Realtime::WebFlags*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actorNr, propertiesToSet, expectedProperties, webFlags);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpSetPropertiesOfActor(int32_t  actorNr, ::ExitGames::Client::Photon::Hashtable*  actorProperties, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpSetPropertiesOfActor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Fusion::Photon::Realtime::WebFlags*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actorNr, actorProperties, expectedProperties, webFlags);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpSetCustomPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable*  propertiesToSet, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpSetCustomPropertiesOfRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Fusion::Photon::Realtime::WebFlags*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propertiesToSet, expectedProperties, webFlags);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpSetPropertyOfRoom(uint8_t  propCode, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpSetPropertyOfRoom", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propCode, value);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpSetPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable*  gameProperties, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpSetPropertiesOfRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Fusion::Photon::Realtime::WebFlags*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameProperties, expectedProperties, webFlags);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpRaiseEvent(uint8_t  eventCode, ::System::Object*  customEventContent, ::Fusion::Photon::Realtime::RaiseEventOptions*  raiseEventOptions, ::ExitGames::Client::Photon::SendOptions  sendOptions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventCode, customEventContent, raiseEventOptions, sendOptions);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpChangeGroups(::ArrayW<uint8_t>  groupsToRemove, ::ArrayW<uint8_t>  groupsToAdd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groupsToRemove, groupsToAdd);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::ReadoutProperties(::ExitGames::Client::Photon::Hashtable*  gameProperties, ::ExitGames::Client::Photon::Hashtable*  actorProperties, int32_t  targetActorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ReadoutProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameProperties, actorProperties, targetActorNr);
}
inline ::ExitGames::Client::Photon::Hashtable* Fusion::Photon::Realtime::LoadBalancingClient::ReadoutPropertiesForActorNr(::ExitGames::Client::Photon::Hashtable*  actorProperties, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ReadoutPropertiesForActorNr", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*>(this, ___internal_method, actorProperties, actorNr);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::ChangeLocalID(int32_t  newId, bool  applyUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ChangeLocalID", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newId, applyUserId);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::GameEnteredOnGameServer(::ExitGames::Client::Photon::OperationResponse*  operationResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"GameEnteredOnGameServer", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationResponse);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::UpdatedActorList(::ArrayW<int32_t>  actorsInGame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"UpdatedActorList", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorsInGame);
}
inline ::Fusion::Photon::Realtime::Player* Fusion::Photon::Realtime::LoadBalancingClient::CreatePlayer(::StringW  actorName, int32_t  actorNumber, bool  isLocal, ::ExitGames::Client::Photon::Hashtable*  actorProperties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Player*>(this, ___internal_method, actorName, actorNumber, isLocal, actorProperties);
}
inline ::Fusion::Photon::Realtime::Room* Fusion::Photon::Realtime::LoadBalancingClient::CreateRoom(::StringW  roomName, ::Fusion::Photon::Realtime::RoomOptions*  opt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Room*>(this, ___internal_method, roomName, opt);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::CheckIfOpAllowedOnServer(uint8_t  opCode, ::Fusion::Photon::Realtime::ServerConnection  serverConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CheckIfOpAllowedOnServer", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::Fusion::Photon::Realtime::ServerConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opCode, serverConnection);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::CheckIfOpCanBeSent(uint8_t  opCode, ::Fusion::Photon::Realtime::ServerConnection  serverConnection, ::StringW  opName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CheckIfOpCanBeSent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::Fusion::Photon::Realtime::ServerConnection>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opCode, serverConnection, opName);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::CheckIfClientIsReadyToCallOperation(uint8_t  opCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CheckIfClientIsReadyToCallOperation", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opCode);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::DebugReturn(::ExitGames::Client::Photon::DebugLevel  level, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, message);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::CallbackRoomEnterFailed(::ExitGames::Client::Photon::OperationResponse*  operationResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"CallbackRoomEnterFailed", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationResponse);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::OnOperationResponse(::ExitGames::Client::Photon::OperationResponse*  operationResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationResponse);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::OnStatusChanged(::ExitGames::Client::Photon::StatusCode  statusCode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusCode);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::OnEvent(::ExitGames::Client::Photon::EventData*  photonEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, photonEvent);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::OnMessage(::System::Object*  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::OnDisconnectMessageReceived(::ExitGames::Client::Photon::DisconnectMessage*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OnDisconnectMessageReceived", {}, {::i2c::type_of<::ExitGames::Client::Photon::DisconnectMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::OnRegionPingCompleted(::Fusion::Photon::Realtime::RegionHandler*  regionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OnRegionPingCompleted", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandler);
}
inline ::StringW Fusion::Photon::Realtime::LoadBalancingClient::ReplacePortWithAlternative(::StringW  address, uint16_t  replacementPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"ReplacePortWithAlternative", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, address, replacementPort);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::SetupEncryption(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  encryptionData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encryptionData);
}
inline bool Fusion::Photon::Realtime::LoadBalancingClient::OpWebRpc(::StringW  uriPath, ::System::Object*  parameters, bool  sendAuthCookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"OpWebRpc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uriPath, parameters, sendAuthCookie);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::AddCallbackTarget(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"AddCallbackTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::RemoveCallbackTarget(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"RemoveCallbackTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Fusion::Photon::Realtime::LoadBalancingClient::UpdateCallbackTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                        {"UpdateCallbackTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline void Fusion::Photon::Realtime::LoadBalancingClient::UpdateCallbackTarget(::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*  change, ::System::Collections::Generic::List_1<T>*  container)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(),
                    {"UpdateCallbackTarget", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, change, container);
}
inline ::Fusion::Photon::Realtime::LoadBalancingClient* Fusion::Photon::Realtime::LoadBalancingClient::New_ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocol)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::LoadBalancingClient*>(protocol));
}
inline ::Fusion::Photon::Realtime::LoadBalancingClient* Fusion::Photon::Realtime::LoadBalancingClient::New_ctor(::StringW  masterAddress, ::StringW  appId, ::StringW  gameVersion, ::ExitGames::Client::Photon::ConnectionProtocol  protocol)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::LoadBalancingClient*>(masterAddress, appId, gameVersion, protocol));
}
/// @brief Convert operator to "::ExitGames::Client::Photon::IPhotonPeerListener"
constexpr  Fusion::Photon::Realtime::LoadBalancingClient::operator ::ExitGames::Client::Photon::IPhotonPeerListener*() noexcept {
return static_cast<::ExitGames::Client::Photon::IPhotonPeerListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::ExitGames::Client::Photon::IPhotonPeerListener"
constexpr ::ExitGames::Client::Photon::IPhotonPeerListener* Fusion::Photon::Realtime::LoadBalancingClient::i___ExitGames__Client__Photon__IPhotonPeerListener() noexcept {
return static_cast<::ExitGames::Client::Photon::IPhotonPeerListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient::LoadBalancingClient()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::*)(::System::Object*, bool)>(&::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f58680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::__cordl_internal_get_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr ::System::Object* const& Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::__cordl_internal_get_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::__cordl_internal_set_Target(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Target = value;
}
constexpr bool& Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::__cordl_internal_get_AddTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddTarget;
}
constexpr bool const& Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::__cordl_internal_get_AddTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddTarget;
}
constexpr void Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::__cordl_internal_set_AddTarget(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddTarget = value;
}
inline void Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::_ctor(::System::Object*  target, bool  addTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, addTarget);
}
inline ::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange* Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::New_ctor(::System::Object*  target, bool  addTarget)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>(target, addTarget));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange::LoadBalancingClient_CallbackTargetChange()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters::*)()>(&::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f58858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters* Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters::LoadBalancingClient_EncryptionDataParameters()   {
}
