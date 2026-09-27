#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonNetwork.hpp"
#include "Photon/Pun/zzzz__ConnectMethod_impl.hpp"
#include "Photon/Pun/zzzz__PhotonNetwork_RaiseEventBatch_impl.hpp"
#include "Photon/Pun/zzzz__PunLogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "Photon/Pun/zzzz__PhotonNetwork_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary_2_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary`2_ValueIterator_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "Photon/Pun/zzzz__IPunPrefabPool_def.hpp"
#include "Photon/Pun/zzzz__InstantiateParameters_def.hpp"
#include "Photon/Pun/zzzz__PhotonNetwork_RaiseEventBatch_def.hpp"
#include "Photon/Pun/zzzz__PhotonNetwork_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
#include "Photon/Pun/zzzz__ServerSettings_def.hpp"
#include "Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Photon/Realtime/zzzz__ClientState_def.hpp"
#include "Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__MatchmakingMode_def.hpp"
#include "Photon/Realtime/zzzz__PhotonPortDefinition_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Photon/Realtime/zzzz__Room_def.hpp"
#include "Photon/Realtime/zzzz__ServerConnection_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_GameVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_GameVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa71563c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_GameVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_GameVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::set_GameVersion)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa715694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_GameVersion", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_AppVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_AppVersion)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa715764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_AppVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PhotonServerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::ServerSettings> (*)()>(&::Photon::Pun::PhotonNetwork::get_PhotonServerSettings)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa71290c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PhotonServerSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_PhotonServerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::ServerSettings*)>(&::Photon::Pun::PhotonNetwork::set_PhotonServerSettings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa715b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_PhotonServerSettings", {}, {::i2c::type_of<::Photon::Pun::ServerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_ServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_ServerAddress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa715be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_ServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CloudRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_CloudRegion)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa715c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CloudRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CurrentCluster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_CurrentCluster)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa715f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CurrentCluster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_BestRegionSummaryInPreferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_BestRegionSummaryInPreferences)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa715fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_BestRegionSummaryInPreferences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_BestRegionSummaryInPreferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::set_BestRegionSummaryInPreferences)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa715fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_BestRegionSummaryInPreferences", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_IsConnected)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa715d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_IsConnectedAndReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_IsConnectedAndReady)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa716078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_IsConnectedAndReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_NetworkClientState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::ClientState (*)()>(&::Photon::Pun::PhotonNetwork::get_NetworkClientState)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa716160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_NetworkClientState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_Server
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::ServerConnection (*)()>(&::Photon::Pun::PhotonNetwork::get_Server)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa715e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_Server", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_AuthValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::AuthenticationValues* (*)()>(&::Photon::Pun::PhotonNetwork::get_AuthValues)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa71625c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_AuthValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_AuthValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::AuthenticationValues*)>(&::Photon::Pun::PhotonNetwork::set_AuthValues)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa7162e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_AuthValues", {}, {::i2c::type_of<::Photon::Realtime::AuthenticationValues*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CurrentLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::TypedLobby* (*)()>(&::Photon::Pun::PhotonNetwork::get_CurrentLobby)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa71637c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CurrentLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CurrentRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Room* (*)()>(&::Photon::Pun::PhotonNetwork::get_CurrentRoom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa712188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CurrentRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (*)()>(&::Photon::Pun::PhotonNetwork::get_LocalPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa7163e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_LocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_NickName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa716468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_NickName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::set_NickName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7164cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_NickName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PlayerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Photon::Realtime::Player*> (*)()>(&::Photon::Pun::PhotonNetwork::get_PlayerList)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa716538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PlayerList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PlayerListOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Photon::Realtime::Player*> (*)()>(&::Photon::Pun::PhotonNetwork::get_PlayerListOthers)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xa7166e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PlayerListOthers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_OfflineMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_OfflineMode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa716948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_OfflineMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_OfflineMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_OfflineMode)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa7169a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_OfflineMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_AutomaticallySyncScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_AutomaticallySyncScene)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa716dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_AutomaticallySyncScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_AutomaticallySyncScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_AutomaticallySyncScene)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa716e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_AutomaticallySyncScene", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_EnableLobbyStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_EnableLobbyStatistics)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa716ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_EnableLobbyStatistics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_InLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_InLobby)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa716f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_InLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_SendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_SendRate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7129d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_SendRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_SendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::set_SendRate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa716f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_SendRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_SerializationRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_SerializationRate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa712a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_SerializationRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_SerializationRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::set_SerializationRate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa717098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_SerializationRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_IsMessageQueueRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_IsMessageQueueRunning)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa7171ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_IsMessageQueueRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_IsMessageQueueRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_IsMessageQueueRunning)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa717204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_IsMessageQueueRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Photon::Pun::PhotonNetwork::get_Time)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa717264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_Time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Photon::Pun::PhotonNetwork::get_CurrentTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa71746c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_ServerTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_ServerTimestamp)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa717334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_ServerTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_KeepAliveInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Photon::Pun::PhotonNetwork::set_KeepAliveInBackground)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa7174cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_KeepAliveInBackground", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_KeepAliveInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Photon::Pun::PhotonNetwork::get_KeepAliveInBackground)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa71762c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_KeepAliveInBackground", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_IsMasterClient)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa71777c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_IsMasterClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_MasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (*)()>(&::Photon::Pun::PhotonNetwork::get_MasterClient)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa7152fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_MasterClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_InRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_InRoom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa71787c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_InRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CountOfPlayersOnMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_CountOfPlayersOnMaster)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa7178d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CountOfPlayersOnMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CountOfPlayersInRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_CountOfPlayersInRooms)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa717938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CountOfPlayersInRooms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CountOfPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_CountOfPlayers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa71799c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CountOfPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CountOfRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_CountOfRooms)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa717a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CountOfRooms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_NetworkStatisticsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_NetworkStatisticsEnabled)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa717a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_NetworkStatisticsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_NetworkStatisticsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_NetworkStatisticsEnabled)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa717ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_NetworkStatisticsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_ResentReliableCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_ResentReliableCommands)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa717b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_ResentReliableCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CrcCheckEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_CrcCheckEnabled)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa717bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CrcCheckEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_CrcCheckEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_CrcCheckEnabled)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa717c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_CrcCheckEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PacketLossByCrcCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_PacketLossByCrcCheck)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa717d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PacketLossByCrcCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_MaxResendsBeforeDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_MaxResendsBeforeDisconnect)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa717df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_MaxResendsBeforeDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_MaxResendsBeforeDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::set_MaxResendsBeforeDisconnect)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa717e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_MaxResendsBeforeDisconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_QuickResends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_QuickResends)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa717ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_QuickResends", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_QuickResends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::set_QuickResends)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa717f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_QuickResends", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_UseAlternativeUdpPorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_UseAlternativeUdpPorts)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa717fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_UseAlternativeUdpPorts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_UseAlternativeUdpPorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_UseAlternativeUdpPorts)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa718034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_UseAlternativeUdpPorts", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_ServerPortOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::PhotonPortDefinition (*)()>(&::Photon::Pun::PhotonNetwork::get_ServerPortOverrides)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa718094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_ServerPortOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_ServerPortOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::PhotonPortDefinition)>(&::Photon::Pun::PhotonNetwork::set_ServerPortOverrides)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa718124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_ServerPortOverrides", {}, {::i2c::type_of<::Photon::Realtime::PhotonPortDefinition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.StaticReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::StaticReset)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0xa718b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"StaticReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ConnectUsingSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::ConnectUsingSettings)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa719204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ConnectUsingSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ConnectUsingSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::AppSettings*, bool)>(&::Photon::Pun::PhotonNetwork::ConnectUsingSettings)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0xa719318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ConnectUsingSettings", {}, {::i2c::type_of<::Photon::Realtime::AppSettings*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ConnectToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t, ::StringW)>(&::Photon::Pun::PhotonNetwork::ConnectToMaster)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0xa7199c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ConnectToMaster", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ConnectToBestCloudServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::ConnectToBestCloudServer)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa719da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ConnectToBestCloudServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ConnectToRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::ConnectToRegion)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa719f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ConnectToRegion", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::Disconnect)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa71a1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.Reconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::Reconnect)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xa71a2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"Reconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.NetworkStatisticsReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::NetworkStatisticsReset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa71a678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"NetworkStatisticsReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.NetworkStatisticsToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::NetworkStatisticsToString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa71a6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"NetworkStatisticsToString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.VerifyCanUseNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::VerifyCanUseNetwork)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa71a7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"VerifyCanUseNetwork", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.GetPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::GetPing)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa71a880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"GetPing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.FetchServerTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::FetchServerTimestamp)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa71a8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"FetchServerTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SendAllOutgoingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::SendAllOutgoingCommands)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa71a984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SendAllOutgoingCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork::CloseConnection)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa71aa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"CloseConnection", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork::SetMasterClient)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa71ac48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetMasterClient", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinRandomRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::JoinRandomRoom)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa71ada4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinRandomRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinRandomRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ExitGames::Client::Photon::Hashtable*, uint8_t)>(&::Photon::Pun::PhotonNetwork::JoinRandomRoom)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa71b2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinRandomRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinRandomRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ExitGames::Client::Photon::Hashtable*, uint8_t, ::Photon::Realtime::MatchmakingMode, ::Photon::Realtime::TypedLobby*, ::StringW, ::ArrayW<::StringW>)>(&::Photon::Pun::PhotonNetwork::JoinRandomRoom)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0xa71ae08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinRandomRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Realtime::MatchmakingMode>(), ::i2c::type_of<::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinRandomOrCreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ExitGames::Client::Photon::Hashtable*, uint8_t, ::Photon::Realtime::MatchmakingMode, ::Photon::Realtime::TypedLobby*, ::StringW, ::StringW, ::Photon::Realtime::RoomOptions*, ::ArrayW<::StringW>)>(&::Photon::Pun::PhotonNetwork::JoinRandomOrCreateRoom)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0xa71b4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinRandomOrCreateRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Realtime::MatchmakingMode>(), ::i2c::type_of<::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.CreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::Photon::Realtime::RoomOptions*, ::Photon::Realtime::TypedLobby*, ::ArrayW<::StringW>)>(&::Photon::Pun::PhotonNetwork::CreateRoom)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xa71ba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"CreateRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinOrCreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::Photon::Realtime::RoomOptions*, ::Photon::Realtime::TypedLobby*, ::ArrayW<::StringW>)>(&::Photon::Pun::PhotonNetwork::JoinOrCreateRoom)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0xa71bf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinOrCreateRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<::StringW>)>(&::Photon::Pun::PhotonNetwork::JoinRoom)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0xa71c424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RejoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::RejoinRoom)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xa71c88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RejoinRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ReconnectAndRejoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::ReconnectAndRejoin)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xa71cc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ReconnectAndRejoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LeaveRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Photon::Pun::PhotonNetwork::LeaveRoom)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa71cf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LeaveRoom", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.EnterOfflineRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Photon::Realtime::RoomOptions*, bool)>(&::Photon::Pun::PhotonNetwork::EnterOfflineRoom)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa71b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"EnterOfflineRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::JoinLobby)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa71d154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::TypedLobby*)>(&::Photon::Pun::PhotonNetwork::JoinLobby)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa71d1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinLobby", {}, {::i2c::type_of<::Photon::Realtime::TypedLobby*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LeaveLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::LeaveLobby)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa71d250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LeaveLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.FindFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>)>(&::Photon::Pun::PhotonNetwork::FindFriends)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa71d2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"FindFriends", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.GetCustomRoomList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::TypedLobby*, ::StringW)>(&::Photon::Pun::PhotonNetwork::GetCustomRoomList)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa71d3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"GetCustomRoomList", {}, {::i2c::type_of<::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetPlayerCustomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::PhotonNetwork::SetPlayerCustomProperties)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa71d428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetPlayerCustomProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemovePlayerCustomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>)>(&::Photon::Pun::PhotonNetwork::RemovePlayerCustomProperties)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa71d644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemovePlayerCustomProperties", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RaiseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t, ::System::Object*, ::Photon::Realtime::RaiseEventOptions*, ::ExitGames::Client::Photon::SendOptions)>(&::Photon::Pun::PhotonNetwork::RaiseEvent)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa71d7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RaiseEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Photon::Realtime::RaiseEventOptions*>(), ::i2c::type_of<::ExitGames::Client::Photon::SendOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RaiseEventInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t, ::System::Object*, ::Photon::Realtime::RaiseEventOptions*, ::ExitGames::Client::Photon::SendOptions)>(&::Photon::Pun::PhotonNetwork::RaiseEventInternal)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa71da28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RaiseEventInternal", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Photon::Realtime::RaiseEventOptions*>(), ::i2c::type_of<::ExitGames::Client::Photon::SendOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AllocateViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::AllocateViewID)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa71db94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AllocateViewID", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AllocateSceneViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::AllocateSceneViewID)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa71e070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AllocateSceneViewID", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AllocateRoomViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::AllocateRoomViewID)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa71e0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AllocateRoomViewID", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AllocateViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::Photon::Pun::PhotonNetwork::AllocateViewID)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa71e1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AllocateViewID", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AllocateViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::AllocateViewID)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa71dc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AllocateViewID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, uint8_t, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonNetwork::Instantiate)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa71e2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"Instantiate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.InstantiateSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, uint8_t, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonNetwork::InstantiateSceneObject)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa71eda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"InstantiateSceneObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.InstantiateRoomObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, uint8_t, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonNetwork::InstantiateRoomObject)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa71ee6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"InstantiateRoomObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.NetworkInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork::NetworkInstantiate)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0xa71f034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"NetworkInstantiate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.NetworkInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::Photon::Pun::InstantiateParameters, bool, bool)>(&::Photon::Pun::PhotonNetwork::NetworkInstantiate)> {
  constexpr static std::size_t size = 0x8cc;
  constexpr static std::size_t addrs = 0xa71e4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"NetworkInstantiate", {}, {::i2c::type_of<::Photon::Pun::InstantiateParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SendInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Pun::InstantiateParameters, bool)>(&::Photon::Pun::PhotonNetwork::SendInstantiate)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0xa71f6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SendInstantiate", {}, {::i2c::type_of<::Photon::Pun::InstantiateParameters>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::Destroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa71fbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"Destroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Photon::Pun::PhotonNetwork::Destroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa720228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DestroyPlayerObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork::DestroyPlayerObjects)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa720288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DestroyPlayerObjects", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DestroyPlayerObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::DestroyPlayerObjects)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa72032c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DestroyPlayerObjects", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DestroyAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::DestroyAll)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa7209a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DestroyAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveRPCs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork::RemoveRPCs)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa720ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveRPCs", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveRPCs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::RemoveRPCs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa720ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveRPCs", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*, ::StringW, ::Photon::Pun::RpcTarget, bool, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonNetwork::RPC)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa720ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::RpcTarget>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*, ::StringW, ::Photon::Realtime::Player*, bool, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonNetwork::RPC)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa721bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.FindGameObjectsWithComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* (*)(::System::Type*)>(&::Photon::Pun::PhotonNetwork::FindGameObjectsWithComponent)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa721df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"FindGameObjectsWithComponent", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetInterestGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, bool)>(&::Photon::Pun::PhotonNetwork::SetInterestGroups)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa721f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetInterestGroups", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LoadLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::LoadLevel)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa72242c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LoadLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LoadLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::LoadLevel)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa7225c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LoadLevel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.WebRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Object*, bool)>(&::Photon::Pun::PhotonNetwork::WebRpc)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa722738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"WebRpc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetupLogging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::SetupLogging)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa7198cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetupLogging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LoadOrCreateSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::LoadOrCreateSettings)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0xa7157c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LoadOrCreateSettings", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PhotonViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Photon::Pun::PhotonView>> (*)()>(&::Photon::Pun::PhotonNetwork::get_PhotonViews)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xa7227bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PhotonViews", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PhotonViewCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<int32_t,::UnityW<::Photon::Pun::PhotonView>> (*)()>(&::Photon::Pun::PhotonNetwork::get_PhotonViewCollection)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa7144a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PhotonViewCollection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_ViewCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_ViewCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa714b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_ViewCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.add_OnOwnershipRequestEv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*)>(&::Photon::Pun::PhotonNetwork::add_OnOwnershipRequestEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa722a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"add_OnOwnershipRequestEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.remove_OnOwnershipRequestEv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*)>(&::Photon::Pun::PhotonNetwork::remove_OnOwnershipRequestEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa722af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"remove_OnOwnershipRequestEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.add_OnOwnershipTransferedEv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*)>(&::Photon::Pun::PhotonNetwork::add_OnOwnershipTransferedEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa722bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"add_OnOwnershipTransferedEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.remove_OnOwnershipTransferedEv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*)>(&::Photon::Pun::PhotonNetwork::remove_OnOwnershipTransferedEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa722ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"remove_OnOwnershipTransferedEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.add_OnOwnershipTransferFailedEv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*)>(&::Photon::Pun::PhotonNetwork::add_OnOwnershipTransferFailedEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa722dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"add_OnOwnershipTransferFailedEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.remove_OnOwnershipTransferFailedEv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*)>(&::Photon::Pun::PhotonNetwork::remove_OnOwnershipTransferFailedEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa722ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"remove_OnOwnershipTransferFailedEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AddCallbackTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Photon::Pun::PhotonNetwork::AddCallbackTarget)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa712a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AddCallbackTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveCallbackTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Photon::Pun::PhotonNetwork::RemoveCallbackTarget)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xa712e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveCallbackTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.CallbacksToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::CallbacksToString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa722fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"CallbacksToString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PrefabPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Pun::IPunPrefabPool* (*)()>(&::Photon::Pun::PhotonNetwork::get_PrefabPool)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa723138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PrefabPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_PrefabPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::IPunPrefabPool*)>(&::Photon::Pun::PhotonNetwork::set_PrefabPool)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa719138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_PrefabPool", {}, {::i2c::type_of<::Photon::Pun::IPunPrefabPool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_LevelLoadingProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Photon::Pun::PhotonNetwork::get_LevelLoadingProgress)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa723190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_LevelLoadingProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LeftRoomCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::LeftRoomCleanup)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa716bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LeftRoomCleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LocalCleanupAnythingInstantiated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::LocalCleanupAnythingInstantiated)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0xa714c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LocalCleanupAnythingInstantiated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ResetPhotonViewsOnSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::ResetPhotonViewsOnSerialize)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa72327c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ResetPhotonViewsOnSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ExecuteRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork::ExecuteRpc)> {
  constexpr static std::size_t size = 0xff0;
  constexpr static std::size_t addrs = 0xa723418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ExecuteRpc", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.CheckTypeMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::System::Reflection::ParameterInfo*>, ::ArrayW<::System::Type*>)>(&::Photon::Pun::PhotonNetwork::CheckTypeMatch)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa724688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"CheckTypeMatch", {}, {::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DestroyPlayerObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::Photon::Pun::PhotonNetwork::DestroyPlayerObjects)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0xa7204a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DestroyPlayerObjects", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DestroyAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::DestroyAll)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa720a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DestroyAll", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveInstantiatedGO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, bool)>(&::Photon::Pun::PhotonNetwork::RemoveInstantiatedGO)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0xa71fcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveInstantiatedGO", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ServerCleanInstantiateAndDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::ServerCleanInstantiateAndDestroy)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa724bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ServerCleanInstantiateAndDestroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SendDestroyOfPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::SendDestroyOfPlayer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa72490c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SendDestroyOfPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SendDestroyOfAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::SendDestroyOfAll)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa724adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SendDestroyOfAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OpRemoveFromServerInstantiationsOfPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::OpRemoveFromServerInstantiationsOfPlayer)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa7247f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OpRemoveFromServerInstantiationsOfPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RequestOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Photon::Pun::PhotonNetwork::RequestOwnership)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa725048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RequestOwnership", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.TransferOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Photon::Pun::PhotonNetwork::TransferOwnership)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa725138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"TransferOwnership", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OwnershipUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t)>(&::Photon::Pun::PhotonNetwork::OwnershipUpdate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa725228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OwnershipUpdate", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LocalCleanPhotonView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::LocalCleanPhotonView)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa724ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LocalCleanPhotonView", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.GetPhotonView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::PhotonView> (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::GetPhotonView)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa724408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"GetPhotonView", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ViewIDExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::ViewIDExists)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa72532c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ViewIDExists", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RegisterPhotonView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::RegisterPhotonView)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0xa7253ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RegisterPhotonView", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OpCleanActorRpcBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::OpCleanActorRpcBuffer)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa720bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OpCleanActorRpcBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OpRemoveCompleteCacheOfPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::OpRemoveCompleteCacheOfPlayer)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa72627c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OpRemoveCompleteCacheOfPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OpRemoveCompleteCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::OpRemoveCompleteCache)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa724a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OpRemoveCompleteCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveCacheOfLeftPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::RemoveCacheOfLeftPlayers)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa726394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveCacheOfLeftPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.CleanRpcBufferIfMine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::CleanRpcBufferIfMine)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa720d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"CleanRpcBufferIfMine", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OpCleanRpcBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::OpCleanRpcBuffer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa724f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OpCleanRpcBuffer", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveRPCsInGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::RemoveRPCsInGroup)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa7264f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveRPCsInGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveBufferedRPCs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::StringW, ::ArrayW<int32_t>)>(&::Photon::Pun::PhotonNetwork::RemoveBufferedRPCs)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa7266c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveBufferedRPCs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetLevelPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t)>(&::Photon::Pun::PhotonNetwork::SetLevelPrefix)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa726918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetLevelPrefix", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*, ::StringW, ::Photon::Pun::RpcTarget, ::Photon::Realtime::Player*, bool, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonNetwork::RPC)> {
  constexpr static std::size_t size = 0xafc;
  constexpr static std::size_t addrs = 0xa7210dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::RpcTarget>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetInterestGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Photon::Pun::PhotonNetwork::SetInterestGroups)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xa722074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetInterestGroups", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetSendingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, bool)>(&::Photon::Pun::PhotonNetwork::SetSendingEnabled)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa726974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetSendingEnabled", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetSendingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Photon::Pun::PhotonNetwork::SetSendingEnabled)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa726a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetSendingEnabled", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.NewSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::NewSceneLoaded)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xa726b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"NewSceneLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RunViewUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::RunViewUpdate)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0xa7136d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RunViewUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SendSerializeViewBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonNetwork_SerializeViewBatch*)>(&::Photon::Pun::PhotonNetwork::SendSerializeViewBatch)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa727658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SendSerializeViewBatch", {}, {::i2c::type_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Object*>* (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xa72702c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnSerializeWrite", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::Photon::Realtime::Player*, int32_t, int16_t)>(&::Photon::Pun::PhotonNetwork::OnSerializeRead)> {
  constexpr static std::size_t size = 0x86c;
  constexpr static std::size_t addrs = 0xa725a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnSerializeRead", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DeltaCompressionWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Object*>* (*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Photon::Pun::PhotonNetwork::DeltaCompressionWrite)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xa727fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DeltaCompressionWrite", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DeltaCompressionRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(::ArrayW<::System::Object*>, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonNetwork::DeltaCompressionRead)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa728278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DeltaCompressionRead", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AlmostEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::System::Object*>*, ::System::Collections::Generic::IList_1<::System::Object*>*)>(&::Photon::Pun::PhotonNetwork::AlmostEquals)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xa727cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AlmostEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Object*)>(&::Photon::Pun::PhotonNetwork::AlmostEquals)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xa72856c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.GetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::MonoBehaviour*, ::StringW, ::by_ref<::System::Reflection::MethodInfo*>)>(&::Photon::Pun::PhotonNetwork::GetMethod)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa7289a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"GetMethod", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Reflection::MethodInfo*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LoadLevelIfSynced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::LoadLevelIfSynced)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa7140c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LoadLevelIfSynced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetLevelInPropsIfSynced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Photon::Pun::PhotonNetwork::SetLevelInPropsIfSynced)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0xa713c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetLevelInPropsIfSynced", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::EventData*)>(&::Photon::Pun::PhotonNetwork::OnEvent)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0xa728b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Photon::Pun::PhotonNetwork::OnOperation)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa729400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnOperation", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnClientStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState)>(&::Photon::Pun::PhotonNetwork::OnClientStateChanged)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa72965c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnClientStateChanged", {}, {::i2c::type_of<::Photon::Realtime::ClientState>(), ::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnRegionsPinged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::RegionHandler*)>(&::Photon::Pun::PhotonNetwork::OnRegionsPinged)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa72977c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnRegionsPinged", {}, {::i2c::type_of<::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::PhotonNetwork::setStaticF_gameVersion(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "gameVersion", ::Photon::Pun::PhotonNetwork*>(std::forward<::StringW>(value));
}
inline ::StringW Photon::Pun::PhotonNetwork::getStaticF_gameVersion()  {
return ::cordl_internals::getStaticField<::StringW, "gameVersion", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_NetworkingClient(::Photon::Realtime::LoadBalancingClient*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::LoadBalancingClient*, "NetworkingClient", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::LoadBalancingClient*>(value));
}
inline ::Photon::Realtime::LoadBalancingClient* Photon::Pun::PhotonNetwork::getStaticF_NetworkingClient()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::LoadBalancingClient*, "NetworkingClient", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_MAX_VIEW_IDS(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MAX_VIEW_IDS", ::Photon::Pun::PhotonNetwork*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_MAX_VIEW_IDS()  {
return ::cordl_internals::getStaticField<int32_t, "MAX_VIEW_IDS", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_photonServerSettings(::UnityW<::Photon::Pun::ServerSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::Photon::Pun::ServerSettings>, "photonServerSettings", ::Photon::Pun::PhotonNetwork*>(std::forward<::UnityW<::Photon::Pun::ServerSettings>>(value));
}
inline ::UnityW<::Photon::Pun::ServerSettings> Photon::Pun::PhotonNetwork::getStaticF_photonServerSettings()  {
return ::cordl_internals::getStaticField<::UnityW<::Photon::Pun::ServerSettings>, "photonServerSettings", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_ConnectMethod(::Photon::Pun::ConnectMethod  value)  {
::cordl_internals::setStaticField<::Photon::Pun::ConnectMethod, "ConnectMethod", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Pun::ConnectMethod>(value));
}
inline ::Photon::Pun::ConnectMethod Photon::Pun::PhotonNetwork::getStaticF_ConnectMethod()  {
return ::cordl_internals::getStaticField<::Photon::Pun::ConnectMethod, "ConnectMethod", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_LogLevel(::Photon::Pun::PunLogLevel  value)  {
::cordl_internals::setStaticField<::Photon::Pun::PunLogLevel, "LogLevel", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Pun::PunLogLevel>(value));
}
inline ::Photon::Pun::PunLogLevel Photon::Pun::PhotonNetwork::getStaticF_LogLevel()  {
return ::cordl_internals::getStaticField<::Photon::Pun::PunLogLevel, "LogLevel", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_EnableCloseConnection(bool  value)  {
::cordl_internals::setStaticField<bool, "EnableCloseConnection", ::Photon::Pun::PhotonNetwork*>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_EnableCloseConnection()  {
return ::cordl_internals::getStaticField<bool, "EnableCloseConnection", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_PrecisionForVectorSynchronization(float_t  value)  {
::cordl_internals::setStaticField<float_t, "PrecisionForVectorSynchronization", ::Photon::Pun::PhotonNetwork*>(std::forward<float_t>(value));
}
inline float_t Photon::Pun::PhotonNetwork::getStaticF_PrecisionForVectorSynchronization()  {
return ::cordl_internals::getStaticField<float_t, "PrecisionForVectorSynchronization", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_PrecisionForQuaternionSynchronization(float_t  value)  {
::cordl_internals::setStaticField<float_t, "PrecisionForQuaternionSynchronization", ::Photon::Pun::PhotonNetwork*>(std::forward<float_t>(value));
}
inline float_t Photon::Pun::PhotonNetwork::getStaticF_PrecisionForQuaternionSynchronization()  {
return ::cordl_internals::getStaticField<float_t, "PrecisionForQuaternionSynchronization", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_PrecisionForFloatSynchronization(float_t  value)  {
::cordl_internals::setStaticField<float_t, "PrecisionForFloatSynchronization", ::Photon::Pun::PhotonNetwork*>(std::forward<float_t>(value));
}
inline float_t Photon::Pun::PhotonNetwork::getStaticF_PrecisionForFloatSynchronization()  {
return ::cordl_internals::getStaticField<float_t, "PrecisionForFloatSynchronization", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_offlineMode(bool  value)  {
::cordl_internals::setStaticField<bool, "offlineMode", ::Photon::Pun::PhotonNetwork*>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_offlineMode()  {
return ::cordl_internals::getStaticField<bool, "offlineMode", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_offlineModeRoom(::Photon::Realtime::Room*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::Room*, "offlineModeRoom", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::Room*>(value));
}
inline ::Photon::Realtime::Room* Photon::Pun::PhotonNetwork::getStaticF_offlineModeRoom()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::Room*, "offlineModeRoom", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_automaticallySyncScene(bool  value)  {
::cordl_internals::setStaticField<bool, "automaticallySyncScene", ::Photon::Pun::PhotonNetwork*>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_automaticallySyncScene()  {
return ::cordl_internals::getStaticField<bool, "automaticallySyncScene", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_sendFrequency(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "sendFrequency", ::Photon::Pun::PhotonNetwork*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_sendFrequency()  {
return ::cordl_internals::getStaticField<int32_t, "sendFrequency", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_serializationFrequency(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "serializationFrequency", ::Photon::Pun::PhotonNetwork*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_serializationFrequency()  {
return ::cordl_internals::getStaticField<int32_t, "serializationFrequency", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_isMessageQueueRunning(bool  value)  {
::cordl_internals::setStaticField<bool, "isMessageQueueRunning", ::Photon::Pun::PhotonNetwork*>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_isMessageQueueRunning()  {
return ::cordl_internals::getStaticField<bool, "isMessageQueueRunning", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_frametime(double_t  value)  {
::cordl_internals::setStaticField<double_t, "frametime", ::Photon::Pun::PhotonNetwork*>(std::forward<double_t>(value));
}
inline double_t Photon::Pun::PhotonNetwork::getStaticF_frametime()  {
return ::cordl_internals::getStaticField<double_t, "frametime", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_frame(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "frame", ::Photon::Pun::PhotonNetwork*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_frame()  {
return ::cordl_internals::getStaticField<int32_t, "frame", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_StartupStopwatch(::System::Diagnostics::Stopwatch*  value)  {
::cordl_internals::setStaticField<::System::Diagnostics::Stopwatch*, "StartupStopwatch", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Diagnostics::Stopwatch*>(value));
}
inline ::System::Diagnostics::Stopwatch* Photon::Pun::PhotonNetwork::getStaticF_StartupStopwatch()  {
return ::cordl_internals::getStaticField<::System::Diagnostics::Stopwatch*, "StartupStopwatch", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_MinimalTimeScaleToDispatchInFixedUpdate(float_t  value)  {
::cordl_internals::setStaticField<float_t, "MinimalTimeScaleToDispatchInFixedUpdate", ::Photon::Pun::PhotonNetwork*>(std::forward<float_t>(value));
}
inline float_t Photon::Pun::PhotonNetwork::getStaticF_MinimalTimeScaleToDispatchInFixedUpdate()  {
return ::cordl_internals::getStaticField<float_t, "MinimalTimeScaleToDispatchInFixedUpdate", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF__UseAlternativeUdpPorts_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<UseAlternativeUdpPorts>k__BackingField", ::Photon::Pun::PhotonNetwork*>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF__UseAlternativeUdpPorts_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<UseAlternativeUdpPorts>k__BackingField", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_lastUsedViewSubId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lastUsedViewSubId", ::Photon::Pun::PhotonNetwork*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_lastUsedViewSubId()  {
return ::cordl_internals::getStaticField<int32_t, "lastUsedViewSubId", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_lastUsedViewSubIdStatic(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lastUsedViewSubIdStatic", ::Photon::Pun::PhotonNetwork*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_lastUsedViewSubIdStatic()  {
return ::cordl_internals::getStaticField<int32_t, "lastUsedViewSubIdStatic", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_PrefabsWithoutMagicCallback(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "PrefabsWithoutMagicCallback", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Photon::Pun::PhotonNetwork::getStaticF_PrefabsWithoutMagicCallback()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "PrefabsWithoutMagicCallback", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_SendInstantiateEvHashtable(::ExitGames::Client::Photon::Hashtable*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "SendInstantiateEvHashtable", ::Photon::Pun::PhotonNetwork*>(std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Pun::PhotonNetwork::getStaticF_SendInstantiateEvHashtable()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "SendInstantiateEvHashtable", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_SendInstantiateRaiseEventOptions(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "SendInstantiateRaiseEventOptions", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_SendInstantiateRaiseEventOptions()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "SendInstantiateRaiseEventOptions", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_allowedReceivingGroups(::System::Collections::Generic::HashSet_1<uint8_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<uint8_t>*, "allowedReceivingGroups", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Collections::Generic::HashSet_1<uint8_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<uint8_t>* Photon::Pun::PhotonNetwork::getStaticF_allowedReceivingGroups()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<uint8_t>*, "allowedReceivingGroups", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_blockedSendingGroups(::System::Collections::Generic::HashSet_1<uint8_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<uint8_t>*, "blockedSendingGroups", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Collections::Generic::HashSet_1<uint8_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<uint8_t>* Photon::Pun::PhotonNetwork::getStaticF_blockedSendingGroups()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<uint8_t>*, "blockedSendingGroups", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_reusablePVHashset(::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*, "reusablePVHashset", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>* Photon::Pun::PhotonNetwork::getStaticF_reusablePVHashset()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*, "reusablePVHashset", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_photonViewList(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::UnityW<::Photon::Pun::PhotonView>>*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::UnityW<::Photon::Pun::PhotonView>>*, "photonViewList", ::Photon::Pun::PhotonNetwork*>(std::forward<::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::UnityW<::Photon::Pun::PhotonView>>*>(value));
}
inline ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::UnityW<::Photon::Pun::PhotonView>>* Photon::Pun::PhotonNetwork::getStaticF_photonViewList()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::UnityW<::Photon::Pun::PhotonView>>*, "photonViewList", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_OnOwnershipRequestEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*, "OnOwnershipRequestEv", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>(value));
}
inline ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>* Photon::Pun::PhotonNetwork::getStaticF_OnOwnershipRequestEv()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*, "OnOwnershipRequestEv", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_OnOwnershipTransferedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*, "OnOwnershipTransferedEv", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>(value));
}
inline ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>* Photon::Pun::PhotonNetwork::getStaticF_OnOwnershipTransferedEv()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*, "OnOwnershipTransferedEv", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_OnOwnershipTransferFailedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*, "OnOwnershipTransferFailedEv", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>(value));
}
inline ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>* Photon::Pun::PhotonNetwork::getStaticF_OnOwnershipTransferFailedEv()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*, "OnOwnershipTransferFailedEv", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_currentLevelPrefix(uint8_t  value)  {
::cordl_internals::setStaticField<uint8_t, "currentLevelPrefix", ::Photon::Pun::PhotonNetwork*>(std::forward<uint8_t>(value));
}
inline uint8_t Photon::Pun::PhotonNetwork::getStaticF_currentLevelPrefix()  {
return ::cordl_internals::getStaticField<uint8_t, "currentLevelPrefix", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_loadingLevelAndPausedNetwork(bool  value)  {
::cordl_internals::setStaticField<bool, "loadingLevelAndPausedNetwork", ::Photon::Pun::PhotonNetwork*>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_loadingLevelAndPausedNetwork()  {
return ::cordl_internals::getStaticField<bool, "loadingLevelAndPausedNetwork", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_prefabPool(::Photon::Pun::IPunPrefabPool*  value)  {
::cordl_internals::setStaticField<::Photon::Pun::IPunPrefabPool*, "prefabPool", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Pun::IPunPrefabPool*>(value));
}
inline ::Photon::Pun::IPunPrefabPool* Photon::Pun::PhotonNetwork::getStaticF_prefabPool()  {
return ::cordl_internals::getStaticField<::Photon::Pun::IPunPrefabPool*, "prefabPool", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_UseRpcMonoBehaviourCache(bool  value)  {
::cordl_internals::setStaticField<bool, "UseRpcMonoBehaviourCache", ::Photon::Pun::PhotonNetwork*>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_UseRpcMonoBehaviourCache()  {
return ::cordl_internals::getStaticField<bool, "UseRpcMonoBehaviourCache", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_monoRPCMethodsCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>*, "monoRPCMethodsCache", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>* Photon::Pun::PhotonNetwork::getStaticF_monoRPCMethodsCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>*, "monoRPCMethodsCache", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_rpcShortcuts(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "rpcShortcuts", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* Photon::Pun::PhotonNetwork::getStaticF_rpcShortcuts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "rpcShortcuts", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_RunRpcCoroutines(bool  value)  {
::cordl_internals::setStaticField<bool, "RunRpcCoroutines", ::Photon::Pun::PhotonNetwork*>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_RunRpcCoroutines()  {
return ::cordl_internals::getStaticField<bool, "RunRpcCoroutines", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF__AsyncLevelLoadingOperation(::UnityEngine::AsyncOperation*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AsyncOperation*, "_AsyncLevelLoadingOperation", ::Photon::Pun::PhotonNetwork*>(std::forward<::UnityEngine::AsyncOperation*>(value));
}
inline ::UnityEngine::AsyncOperation* Photon::Pun::PhotonNetwork::getStaticF__AsyncLevelLoadingOperation()  {
return ::cordl_internals::getStaticField<::UnityEngine::AsyncOperation*, "_AsyncLevelLoadingOperation", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF__levelLoadingProgress(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_levelLoadingProgress", ::Photon::Pun::PhotonNetwork*>(std::forward<float_t>(value));
}
inline float_t Photon::Pun::PhotonNetwork::getStaticF__levelLoadingProgress()  {
return ::cordl_internals::getStaticField<float_t, "_levelLoadingProgress", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_typePunRPC(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "typePunRPC", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* Photon::Pun::PhotonNetwork::getStaticF_typePunRPC()  {
return ::cordl_internals::getStaticField<::System::Type*, "typePunRPC", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_typePhotonMessageInfo(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "typePhotonMessageInfo", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* Photon::Pun::PhotonNetwork::getStaticF_typePhotonMessageInfo()  {
return ::cordl_internals::getStaticField<::System::Type*, "typePhotonMessageInfo", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteZero(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "keyByteZero", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteZero()  {
return ::cordl_internals::getStaticField<::System::Object*, "keyByteZero", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteOne(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "keyByteOne", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteOne()  {
return ::cordl_internals::getStaticField<::System::Object*, "keyByteOne", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteTwo(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "keyByteTwo", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteTwo()  {
return ::cordl_internals::getStaticField<::System::Object*, "keyByteTwo", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteThree(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "keyByteThree", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteThree()  {
return ::cordl_internals::getStaticField<::System::Object*, "keyByteThree", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteFour(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "keyByteFour", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteFour()  {
return ::cordl_internals::getStaticField<::System::Object*, "keyByteFour", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteFive(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "keyByteFive", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteFive()  {
return ::cordl_internals::getStaticField<::System::Object*, "keyByteFive", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteSix(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "keyByteSix", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteSix()  {
return ::cordl_internals::getStaticField<::System::Object*, "keyByteSix", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteSeven(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "keyByteSeven", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteSeven()  {
return ::cordl_internals::getStaticField<::System::Object*, "keyByteSeven", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteEight(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "keyByteEight", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteEight()  {
return ::cordl_internals::getStaticField<::System::Object*, "keyByteEight", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_emptyObjectArray(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "emptyObjectArray", ::Photon::Pun::PhotonNetwork*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> Photon::Pun::PhotonNetwork::getStaticF_emptyObjectArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "emptyObjectArray", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_emptyTypeArray(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "emptyTypeArray", ::Photon::Pun::PhotonNetwork*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> Photon::Pun::PhotonNetwork::getStaticF_emptyTypeArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "emptyTypeArray", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_foundPVs(::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*, "foundPVs", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>* Photon::Pun::PhotonNetwork::getStaticF_foundPVs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*, "foundPVs", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_removeFilter(::ExitGames::Client::Photon::Hashtable*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "removeFilter", ::Photon::Pun::PhotonNetwork*>(std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Pun::PhotonNetwork::getStaticF_removeFilter()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "removeFilter", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_ServerCleanDestroyEvent(::ExitGames::Client::Photon::Hashtable*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "ServerCleanDestroyEvent", ::Photon::Pun::PhotonNetwork*>(std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Pun::PhotonNetwork::getStaticF_ServerCleanDestroyEvent()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "ServerCleanDestroyEvent", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_ServerCleanOptions(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "ServerCleanOptions", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_ServerCleanOptions()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "ServerCleanOptions", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_SendToAllOptions(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToAllOptions", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_SendToAllOptions()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToAllOptions", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_SendToOthersOptions(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToOthersOptions", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_SendToOthersOptions()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToOthersOptions", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_SendToSingleOptions(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToSingleOptions", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_SendToSingleOptions()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToSingleOptions", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_rpcFilterByViewId(::ExitGames::Client::Photon::Hashtable*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "rpcFilterByViewId", ::Photon::Pun::PhotonNetwork*>(std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Pun::PhotonNetwork::getStaticF_rpcFilterByViewId()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "rpcFilterByViewId", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_OpCleanRpcBufferOptions(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "OpCleanRpcBufferOptions", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_OpCleanRpcBufferOptions()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "OpCleanRpcBufferOptions", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_rpcEvent(::ExitGames::Client::Photon::Hashtable*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "rpcEvent", ::Photon::Pun::PhotonNetwork*>(std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Pun::PhotonNetwork::getStaticF_rpcEvent()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "rpcEvent", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_RpcOptionsToAll(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "RpcOptionsToAll", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_RpcOptionsToAll()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "RpcOptionsToAll", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_ObjectsInOneUpdate(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ObjectsInOneUpdate", ::Photon::Pun::PhotonNetwork*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_ObjectsInOneUpdate()  {
return ::cordl_internals::getStaticField<int32_t, "ObjectsInOneUpdate", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_serializeStreamOut(::Photon::Pun::PhotonStream*  value)  {
::cordl_internals::setStaticField<::Photon::Pun::PhotonStream*, "serializeStreamOut", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Pun::PhotonStream*>(value));
}
inline ::Photon::Pun::PhotonStream* Photon::Pun::PhotonNetwork::getStaticF_serializeStreamOut()  {
return ::cordl_internals::getStaticField<::Photon::Pun::PhotonStream*, "serializeStreamOut", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_serializeStreamIn(::Photon::Pun::PhotonStream*  value)  {
::cordl_internals::setStaticField<::Photon::Pun::PhotonStream*, "serializeStreamIn", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Pun::PhotonStream*>(value));
}
inline ::Photon::Pun::PhotonStream* Photon::Pun::PhotonNetwork::getStaticF_serializeStreamIn()  {
return ::cordl_internals::getStaticField<::Photon::Pun::PhotonStream*, "serializeStreamIn", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_serializeRaiseEvOptions(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "serializeRaiseEvOptions", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_serializeRaiseEvOptions()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "serializeRaiseEvOptions", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_serializeViewBatches(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PhotonNetwork_RaiseEventBatch,::Photon::Pun::PhotonNetwork_SerializeViewBatch*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PhotonNetwork_RaiseEventBatch,::Photon::Pun::PhotonNetwork_SerializeViewBatch*>*, "serializeViewBatches", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PhotonNetwork_RaiseEventBatch,::Photon::Pun::PhotonNetwork_SerializeViewBatch*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PhotonNetwork_RaiseEventBatch,::Photon::Pun::PhotonNetwork_SerializeViewBatch*>* Photon::Pun::PhotonNetwork::getStaticF_serializeViewBatches()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PhotonNetwork_RaiseEventBatch,::Photon::Pun::PhotonNetwork_SerializeViewBatch*>*, "serializeViewBatches", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_cachedData(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*>*>*, "cachedData", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*>*>* Photon::Pun::PhotonNetwork::getStaticF_cachedData()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*>*>*, "cachedData", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_InternalEventError(::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*, "InternalEventError", ::Photon::Pun::PhotonNetwork*>(std::forward<::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*>(value));
}
inline ::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>* Photon::Pun::PhotonNetwork::getStaticF_InternalEventError()  {
return ::cordl_internals::getStaticField<::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*, "InternalEventError", ::Photon::Pun::PhotonNetwork*>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF__cachedRegionHandler(::Photon::Realtime::RegionHandler*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RegionHandler*, "_cachedRegionHandler", ::Photon::Pun::PhotonNetwork*>(std::forward<::Photon::Realtime::RegionHandler*>(value));
}
inline ::Photon::Realtime::RegionHandler* Photon::Pun::PhotonNetwork::getStaticF__cachedRegionHandler()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RegionHandler*, "_cachedRegionHandler", ::Photon::Pun::PhotonNetwork*>();
}
inline ::StringW Photon::Pun::PhotonNetwork::get_GameVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_GameVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_GameVersion(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_GameVersion", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_AppVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_AppVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityW<::Photon::Pun::ServerSettings> Photon::Pun::PhotonNetwork::get_PhotonServerSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PhotonServerSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::ServerSettings>>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_PhotonServerSettings(::Photon::Pun::ServerSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_PhotonServerSettings", {}, {::i2c::type_of<::Photon::Pun::ServerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_ServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_ServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_CloudRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CloudRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_CurrentCluster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CurrentCluster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_BestRegionSummaryInPreferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_BestRegionSummaryInPreferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_BestRegionSummaryInPreferences(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_BestRegionSummaryInPreferences", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Photon::Pun::PhotonNetwork::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_IsConnectedAndReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_IsConnectedAndReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::ClientState Photon::Pun::PhotonNetwork::get_NetworkClientState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_NetworkClientState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::ClientState>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::ServerConnection Photon::Pun::PhotonNetwork::get_Server()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_Server", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::ServerConnection>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::AuthenticationValues* Photon::Pun::PhotonNetwork::get_AuthValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_AuthValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::AuthenticationValues*>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_AuthValues(::Photon::Realtime::AuthenticationValues*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_AuthValues", {}, {::i2c::type_of<::Photon::Realtime::AuthenticationValues*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Photon::Realtime::TypedLobby* Photon::Pun::PhotonNetwork::get_CurrentLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CurrentLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::TypedLobby*>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::Room* Photon::Pun::PhotonNetwork::get_CurrentRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CurrentRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Room*>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::Player* Photon::Pun::PhotonNetwork::get_LocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_LocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_NickName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_NickName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_NickName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_NickName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::Photon::Realtime::Player*> Photon::Pun::PhotonNetwork::get_PlayerList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PlayerList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Photon::Realtime::Player*>>(nullptr, ___internal_method);
}
inline ::ArrayW<::Photon::Realtime::Player*> Photon::Pun::PhotonNetwork::get_PlayerListOthers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PlayerListOthers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Photon::Realtime::Player*>>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_OfflineMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_OfflineMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_OfflineMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_OfflineMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Photon::Pun::PhotonNetwork::get_AutomaticallySyncScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_AutomaticallySyncScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_AutomaticallySyncScene(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_AutomaticallySyncScene", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Photon::Pun::PhotonNetwork::get_EnableLobbyStatistics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_EnableLobbyStatistics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_InLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_InLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_SendRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_SendRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_SendRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_SendRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonNetwork::get_SerializationRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_SerializationRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_SerializationRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_SerializationRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Photon::Pun::PhotonNetwork::get_IsMessageQueueRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_IsMessageQueueRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_IsMessageQueueRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_IsMessageQueueRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline double_t Photon::Pun::PhotonNetwork::get_Time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_Time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline double_t Photon::Pun::PhotonNetwork::get_CurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_ServerTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_ServerTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_KeepAliveInBackground(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_KeepAliveInBackground", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t Photon::Pun::PhotonNetwork::get_KeepAliveInBackground()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_KeepAliveInBackground", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_IsMasterClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_IsMasterClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::Player* Photon::Pun::PhotonNetwork::get_MasterClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_MasterClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_InRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_InRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_CountOfPlayersOnMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CountOfPlayersOnMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_CountOfPlayersInRooms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CountOfPlayersInRooms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_CountOfPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CountOfPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_CountOfRooms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CountOfRooms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_NetworkStatisticsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_NetworkStatisticsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_NetworkStatisticsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_NetworkStatisticsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonNetwork::get_ResentReliableCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_ResentReliableCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_CrcCheckEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_CrcCheckEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_CrcCheckEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_CrcCheckEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonNetwork::get_PacketLossByCrcCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PacketLossByCrcCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_MaxResendsBeforeDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_MaxResendsBeforeDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_MaxResendsBeforeDisconnect(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_MaxResendsBeforeDisconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonNetwork::get_QuickResends()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_QuickResends", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_QuickResends(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_QuickResends", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Photon::Pun::PhotonNetwork::get_UseAlternativeUdpPorts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_UseAlternativeUdpPorts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_UseAlternativeUdpPorts(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_UseAlternativeUdpPorts", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Photon::Realtime::PhotonPortDefinition Photon::Pun::PhotonNetwork::get_ServerPortOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_ServerPortOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::PhotonPortDefinition>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_ServerPortOverrides(::Photon::Realtime::PhotonPortDefinition  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_ServerPortOverrides", {}, {::i2c::type_of<::Photon::Realtime::PhotonPortDefinition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::StaticReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"StaticReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::ConnectUsingSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ConnectUsingSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::ConnectUsingSettings(::Photon::Realtime::AppSettings*  appSettings, bool  startInOfflineMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ConnectUsingSettings", {}, {::i2c::type_of<::Photon::Realtime::AppSettings*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, appSettings, startInOfflineMode);
}
inline bool Photon::Pun::PhotonNetwork::ConnectToMaster(::StringW  masterServerAddress, int32_t  port, ::StringW  appID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ConnectToMaster", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, masterServerAddress, port, appID);
}
inline bool Photon::Pun::PhotonNetwork::ConnectToBestCloudServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ConnectToBestCloudServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::ConnectToRegion(::StringW  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ConnectToRegion", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, region);
}
inline void Photon::Pun::PhotonNetwork::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::Reconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"Reconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::NetworkStatisticsReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"NetworkStatisticsReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonNetwork::NetworkStatisticsToString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"NetworkStatisticsToString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::VerifyCanUseNetwork()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"VerifyCanUseNetwork", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::GetPing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"GetPing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::FetchServerTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"FetchServerTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::SendAllOutgoingCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SendAllOutgoingCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::CloseConnection(::Photon::Realtime::Player*  kickPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"CloseConnection", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, kickPlayer);
}
inline bool Photon::Pun::PhotonNetwork::SetMasterClient(::Photon::Realtime::Player*  masterClientPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetMasterClient", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, masterClientPlayer);
}
inline bool Photon::Pun::PhotonNetwork::JoinRandomRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinRandomRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::JoinRandomRoom(::ExitGames::Client::Photon::Hashtable*  expectedCustomRoomProperties, uint8_t  expectedMaxPlayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinRandomRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expectedCustomRoomProperties, expectedMaxPlayers);
}
inline bool Photon::Pun::PhotonNetwork::JoinRandomRoom(::ExitGames::Client::Photon::Hashtable*  expectedCustomRoomProperties, uint8_t  expectedMaxPlayers, ::Photon::Realtime::MatchmakingMode  matchingType, ::Photon::Realtime::TypedLobby*  typedLobby, ::StringW  sqlLobbyFilter, ::ArrayW<::StringW>  expectedUsers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinRandomRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Realtime::MatchmakingMode>(), ::i2c::type_of<::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expectedCustomRoomProperties, expectedMaxPlayers, matchingType, typedLobby, sqlLobbyFilter, expectedUsers);
}
inline bool Photon::Pun::PhotonNetwork::JoinRandomOrCreateRoom(::ExitGames::Client::Photon::Hashtable*  expectedCustomRoomProperties, uint8_t  expectedMaxPlayers, ::Photon::Realtime::MatchmakingMode  matchingType, ::Photon::Realtime::TypedLobby*  typedLobby, ::StringW  sqlLobbyFilter, ::StringW  roomName, ::Photon::Realtime::RoomOptions*  roomOptions, ::ArrayW<::StringW>  expectedUsers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinRandomOrCreateRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Realtime::MatchmakingMode>(), ::i2c::type_of<::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expectedCustomRoomProperties, expectedMaxPlayers, matchingType, typedLobby, sqlLobbyFilter, roomName, roomOptions, expectedUsers);
}
inline bool Photon::Pun::PhotonNetwork::CreateRoom(::StringW  roomName, ::Photon::Realtime::RoomOptions*  roomOptions, ::Photon::Realtime::TypedLobby*  typedLobby, ::ArrayW<::StringW>  expectedUsers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"CreateRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, roomName, roomOptions, typedLobby, expectedUsers);
}
inline bool Photon::Pun::PhotonNetwork::JoinOrCreateRoom(::StringW  roomName, ::Photon::Realtime::RoomOptions*  roomOptions, ::Photon::Realtime::TypedLobby*  typedLobby, ::ArrayW<::StringW>  expectedUsers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinOrCreateRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, roomName, roomOptions, typedLobby, expectedUsers);
}
inline bool Photon::Pun::PhotonNetwork::JoinRoom(::StringW  roomName, ::ArrayW<::StringW>  expectedUsers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, roomName, expectedUsers);
}
inline bool Photon::Pun::PhotonNetwork::RejoinRoom(::StringW  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RejoinRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, roomName);
}
inline bool Photon::Pun::PhotonNetwork::ReconnectAndRejoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ReconnectAndRejoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::LeaveRoom(bool  becomeInactive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LeaveRoom", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, becomeInactive);
}
inline void Photon::Pun::PhotonNetwork::EnterOfflineRoom(::StringW  roomName, ::Photon::Realtime::RoomOptions*  roomOptions, bool  createdRoom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"EnterOfflineRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, roomName, roomOptions, createdRoom);
}
inline bool Photon::Pun::PhotonNetwork::JoinLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::JoinLobby(::Photon::Realtime::TypedLobby*  typedLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"JoinLobby", {}, {::i2c::type_of<::Photon::Realtime::TypedLobby*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, typedLobby);
}
inline bool Photon::Pun::PhotonNetwork::LeaveLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LeaveLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::FindFriends(::ArrayW<::StringW>  friendsToFind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"FindFriends", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, friendsToFind);
}
inline bool Photon::Pun::PhotonNetwork::GetCustomRoomList(::Photon::Realtime::TypedLobby*  typedLobby, ::StringW  sqlLobbyFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"GetCustomRoomList", {}, {::i2c::type_of<::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, typedLobby, sqlLobbyFilter);
}
inline bool Photon::Pun::PhotonNetwork::SetPlayerCustomProperties(::ExitGames::Client::Photon::Hashtable*  customProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetPlayerCustomProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, customProperties);
}
inline void Photon::Pun::PhotonNetwork::RemovePlayerCustomProperties(::ArrayW<::StringW>  customPropertiesToDelete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemovePlayerCustomProperties", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, customPropertiesToDelete);
}
inline bool Photon::Pun::PhotonNetwork::RaiseEvent(uint8_t  eventCode, ::System::Object*  eventContent, ::Photon::Realtime::RaiseEventOptions*  raiseEventOptions, ::ExitGames::Client::Photon::SendOptions  sendOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RaiseEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Photon::Realtime::RaiseEventOptions*>(), ::i2c::type_of<::ExitGames::Client::Photon::SendOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eventCode, eventContent, raiseEventOptions, sendOptions);
}
inline bool Photon::Pun::PhotonNetwork::RaiseEventInternal(uint8_t  eventCode, ::System::Object*  eventContent, ::Photon::Realtime::RaiseEventOptions*  raiseEventOptions, ::ExitGames::Client::Photon::SendOptions  sendOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RaiseEventInternal", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Photon::Realtime::RaiseEventOptions*>(), ::i2c::type_of<::ExitGames::Client::Photon::SendOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eventCode, eventContent, raiseEventOptions, sendOptions);
}
inline bool Photon::Pun::PhotonNetwork::AllocateViewID(::Photon::Pun::PhotonView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AllocateViewID", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, view);
}
inline bool Photon::Pun::PhotonNetwork::AllocateSceneViewID(::Photon::Pun::PhotonView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AllocateSceneViewID", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, view);
}
inline bool Photon::Pun::PhotonNetwork::AllocateRoomViewID(::Photon::Pun::PhotonView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AllocateRoomViewID", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, view);
}
inline int32_t Photon::Pun::PhotonNetwork::AllocateViewID(bool  roomObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AllocateViewID", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, roomObject);
}
inline int32_t Photon::Pun::PhotonNetwork::AllocateViewID(int32_t  ownerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AllocateViewID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ownerId);
}
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::PhotonNetwork::Instantiate(::StringW  prefabName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, uint8_t  group, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"Instantiate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefabName, position, rotation, group, data);
}
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::PhotonNetwork::InstantiateSceneObject(::StringW  prefabName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, uint8_t  group, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"InstantiateSceneObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefabName, position, rotation, group, data);
}
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::PhotonNetwork::InstantiateRoomObject(::StringW  prefabName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, uint8_t  group, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"InstantiateRoomObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefabName, position, rotation, group, data);
}
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::PhotonNetwork::NetworkInstantiate(::ExitGames::Client::Photon::Hashtable*  networkEvent, ::Photon::Realtime::Player*  creator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"NetworkInstantiate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, networkEvent, creator);
}
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::PhotonNetwork::NetworkInstantiate(::Photon::Pun::InstantiateParameters  parameters, bool  roomObject, bool  instantiateEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"NetworkInstantiate", {}, {::i2c::type_of<::Photon::Pun::InstantiateParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, parameters, roomObject, instantiateEvent);
}
inline bool Photon::Pun::PhotonNetwork::SendInstantiate(::Photon::Pun::InstantiateParameters  parameters, bool  roomObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SendInstantiate", {}, {::i2c::type_of<::Photon::Pun::InstantiateParameters>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, parameters, roomObject);
}
inline void Photon::Pun::PhotonNetwork::Destroy(::Photon::Pun::PhotonView*  targetView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"Destroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetView);
}
inline void Photon::Pun::PhotonNetwork::Destroy(::UnityEngine::GameObject*  targetGo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetGo);
}
inline void Photon::Pun::PhotonNetwork::DestroyPlayerObjects(::Photon::Realtime::Player*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DestroyPlayerObjects", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPlayer);
}
inline void Photon::Pun::PhotonNetwork::DestroyPlayerObjects(int32_t  targetPlayerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DestroyPlayerObjects", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPlayerId);
}
inline void Photon::Pun::PhotonNetwork::DestroyAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DestroyAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::RemoveRPCs(::Photon::Realtime::Player*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveRPCs", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPlayer);
}
inline void Photon::Pun::PhotonNetwork::RemoveRPCs(::Photon::Pun::PhotonView*  targetPhotonView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveRPCs", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPhotonView);
}
inline void Photon::Pun::PhotonNetwork::RPC(::Photon::Pun::PhotonView*  view, ::StringW  methodName, ::Photon::Pun::RpcTarget  target, bool  encrypt, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::RpcTarget>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, view, methodName, target, encrypt, parameters);
}
inline void Photon::Pun::PhotonNetwork::RPC(::Photon::Pun::PhotonView*  view, ::StringW  methodName, ::Photon::Realtime::Player*  targetPlayer, bool  encrypt, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, view, methodName, targetPlayer, encrypt, parameters);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* Photon::Pun::PhotonNetwork::FindGameObjectsWithComponent(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"FindGameObjectsWithComponent", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, type);
}
inline void Photon::Pun::PhotonNetwork::SetInterestGroups(uint8_t  group, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetInterestGroups", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, group, enabled);
}
inline void Photon::Pun::PhotonNetwork::LoadLevel(int32_t  levelNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LoadLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, levelNumber);
}
inline void Photon::Pun::PhotonNetwork::LoadLevel(::StringW  levelName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LoadLevel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, levelName);
}
inline bool Photon::Pun::PhotonNetwork::WebRpc(::StringW  name, ::System::Object*  parameters, bool  sendAuthCookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"WebRpc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, parameters, sendAuthCookie);
}
inline void Photon::Pun::PhotonNetwork::SetupLogging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetupLogging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::LoadOrCreateSettings(bool  reload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LoadOrCreateSettings", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reload);
}
inline ::ArrayW<::UnityW<::Photon::Pun::PhotonView>> Photon::Pun::PhotonNetwork::get_PhotonViews()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PhotonViews", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Photon::Pun::PhotonView>>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::NonAllocDictionary_2_ValueIterator<int32_t,::UnityW<::Photon::Pun::PhotonView>> Photon::Pun::PhotonNetwork::get_PhotonViewCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PhotonViewCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<int32_t,::UnityW<::Photon::Pun::PhotonView>>>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_ViewCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_ViewCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::add_OnOwnershipRequestEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"add_OnOwnershipRequestEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::remove_OnOwnershipRequestEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"remove_OnOwnershipRequestEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::add_OnOwnershipTransferedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"add_OnOwnershipTransferedEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::remove_OnOwnershipTransferedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"remove_OnOwnershipTransferedEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::add_OnOwnershipTransferFailedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"add_OnOwnershipTransferFailedEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::remove_OnOwnershipTransferFailedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"remove_OnOwnershipTransferFailedEv", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::AddCallbackTarget(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AddCallbackTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
inline void Photon::Pun::PhotonNetwork::RemoveCallbackTarget(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveCallbackTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
inline ::StringW Photon::Pun::PhotonNetwork::CallbacksToString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"CallbacksToString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::Photon::Pun::IPunPrefabPool* Photon::Pun::PhotonNetwork::get_PrefabPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_PrefabPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Pun::IPunPrefabPool*>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_PrefabPool(::Photon::Pun::IPunPrefabPool*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"set_PrefabPool", {}, {::i2c::type_of<::Photon::Pun::IPunPrefabPool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t Photon::Pun::PhotonNetwork::get_LevelLoadingProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"get_LevelLoadingProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::LeftRoomCleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LeftRoomCleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::LocalCleanupAnythingInstantiated(bool  destroyInstantiatedGameObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LocalCleanupAnythingInstantiated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destroyInstantiatedGameObjects);
}
inline void Photon::Pun::PhotonNetwork::ResetPhotonViewsOnSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ResetPhotonViewsOnSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::ExecuteRpc(::ExitGames::Client::Photon::Hashtable*  rpcData, ::Photon::Realtime::Player*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ExecuteRpc", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rpcData, sender);
}
inline bool Photon::Pun::PhotonNetwork::CheckTypeMatch(::ArrayW<::System::Reflection::ParameterInfo*>  methodParameters, ::ArrayW<::System::Type*>  callParameterTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"CheckTypeMatch", {}, {::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, methodParameters, callParameterTypes);
}
inline void Photon::Pun::PhotonNetwork::DestroyPlayerObjects(int32_t  playerId, bool  localOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DestroyPlayerObjects", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerId, localOnly);
}
inline void Photon::Pun::PhotonNetwork::DestroyAll(bool  localOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DestroyAll", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, localOnly);
}
inline void Photon::Pun::PhotonNetwork::RemoveInstantiatedGO(::UnityEngine::GameObject*  go, bool  localOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveInstantiatedGO", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, localOnly);
}
inline void Photon::Pun::PhotonNetwork::ServerCleanInstantiateAndDestroy(::Photon::Pun::PhotonView*  photonView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ServerCleanInstantiateAndDestroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, photonView);
}
inline void Photon::Pun::PhotonNetwork::SendDestroyOfPlayer(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SendDestroyOfPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actorNr);
}
inline void Photon::Pun::PhotonNetwork::SendDestroyOfAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SendDestroyOfAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::OpRemoveFromServerInstantiationsOfPlayer(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OpRemoveFromServerInstantiationsOfPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actorNr);
}
inline void Photon::Pun::PhotonNetwork::RequestOwnership(int32_t  viewID, int32_t  fromOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RequestOwnership", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, viewID, fromOwner);
}
inline void Photon::Pun::PhotonNetwork::TransferOwnership(int32_t  viewID, int32_t  playerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"TransferOwnership", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, viewID, playerID);
}
inline void Photon::Pun::PhotonNetwork::OwnershipUpdate(::ArrayW<int32_t>  viewOwnerPairs, int32_t  targetActor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OwnershipUpdate", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, viewOwnerPairs, targetActor);
}
inline bool Photon::Pun::PhotonNetwork::LocalCleanPhotonView(::Photon::Pun::PhotonView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LocalCleanPhotonView", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, view);
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::PhotonNetwork::GetPhotonView(int32_t  viewID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"GetPhotonView", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>>(nullptr, ___internal_method, viewID);
}
inline bool Photon::Pun::PhotonNetwork::ViewIDExists(int32_t  viewID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"ViewIDExists", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, viewID);
}
inline void Photon::Pun::PhotonNetwork::RegisterPhotonView(::Photon::Pun::PhotonView*  netView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RegisterPhotonView", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, netView);
}
inline void Photon::Pun::PhotonNetwork::OpCleanActorRpcBuffer(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OpCleanActorRpcBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actorNumber);
}
inline void Photon::Pun::PhotonNetwork::OpRemoveCompleteCacheOfPlayer(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OpRemoveCompleteCacheOfPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actorNumber);
}
inline void Photon::Pun::PhotonNetwork::OpRemoveCompleteCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OpRemoveCompleteCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::RemoveCacheOfLeftPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveCacheOfLeftPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::CleanRpcBufferIfMine(::Photon::Pun::PhotonView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"CleanRpcBufferIfMine", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, view);
}
inline void Photon::Pun::PhotonNetwork::OpCleanRpcBuffer(::Photon::Pun::PhotonView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OpCleanRpcBuffer", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, view);
}
inline void Photon::Pun::PhotonNetwork::RemoveRPCsInGroup(int32_t  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveRPCsInGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, group);
}
inline bool Photon::Pun::PhotonNetwork::RemoveBufferedRPCs(int32_t  viewId, ::StringW  methodName, ::ArrayW<int32_t>  callersActorNumbers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RemoveBufferedRPCs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, viewId, methodName, callersActorNumbers);
}
inline void Photon::Pun::PhotonNetwork::SetLevelPrefix(uint8_t  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetLevelPrefix", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefix);
}
inline void Photon::Pun::PhotonNetwork::RPC(::Photon::Pun::PhotonView*  view, ::StringW  methodName, ::Photon::Pun::RpcTarget  target, ::Photon::Realtime::Player*  player, bool  encrypt, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::RpcTarget>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, view, methodName, target, player, encrypt, parameters);
}
inline void Photon::Pun::PhotonNetwork::SetInterestGroups(::ArrayW<uint8_t>  disableGroups, ::ArrayW<uint8_t>  enableGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetInterestGroups", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, disableGroups, enableGroups);
}
inline void Photon::Pun::PhotonNetwork::SetSendingEnabled(uint8_t  group, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetSendingEnabled", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, group, enabled);
}
inline void Photon::Pun::PhotonNetwork::SetSendingEnabled(::ArrayW<uint8_t>  disableGroups, ::ArrayW<uint8_t>  enableGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetSendingEnabled", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, disableGroups, enableGroups);
}
inline void Photon::Pun::PhotonNetwork::NewSceneLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"NewSceneLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::RunViewUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"RunViewUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::SendSerializeViewBatch(::Photon::Pun::PhotonNetwork_SerializeViewBatch*  batch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SendSerializeViewBatch", {}, {::i2c::type_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batch);
}
inline ::System::Collections::Generic::List_1<::System::Object*>* Photon::Pun::PhotonNetwork::OnSerializeWrite(::Photon::Pun::PhotonView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnSerializeWrite", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*>(nullptr, ___internal_method, view);
}
inline void Photon::Pun::PhotonNetwork::OnSerializeRead(::ArrayW<::System::Object*>  data, ::Photon::Realtime::Player*  sender, int32_t  networkTime, int16_t  correctPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnSerializeRead", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, sender, networkTime, correctPrefix);
}
inline ::System::Collections::Generic::List_1<::System::Object*>* Photon::Pun::PhotonNetwork::DeltaCompressionWrite(::System::Collections::Generic::List_1<::System::Object*>*  previousContent, ::System::Collections::Generic::List_1<::System::Object*>*  currentContent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DeltaCompressionWrite", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*>(nullptr, ___internal_method, previousContent, currentContent);
}
inline ::ArrayW<::System::Object*> Photon::Pun::PhotonNetwork::DeltaCompressionRead(::ArrayW<::System::Object*>  lastOnSerializeDataReceived, ::ArrayW<::System::Object*>  incomingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"DeltaCompressionRead", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, lastOnSerializeDataReceived, incomingData);
}
inline bool Photon::Pun::PhotonNetwork::AlmostEquals(::System::Collections::Generic::IList_1<::System::Object*>*  lastData, ::System::Collections::Generic::IList_1<::System::Object*>*  currentContent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lastData, currentContent);
}
inline bool Photon::Pun::PhotonNetwork::AlmostEquals(::System::Object*  one, ::System::Object*  two)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, one, two);
}
inline bool Photon::Pun::PhotonNetwork::GetMethod(::UnityEngine::MonoBehaviour*  monob, ::StringW  methodType, ::by_ref<::System::Reflection::MethodInfo*>  mi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"GetMethod", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Reflection::MethodInfo*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, monob, methodType, mi);
}
inline void Photon::Pun::PhotonNetwork::LoadLevelIfSynced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"LoadLevelIfSynced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::SetLevelInPropsIfSynced(::System::Object*  levelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"SetLevelInPropsIfSynced", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, levelId);
}
inline void Photon::Pun::PhotonNetwork::OnEvent(::ExitGames::Client::Photon::EventData*  photonEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, photonEvent);
}
inline void Photon::Pun::PhotonNetwork::OnOperation(::ExitGames::Client::Photon::OperationResponse*  opResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnOperation", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, opResponse);
}
inline void Photon::Pun::PhotonNetwork::OnClientStateChanged(::Photon::Realtime::ClientState  previousState, ::Photon::Realtime::ClientState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnClientStateChanged", {}, {::i2c::type_of<::Photon::Realtime::ClientState>(), ::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, previousState, state);
}
inline void Photon::Pun::PhotonNetwork::OnRegionsPinged(::Photon::Realtime::RegionHandler*  regionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork*>(),
                        {"OnRegionsPinged", {}, {::i2c::type_of<::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, regionHandler);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonNetwork::PhotonNetwork()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonNetwork___c::*)()>(&::Photon::Pun::PhotonNetwork___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa729a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork___c._get_PlayerList_b__47_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::PhotonNetwork___c::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork___c::_get_PlayerList_b__47_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa729a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork___c*>(),
                        {"<get_PlayerList>b__47_0", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork___c._get_PlayerListOthers_b__49_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::PhotonNetwork___c::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork___c::_get_PlayerListOthers_b__49_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa729a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork___c*>(),
                        {"<get_PlayerListOthers>b__49_0", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork___c._get_PlayerListOthers_b__49_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonNetwork___c::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork___c::_get_PlayerListOthers_b__49_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa729a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork___c*>(),
                        {"<get_PlayerListOthers>b__49_1", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork___c._CallbacksToString_b__219_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Pun::PhotonNetwork___c::*)(::Photon::Realtime::IConnectionCallbacks*)>(&::Photon::Pun::PhotonNetwork___c::_CallbacksToString_b__219_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa729aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork___c*>(),
                        {"<CallbacksToString>b__219_0", {}, {::i2c::type_of<::Photon::Realtime::IConnectionCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::PhotonNetwork___c::setStaticF___9(::Photon::Pun::PhotonNetwork___c*  value)  {
::cordl_internals::setStaticField<::Photon::Pun::PhotonNetwork___c*, "<>9", ::Photon::Pun::PhotonNetwork___c*>(std::forward<::Photon::Pun::PhotonNetwork___c*>(value));
}
inline ::Photon::Pun::PhotonNetwork___c* Photon::Pun::PhotonNetwork___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Photon::Pun::PhotonNetwork___c*, "<>9", ::Photon::Pun::PhotonNetwork___c*>();
}
inline void Photon::Pun::PhotonNetwork___c::setStaticF___9__47_0(::System::Func_2<::Photon::Realtime::Player*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::Player*,int32_t>*, "<>9__47_0", ::Photon::Pun::PhotonNetwork___c*>(std::forward<::System::Func_2<::Photon::Realtime::Player*,int32_t>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::Player*,int32_t>* Photon::Pun::PhotonNetwork___c::getStaticF___9__47_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::Player*,int32_t>*, "<>9__47_0", ::Photon::Pun::PhotonNetwork___c*>();
}
inline void Photon::Pun::PhotonNetwork___c::setStaticF___9__49_0(::System::Func_2<::Photon::Realtime::Player*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::Player*,int32_t>*, "<>9__49_0", ::Photon::Pun::PhotonNetwork___c*>(std::forward<::System::Func_2<::Photon::Realtime::Player*,int32_t>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::Player*,int32_t>* Photon::Pun::PhotonNetwork___c::getStaticF___9__49_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::Player*,int32_t>*, "<>9__49_0", ::Photon::Pun::PhotonNetwork___c*>();
}
inline void Photon::Pun::PhotonNetwork___c::setStaticF___9__49_1(::System::Func_2<::Photon::Realtime::Player*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::Player*,bool>*, "<>9__49_1", ::Photon::Pun::PhotonNetwork___c*>(std::forward<::System::Func_2<::Photon::Realtime::Player*,bool>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::Player*,bool>* Photon::Pun::PhotonNetwork___c::getStaticF___9__49_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::Player*,bool>*, "<>9__49_1", ::Photon::Pun::PhotonNetwork___c*>();
}
inline void Photon::Pun::PhotonNetwork___c::setStaticF___9__219_0(::System::Func_2<::Photon::Realtime::IConnectionCallbacks*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::IConnectionCallbacks*,::StringW>*, "<>9__219_0", ::Photon::Pun::PhotonNetwork___c*>(std::forward<::System::Func_2<::Photon::Realtime::IConnectionCallbacks*,::StringW>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::IConnectionCallbacks*,::StringW>* Photon::Pun::PhotonNetwork___c::getStaticF___9__219_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::IConnectionCallbacks*,::StringW>*, "<>9__219_0", ::Photon::Pun::PhotonNetwork___c*>();
}
inline void Photon::Pun::PhotonNetwork___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork___c::_get_PlayerList_b__47_0(::Photon::Realtime::Player*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork___c*>(),
                        {"<get_PlayerList>b__47_0", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t Photon::Pun::PhotonNetwork___c::_get_PlayerListOthers_b__49_0(::Photon::Realtime::Player*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork___c*>(),
                        {"<get_PlayerListOthers>b__49_0", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline bool Photon::Pun::PhotonNetwork___c::_get_PlayerListOthers_b__49_1(::Photon::Realtime::Player*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork___c*>(),
                        {"<get_PlayerListOthers>b__49_1", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::StringW Photon::Pun::PhotonNetwork___c::_CallbacksToString_b__219_0(::Photon::Realtime::IConnectionCallbacks*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork___c*>(),
                        {"<CallbacksToString>b__219_0", {}, {::i2c::type_of<::Photon::Realtime::IConnectionCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, m);
}
inline ::Photon::Pun::PhotonNetwork___c* Photon::Pun::PhotonNetwork___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonNetwork___c*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonNetwork___c::PhotonNetwork___c()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork_SerializeViewBatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonNetwork_SerializeViewBatch::*)(::GlobalNamespace::PhotonNetwork_RaiseEventBatch, int32_t)>(&::Photon::Pun::PhotonNetwork_SerializeViewBatch::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa7273bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork_SerializeViewBatch.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::PhotonNetwork_SerializeViewBatch::*)()>(&::Photon::Pun::PhotonNetwork_SerializeViewBatch::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa7298e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                    {::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork_SerializeViewBatch.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonNetwork_SerializeViewBatch::*)(::Photon::Pun::PhotonNetwork_SerializeViewBatch*)>(&::Photon::Pun::PhotonNetwork_SerializeViewBatch::Equals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa7298fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                        {"Equals", {}, {::i2c::type_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork_SerializeViewBatch.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonNetwork_SerializeViewBatch::*)(::GlobalNamespace::PhotonNetwork_RaiseEventBatch)>(&::Photon::Pun::PhotonNetwork_SerializeViewBatch::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa729934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork_SerializeViewBatch.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonNetwork_SerializeViewBatch::*)(::System::Object*)>(&::Photon::Pun::PhotonNetwork_SerializeViewBatch::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa72995c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                    {::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork_SerializeViewBatch.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonNetwork_SerializeViewBatch::*)()>(&::Photon::Pun::PhotonNetwork_SerializeViewBatch::Clear)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa727858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork_SerializeViewBatch.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonNetwork_SerializeViewBatch::*)(::System::Collections::Generic::List_1<::System::Object*>*)>(&::Photon::Pun::PhotonNetwork_SerializeViewBatch::Add)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa727528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PhotonNetwork_RaiseEventBatch& Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_get_Batch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Batch;
}
constexpr ::GlobalNamespace::PhotonNetwork_RaiseEventBatch const& Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_get_Batch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Batch;
}
constexpr void Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_set_Batch(::GlobalNamespace::PhotonNetwork_RaiseEventBatch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Batch = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_get_ObjectUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectUpdates;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_get_ObjectUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectUpdates;
}
constexpr void Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_set_ObjectUpdates(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObjectUpdates = value;
}
constexpr int32_t& Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_get_defaultSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSize;
}
constexpr int32_t const& Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_get_defaultSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSize;
}
constexpr void Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_set_defaultSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultSize = value;
}
constexpr int32_t& Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr int32_t const& Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void Photon::Pun::PhotonNetwork_SerializeViewBatch::__cordl_internal_set_offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
inline void Photon::Pun::PhotonNetwork_SerializeViewBatch::_ctor(::GlobalNamespace::PhotonNetwork_RaiseEventBatch  batch, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, batch, offset);
}
inline int32_t Photon::Pun::PhotonNetwork_SerializeViewBatch::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork_SerializeViewBatch::Equals(::Photon::Pun::PhotonNetwork_SerializeViewBatch*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                        {"Equals", {}, {::i2c::type_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool Photon::Pun::PhotonNetwork_SerializeViewBatch::Equals(::GlobalNamespace::PhotonNetwork_RaiseEventBatch  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool Photon::Pun::PhotonNetwork_SerializeViewBatch::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void Photon::Pun::PhotonNetwork_SerializeViewBatch::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork_SerializeViewBatch::Add(::System::Collections::Generic::List_1<::System::Object*>*  viewData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewData);
}
inline ::Photon::Pun::PhotonNetwork_SerializeViewBatch* Photon::Pun::PhotonNetwork_SerializeViewBatch::New_ctor(::GlobalNamespace::PhotonNetwork_RaiseEventBatch  batch, int32_t  offset)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>(batch, offset));
}
/// @brief Convert operator to "::System::IEquatable_1<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>"
constexpr  Photon::Pun::PhotonNetwork_SerializeViewBatch::operator ::System::IEquatable_1<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>*() noexcept {
return static_cast<::System::IEquatable_1<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>"
constexpr ::System::IEquatable_1<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>* Photon::Pun::PhotonNetwork_SerializeViewBatch::i___System__IEquatable_1___Photon__Pun__PhotonNetwork_SerializeViewBatch__() noexcept {
return static_cast<::System::IEquatable_1<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>"
constexpr  Photon::Pun::PhotonNetwork_SerializeViewBatch::operator ::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>*() noexcept {
return static_cast<::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>"
constexpr ::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>* Photon::Pun::PhotonNetwork_SerializeViewBatch::i___System__IEquatable_1___GlobalNamespace__PhotonNetwork_RaiseEventBatch_() noexcept {
return static_cast<::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonNetwork_SerializeViewBatch::PhotonNetwork_SerializeViewBatch()   {
}
