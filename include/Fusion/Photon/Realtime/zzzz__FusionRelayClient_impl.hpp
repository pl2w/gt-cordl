#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/FusionRelayClient.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__FusionRelayClient_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ConnectionHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FusionAppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__MatchmakingMode_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__OpJoinRandomRoomParams_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Player_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "Fusion/zzzz__SessionProperty_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.StartFallbackSendAck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::StartFallbackSendAck)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5f4832c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"StartFallbackSendAck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.StopFallbackSendAck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::StopFallbackSendAck)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f48638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"StopFallbackSendAck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::ExitGames::Client::Photon::EventData*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnEventHandler)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f48788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnEventHandler", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.SendEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::FusionRelayClient::*)(int32_t, uint8_t, uint8_t*, int32_t, bool)>(&::Fusion::Photon::Realtime::FusionRelayClient::SendEvent)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f48804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"SendEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.ExtractData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::System::Object*, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::Fusion::Photon::Realtime::FusionRelayClient::ExtractData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f4898c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"ExtractData", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.get_IsReadyAndInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::get_IsReadyAndInRoom)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f48954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"get_IsReadyAndInRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.get_IsEncryptionEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::get_IsEncryptionEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f48ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"get_IsEncryptionEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.add_OnRoomChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::System::Action*)>(&::Fusion::Photon::Realtime::FusionRelayClient::add_OnRoomChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f48af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"add_OnRoomChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.remove_OnRoomChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::System::Action*)>(&::Fusion::Photon::Realtime::FusionRelayClient::remove_OnRoomChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f48b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"remove_OnRoomChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.get_UseDefaultPorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::get_UseDefaultPorts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f48c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"get_UseDefaultPorts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.set_UseDefaultPorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(bool)>(&::Fusion::Photon::Realtime::FusionRelayClient::set_UseDefaultPorts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f48c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"set_UseDefaultPorts", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.add_OnEventCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::System::Action_3<int32_t,int32_t,::System::Object*>*)>(&::Fusion::Photon::Realtime::FusionRelayClient::add_OnEventCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f48c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"add_OnEventCallback", {}, {::i2c::type_of<::System::Action_3<int32_t,int32_t,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.remove_OnEventCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::System::Action_3<int32_t,int32_t,::System::Object*>*)>(&::Fusion::Photon::Realtime::FusionRelayClient::remove_OnEventCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f48cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"remove_OnEventCallback", {}, {::i2c::type_of<::System::Action_3<int32_t,int32_t,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.get_DisconnectTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::get_DisconnectTimeout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f48d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"get_DisconnectTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.set_DisconnectTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(int32_t)>(&::Fusion::Photon::Realtime::FusionRelayClient::set_DisconnectTimeout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f48db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"set_DisconnectTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::Fusion::Photon::Realtime::FusionAppSettings*)>(&::Fusion::Photon::Realtime::FusionRelayClient::_ctor)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5f48dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::FusionAppSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.LoadPhotonEncryptorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::LoadPhotonEncryptorType)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x5f490e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"LoadPhotonEncryptorType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f49818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.ConnectUsingSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::FusionRelayClient::*)(::Fusion::Photon::Realtime::AppSettings*)>(&::Fusion::Photon::Realtime::FusionRelayClient::ConnectUsingSettings)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5f49874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.UpdateRoomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::FusionRelayClient::*)(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*)>(&::Fusion::Photon::Realtime::FusionRelayClient::UpdateRoomProperties)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5f4a0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"UpdateRoomProperties", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.UpdateRoomIsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::FusionRelayClient::*)(bool)>(&::Fusion::Photon::Realtime::FusionRelayClient::UpdateRoomIsVisible)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f4a984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"UpdateRoomIsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.UpdateRoomIsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::FusionRelayClient::*)(bool)>(&::Fusion::Photon::Realtime::FusionRelayClient::UpdateRoomIsOpen)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f4a9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"UpdateRoomIsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::Update)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5f4aa6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnDisconnectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::ExitGames::Client::Photon::DisconnectMessage*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnDisconnectMessage)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5f4ace0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnDisconnectMessage", {}, {::i2c::type_of<::ExitGames::Client::Photon::DisconnectMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.BuildEnterRoomParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::EnterRoomParams* (::Fusion::Photon::Realtime::FusionRelayClient::*)(::Fusion::Photon::Realtime::TypedLobby*, ::StringW, int32_t, ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*, bool, bool, bool, bool)>(&::Fusion::Photon::Realtime::FusionRelayClient::BuildEnterRoomParams)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5f4ae3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"BuildEnterRoomParams", {}, {::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.BuildJoinParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::OpJoinRandomRoomParams* (::Fusion::Photon::Realtime::FusionRelayClient::*)(::Fusion::Photon::Realtime::TypedLobby*, ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*, ::Fusion::Photon::Realtime::MatchmakingMode)>(&::Fusion::Photon::Realtime::FusionRelayClient::BuildJoinParams)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f4b1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"BuildJoinParams", {}, {::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>(), ::i2c::type_of<::Fusion::Photon::Realtime::MatchmakingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.BuildSessionCustomPropertyHolders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*, ::by_ref<::ExitGames::Client::Photon::Hashtable*>, ::by_ref<::ArrayW<::StringW>>)>(&::Fusion::Photon::Realtime::FusionRelayClient::BuildSessionCustomPropertyHolders)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f4b040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"BuildSessionCustomPropertyHolders", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>(), ::i2c::type_of<::by_ref<::ExitGames::Client::Photon::Hashtable*>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::OnCreatedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(int16_t, ::StringW)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnFriendListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(int16_t, ::StringW)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(int16_t, ::StringW)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnJoinedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::OnJoinedLobby)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnLeftLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::OnLeftLobby)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnRoomListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnRoomListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnLobbyStatisticsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnLobbyStatisticsUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4b290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4b2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4b2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::Fusion::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4b2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::OnConnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)()>(&::Fusion::Photon::Realtime::FusionRelayClient::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnRegionListReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnRegionListReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionRelayClient.OnCustomAuthenticationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionRelayClient::*)(::StringW)>(&::Fusion::Photon::Realtime::FusionRelayClient::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Fusion::Photon::Realtime::ConnectionHandler>& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__connectionHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionHandler;
}
constexpr ::UnityW<::Fusion::Photon::Realtime::ConnectionHandler> const& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__connectionHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionHandler;
}
constexpr void Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_set__connectionHandler(::UnityW<::Fusion::Photon::Realtime::ConnectionHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connectionHandler = value;
}
constexpr ::System::Action*& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get_OnRoomChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRoomChanged;
}
constexpr ::System::Action* const& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get_OnRoomChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRoomChanged;
}
constexpr void Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_set_OnRoomChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRoomChanged = value;
}
constexpr bool& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__UseDefaultPorts_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseDefaultPorts_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__UseDefaultPorts_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseDefaultPorts_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_set__UseDefaultPorts_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseDefaultPorts_k__BackingField = value;
}
constexpr ::System::Action_3<int32_t,int32_t,::System::Object*>*& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get_OnEventCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEventCallback;
}
constexpr ::System::Action_3<int32_t,int32_t,::System::Object*>* const& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get_OnEventCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEventCallback;
}
constexpr void Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_set_OnEventCallback(::System::Action_3<int32_t,int32_t,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEventCallback = value;
}
constexpr ::Fusion::Photon::Realtime::RaiseEventOptions*& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__raiseEventOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseEventOptions;
}
constexpr ::Fusion::Photon::Realtime::RaiseEventOptions* const& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__raiseEventOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseEventOptions;
}
constexpr void Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_set__raiseEventOptions(::Fusion::Photon::Realtime::RaiseEventOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raiseEventOptions = value;
}
constexpr ::ExitGames::Client::Photon::SendOptions& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__optionsUnreliable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optionsUnreliable;
}
constexpr ::ExitGames::Client::Photon::SendOptions const& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__optionsUnreliable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optionsUnreliable;
}
constexpr void Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_set__optionsUnreliable(::ExitGames::Client::Photon::SendOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optionsUnreliable = value;
}
constexpr ::ExitGames::Client::Photon::SendOptions& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__optionsReliable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optionsReliable;
}
constexpr ::ExitGames::Client::Photon::SendOptions const& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__optionsReliable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optionsReliable;
}
constexpr void Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_set__optionsReliable(::ExitGames::Client::Photon::SendOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optionsReliable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__loggerGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loggerGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get__loggerGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loggerGO;
}
constexpr void Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_set__loggerGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loggerGO = value;
}
constexpr ::Fusion::Photon::Realtime::FusionAppSettings*& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get_Config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr ::Fusion::Photon::Realtime::FusionAppSettings* const& Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_get_Config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr void Fusion::Photon::Realtime::FusionRelayClient::__cordl_internal_set_Config(::Fusion::Photon::Realtime::FusionAppSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Config = value;
}
inline void Fusion::Photon::Realtime::FusionRelayClient::StartFallbackSendAck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"StartFallbackSendAck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::StopFallbackSendAck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"StopFallbackSendAck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnEventHandler(::ExitGames::Client::Photon::EventData*  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnEventHandler", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline bool Fusion::Photon::Realtime::FusionRelayClient::SendEvent(int32_t  target, uint8_t  eventCode, uint8_t*  buffer, int32_t  bufferLength, bool  reliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"SendEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target, eventCode, buffer, bufferLength, reliable);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::ExtractData(::System::Object*  dataObj, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"ExtractData", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataObj, buffer, bufferLength);
}
inline bool Fusion::Photon::Realtime::FusionRelayClient::get_IsReadyAndInRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"get_IsReadyAndInRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::FusionRelayClient::get_IsEncryptionEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"get_IsEncryptionEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::add_OnRoomChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"add_OnRoomChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::remove_OnRoomChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"remove_OnRoomChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::FusionRelayClient::get_UseDefaultPorts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"get_UseDefaultPorts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::set_UseDefaultPorts(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"set_UseDefaultPorts", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::add_OnEventCallback(::System::Action_3<int32_t,int32_t,::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"add_OnEventCallback", {}, {::i2c::type_of<::System::Action_3<int32_t,int32_t,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::remove_OnEventCallback(::System::Action_3<int32_t,int32_t,::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"remove_OnEventCallback", {}, {::i2c::type_of<::System::Action_3<int32_t,int32_t,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::FusionRelayClient::get_DisconnectTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"get_DisconnectTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::set_DisconnectTimeout(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"set_DisconnectTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::_ctor(::Fusion::Photon::Realtime::FusionAppSettings*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::FusionAppSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline ::System::Type* Fusion::Photon::Realtime::FusionRelayClient::LoadPhotonEncryptorType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"LoadPhotonEncryptorType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::FusionRelayClient::ConnectUsingSettings(::Fusion::Photon::Realtime::AppSettings*  appSettings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, appSettings);
}
inline bool Fusion::Photon::Realtime::FusionRelayClient::UpdateRoomProperties(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"UpdateRoomProperties", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, customProperties);
}
inline bool Fusion::Photon::Realtime::FusionRelayClient::UpdateRoomIsVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"UpdateRoomIsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::FusionRelayClient::UpdateRoomIsOpen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"UpdateRoomIsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnDisconnectMessage(::ExitGames::Client::Photon::DisconnectMessage*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnDisconnectMessage", {}, {::i2c::type_of<::ExitGames::Client::Photon::DisconnectMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::Fusion::Photon::Realtime::EnterRoomParams* Fusion::Photon::Realtime::FusionRelayClient::BuildEnterRoomParams(::Fusion::Photon::Realtime::TypedLobby*  typedLobby, ::StringW  roomName, int32_t  maxPlayers, ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties, bool  isOpen, bool  isVisible, bool  useDefaultEmptyRoomTtl, bool  extendedTtl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"BuildEnterRoomParams", {}, {::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::EnterRoomParams*>(this, ___internal_method, typedLobby, roomName, maxPlayers, customProperties, isOpen, isVisible, useDefaultEmptyRoomTtl, extendedTtl);
}
inline ::Fusion::Photon::Realtime::OpJoinRandomRoomParams* Fusion::Photon::Realtime::FusionRelayClient::BuildJoinParams(::Fusion::Photon::Realtime::TypedLobby*  typedLobby, ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties, ::Fusion::Photon::Realtime::MatchmakingMode  matchmakingMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"BuildJoinParams", {}, {::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>(), ::i2c::type_of<::Fusion::Photon::Realtime::MatchmakingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>(this, ___internal_method, typedLobby, customProperties, matchmakingMode);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::BuildSessionCustomPropertyHolders(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties, ::by_ref<::ExitGames::Client::Photon::Hashtable*>  sessionCustomProperties, ::by_ref<::ArrayW<::StringW>>  publicSessionProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"BuildSessionCustomPropertyHolders", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>(), ::i2c::type_of<::by_ref<::ExitGames::Client::Photon::Hashtable*>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, customProperties, sessionCustomProperties, publicSessionProperties);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnCreatedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnFriendListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*  friendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendList);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnJoinedLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnLeftLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomList);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyStatistics);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnMasterClientSwitched(::Fusion::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnPlayerEnteredRoom(::Fusion::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnPlayerLeftRoom(::Fusion::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnPlayerPropertiesUpdate(::Fusion::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnConnectedToMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler*  regionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandler);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Fusion::Photon::Realtime::FusionRelayClient::OnCustomAuthenticationFailed(::StringW  debugMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionRelayClient*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMessage);
}
inline ::Fusion::Photon::Realtime::FusionRelayClient* Fusion::Photon::Realtime::FusionRelayClient::New_ctor(::Fusion::Photon::Realtime::FusionAppSettings*  config)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::FusionRelayClient*>(config));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IInRoomCallbacks"
constexpr  Fusion::Photon::Realtime::FusionRelayClient::operator ::Fusion::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IInRoomCallbacks"
constexpr ::Fusion::Photon::Realtime::IInRoomCallbacks* Fusion::Photon::Realtime::FusionRelayClient::i___Fusion__Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr  Fusion::Photon::Realtime::FusionRelayClient::operator ::Fusion::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Fusion::Photon::Realtime::IMatchmakingCallbacks* Fusion::Photon::Realtime::FusionRelayClient::i___Fusion__Photon__Realtime__IMatchmakingCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr  Fusion::Photon::Realtime::FusionRelayClient::operator ::Fusion::Photon::Realtime::ILobbyCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr ::Fusion::Photon::Realtime::ILobbyCallbacks* Fusion::Photon::Realtime::FusionRelayClient::i___Fusion__Photon__Realtime__ILobbyCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr  Fusion::Photon::Realtime::FusionRelayClient::operator ::Fusion::Photon::Realtime::IConnectionCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr ::Fusion::Photon::Realtime::IConnectionCallbacks* Fusion::Photon::Realtime::FusionRelayClient::i___Fusion__Photon__Realtime__IConnectionCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::FusionRelayClient::FusionRelayClient()   {
}
